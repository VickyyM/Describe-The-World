#pragma once
#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
	string m_title;
	string m_author;
	string m_genre;
	int m_year;
	int m_pages;
	string m_cover;
	string m_publishinghouse;

public:
	Book();
	Book(string title, string author, string genre, int year, int pages, string cover, string publishinghouse);
	Book(const Book& other);
	~Book();

	void SetTitle(string title);
	void SetAuthor(string author);
	void SetGenre(string genre);
	void SetYear(int year);
	void SetPages(int pages);
	void SetCover(string cover);
	void SetPublishinghouse(string publishinghouse);

	string GetTitle();
	string GetAuthor();
	string GetGenre();
	int GetYear();
	int GetPages();
	string GetCover();
	string GetPublishinghouse();

	void Print();
};