#include<iostream>
using namespace std;

class Student {
public:
    int roll_number;
    char student_name[50];
};

int main() {
    Student s[100]; // 100 students

    for(int i=0; i<100; i++) {
        cin >> s[i].roll_number;
        cin >> s[i].student_name;
    }

    for(int i=0; i<100; i++) {
        cout << s[i].roll_number << " " << s[i].student_name << endl;
    }
}



