#include<iostream>
#include<conio.h>
#include<string>
#include"Book.h"


using namespace std;

    Book::Book()
    {

    }

    void Book::setIsbn(int a)
    {
        isbn = a;
    }
    int Book::getIsbn()
    {
        return isbn;
    }

    void Book::setNoOfPages(int b)
    {
        noOfPages = b;
    }
    int Book::getNoOfPages()
    {
        return noOfPages;
    }

    void Book::setAuthorName(string c)
    {
        authorName = c;
    }
    string Book::getAuthorName()
    {
        return authorName;
    }

    void Book::setEditionNum(int d)
    {
        editionNum = d;
    }
    int Book::getEditionNum()
    {
        return editionNum;
    }

    void Book::setEditionYear(int e)
    {
        editionYear = e;
    }
    int Book::getEditionYear()
    {
        return editionYear;
    }

  //  virtual void updateEdition() = 0;




