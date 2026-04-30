#include <bits/stdc++.h>
using namespace std;

bool check(string a, string b){
    return a.length() == b.length() ? a < b : a.length() < b.length();
}

int main() 
{
    int n, i;
    string s;
    
    cin >> n;
    vector<string> arr;
    
    for(i = 0; i < n; i++)
    {
        cin >> s;
        arr.push_back(s);
    }
    
    sort(arr.begin(),arr.end(),check);
    
    for(i=0; i<arr.size(); i++)
        cout << arr[i] << endl;
    
    return 0;
}
