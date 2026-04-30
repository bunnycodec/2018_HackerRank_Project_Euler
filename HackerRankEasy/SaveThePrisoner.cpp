#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the saveThePrisoner function below.
long saveThePrisoner(long n, long m, long s) {
    
    int ans = (m+s-1)%n;
    
    if(ans == 0)
        ans = n;
    
    return ans;

}

int main()
{

    int t;
    long n,m,s;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    while(t--) 
    {
        cin >> n >> m >> s;
        long result = saveThePrisoner(n, m, s);

        cout << result << "\n";
    }

    return 0;
}

