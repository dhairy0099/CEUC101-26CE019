#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    string br;
    int semno,maths,physics,cpf,totalmark;
    float avgmark,per;
    long long int no;
    string enrollmentno;
    string name;

    cout<<"*********************************************";
    cout<<"\n \t STUDENT RECORD MANAGEMENT SYSTEM  ";
    cout<<"\n*********************************************\n";
    cout<<"Enter Enrollment number"<<":";
    cin>>enrollmentno;
    cout<<"Enter student name"<<":";
    cin.ignore();
    getline(cin,name);
    cout<<"Enter Branch"<<":";
    cin>>br;
    cout<<"Enter Semester"<<":";
    cin.ignore();
    cin>>semno;
    cout<<"Enter mobile number"<<":";
    cin>>no;
     cout<<"\n---------------------------------------------";
    cout<<"\n \t STUDENT INFORMATION  ";
    cout<<"\n---------------------------------------------";
    cout<<"\nEnrollment number"<<":"<<enrollmentno;
    cout<<"\nStudent Name"<<":"<<name;
    cout<<"\nBranch"<<":"<<br;
    cout<<"\nSemester"<<":"<<semno;
    cout<<"\nMobile no"<<":"<<no;
    cout<<left<<"\n---------------------------------------";
}


