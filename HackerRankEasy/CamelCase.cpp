#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    
    int ans=0;
    for(auto &it: s)
    {
        if(isupper(it))
            ans++;
    }
    
    cout << ans+1 << "\n";
    
    return 0;
}
