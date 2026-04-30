#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, f1=1, f2=1, f3=1, f4=1, ans;
    string str;
    
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, str);
    
    for(i=0; i<str.size(); i++)
    {
        if(str[i]>='0' && str[i]<='9')
            f1=0;
        else if(str[i]>='A' && str[i]<='Z')
            f2=0;
        else if(str[i]>='a' && str[i]<='z')
            f3=0;
        else
            f4=0;
    }
    
    if(str.size()>=6)
    {
        ans = f1+f2+f3+f4;
    }
    else
    {
        ans = f1+f2+f3+f4;
        if(6-str.size() > ans)
            ans = 6-str.size();
    }
    
    cout << ans;
    
    return 0;
}
