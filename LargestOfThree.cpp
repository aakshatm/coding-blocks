

#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int largest=INT_MIN;
    int i=1,no;
    while(i<=3)
    {
        cin>>no;
        if(no>=largest)
        {
            largest=no;
        }
        i++;
    }
    cout << largest;
    return 0;
}
