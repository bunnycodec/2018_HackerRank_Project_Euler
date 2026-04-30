#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j, temp;
    cin >> n;
    vector<int> arr(n);
    
    for(auto &i: arr)
        cin >> i;
    
    for(i=1; i<n; i++)
    {
        temp=arr[i];
        j=i-1;
        while((temp<arr[j]) && (j>=0))
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=temp; 
        
        for(auto &t: arr)
            cout << t << " ";
        cout << "\n";
    }
    
    return 0;
}
