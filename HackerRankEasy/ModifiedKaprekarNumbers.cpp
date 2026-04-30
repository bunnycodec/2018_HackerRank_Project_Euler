#include <bits/stdc++.h>

using namespace std;

// Complete the kaprekarNumbers function below.
void kaprekarNumbers(int p, int q) {

    long i, j=0, temp, ans, l, r, d;
    
    for(i=p; i<=q; i++)
    {
        temp = i;
        d=0;
        while(temp)
        {
            temp/=10;
            d++;
        }
        
        temp = (i*i);
        ans = pow(10, d);
        
        r = temp%ans;
        l = temp/ans;
        
        if((l+r)==i)
        {
            j=1;
            cout << i << " ";
        }
    }
    
    if(j==0)
        cout << "INVALID RANGE" << "\n";

}

int main()
{
    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    kaprekarNumbers(p, q);

    return 0;
}
