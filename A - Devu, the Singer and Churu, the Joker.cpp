#include <iostream>

using namespace std;

int main()
{
     int n,d,a,sum=-10,sum2=0,i;
    cin>>n>>d;
    for(i=0;i<n;i++)
    {
        cin>>a;
        sum+=a+10;
        sum2+=a;
    }
    if(sum<=d)
    {
        cout<<(d-sum2)/5;
    }
    else
    {
        cout<<-1;
    }
    return 0;
}
