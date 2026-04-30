#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, i, j, flag;
    cin >> t;
    
    while(t--)
    {
        cin >> n;
        flag = 0;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        vector<string> arr(n);
        
        for(auto &i: arr)
        {
            getline(cin, i);
            sort(i.begin(), i.end());
        }
        
        for(i=0; i<n; i++)
        {
            for(j=0; j<n-1; j++)
            {
                if(arr[j][i]<=arr[j+1][i])
                    continue;
                else
                {
                    flag = 1;
                    break;
                }
            }
            if(flag == 1)
                break;
        }
        
        if(flag==1)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    
    return 0;
}
