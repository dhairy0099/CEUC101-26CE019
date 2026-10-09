#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char id[10][10];
    char name[10][15],tn[15];
    int score[10],t,i,j,N;

    cout<<"********************************************************"<<endl;
    cout<<"   SPORTS EVENT SCORE ANALYSIS   "<<endl;
    cout<<"********************************************************"<<endl;
    cout<<"\nEnter number of Participants:";
    cin>>N;
    for(i=0;i<N;i++)
    {
        cout<<"\nEnter Participant"<<i+1<<"ID:";
        cin>>id[i];
        cout<<"Enter name:";
        cin>>name[i];
        cout<<"Enter score:";
        cin>>score[i];
    }
    for(i=0;i<N-1;i++)
    {
        for(j=0;j<N-i-1;j++)
        {
            if(score[i]<score[j+1])
            {

        t=score[i];
        score[i]=score[j+1];
        score[j+1]=t;

        strcpy(tn,name[i]);
        strcpy(name[i],name[j+1]);
        strcpy(name[j+1],tn);

        strcpy(tn,id[i]);
        strcpy(id[i],id[j+1]);
        strcpy(id[j+1],tn);
        strcpy(id[j+1],tn);


            }
        }
    }
    cout << "\n----------------------------------------" << endl;
    cout << "             Ranking List" << endl;
    cout << "----------------------------------------" << endl;

    cout << "\nRank\tName\tScore" << endl;

    for(i = 0; i < N; i++)
    {
        cout << i + 1 << "\t"
             << name[i] << "\t"
             << score[i] << endl;
    }
    cout << "\n----------------------------------------" << endl;
    cout << "        Top Three Performers" << endl;
    cout << "----------------------------------------" << endl;

    for(i = 0; i < 3 && i < N; i++)
    {
        cout << i + 1 << ". "
             << name[i] << " - "
             << score[i] << endl;
    }

    return 0;
}



