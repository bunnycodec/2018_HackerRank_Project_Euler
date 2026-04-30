#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, j, temp, min= 999999;
    cin >> n;
    vector<int> arr;
    
    for(i=0; i<n; i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }
    
    for(i=0; i<arr.size()-1; i++)
    {
        for(j=i+1; j<arr.size(); j++)
        {
            if(arr[i]==arr[j] && j-i<min)
                min = j-i;
        }
    }
    
    if(min == 999999)
        cout << "-1" << "\n";
    else
        cout << min << "\n";
    
    return 0;
}
