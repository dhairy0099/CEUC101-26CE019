#include <iostream>
using namespace std;
int main()
         {
             int n , total=0;

             cout << "Enter the number of participants:";
             cin >> n;

             string ID[n];
             string NAME[n];
             int SCORE[n];
             cout << "*********************************" << endl;
             cout << "  SPORTS EVENT SCORE ANALYSIS" << endl;
             cout << "*********************************" << endl;



             for(int i=0 ; i<=n; i++)
             {

                 cout << "Enter participants ID : ";
                 cin >> ID[i];

                 cout << "Enter participants name : ";
                 cin >> NAME[i];

                 cout << "Enter score : ";
                 cin >> SCORE[i];
             }
             cout << endl;
             cout << "**********************************" << endl;
             cout << "      Participants Performance  " << endl;
             cout << "**********************************" << endl;
             cout << "ID" << "\t" << "NAME" << "\t" << "SCORE" << endl;
             cout << "----------------------------------" << endl;

             for(int i=0 ; i<=n; i++)
             {

                 cout << ID[i] << "\t" << NAME[i] << "\t" << SCORE[i] << endl ;


             }
             cout << "----------------------------------" << endl;

             for(int i=0 ; i<=n; i++)
             {
                 total = total + SCORE[i];

             }
             cout << "Total Score : " << total << endl;
             cout << "Average Score : " << total/n << endl;

             int minimum=SCORE[0];
             for(int i=1 ; i<=n;i++)
             {
                 if(minimum>SCORE[i])
                 {
                     minimum=SCORE[i];
                 }

             }
             cout << "Lowest Score : " << minimum << endl;

             int maximum=SCORE[0];
             for(int i=1 ;i<=n-1 ; i++)
             {
                 if(maximum<SCORE[i])
                 {
                     maximum=SCORE[i];
                 }

             }
             cout << "Highest Score : " << maximum << endl;
         }


