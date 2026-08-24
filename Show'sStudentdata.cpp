


#include <iostream>
using namespace std;

class Employee
{
private:
    int emp_id;
    string emp_name;
    float salary;

public:
    void getdata_24217()
    {
        cout << "Enter Employee ID: ";
        cin >> emp_id;

        cout << "Enter Employee Name: ";
        cin >> emp_name;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display_24217()
    {
        cout << "\nEmployee Details" << endl;
        cout << "Employee ID: " << emp_id << endl;
        cout << "Employee Name: " << emp_name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Employee e;

    e.getdata_24217();
    e.display_24217();

    return 0;
}



