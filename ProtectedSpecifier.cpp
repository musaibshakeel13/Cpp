

#include <iostream>
using namespace std;

class Employee {
private:                 
    double salary;

protected:               
    int empID;

public:                  
    string name;

    Employee(string n, double s, int id) {
        name = n;
        salary = s;
        empID = id;
    }
};

// Derived class (inherits from Employee)
class Manager : public Employee {
public:
    Manager(string n, double s, int id) : Employee(n, s, id) {}

    void showDetails() {
        cout << "Manager Name: " << name << endl;     
        cout << "Manager ID: " << empID << endl;     
    }
};

int main() {
    Employee emp("WASID", 50000, 101);
    cout << "Employee Name: " << emp.name << endl;
    Manager m("HAJIMUSAIB", 70000, 102);
    m.showDetails();   
    return 0;
}

