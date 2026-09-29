#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    string br;
    string enrollmentno;
    string name;
    int semno, maths, physics, cpf, totalmark;
    float avgmark, per;
    long long int no;

    cout<<"*********************************************";
    cout<<"\n\t STUDENT RECORD MANAGEMENT SYSTEM";
    cout<<"\n*********************************************\n";
    cout<<"\n\tSoftware Version : 1.2S\n\n\n";

    cout<<"*********************************************";
    cout<<"\n\t STUDENT REGISTRATION";
    cout<<"\n*********************************************\n\n\n";

    cout<<left<<setw(30)<<"Enter Enrollment Number"<<":";
    cin>>enrollmentno;

    cout<<left<<setw(30)<<"Enter Student Name"<<":";
    cin.ignore();
    getline(cin,name);

    cout<<left<<setw(30)<<"Enter Branch"<<":";
    cin>>br;

    cout<<left<<setw(30)<<"Enter Semester"<<":";
    cin>>semno;

    cout<<left<<setw(30)<<"Enter Mobile Number"<<":";
    cin>>no;

    cout<<"\nStudent Registered Successfully!\n";

    cout<<"\n*********************************************";
    cout<<"\n\t ACADEMIC INFORMATION";
    cout<<"\n*********************************************\n\n\n";

    cout<<left<<setw(30)<<"Enter Maths Marks"<<":";
    cin>>maths;

    cout<<left<<setw(30)<<"Enter Physics Marks"<<":";
    cin>>physics;

    cout<<left<<setw(30)<<"Enter CPF Marks"<<":";
    cin>>cpf;

    totalmark=maths+physics+cpf;
    avgmark=totalmark/3.0;
    per=(totalmark/300.0)*100;

    cout<<"\n---------------------------------------------";
    cout<<"\n\t ACADEMIC SUMMARY";
    cout<<"\n---------------------------------------------";

    cout<<left<<setw(30)<<"\nTotal Marks"<<":"<<totalmark;
    cout<<left<<setw(30)<<"\nAverage Marks"<<":"<<avgmark;
    cout<<left<<setw(30)<<"\nPercentage"<<":"<<per<<"%";

    cout<<"\n\n---------------------------------------------";
    cout<<"\n\t INCREMENT / DECREMENT";
    cout<<"\n---------------------------------------------";

    cout<<"\nCPF Marks Before Execution : "<<cpf;

    ++cpf;
    cout<<"\nAfter ++cpfMarks            : "<<cpf;

    --cpf;
    cout<<"\nAfter --cpfMarks            : "<<cpf;

    cpf++;
    cout<<"\nAfter cpfMarks++            : "<<cpf;

    cpf--;
    cout<<"\nAfter cpfMarks--            : "<<cpf;

    cout<<"\n\nMaths Marks Before Execution : "<<maths;

    --maths;
    cout<<"\nAfter --mathMarks             : "<<maths;

    ++maths;
    cout<<"\nAfter ++mathMarks             : "<<maths;

    maths--;
    cout<<"\nAfter mathMarks--             : "<<maths;

    cout<<"\n\n---------------------------------------------";
    cout<<"\n\t STUDENT INFORMATION";
    cout<<"\n---------------------------------------------";

    cout<<left<<setw(30)<<"\nEnrollment Number"<<":"<<enrollmentno;
    cout<<left<<setw(30)<<"\nStudent Name"<<":"<<name;
    cout<<left<<setw(30)<<"\nBranch"<<":"<<br;
    cout<<left<<setw(30)<<"\nSemester"<<":"<<semno;
    cout<<left<<setw(30)<<"\nMobile Number"<<":"<<no;

    cout<<"\n\n*********************************************";
    cout<<"\n\t PROGRAM EXECUTED SUCCESSFULLY";
    cout<<"\n*********************************************\n";

    return 0;
}
