#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n, i, j, temp, max=0, min=0;
    cin >> m >> n;
    
    vector<int> a;
    vector<int> b;
    
    for(i=0; i<m; i++)
    {
        cin >> temp;
        a.push_back(temp);
    }
    
    for(i=0; i<n; i++)
    {
        cin >> temp;
        b.push_back(temp);
    }
    
    max = *max_element(a.begin(),a.begin()+m);
    min = *min_element(b.begin(),b.begin()+n);
    temp = max;
    
    int count = 0;
    while(min>=max)
    {
        i=0;
        while(i<m)
        {
            if(max%a[i]==0)
                i++;
            else
                break;
        }
        
        j=0;
        while(j<n)
        {
            if(b[j]%max==0)
                j++;
            else
                break;
        }
        
        if(i==m && j==n)
            count++;
        
        max += temp;
    }
    
    cout << count << endl;
    
    return 0;
    
}
