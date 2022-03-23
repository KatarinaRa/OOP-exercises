#pragma once
#include "Ebook.hpp"
#include "HardCopyBook.hpp"
#include <vector>

using namespace std;

class Library
{
public:
	vector<Book*> Books;

	Library();
	vector<Book*> getBooks();
	void setBooks(vector<Book*> b);
	vector<string> getBookByAuthor(string a);
	int getSize(string a);
	vector<Book*> getBooksByTitle(string t);
	~Library();
};
