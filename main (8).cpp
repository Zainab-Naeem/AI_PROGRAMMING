#include<iostream>
using namespace std;
int main()
{
    int A=1,B=2,C=3,D=4,max;
    max=A; 
    if (B>A)
    max=B; 
    if (C>B)
    max=C;
    if (D>C)
    max=D;
    cout<<"display max number"<<max<<endl;
    return 0;
}