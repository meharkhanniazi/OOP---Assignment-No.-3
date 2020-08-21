#include<iostream>
#include"Textbook.h"
#include"Author.h"
using namespace std;
    Textbook::Textbook()
    {

    }

    Textbook::Textbook(int a,string b,int c,Author d,int e,int f,int g)
    {
        this->isbn = a;
        this->title = b;
        this->noOfPages = c;
        this->authorName = d.name;
        this->editionNum = e;
        this->editionYear = f;
        this->numOfChapters = g;
    }

    void Textbook::setNumOfChapters(int)
    {

    }
    int Textbook::getNumOfChapters()
    {

    }


    void Textbook::updateEdition(int a,int b,int c,int d)
    {
        this->isbn = a;
        this->noOfPages = b;
        this->editionYear = c;
        this->numOfChapters = d;
        this->editionNum++;
    }

    void Textbook::updateChapters(int)
    {

    }

    void Textbook::printData()
    {
        cout << "\n\n\t*********    Textbook's Data\t*********";
        cout << "\n\tISBN:\t\t\t" << isbn;
        cout << "\n\tTitle:\t\t\t" << title;
        cout << "\n\tPages:\t\t\t" << noOfPages;
        cout << "\n\tAuthor:\t\t\t" << authorName;
        cout << "\n\tEdition:\t\t" << editionNum;
        cout << "\n\tEdition Year:\t\t" << editionYear;
        cout << "\n\tChapters:\t\t" << numOfChapters;
        cout << "\n\n\t-----------------------------------------";
    }



