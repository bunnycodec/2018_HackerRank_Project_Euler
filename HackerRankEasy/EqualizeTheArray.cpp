#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, temp, max;
    int arr[101] = {0};
    
    cin >> n;
    
    for(i=0; i<n; i++)
    {
        cin >> temp;
        arr[temp]++;
    }
    
    max = *max_element(arr, arr+101);
    
    cout << n-max;
    
    return 0;
    
}
