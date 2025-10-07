#include <iostream>
using namespace std;

int main()
{
    // 🟢 1. Pointer basics
    int x = 10;              // متغير عادي باسم x
    int* ptr = &x;           // مؤشر يخزن عنوان x
    cout << "x = " << x << endl;                    // قيمة x
    cout << "&x (address) = " << &x << endl;        // عنوان x
    cout << "ptr (holds address) = " << ptr << endl; // المؤشر يحمل نفس العنوان
    cout << "*ptr (dereference) = " << *ptr << endl; // الوصول إلى القيمة عبر المؤشر
    // 🔹 Arabic: *ptr تعني "أعطني القيمة المخزّنة في العنوان اللي المؤشر يشير إليه"
    // 🔹 English: *ptr means "give me the value stored at the address ptr points to"

    cout << "\n---------------------------------\n";

    // 🟢 2. Changing value through a pointer
    *ptr = 20; // تغيير قيمة x عن طريق المؤشر
    cout << "New x = " << x << endl;
    // 🔹 Arabic: تم تغيير x مباشرة لأن المؤشر يشير لنفس المكان في الذاكرة
    // 🔹 English: x changed because ptr points to the same memory location

    cout << "\n---------------------------------\n";

    // 🟢 3. Pointer to another variable
    int y = 50;
    ptr = &y; // الآن المؤشر يشير إلى y بدل x
    cout << "ptr now points to y = " << *ptr << endl;
    // 🔹 Arabic: المؤشر تغيّر ليشير إلى متغير آخر
    // 🔹 English: pointer now points to a different variable

    cout << "\n---------------------------------\n";

    // 🟢 4. Null pointer
    int* pnull = nullptr; // مؤشر لا يشير إلى أي مكان
    cout << "Null pointer value = " << pnull << endl;
    // 🔹 Arabic: مؤشر فارغ، استخدامه بدون فحص يؤدي إلى خطأ
    // 🔹 English: Null pointer, dereferencing it causes runtime error

    cout << "\n---------------------------------\n";

    // 🟢 5. Pointer to pointer
    int z = 99;
    int* p1 = &z;  // مؤشر إلى z
    int** p2 = &p1; // مؤشر إلى مؤشر
    cout << "z = " << z << endl;
    cout << "*p1 = " << *p1 << endl;
    cout << "**p2 = " << **p2 << endl;
    // 🔹 Arabic: p2 يشير إلى p1، وp1 يشير إلى z، لذلك **p2 = z
    // 🔹 English: p2 points to p1, and p1 points to z, so **p2 = z

    cout << "\n---------------------------------\n";

    // 🟢 6. Pointer arithmetic
    int arr[3] = { 10, 20, 30 };
    int* p = arr; // المؤشر يشير لأول عنصر
    cout << "*p = " << *p << endl;     // 10
    cout << "*(p+1) = " << *(p + 1) << endl; // 20
    cout << "*(p+2) = " << *(p + 2) << endl; // 30
    // 🔹 Arabic: زيادة المؤشر بمقدار 1 تعني الانتقال للعنصر التالي في الذاكرة
    // 🔹 English: Increasing pointer by 1 moves to the next element in memory

    cout << "\n---------------------------------\n";

    // 🟢 7. Pointer with dynamic memory (new/delete)
    int* pdyn = new int; // حجز متغير على الهيب
    *pdyn = 500;
    cout << "Dynamic value = " << *pdyn << endl;
    delete pdyn; // تحرير الذاكرة
    pdyn = nullptr; // تأمين المؤشر بعد الحذف
    // 🔹 Arabic: new تحجز مكان في الذاكرة، delete تحرره
    // 🔹 English: new allocates memory, delete frees it

    cout << "\n---------------------------------\n";

    // 🟢 8. Pointer with array (dynamic)
    int n = 3;
    int* parr = new int[n]; // مصفوفة ديناميكية
    parr[0] = 100;
    parr[1] = 200;
    parr[2] = 300;
    cout << "Dynamic array values: ";
    for (int i = 0; i < n; i++)
        cout << parr[i] << " ";
    cout << endl;
    delete[] parr; // حذف مصفوفة ديناميكية
    // 🔹 Arabic: delete[] يستخدم لتحرير مصفوفة وليس متغير واحد
    // 🔹 English: delete[] is used for arrays, not single variables

    cout << "\n---------------------------------\n";

    // 🟢 9. Constant pointer and pointer to constant
    const int c = 10;
    const int* ptr_to_const = &c; // يمكن تغيير العنوان لكن لا يمكن تغيير القيمة
    int d = 99;
    int* const const_ptr = &d;    // يمكن تغيير القيمة لكن لا يمكن تغيير العنوان
    *const_ptr = 500;             // ✅ مسموح
    cout << "ptr_to_const -> " << *ptr_to_const << endl;
    cout << "const_ptr -> " << *const_ptr << endl;
    // 🔹 Arabic: الفرق بينهما هو من الثابت؟ القيمة أم العنوان؟
    // 🔹 English: One prevents changing value, the other prevents changing address

    return 0;
}
