#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    string Br;
    int SemNo,Maths,Physics,CPF,TotalMark,Choice;
    float AvgMark,Per;
    long long int No;
    string EnrollmentNo;
    string Name;

    cout<<"*********************************************\n";
    cout<<"       STUDENT RECORD MANAGEMENT SYSTEM      \n";
    cout<<"*********************************************\n";

X:  cout<<"\n---------------- MAIN MENU ------------------\n";
    cout<<"\n1.Register New Student";
    cout<<"\n2.Display Student Record";
    cout<<"\n3.Enter Student Marks";
    cout<<"\n4.Display Student Marks";
    cout<<"\n5.Exit";
    cout<<"\n\nEnter Your Choice:";
    cin>>Choice;

    switch(Choice)
    {
        case 1:
            cout<<"\n---------------------------------------------";
            cout<<"\n            STUDENT REGISTRATION             ";
            cout<<"\n---------------------------------------------";
            cout<<"\nEnter Enrollment number"<<":";
            cin>>EnrollmentNo;
            cout<<"Enter student name"<<":";
            cin.ignore();
            getline(cin,Name);
            cout<<"Enter Branch"<<":";
            cin.ignore();
            cin>>Br;
            cout<<"Enter Semester"<<":";
            cin.ignore();
            cin>>SemNo;
            cout<<"Enter mobile number"<<":";
            cin>>No;
            cout<<"\n\nStudent Registered Sucessfully.";
            cout<<"\n---------------------------------------------";
            goto X;
            break;
        case 2:
            cout<<"\n---------------------------------------------";
            cout<<"\n             STUDENT INFORMATION             ";
            cout<<"\n---------------------------------------------";
            cout<<left<<setw(30)<<"\nEnrollment number"<<":"<<EnrollmentNo;
            cout<<left<<setw(30)<<"\nStudent Name"<<":"<<Name;
            cout<<left<<setw(30)<<"\nBranch"<<":"<<Br;
            cout<<left<<setw(30)<<"\nSemester"<<":"<<SemNo;
            cout<<left<<setw(30)<<"\nMobile no"<<":"<<No;
            cout<<"\n---------------------------------------------";
            goto X;
            break;
        case 3:
            cout<<"\n---------------------------------------------";
            cout<<"\n            Academic Information             ";
            cout<<"\n---------------------------------------------\n";
            cout<<left<<setw(30)<<"Enter Maths Marks"<<":";
            cin>>Maths;
            cout<<left<<setw(30)<<"Enter Physics Marks"<<":";
            cin>>Physics;
            cout<<left<<setw(30)<<"Enter CPF Marks"<<":";
            cin>>CPF;
            cout<<"\nMarks Entered Sucessfully\n";
            cout<<"\n---------------------------------------------";
            goto X;
            break;
        case 4:
            cout<<"\n---------------------------------------------";
            cout<<"\n               Academic Result               ";
            cout<<"\n---------------------------------------------";
             TotalMark=Maths+Physics+CPF;
            AvgMark=TotalMark/3;
            Per=TotalMark/3;
            cout<<left<<setw(30)<<"\nTotal Marks"<<":"<<TotalMark;
            cout<<left<<setw(30)<<"\nAverage Marks"<<":"<<AvgMark ;
            cout<<left<<setw(30)<<"\nPercentage"<<":"<<Per;

            if(Per>90)
            {
                cout<<left<<setw(30)<<"\nResult"<<":Pass";
                cout<<left<<setw(30)<<"\nGrade"<<":O";
                cout<<left<<setw(30)<<"\nPerformance"<<":Outstanding";
            }
            else if(Per>80)
            {
                cout<<left<<setw(30)<<"\nResult"<<":Pass";
                cout<<left<<setw(30)<<"\nGrade"<<":A+";
            cout<<left<<setw(30)<<"\nPerformance"<<":Excellence";
            }
            else if(Per>70)
            {
                cout<<left<<setw(30)<<"\nResult"<<":Pass";
                cout<<left<<setw(30)<<"\nGrade"<<":A";
                cout<<left<<setw(30)<<"\nPerformance"<<":Very Good:";
            }
            else if(Per>60)
            {
                cout<<left<<setw(30)<<"\nResult"<<":Pass";
                cout<<left<<setw(30)<<"\nGrade"<<":B+";
                cout<<left<<setw(30)<<"\nPerformance"<<":Good";
            }
            else if(Per>50)
            {
                cout<<left<<setw(30)<<"\nResult"<<":Pass";
                cout<<left<<setw(30)<<"\nGrade"<<":B";
                cout<<left<<setw(30)<<"\nPerformance"<<":Satisfactory";
            }
            else if(Per>40)
            {
                cout<<left<<setw(30)<<"\nResult"<<":Pass";
                cout<<left<<setw(30)<<"\nGrade"<<":C";
                cout<<left<<setw(30)<<"\nPerformance"<<":Needs Improvement";
            }
            else
            {
                cout<<left<<setw(30)<<"\nResult"<<": Fail";
            }
            cout<<"\n\n---------------------------------------------";
            goto X;
            break;
        case 5:
            cout<<"\n\n Thank You...   ";
            cout<<"\n---------------------------------------------";
            break;
        default:
            cout<<"Enter Valid Choice !!!";
            goto X;
            break;
    }
}
