#include "Library.h"

Library::Library()
{
	m_name = "None";
	m_id = 0;
}

Library::Library(string name, int id, vector<Book*> books)
{
	m_name = name;
	m_id = id;
	m_books = books;
}


Library::Library(const Library& other)
{
	this->m_name = other.m_name;
	this->m_id = other.m_id;
}

Library::~Library()
{
	m_books.clear();
}

void Library::SetName(string name)
{
	m_name = name;
}

void Library::SetId(int id)
{
	m_id = id;
}

void Library::SetBooks(vector<Book*> books)
{
	m_books = books;
}

string Library::GetName()
{
	return m_name;
}

int Library::GetId()
{
	return m_id;
}

vector<Book*> Library::GetBooks()
{
	return m_books;
}

void Library::Print()
{
	cout << "Library name: " << m_name << endl;
	cout << "Library id: " << m_id << endl;
}

void Library::PrintBooks()
{
	for (int i = 0; i < m_books.size(); i++)
	{
		cout << m_books.at(i)->GetTitle() << endl;
	}
}
