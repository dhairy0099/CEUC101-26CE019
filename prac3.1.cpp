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
    cout<<"\n\tSoftware Version : 1.2S\n\n\n";

    cout<<"*********************************************";
    cout<<"\n \t STUDENT Registration  ";
    cout<<"\n*********************************************\n\n\n";
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

    cout<<"\n*********************************************";
    cout<<"\n \t Academic Information  ";
    cout<<"\n*********************************************\n\n\n";
    cout<<left<<setw(30)<<"\nEnter Maths Marks"<<":";
    cin>>maths;
    cout<<left<<setw(30)<<"Enter Physics Marks"<<":";
    cin>>physics;
    cout<<left<<setw(30)<<"Enter CPF Marks"<<":";
    cin>>cpf;

    cout<<"\n---------------------------------------------";
    cout<<"\n \t Academic Summary  ";
    cout<<"\n---------------------------------------------";
    totalmark=maths+physics+cpf;
    avgmark=totalmark/3;
    per=totalmark/3;
    cout<<left<<setw(30)<<"\nTotal Marks"<<":"<<totalmark;
    cout<<left<<setw(30)<<"\nAverage Marks"<<":"<<avgmark ;
    cout<<left<<setw(30)<<"\nPercentage"<<":"<<per;

    cout<<"\n---------------------------------------------";
    cout<<"\n \t STUDENT INFORMATION  ";
    cout<<"\n---------------------------------------------";
    cout<<left<<setw(30)<<"\nEnrollment number"<<":"<<enrollmentno;
    cout<<left<<setw(30)<<"\nStudent Name"<<":"<<name;
    cout<<left<<setw(30)<<"\nBranch"<<":"<<br;
    cout<<left<<setw(30)<<"\nSemester"<<":"<<semno;
    cout<<left<<setw(30)<<"\nMobile no"<<":"<<no;
}


