#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long  n, ans = 3;

    cin >> n;
    
    while (n > ans)
    {
        n -= ans;
        ans *= 2;
    }
    cout << ans - n + 1 << "\n";

    
    return 0;
}
