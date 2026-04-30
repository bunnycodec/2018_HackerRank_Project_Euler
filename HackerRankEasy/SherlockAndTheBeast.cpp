#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, a, b, t;
    cin >> t;
    
    while(t--)
    {
        cin >> n;
        
        b=n%3;
        a=n-b;
        
        while(a>=0)
        {
            if(b%5==0 || b==0)
            {
                for(i=0; i<a; i++)
                    cout << "5";\
                for(i=0; i<b; i++)
                    cout << "3";
                cout << "\n";
                break;
            }
            
            a -= 3;
            b += 3;
            
            if(a<0)
            {
                cout << "-1\n";
                break;
            }
        }
        
    }
    
    return 0;
}
