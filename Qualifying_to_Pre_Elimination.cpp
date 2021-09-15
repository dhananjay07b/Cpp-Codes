#include <bits/stdc++.h>                //https://www.codechef.com/SDPCB21/problems/QUALPREL
using namespace std;
int main()
{
    int T;
    cin>>T;
    while (T--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr + n, greater<int>());
        int count =0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= arr[k-1])
            {
                count+=1;
            }
        }
        cout << count << endl;
    }
    
}