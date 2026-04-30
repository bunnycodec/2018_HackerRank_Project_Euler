#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, k, max, ans, n, m, count;
    string s;
    
    cin >> n >> m;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    vector<string> a;
    
    for(i=0; i<n; i++)
    {
        getline(cin, s);
        a.push_back(s);
    }
    
    max = 0;
    ans = 0;
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            count = 0;
            for(k=0; k<m; k++)
            {
                if(a[i][k]=='1' || a[j][k]=='1')
                    count++;
            }
            if(count>max)
            {
                ans = 1;
                max = count;
            }
            else if(count==max)
                ans++ ;
        }
    }
    
    cout << max << "\n" << ans << "\n";

    return 0;
}
