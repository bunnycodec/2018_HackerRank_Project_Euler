#include<bits/stdc++.h>

using namespace std;

int main()
{
    long t, i, n, b, w, bc, wc, z, ans=0;
    
    cin >> t;
    
    while(t--)
    {
        cin >> b >> w;
        cin >> bc >> wc >> z;
        
        if(bc==wc || z>=(abs(bc-wc)))
        {
            ans = (b*bc)+(w*wc);
        }
        else if(bc>(wc+z))
        {
            ans = (wc*w)+(b*(z+wc));
        }
        else if(wc>(bc+z))
        {
            ans = (bc*b)+(w*(z+bc));
        }
            
        cout << ans << "\n";
        ans=0;
    }
    
    return 0;
}
