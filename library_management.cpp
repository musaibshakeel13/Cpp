#include <iostream>
using namespace std;

class Library
{
    int book_id;
    string book_name;

public:
    void getData()
    {
        cout << "Enter Book ID: ";
        cin >> book_id;

        cout << "Enter Book Name: ";
        cin >> book_name;
    }

    void display()
    {
        cout << "\nBook ID: " << book_id << endl;
        cout << "Book Name: " << book_name << endl;
    }
};

int main()
{
    Library b1;

    
    b1.getData();
    b1.display();

    return 0;
}





