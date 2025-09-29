// Mahi Shendre
// 25070123504

#include<iostream>
using namespace std;
class Student {
public:
    string name;
    string branch;
    string subject;
    string year;
    float resut;
};
int main(){
    Student s1;
    s1.name = "Papri Sen";
    s1.branch = "Electronics & Telecomunication Engineering";
    s1.subject = "C++ & Data Structures";
    s1.year = "Second Year";
    s1.resut = 7.5;
    cout << "Name: " << s1.name << endl;
    cout << "Branch: " << s1.branch << endl;
    cout << "Subject: " << s1.subject << endl;
    cout << "Year: " << s1.year << endl;
    cout << "Result: " << s1.resut << endl << endl;
   
    return 0;
}

/*
Output:
Name: Papri Sen
Branch: Electronics & Telecomunication Engineering
Subject: C++ & Data Structures
Year: Second Year
Result: 7.5
*/
