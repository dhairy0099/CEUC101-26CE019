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

    cout<<"\n*********************************************";
    cout<<"\n \t Academic Information  ";
    cout<<"\n*********************************************\n\n\n";
    cout<<left<<setw(30)<<"Enter Maths Marks"<<":";
    cin>>maths;
    cout<<left<<setw(30)<<"Enter Physics Marks"<<":";
    cin>>physics;
    cout<<left<<setw(30)<<"Enter CPF Marks"<<":";
    cin>>cpf;

    cout<<"\n---------------------------------------------";
    cout<<"\n \t Academic Summary  ";
    cout<<"\n---------------------------------------------\n\n";
    totalmark=maths+physics+cpf;
    avgmark=totalmark/3;
    per=totalmark/3;
    cout<<left<<setw(30)<<"\nTotal Marks"<<":"<<totalmark;
    cout<<left<<setw(30)<<"\nAverage Marks"<<":"<<avgmark ;
    cout<<left<<setw(30)<<"\nPercentage"<<":"<<per;

    cout<<"\n---------------------------------------------";
    cout<<"\n \t Academic Result";
    cout<<"\n---------------------------------------------";

    if(per>40)
    {
        cout<<left<<setw(30)<<"\nResult"<<": Pass";
    }
        if(per>90)
        {
            cout<<left<<setw(30)<<"\nGrade"<<": O";
            cout<<left<<setw(30)<<"\nPerformance"<<": Outstanding";
        }
        else if(per>80)
        {
            cout<<left<<setw(30)<<"\nGrade"<<": A+";
            cout<<left<<setw(30)<<"\nPerformance"<<": Excellence";
        }
        else if(per>70)
        {
            cout<<left<<setw(30)<<"\nGrade"<<": A";
            cout<<left<<setw(30)<<"\nPerformance"<<": Very Good:";
        }
        else if(per>60)
        {
            cout<<left<<setw(30)<<"\nGrade"<<": B+";
            cout<<left<<setw(30)<<"\nPerformance"<<": Good";
        }
        else if(per>50)
        {
            cout<<left<<setw(30)<<"\nGrade"<<": B";
            cout<<left<<setw(30)<<"\nPerformance"<<": Satisfactory";
        }
        else if(per>40)
        {
            cout<<left<<setw(30)<<"\nGrade"<<": C";
            cout<<left<<setw(30)<<"\nPerformance"<<": Needs Improvement";
        }
        else
        {
            cout<<left<<setw(30)<<"\nResult"<<": Fail";
        }
    cout<<"\n\n---------------------------------------------";
}
