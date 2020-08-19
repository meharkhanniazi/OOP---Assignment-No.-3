#include"Author.h"

using namespace std;


    Author::Author(string n)
    {
        name = n;
        numOfBooksPub = 0;
    }

    void Author::setName(string sn)
    {
        name = sn;
    }
    string Author::getName()
    {
        return name;
    }

    void Author::setNumOfBooksPub(int snob)
    {
        numOfBooksPub = snob;
    }

    int Author::getNumOfBooksPub()
    {
        return numOfBooksPub;
    }

    string Author::publish()
    {
        numOfBooksPub++;
        return name;
    }

    Novel Author::publishNovel(int a,string b,int c,int d,bool e)
    {
        Novel obj1;
        obj1.isbn = a;
        obj1.title = b;
        obj1.noOfPages = c;
        obj1.authorName = name;
        obj1.editionNum = 1;
        obj1.editionYear = d;
        obj1.sequelsAvaiting = e;
        this->numOfBooksPub++;
        return obj1;
    }


    Textbook Author::publishTextBook(int a,string b,int c,int d,int e)
    {
        Textbook obj2;
        obj2.isbn = a;
        obj2.title = b;
        obj2.noOfPages = c;
        obj2.authorName = name;
        obj2.editionNum = 1;
        obj2.editionYear = d;
        obj2.numOfChapters = e;
        this->numOfBooksPub++;
        return obj2;
    }

    void Author::printData()
    {
        cout << "\n\n\t******\tAuthor's Data\t******";
        cout << "\n\tName:\t\t" << name;
        cout << "\n\tBooks Published\t\t" << numOfBooksPub;
        cout << "\n\n\t-----------------------------------";
    }



