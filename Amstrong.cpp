#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int sum=0;
    int n,ld;
    int og=n;
    cin>>n;
    while(n>0)
    {
        ld=n%10;
        sum=sum+(ld*ld*ld);
        n=n/10;

    }
    if(sum==og)
    {
        cout<<"amstrong";
    }
    else
    {
        cout<<" not amstrong";
    }
    return 0;
}
