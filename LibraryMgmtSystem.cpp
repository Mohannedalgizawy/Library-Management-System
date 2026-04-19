#include <iostream>
using namespace std;
#include "Library.h"

int main()
{
    Library lib;
    string book_type,title,author;
    int ISBN,publicatin_year;
    
    int choice,count = 1;
    while (true)
    {
        cout << "Add Book                   :1" << endl;
        cout << "Search Books by Author     :2" << endl;
        cout << "Search Books by Book Title :3" << endl;
        cout << "Display Books Details      :4" << endl;
        cout << "Exit Option                :5" << endl;
        cout << "pleace enter choice:" << endl;
        cin >> choice;
        if (choice == 1 && count == 1)
        {
            cout << "pleace enter book type:" << endl;
            cin >> book_type;
            cout << "pleace enter book title:" << endl;
            cin >> title;
            cout << "pleace enter book author:" << endl;
            cin >> author;
            cout << "pleace enter ISBN:" << endl;
            cin >> ISBN;
            cout << "pleace enter book publication year:" << endl;
            cin >> publicatin_year;
            lib.insert_in_first(book_type,title,author,ISBN,publicatin_year);
            count++;
        }
        else if (choice == 1 && count != 1)
        {
            cout << "pleace enter book type:" << endl;
            cin >> book_type;
            cout << "pleace enter book title:" << endl;
            cin >> title;
            cout << "pleace enter book author:" << endl;
            cin >> author;
            cout << "pleace enter ISBN:" << endl;
            cin >> ISBN;
            cout << "pleace enter book publication year:" << endl;
            cin >> publicatin_year;
            lib.append(book_type,title,author,ISBN,publicatin_year);
        }else if (choice == 2)
        {
            cout << "pleace enter book author:" << endl;
            cin >> author;
            lib.Search_by_Author(author);
        }else if (choice == 3)
        {
            cout << "pleace enter book title:" << endl;
            cin >> title;
            lib.Search_by_Title(title);
        }else if (choice == 4)
        {
            lib.display_books();
        }else
        {
            break;
        }
    }
    
    return 0;
}
