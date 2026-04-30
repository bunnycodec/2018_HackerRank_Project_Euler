#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    int n, i;
    
    vector<int> a;
    
    a.push_back(0);
    for(i=1; i<=26; i++)
    {
        cin >> n;
        a.push_back(n);
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    getline(cin, str);
    
    vector<char> string(str.begin(), str.end());
    
    int max=0;
    for(i=0; i<string.size(); i++)
    {
        if(a[string[i]-96]>max)
            max = a[string[i]-96];
    }
    
    cout << (max*string.size()) << endl;

    return 0;
}

