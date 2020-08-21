#ifndef Included_Book_H
#define Included_Book_H
#include<iostream>
using namespace std;
class Book
{
public:
    int isbn;
    string title;
    int noOfPages;
    string authorName;
    int editionNum;
    int editionYear;

public:
    Book();

    void setIsbn(int);
    int getIsbn();

    void setNoOfPages(int);
    int getNoOfPages();

    void setAuthorName(string);
    string getAuthorName();

    void setEditionNum(int);
    int getEditionNum();

    void setEditionYear(int);
    int getEditionYear();
};
#endif // Included_Book_H
