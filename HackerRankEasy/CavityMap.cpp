#include <bits/stdc++.h>
using namespace std;

int  main() 
{
    int i, j, n, temp;
    cin >> n;
    char arr[101][101];

    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            cin >> arr[i][j];
    
    for(i=1; i<n-1; i++)
    {
        for(j=1; j<n-1; j++)
        {
            if((arr[i][j]>arr[i+1][j]) && (arr[i][j]>arr[i-1][j]) && (arr[i][j]>arr[i][j+1]) && (arr[i][j]>arr[i][j-1]))
                arr[i][j] = 'X';
        }
    }
    
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            cout << arr[i][j];
        cout << "\n";
    }

    return 0;
}
