#include<iostream>
using namespace std;
int main()
{
    const float PI=3.1417;
    float radius,height,volume;
    cout<<"Enter radius"<<radius<<endl;
    cin>>radius;
    cout<<"Enter height"<<height<<endl;
    cin>>height;
    volume=PI*radius*radius*height;
    cout<<"display volume"<<volume<<endl;
    return 0;
}