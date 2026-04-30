
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n, i;
    cin >> m >> n;
    vector<int> arr(n);
    
    for(auto& i: arr)
        cin >> i;
    
    for(i=0; i<n; i++)
        if(arr[i]==m)
            break;
    
    cout << i;
    
    return 0;
}
