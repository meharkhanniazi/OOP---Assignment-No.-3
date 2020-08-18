#ifndef Included_AUTHOR_H
#define Included_AUTHOR_H
#include"Book.h"
#include"Textbook.h"
#include"Novel.h"
using namespace std;
class Novel;
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

    void publishTextBook(int,string,int,int,int);

    void printData();
};

#endif // Included_AUTHOR_H
