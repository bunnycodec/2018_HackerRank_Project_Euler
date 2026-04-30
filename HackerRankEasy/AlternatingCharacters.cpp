#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ans, i;
    string s;
    char check;
    
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    while(n--)
    {
        getline(cin, s);
        vector<char> a(s.begin(), s.end());
        
        ans=0;
        check = a[0];
        for(i=1; i<a.size(); i++)
        {
            if(check!=a[i])
                check = a[i];
            else
                ans++;
        }
        cout << ans << "\n";
    }
        
    return 0;
}
