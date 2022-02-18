#include "Book.h"

Book::Book()
{
	m_title = "None";
	m_author = "None";
	m_genre = "None";
	m_year = 0;
	m_pages = 0;
	m_cover = "None";
	m_publishinghouse = "None";
}

Book::Book(string title, string author, string genre, int year, int pages, string cover, string publishinghouse)
{
	m_title = title;
	m_author = author;
	m_genre = genre;
	m_year = year;
	m_pages = pages;
	m_cover = cover;
	m_publishinghouse = publishinghouse;
}

Book::Book(const Book& other)
{
	this->m_title = other.m_title;
	this->m_author = other.m_author;
	this->m_genre = other.m_genre;
	this->m_year = other.m_year;
	this->m_pages = other.m_pages;
	this->m_cover = other.m_cover;
	this->m_publishinghouse = other.m_publishinghouse;
}

Book::~Book()
{
}

void Book::SetTitle(string title)
{
	m_title = title;
}

void Book::SetAuthor(string author)
{
	m_author = author;
}

void Book::SetGenre(string genre)
{
	m_genre = genre;
}

void Book::SetYear(int year)
{
	m_year = year;
}

void Book::SetPages(int pages)
{
	m_pages = pages;
}

void Book::SetCover(string cover)
{
	m_cover = cover;
}

void Book::SetPublishinghouse(string publishinghouse)
{
	m_publishinghouse = publishinghouse;
}

string Book::GetTitle()
{
	return m_title;
}

string Book::GetAuthor()
{
	return m_author;
}

string Book::GetGenre()
{
	return m_genre;
}

int Book::GetYear()
{
	return m_year;
}

int Book::GetPages()
{
	return m_pages;
}

string Book::GetCover()
{
	return m_cover;
}

string Book::GetPublishinghouse()
{
	return m_publishinghouse;
}

void Book::Print()
{
	cout << "Title: " << m_title << endl;
	cout << "Author: " << m_author << endl;
	cout << "Genre: " << m_genre << endl;
	cout << "Year: " << m_year << endl;
	cout << "Pages: " << m_pages << endl;
	cout << "Cover: " << m_cover << endl;
	cout << "Publishinghouse: " << m_publishinghouse << endl;
}
