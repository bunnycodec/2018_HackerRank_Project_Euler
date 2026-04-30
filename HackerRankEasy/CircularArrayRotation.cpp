#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, temp, n, k, q;
    
    cin >> n >> k >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    vector<int> a;
    vector<int> b;
    for(i=0; i<n; i++)
    {
        cin >> temp;
        a.push_back(temp);
    }
    
    if(k>n)
        k = k%n;
    
    for(i=n-k; i<n; i++)
        b.push_back(a[i]);
    
    for(i=0; i<(n-k); i++)
        b.push_back(a[i]);
    
    for(i=0; i<q; i++)
    {
        cin >> temp;
        cout << b[temp] << "\n";
    }
    
    return 0;
}
