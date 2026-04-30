#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, m;
    string s;
    char ch;
    
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, s);
    cin >> m;
    
    for(auto &it: s)
    {
        if(isalpha(it))
        {
            ch = isupper(it)?'A':'a';
            it = ch + (it - ch + m)%26;
        }
    } 
    
    cout << s;
    
    return 0;
}
