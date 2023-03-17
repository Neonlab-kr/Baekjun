#include<iostream>
using namespace std;

int main()
{
    float point;
    string grade;
    cin >> grade;
    
    if(grade[0]=='A')
        point=4.0;
    else if(grade[0]=='B')
        point=3.0;
    else if(grade[0]=='C')
        point=2.0;
    else if(grade[0]=='D')
        point=1.0;
    else
        point=0.0;
    
    if(grade[1]=='+')
        point+=0.3;
    else if(grade[1]=='-')
        point-=0.3;
     
    cout << fixed;
    cout.precision(1);
    cout << point;
    return 0;
}