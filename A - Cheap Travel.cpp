#include <iostream>

using namespace std;

int main()
{
    int n,m,a,b,r;
    cin>>n>>m>>a>>b;
    if(m*a>b)
    {
        r=(n%m)*a;
        if(r>b)
        {
            cout<<n/m*b+b;
        }
        else
        {
            cout<<n/m*b+r;
        }
    }
    else
    {
        cout<<n*a;
    }
    return 0;
}
