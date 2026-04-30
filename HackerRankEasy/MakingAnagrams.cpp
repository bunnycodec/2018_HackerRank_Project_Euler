#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, ans=0;
    string s;
    
    getline(cin, s);
    vector<char> A(s.begin(), s.end());
    getline(cin, s);
    vector<char> B(s.begin(), s.end());
    
    for(i=0; i<A.size(); i++)
    {
        for(j=0; j<B.size(); j++)
        {
            if(A[i]==B[j])
            {
                B[j] = '$';
                break;
            }
        }
        if(j==B.size())
            ans++;
    }
    
    for(i=0; i<B.size(); i++)
        if(B[i]!='$')
            ans++;
    
    cout << ans << "\n";
    
    return 0;
}
