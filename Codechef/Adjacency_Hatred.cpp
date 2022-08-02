#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int T;
    cin >>T;
    while (T--)
    {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        int count = 0;
        for (int i = 0; i < N; i++)
        {
            if (arr[i]%2==0)
            {
                count +=1;
            }
            else if (arr[i]%2==1)
            {
                count +=1;
            }
            
        }
        if (count == N)
        {
            cout << "-1";
        }
        int ans[N];
        int x;
        for (int i = 0; i < N; i++)
        {
            /* code */
        }
        
    }
    
}