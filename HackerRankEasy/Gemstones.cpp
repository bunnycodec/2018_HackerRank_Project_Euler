#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count=0, i, j;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    vector<string> arr(n);
    vector<int> ans(130);
    
    for(auto &it: arr)
    {
        getline(cin, it);
        set<char> a(it.begin(), it.end());
        
        for(auto &i: a)
            ans[i]++;
    }
    
    for(i='a'; i<='z'; i++)
        if(ans[i]==n)
            count++;
    
    cout << count;
    
    return 0;
}
