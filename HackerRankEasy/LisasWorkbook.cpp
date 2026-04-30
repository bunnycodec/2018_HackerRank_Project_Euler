#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, k, ans=0, start, end, sp=0;
    cin >> n >> k;
    vector<int> arr;
    
    arr.push_back(0);
    for(i=0; i<=n; i++)
    {
        cin >> ans;
        arr.push_back(ans);
    }
    
    ans = 1;
    for(i=1; i<=n; i++)
    {
        start = end = 0;
        while(end != arr[i])
        {
            start = (end+1);
            end = start + (k-1);
            if(end>arr[i])
                end = arr[i];
             
            if(ans>=start && ans<=end)
                sp++;
            ans++;
        }
    }
    
    cout << sp << "\n";
        
    return 0;
}
