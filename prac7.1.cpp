
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char enrollment[20];
    char name[50];
    char branch[30];
    char firstName[25];
    char lastName[25];
    char referenceID[80];
    char keyword[30];

    cout << "Enter Enrollment Number: ";
    cin >> enrollment;

    cin.ignore();

    cout << "Enter Student Name: ";
    cin.getline(name, 50);

    cout << "Enter Branch: ";
    cin.getline(branch, 30);

    strcpy(referenceID, name);
    strcat(referenceID, enrollment);

    char temp[50];
    strcpy(temp, name);

    char *token = strtok(temp, " ");

    if(token != NULL)
    {
        strcpy(firstName, token);
    }

    token = strtok(NULL, " ");

    if(token != NULL)
    {
        strcpy(lastName, token);
    }
    else
    {
        strcpy(lastName, "Not Available");
    }

    cout << "\nEnter Keyword to Search: ";
    cin >> keyword;

    if(strstr(name, keyword) != NULL)
    {
        cout << "Keyword Found!" << endl;
    }
    else
    {
        cout << "Keyword Not Found!" << endl;
    }

    cout << "\n===== STUDENT REPORT =====" << endl;

    cout << "Enrollment Number: " << enrollment << endl;
    cout << "Student Name: " << name << endl;
    cout << "Branch: " << branch << endl;
    cout << "Student Reference ID: " << referenceID << endl;
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;

    return 0;
}
