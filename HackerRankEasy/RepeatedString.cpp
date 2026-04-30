#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {

    long i, count=0, l = s.length(), ans;
    
    for(i=0; i<s.length(); i++)
    {
        if(s[i]=='a')
            count++;
    }
    
    ans = n/s.length();
    ans = count*ans;
    
    for(i=0; i<(n%s.length()); i++)
    {
        if(s[i]=='a')
            ans++;
    }
    
    return ans;
    
}

int main()
{
    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    cout << result << "\n";

    return 0;
}
