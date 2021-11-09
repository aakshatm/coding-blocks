#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    // float dis=0.0; // its not needed to initialze
    dis=(b*b)-(4*a*c);
    if(dis>0)
    {
       cout<<"Real And Distinct "<<endl;
       int r1, r2;
       r1=((-1*b) + sqrt(dis))/(2.0*a);
       r2=((-1*b) - sqrt(dis))/(2.0*a);
       cout << r2 << " " << r1;
    }
    else if(dis==0)
    {
        cout<<"Real and equal"<<endl;
        int r;
        r=((-1*b)/(2.0*a));
        cout<<r<<' '<<r;
    }
    else if(dis<0)
        cout<<"Imaginary Roots"<<endl;


}
