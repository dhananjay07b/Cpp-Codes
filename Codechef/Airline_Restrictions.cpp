#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int a,b,c,d,e;
        cin>>a>>b>>c>>d>>e;
        if ((a<=e && (b+c)<=d) || (b<=e && (c+a)<=d) || (c<=e && (a+b)<=d))
        {
            cout << "YES" <<endl;
        }
        else
        cout << "NO"<<endl;
    }
}
