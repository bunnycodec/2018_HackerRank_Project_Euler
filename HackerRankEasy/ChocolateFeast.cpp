#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, c, m, ans = 0, wrap, temp;
    cin >> t;
    
    while(t--)
    {
        cin >> n >> c >> m;
        wrap = n/c;
        ans = wrap;
        
        while(wrap>=m)
        {
            temp = (wrap/m);
            ans += temp;
            wrap = (wrap%m);
            wrap += temp;
        }
        
        cout << ans << "\n";
    }
    
    return 0;
}
