#include <bits/stdc++.h>

using namespace std;

// Complete the appendAndDelete function below.
string appendAndDelete(string s, string t, int k) {

    string result;
    
    if(s==t)
        result = (k >= s.length()*2 || k % 2 == 0) ? "Yes" : "No";
    
    else
    {
        int matchingCharacters = 0, i;

        for(i = 0; i < min(s.length(), t.length()); i++)
        {
            if(s[i] != t[i]) 
                break;
            
            matchingCharacters++;
        }

        int nmcS = s.length() - matchingCharacters;
        int nmcT = t.length() - matchingCharacters;

        bool conditionA = nmcS + nmcT == k;
        bool conditionB = (nmcS + nmcT < k && (nmcS + nmcT - k) % 2 == 0 );
        bool conditionC = s.length() + t.length() <= k;

        result = (conditionA || conditionB || conditionC) ? "Yes" : "No";

    }
    
    return result;
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string t;
    getline(cin, t);

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = appendAndDelete(s, t, k);

    fout << result << "\n";

    fout.close();

    return 0;
}
