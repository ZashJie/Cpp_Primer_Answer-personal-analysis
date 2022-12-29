#include<iostream>
using namespace std;

class Book
{
private:
	string bookname;
	string authors;
	int pages;
	string publishing_house;
	double price;
public:
	Book(const string bk, const  string aut, int pag, const  string pub, double pri);
	string getBookname();
	string getAuthors();
	int getPages();
	string getPublishing_house();
	double getPrice();

	void  setBookname(string bk);
	void  setAuthors(string aut);
	void  setPages(int pag);
	void  setPublishing_house(string pub);
	void  setPrice(double pri);

	void print();
};

Book::Book(const string bk, const string aut, int pag, const string pub, double pri)
{
	
	bookname = bk;
	authors = aut;
	pages = pag;
	publishing_house = pub;
	price = pri;
}

string Book::getBookname()
{
	return bookname;
}
string Book::getAuthors()
{
	return authors;
}
int Book::getPages()
{
	return pages;
}
string Book::getPublishing_house()
{
	return publishing_house;
}
double Book::getPrice()
{
	return price;
}


void  Book::setBookname(string bk)
{
	bookname = bk;
}
void  Book::setAuthors(string aut)
{
	authors = aut;
}
void  Book::setPages(int pag)
{
	pages = pag;
}
void  Book::setPublishing_house(string pub)
{
	publishing_house = pub;
}
void  Book::setPrice(double pri)
{
	price = pri;
}

void Book::print()
{
	cout << "书名：" << bookname << "\n作者：" << authors
		<< "编著\n页数：" << pages << "页\n出版社：" << publishing_house <<
		"\n价格：" << getPrice() << "元\n" << endl;
}


int main()
{
	string name = "C++程序设计";
	Book b1(name, "谭浩强", 485, "清华大学出版社", 36.00);
	cout << b1.getBookname() << endl << endl;
	b1.print();

	Book b2("吹牛大王历险记", "拉斯伯等", 149, "天津人民出版社", 12.80);
	b2.print();
}