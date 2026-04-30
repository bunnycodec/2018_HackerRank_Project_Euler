#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j, temp, min=INT_MAX;
    cin >> n;
    
    vector<int> arr(n);
    vector<int> ans;
    
    for(auto &it: arr)
        cin >> it;
    
    sort(arr.begin(), arr.end());
    
    for(i=1; i<n; i++)
    {
        if(abs(arr[i]-arr[i-1])==min)
        {
            ans.push_back(arr[i-1]);
            ans.push_back(arr[i]);
        }
        
        if(abs(arr[i]-arr[i-1])<min)
        {
            min = abs(arr[i]-arr[i-1]);
            ans.clear();
            ans.push_back(arr[i-1]);
            ans.push_back(arr[i]);
        }
    }
    
    for(auto &it: ans)
        cout << it << " ";
    
    return 0;
}
