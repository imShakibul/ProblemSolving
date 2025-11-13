#include <iostream>
using namespace std;

struct Patient
{
    int Id;
    string name;
    int age;
    string gender;
    string medical_condition;
    string Dr_name;
    int roomNumber;
    string date;
    float cost;
};

void addPatient(Patient Patients[], int count);
void showAll(Patient Patients[], int count);
void sortByID(Patient Patients[], int count);
void searchByID(Patient Patients[], int count);
void searchByName(Patient Patients[], int count);

void addPatient(Patient Patients[], int count)
{
    cout << endl
         << "=== ADD NEW PATIENT ===" << endl;
    cout << "Enter Patient ID: ";
    cin >> Patients[count].Id;
    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, Patients[count].name);

    cout << "Enter Age: ";
    cin >> Patients[count].age;
    cin.ignore();

    cout << "Enter Gender: ";
    getline(cin, Patients[count].gender);

    cout << "Enter Medical Condition: ";
    getline(cin, Patients[count].medical_condition);

    cout << "Enter Assigned Doctor: ";
    getline(cin, Patients[count].Dr_name);

    cout << "Enter Room Number: ";
    cin >> Patients[count].roomNumber;
    cin.ignore();

    cout << "Enter Admission date (YYYY-MM-DD): ";
    getline(cin, Patients[count].date);

    cout << "Enter Treatment Cost: ";
    cin >> Patients[count].cost;

    cout << "\nPatient added successfully!\n";
    count++;
}

void showAll(Patient Patients[], int count)
{
    if (count == 0)
    {
        cout << "No Patient Available to Show" << endl;
    }
    return;
}

int main()
{
    Patient patients[1000];
    int choice;
    int count;
    cout << "=== HOSPITAL PATIENT MANAGEMENT SYSTEM ===" << endl
         << endl;

    do
    {
        cout << "1. Add New Patient" << endl;
        cout << "2. Display All Patients" << endl;
        cout << "3. Search Patient by ID" << endl;
        cout << "4. Search Patient by Name" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice (1-5):";

        cin >> choice;

        if (choice == 1)
        {
            addPatient(patients, count);
            break;
        }
        else if (choice == 2)
        {
            showAll(patients, count);
            break;
        }
        // else if (choice == 3)
        // {
        //     searchByID(patients, count);
        //     break;
        // }
        // else if (choice == 4)
        // {
        //     searchByName(patients, count);
        //     break;
        // }
        else if (choice == 5)
        {
            cout << "Exit Program" << endl;
        }
        else
        {
            cout << "Please enter a valid number (1 - 5) : ";
        }
    } while (choice != 5);
}
