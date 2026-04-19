#include <iostream>
using namespace std;
#include "Book.h"

class Library
{
private:
    Book* head;
    void start_Library()
    {
        head = NULL;
    };

    bool is_empty()
    {
        return head == NULL;
    };

public:

    void insert_in_first(string book_type,string title,string author,int ISBN,int publication_year)
    {
        if (book_type == "Fiction")
        {
            Book* new_book = new Fiction_Book;
            new_book->Set_Book(title,author,ISBN,publication_year);
            new_book->Next = NULL;
            head = new_book;
        }else if (book_type == "Non_Fiction")
        {
            Book* new_book = new Non_Fiction_Book;
            new_book->Set_Book(title,author,ISBN,publication_year);
            new_book->Next = NULL;
            head = new_book;
        }
            
    };

    void append(string book_type,string title,string author,int ISBN,int publication_year)
    {
        Book* temp = head;
        if (book_type == "Fiction")
        {
            while (temp->Next != NULL)
            {
                temp = temp->Next;
            }
            Book* new_book = new Non_Fiction_Book;
            new_book->Set_Book(title,author,ISBN,publication_year);
            temp->Next = new_book;
            new_book->Next = NULL;
        }else if (book_type == "Non_Fiction")
        {
            while (temp->Next != NULL)
            {
                temp = temp->Next;
            }
            Book* new_book = new Fiction_Book;
            new_book->Set_Book(title,author,ISBN,publication_year);
            temp->Next = new_book;
            new_book->Next = NULL;
        }
    };

    void display_books()
    {
        Book* temp = head;
        while (temp != NULL)
        {
            temp->display_book_ditails();
            temp = temp->Next;
        }
        
    };

    void Search_by_Author(string author)
    {
        Book* temp = head;
        while (temp != NULL)
        {
            if (temp->Get_author() == author)
            {
                temp->display_book_ditails();
            }
            
            temp = temp->Next;
        }
    };

    void Search_by_Title(string title)
    {
        Book* temp = head;
        while (temp != NULL)
        {
            if (temp->Get_title() == title)
            {
                temp->display_book_ditails();
            }
            
            temp = temp->Next;
        }
    };
};
