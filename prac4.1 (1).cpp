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
    if(per>40)
    {
           cout<<left<<setw(30)<<"\nResult"<<": Pass";
           cout<<"\n You have pass succesfully";

    }
    else
    {
          cout<<left<<setw(30)<<"\nResult"<<": Fail";
           cout<<"\n You have Fail succesfully";

    }



}
