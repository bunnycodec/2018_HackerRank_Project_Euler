#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, m, n, i, j;
    cin >> t;
    
    while(t--)
    {
        cin >> m >> n;
        vector<int> arr(n);
        
        for(auto &i: arr)
            cin >> i;
        
        int flag = 0;
        for(i=0; i<n-1; i++)
        {
            for(j=i+1; j<n; j++)
                if(arr[i]+arr[j] == m)
                {
                    cout << i+1 << " " << j+1 << "\n";
                    flag = 1;
                    break;
                }
            if(flag==1)
                break;
        }
    }
    
    return 0;
}
