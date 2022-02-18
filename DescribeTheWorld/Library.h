#pragma once
#include "Book.h"
#include <vector>

class Library
{
private:
	string m_name;
	int m_id;
	vector <Book*> m_books;
public:
	Library();
	Library(string name, int id, vector<Book*> books);
	Library(const Library& other);
	~Library();

	void SetName(string name);
	void SetId(int id);
	void SetBooks(vector <Book*> books);

	string GetName();
	int GetId();
	vector <Book*> GetBooks();

	void Print();
	void PrintBooks();
};