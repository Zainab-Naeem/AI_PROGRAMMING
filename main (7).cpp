#include<iostream>
using namespace std;
int main()
{
    float Fahrenheit,Celcius;
    cout<<"enter temperature in Fahrenheit";
    cin>>Fahrenheit;
    Celcius=(5.0/9.0)*(Fahrenheit-32);
    cout<<"temperature in Celcius is"<<Celcius<<endl;
    return 0;
}