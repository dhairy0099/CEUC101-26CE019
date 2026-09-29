#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int numSubjects;
    float marks, total, average, percentage;
    string result, grade, performance;

    cout << "\n*******************************************\n";
    cout << "STUDENT RECORD MANAGEMENT SYSTEM";
    cout << "\n*******************************************";
    cout <<left<<setw(30)<< "\nEnter Number of Subjects "<<":";
    cin >> numSubjects;
    for (int i = 1; i <= numSubjects; i++)
    {
        cout <<left<<setw(30)<< "\nEnter Marks of Subject " << i << " : ";
        cin >> marks;

        total = total + marks;
    }
    average = total / numSubjects;
    percentage = (total / (numSubjects * 100)) * 100;
    if (percentage >= 40)
    {
        result = "PASS";
    }
    else
    {
        result = "FAIL";
    }
    if (percentage >= 90)
    {
        grade = "A+";
        performance = "Outstanding";
    }
    else if (percentage >= 80)
    {
        grade = "A+";
        performance = "Excellent";
    }
    else if (percentage >= 70)
    {
        grade = "A";
        performance = "Very Good";
    }
      else if (percentage >= 60)
    {
        grade = "B";
        performance = "Good";
    }
    else if (percentage >= 50)
    {
        grade = "C";
        performance = "Needs Improvement";
    }
    else if (percentage >= 40)
    {
        grade = "D";
        performance = "Pass";
    }
    else
    {
        grade = "F";
        performance = "Fail";
    }


    cout << "\n------------------------------------------\n";
    cout << "Academic Result" ;
    cout << "\n------------------------------------------";

    cout << "\nTotal Marks        : " << total;
    cout << "\nAverage Marks      : " << average;
    cout << "\nPercentage         : " << percentage << "%";

    cout << "\n\nResult             : " << result;
    cout << "\nGrade              : " << grade;
    cout << "\nPerformance        : " << performance;

    cout << "\n------------------------------------------";

    return 0;
}
