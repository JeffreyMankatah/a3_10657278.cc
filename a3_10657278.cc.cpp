#include <iostream>

using namespace std;

int main()
{
    double marks;
    cout <<"Please enter your marks " <<endl;
    cin>> marks;

    if (marks >=80)
    {
        cout << "A";
    } else if (marks >= 75 && marks <=79)
    {
        cout << "B+";
    } else if (marks >= 70 && marks <=74)
    {
        cout << "B";
    } else if ( marks >= 65 && marks <= 69)
    {
        cout << "c+";
    } else if (marks >= 60 && marks <= 64)
    {
        cout << "c";
    } else if ( marks >= 55 && marks <= 59)
    {
        cout << "D+";
    } else if (marks >= 50 && marks <=54)
    {
        cout << "D";
    } else if (marks >= 45 && marks <=49)
    {
        cout << "E";
    } else {
    cout << "F";
    }

    return 0;
}
