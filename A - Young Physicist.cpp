#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b,c,x=0,y=0,z=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d%d",&a,&b,&c);
        x+=a,y+=b,z+=c;
    }
    if(x==0&&y==0&&z==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
