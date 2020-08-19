#ifndef INCLUDED_TEXTBOOK_H
#define INCLUDED_TEXTBOOK_H
#include<iostream>
#include"Book.h"
#include"Author.h"
class Author;
using namespace std;
class Textbook:public Book
{
public:
    int numOfChapters;

public:
    Textbook();
    Textbook(int,string,int,Author a,int,int,int);

    void setNumOfChapters(int);
    int getNumOfChapters();

    void updateEdition(int,int,int,int);

    void updateChapters(int);

    void printData();
};

#endif
