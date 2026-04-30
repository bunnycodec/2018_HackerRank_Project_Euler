#include<bits/stdc++.h>

using namespace std;

int main()
{
    int jump, n, i, temp;
    
    cin >> n;
    
    vector<int> ans;
    
    for(i=0; i<n; i++)
    {
        cin >> temp;
        ans.push_back(temp);
    }
    
    jump=0;
    temp=0;
    while(temp<(n-1))
    {
        if(ans[temp+2]!=1 && (temp+2)<=(n-1))
            temp += 2;
        else
            temp++;
        jump++;
    }
    
    cout << jump;
    
    return 0;
}
