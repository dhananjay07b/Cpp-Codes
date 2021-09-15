#include<bits/stdc++.h>             //https://www.codechef.com/START11C/problems/MAX_DIFF
using namespace std;
int main ()
{
    int T;
    cin >>T;
    while (T--)
    {
        int N,S;
        cin>>N>>S;
        int x=0,y=S;
        if (S<=N)
        {
            cout << S << endl;
        }
        else
        {
            while (x<=y)
            {
                if (x+y==S && x<=N && y<=N)
                {
                    cout << y-x << endl;
                    break;
                }
                x+=1;
                y-=1;
            }
            
        }
    }
    
}