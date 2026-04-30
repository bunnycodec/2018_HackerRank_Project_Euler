#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p, d, m, s, ans=0;
    cin >> p >> d >> m >> s;
    
    while(s>=p)
    {
        ans++;
        s -= p;
        
        if(p>m)
        {
            if(p-d<m)
                p = m;
            else
                p -= d;
        }
    }
    
    cout << ans << "\n";
    
    return 0;
}
