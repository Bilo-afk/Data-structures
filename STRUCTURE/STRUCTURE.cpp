#include <iostream>

using namespace std;			

struct book
{
	string name; 
	string author;
	int pages;
	double price;
};

int main()								
{
	book book1;
	book1.name = "C++ Programming";
	book1.author = "Bjarne Stroustrup";
	book1.pages = 1376;
	book1.price = 59.99;

	cout << "Book Name: " << book1.name << endl;
	cout << "Author: " << book1.author << endl;
	cout << "Pages: " << book1.pages << endl;
	cout << "Price: $" << book1.price << endl;
	return 0;	
}