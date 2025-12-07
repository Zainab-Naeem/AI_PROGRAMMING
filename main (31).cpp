#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int hours,minutes,seconds,total;
    cout<<"Enter hours"<<hours<<endl;
    cin>>hours;
    cout<<"Enter minutes"<<minutes<<endl;
    cin>>minutes;
    cout<<"Enterv seconds"<<seconds<<endl;
    cin>>seconds;
    total=(hours*3600)+(minutes*60)+seconds;
    cout<<"total"<<total<<endl;
    return 0;
    
}