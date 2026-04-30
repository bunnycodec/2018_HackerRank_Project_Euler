#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q, ans;
    string s, st = "hackerrank";
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
    while(q--)
    {
        getline(cin, s);
        
        int k=0;
        for(auto &i: s)
        {
            if(st[k]==i)
                k++;
        }
        
        if(k==10)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
        
    return 0;
}
