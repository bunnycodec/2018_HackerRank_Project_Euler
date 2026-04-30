#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, ans=0, n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string s;
    
    getline(cin, s);
    vector<char> arr(s.begin(), s.end());
    
    for(i=1; i<n-1; i++)
    {
        if(arr[i]=='1' && arr[i+1]=='0' && arr[i-1]=='0')
        {
            ans++;
            i+=2;
        }
    }
    
    cout << ans << "\n";
    
    return 0;
}
