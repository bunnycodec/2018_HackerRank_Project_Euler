#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s) {
    
    vector<char> data(s.begin(), s.end());
    char x = data[data.size()-2];
    
    if(x=='A')
    {
        if(data[0]=='1' && data[1]=='2')
        {
            data[0] = '0';
            data[1] = '0';
        }
    }
    
    if(x=='P')
    {
        if(data[0]!='1' || data[1]!='2')
        {
            int a = data[0] - '0';
            int b = data[1] - '0';
            a = ((a*10)+b) + 12;
            b = a;
            a = a/10;
            b = b%10;
            data[0] = '0' + a;
            data[1] = '0' + b;
        }
    }
    data.pop_back();
    data.pop_back();
    
    string ans(data.begin(), data.end());
    
    return ans;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
