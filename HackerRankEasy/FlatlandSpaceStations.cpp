#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, n, m, ans=0, max;
    
    vector<int> arr;
    
    cin >> n >> m;
    
    for(i=0; i<m; i++)
    {
        cin >> j;
        arr.push_back(j);
    }
    
    sort(arr.begin(), arr.end());
    ans = (n-1)-arr[m-1];
    j = arr[0]-0;
    if(j>ans)
        ans=j;
    
    for(i=0; i<arr.size()-1; i++)
    {
        if((arr[i+1]-arr[i])/2 > ans)
            ans = (arr[i+1]-arr[i])/2;
    }
    
    cout << ans << "\n";
        
    return 0;
}
