#include <iostream>
#include <string>

using namespace std;

class Book
{
private:
	int current_page_;
	void set_percent();
	const Book& ThickerBook(const Book& comp_book);
public:
	string title_;
	int total_page_;
	double percent_;
	void Move(int page);
	void Open();
	void Read();
	Book(const string& title, int total_page);
	~Book();
};


int main(void) {
	Book web_book("HTML", 350);
	Book html_book("HTML Reference", 200);
	cout << web_book.percent_;
	
	return 0;
}


Book::Book(const string& title, int total_page)
{
	title_ = title;
	total_page_ = total_page;
	current_page_ = 0;
	set_percent();
}

void Book::set_percent() { percent_ = (double)current_page_ / total_page_ * 100; }


Book::~Book()
{
	cout << "¼Ò¸êÀÚ È£Ãâ" << endl;
}

const Book& Book::ThickerBook(const Book& comp_book)

{

	if (comp_book.total_page_ > this->total_page_)

	{

		return comp_book;

	}

	else

	{

		return *this;

	}

}