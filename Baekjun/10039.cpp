#include<iostream>
using namespace std;

int main()
{
    int sum=0, tmp;
    for(int i=0;i<5;i++){
        cin>>tmp;
        if(tmp>40) sum+=tmp;
        else sum+=40;
    }
    cout<<sum/5;
}