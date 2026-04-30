#include <bits/stdc++.h>

using namespace std;

int main()
{
    int score, i, n, max, min, cmin=0, cmax=0;
    
    cin >> n;
    
    vector<int> a;
    
    for(i=0; i<n; i++)
    {
        cin >> score;
        a.push_back(score);   
    }
    
    max = a[0];
    min = a[0];
    
    for(i=1; i<n; i++)
    {
        if(a[i]>max)
        {
            max = a[i];
            cmax++;
        }
        
        if(a[i]<min)
        {
            min = a[i];
            cmin++;
        }
    }
    
    cout << cmax << " " << cmin << endl;
    
    return 0;
}
