#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    
    sort(s.begin(), s.end());
    
    int i, count=1, flag=1;
    for(i=1; i<s.length(); i++)
    {
        if(s[i]==s[i-1])
        {
            count++;
        }
        else
        {
            if(count%2==0)
            {
                count = 1;
                continue;
            }
            else
            {
                if(flag == 1)
                {
                    count = 1;
                    flag++;
                    continue;
                }
                else
                {
                    cout << "NO";
                    return 0;
                }
            }
        }
    }
    
    cout << "YES\n";
    
    return 0;
}
