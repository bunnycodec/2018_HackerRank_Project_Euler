#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,ans=0;
    cin >> n;
    vector<int> arr(n);
    
    for(auto &it: arr)
        cin >> it;
    
    for(int i=0; i<n-1; i++)
    {
        if(arr[i]%2==0)
            continue;
        else
        {
            arr[i]++;
            arr[i+1]++;
            ans += 2;
        }
    }
    
    if(arr[n-1]%2!=0)
        cout << "NO\n";
    else 
        cout << ans << "\n";
    
    return 0;
}
