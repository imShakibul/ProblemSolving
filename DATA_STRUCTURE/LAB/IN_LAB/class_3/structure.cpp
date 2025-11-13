#include <iostream>
using namespace std;

struct Student
{
    string Id;
    string name;
    string dept;
    float cgpa;
};

int main()
{
    int n;
    cout << "Number Of student you want to store info: ";
    cin >> n;
    Student s[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter Information for Student : " << i + 1 << endl;
        cout << "Enter the Name : ";
        cin >> s[i].name;
        cout << "Enter the Id : ";
        cin >> s[i].Id;
        cout << "Enter the Department : ";
        cin >> s[i].dept;
        cout << "Enter the CGPA : ";
        cin >> s[i].cgpa;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Information for Student : " << i + 1 << endl;
        cout << "Name : ";
        cout << s[i].name << endl;
        cout << "Id : ";
        cout << s[i].Id << endl;
        cout << "Department : ";
        cout << s[i].dept << endl;
        cout << "CGPA : ";
        cout << s[i].cgpa << endl;
    }
}