#include<bits/stdc++.h>
using namespace std;

bool func1(const pair<int, int> &a, const pair<int, int> &b)
{
    if(a.second == b.second)
        return (a.first < b.first);
    else 
        return (a.second < b.second);
}

int main()
{
    int i, n, a, b;
    cin >> n;
    
    vector< pair<int, int> > arr;
    vector< pair<int, int> > ans;
    
    for(i=0; i<n; i++)
    {
        cin >> a >> b;
        arr.push_back(make_pair(a, b));
        ans.push_back(make_pair(i+1, a+b));
    }
    
    sort(ans.begin(), ans.end(), func1);
    
    for(auto &i: ans)
        cout << i.first << " ";
    
    return 0;
}
