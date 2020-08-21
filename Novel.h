#ifndef INCLUDED_NOVEL_H
#define INCLUDED_NOVEL_H
#include"Book.h"
#include"Author.h"
class Author;
using namespace std;

class Novel : public Book
{
public:
    bool sequelsAvaiting;


public:
    Novel();
    Novel(int,string,int,Author a,int,int,bool);

    void setSequelsAvaiting(bool);
    string getSequelsAvaiting();

    void updateEdition(int,int,int,bool);

    void printData();
};


#endif

