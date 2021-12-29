#include <iostream>
#include <math.h>
using namespace std;

int main(){
    long long int n;
    0<n<pow(10,18);
    cin>>n;
    int l=0;
    int i=1;
    int d;
    long long int b=n;
    long long int c=n;
    do{
        l++;
        n=n/10;
    }while(n);
    if (l==1){
        if (b==9)
        {
            cout<<b;
        }
        else
        {
            if (9-b<b)
            {
                cout<<9-b;
            }
            else
            {
                cout<<b;
            }
            
            
        }
        
        
    }
    else
    {
        for(i=1;i<=l;i++){
        d=c%10;
        if(d!=0){
            int f=9-d;
            if (i==l&&d==9)
            {
                
            }
            if(f<d){
                long long int g=pow(10,i-1);
                b=b-d*g+f*g;
            }
            
        }
        c=c/10;
    }
    cout<<b;
        
    }
    
    
    
    return 0;
}
