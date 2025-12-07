#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c,s,area;
    cout<<"enter the value of first side ";
    cin>>a;
    cout<<"enter the value of second side ";
    cin>>b;
    cout<<"enter the value of third side ";
    cin>>c;
    s=(a+b+c)/2;
    area= sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"the area of triangle is "<<area<<endl;
    return 0;
}