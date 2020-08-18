#include<iostream>
#include"Novel.h"
#include"Author.h"
using namespace std;

    Novel::Novel(int a,string b,int c,Author jk,int e,int f,bool g)
    {
        this->isbn = a;
        this->title = b;
        this->noOfPages = c;
        this->authorName = jk.name;
        this->editionNum = e;
        this->editionYear = f;
        this->sequelsAvaiting = g;
    }

    void Novel::setSequelsAvaiting(bool a)
    {
        sequelsAvaiting = a;
    }
    string Novel::getSequelsAvaiting()
    {
    string temp;
    if(sequelsAvaiting == true)
    {
        temp = "Yes";
    }
    else if(sequelsAvaiting == false)
    {
        temp = "No";
    }
    return temp;
    }

    void Novel::updateEdition(int a,int b,int c,bool d)
    {
        this->isbn = a;
        this->noOfPages = b;
        this->editionYear = c;
        this->sequelsAvaiting = d;
        this->editionNum++;
    }


    void Novel::printData()
    {
        cout << "\n\n\t*********\tNovel's Data\t*********";
        cout << "\n\tISBN:\t\t\t" << isbn;
        cout << "\n\tTitle:\t\t\t" << title;
        cout << "\n\tPages:\t\t\t" << noOfPages;
        cout << "\n\tAuthor:\t\t\t" << authorName;
        cout << "\n\tEdition:\t\t" << editionNum;
        cout << "\n\tEdition Year:\t\t" << editionYear;
        cout << "\n\tSequels Awaited:\t" << this->getSequelsAvaiting();
        cout << "\n\n\t-----------------------------------------";
    }

