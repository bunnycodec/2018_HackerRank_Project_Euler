#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, k, n, d, ans=0;
    vector<int> arr;

    cin >> n >> d;
    
    for (i = 0; i < n; i++) {
        cin >> j;
        arr.push_back(j);
    }

    for(i=0; i<arr.size(); i++)
        for(j=i+1; j<arr.size(); j++)
            if(arr[j]-arr[i] == d)
                for(k=j+1; k<arr.size(); k++)
                        if(arr[k]-arr[j] == d)
                            ans++;

    cout << ans << "\n";

    return 0;
}
