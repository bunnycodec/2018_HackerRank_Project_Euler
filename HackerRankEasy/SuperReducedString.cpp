#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i=0;
    string str;
    getline(cin, str);
    
    while(str[i]!='\0')
    {
        if(str[i]==str[i+1])
        {
            str.erase(i,2);
            if(i>0)
                i--;
        }
        else 
            i++;
    }
    
    if(str.size()==0)
        cout << "Empty String";
    else 
        cout << str;
    
    return 0;
}
