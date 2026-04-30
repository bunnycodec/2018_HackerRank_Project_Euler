#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, max;
    cin >> n;
    vector<int> arr(n);
    
    for(auto &it: arr)
        cin >> it;
    
    max = *max_element(arr.begin()+0, arr.begin()+n);
    vector<int> ans(max+1, 0);
    
    for(auto &it: arr)
        ans[it]++;
    
    for(auto &it: ans)
        cout << it << " ";
        
    return 0;
}
