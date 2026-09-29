#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    string br;
    int semno,maths,physics,cpf,totalmark;
    float avgmark,per;
    long long int no;
    string enrollmentno;
    string name;
    char choice='Y';

         cout<<"\n*********************************************";
    cout<<"\n \t STUDENT RECORD MANAGEMENT SYSTEM  ";
    cout<<"\n*********************************************\n";
    while(choice=='Y'||choice=='y')
    {
        cout<<"\nStudent Registration\n\n";


    cout<<left<<setw(30)<<"Enter Enrollment number"<<":";
    cin>>enrollmentno;
    cout<<left<<setw(30)<<"Enter student name"<<":";
    cin.ignore();
    getline(cin,name);
    cout<<left<<setw(30)<<"Enter Branch"<<":";
    cin>>br;
    cout<<left<<setw(30)<<"Enter Semester"<<":";
    cin.ignore();
    cin>>semno;
    cout<<left<<setw(30)<<"Enter mobile number"<<":";
    cin>>no;
    cout<<"\nStudent Registered Successfully.\n\n";
    cout<<"Register Another Student?(Y/N):";
    cin>>choice;
    if(choice=='Y'||choice=='y')
    {
        cout<<"\n----------------------------------\n";
    }
    }
    cout<<"\nReturning to Main Menu...\n";

    return 0;
}




