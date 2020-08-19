#ifndef Author_H
#define Author_H
#include<iostream>
#include"Book.h"
#include"Novel.h"
#include"Textbook.h"
using namespace std;
class Novel;
class Textbook;
class Author
{
public:
    string name;
    int numOfBooksPub = 0;

public:
    Author(string);

    void setName(string);
    string getName();

    void setNumOfBooksPub(int);
    int getNumOfBooksPub();

    string publish();

    Novel publishNovel(int,string,int,int,bool);

    Textbook publishTextBook(int,string,int,int,int);

    void printData();
};

#endif // Included_AUTHOR_H
