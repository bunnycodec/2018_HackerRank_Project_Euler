#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, n, temp;
    
    cin >> n;
    
    vector<int> a;
    for(i=0; i<n; i++)
    {
        cin >> temp;
        a.push_back(temp); 
    }
    
    sort(a.begin(), a.end());
    
    int max = 0, ans = 1, flag = 0;
    for(i=1; i<n; i++)
    {
        if(a[i]==a[i-1] || a[i]==(a[i-1]+1)) 
        {
            if(a[i]==a[i-1])
                ans++;
            else 
            {
                flag++;
                if(flag>1)
                {
                    if(ans>max)
                        max = ans;
                    ans = 1;
                    flag = 0;
                }
                else
                    ans++;
            }
        }
        else 
        {
            if(ans>max)
                max = ans;
            ans = 1;
            flag = 0;
        }
    }
    
    if(ans>max)
        max = ans;
    
    cout << max;

    return 0;
}
