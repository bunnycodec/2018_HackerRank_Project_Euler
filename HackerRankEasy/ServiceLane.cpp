#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, i, ans, m;
    cin >> n >> t;
    vector<int> arr;
    
    for(i=0; i<n; i++)
    {
        cin >> ans;
        arr.push_back(ans);
    }
    
    while(t--)
    {
        ans = 999999;
        cin >> n >> m;
        
        for(i=n; i<=m; i++)
        {
            if(arr[i]<ans)
                ans = arr[i];
        }
        
        cout << ans << "\n";
    }
    
    return 0;
}
