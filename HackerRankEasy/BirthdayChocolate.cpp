#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, n, d, m, count=0, temp, j, sum;
    
    cin >> n;
    vector<int> a;
    
    for(i=0; i<n; i++)
    {
        cin >> temp;
        a.push_back(temp);
    }
    
    cin >> d >> m;
    
    for(i=0; i<=(n-m); i++)
    {
        sum=0;
        for(j=i; j<i+m; j++)
            sum += a[j];
        if(sum==d)
            count++;
    }
    
    cout << count << endl;
    
    return 0;
}
