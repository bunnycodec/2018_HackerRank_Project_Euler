#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q, i;
    string s, rs;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    while(q--)
    {
        getline(cin, s);
        rs = s;
        reverse(rs.begin(), rs.end());
        
        for(i=0; i<s.length()-1; i++)
        {
            if(abs(s[i]-s[i+1]) == abs(rs[i]-rs[i+1]))
                continue;
            {
                cout << "Not Funny\n";
                break;
            }
        }
        
        if(i==s.length()-1)
            cout << "Funny\n";
        
    }
    
    return 0;
}
