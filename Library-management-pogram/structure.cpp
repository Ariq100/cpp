#include <iostream>
#include <string>
#include "structure.h"
using namespace std;

class library
{
    private:
    string authors_name, book_name;
    int stock;
    double book_price;

    public:

    void set_authorsname(string authorsname)
    {
        authors_name = authorsname;
    }

    string get_authorsname()
    {
        return authors_name;
    }

    void set_bookname(string bookname)
    {
        book_name = bookname;
    }

    string get_bookname()
    {
        return book_name;
    }

    void set_stock(int s)
    {
        stock = s;
    }

    int get_stock()
    {
        return stock;
    }

    void set_bookprice(double price)
    {
        book_price = price;
    }

    double get_price()
    {
        return book_price;
    }
};

int main()
{
    // string books[10] = {"Harry potter 1", "Game of Thrones", "warzone", "Battle field 5"};
    
}