#include <bits/stdc++.h>                    //https://www.codechef.com/START11C/problems/FACEDIR
using namespace std;
int main()
{
    int T;
    cin >>T;
    while (T--)
    {
        int X;
        cin>>X;
        if (X%4 == 0)
        {
            cout<<"North"<<endl;
        }
        
    else if (X%4 == 1)
    {
        cout<<"East"<<endl;
    }
    
    else if (X%4 == 2)
    {
        cout << "South"<<endl;
    }
    else if (X%4 == 3)
    {
        /* code */cout << "West"<<endl;
    }
    
    }
    
}