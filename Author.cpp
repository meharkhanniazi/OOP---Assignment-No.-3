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
        Novel obj;
        obj.isbn = a;
        obj.title = b;
        obj.noOfPages = c;
        obj.authorName = name;
        obj.editionNum = 1;
        obj.editionYear = d;
        obj.sequelsAvaiting = e;
        return obj;
    }

    void Author::publishTextBook(int a,string b,int c,int d,int e)
    {

    }

    void Author::printData()
    {
        cout << "\n\n\t******\tAuthor's Data\t******";
        cout << "\n\tName:\t\t" << name;
        cout << "\n\tBooks Published\t\t" << numOfBooksPub;
        cout << "\n\n\t-----------------------------------";
    }



