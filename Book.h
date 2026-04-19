#include <iostream>
using namespace std;

class Book
{
private:
    string title;
    string author;
    int ISBN;
    int publication_year;

    void Set_title(string title_set)
    {
        title = title_set;
    };

    void Set_author(string author_set)
    {
        author = author_set;
    };

    void Set_ISPN(int ISPN_set)
    {
        ISBN = ISPN_set;
    };

    void Set_publicatin_year(int publication_year_set)
    {
        publication_year = publication_year_set;
    };

protected:
    virtual const char* setgenre() = 0;

public:
    
    void Set_Book(string title,string author,int ISBN,int publication_year)
    {
        Set_title(title);
        Set_author(author);
        Set_ISPN(ISBN);
        Set_publicatin_year(publication_year);
    };

    string Get_title()
    {
        return title;
    };

    string Get_author()
    {
        return author;
    };

    int Get_ISPN()
    {
        return ISBN;
    };

    int Get_publication_year()
    {
        return publication_year;
    };

    void display_book_ditails()
    {
        cout << "the book type:" << setgenre() << endl;
        cout << "the book title:" << Get_title() << endl;
        cout << "the book author:" << Get_author() << endl;
        cout << "the book ISPN:" << Get_ISPN() << endl;
        cout << "the book publicatin year:" << Get_publication_year() << endl;
        cout << endl;
    };

    Book* Next;
};

class Fiction_Book : public Book
{
protected:
    virtual const char* setgenre()
    {
        return "Fiction";
    };
};

class Non_Fiction_Book : public Book
{
protected:
    virtual const char* setgenre()
    {
        return "Non_Fiction";
    };
};