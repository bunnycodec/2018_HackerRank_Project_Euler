#include <bits/stdc++.h>

using namespace std;

// Complete the utopianTree function below.
int utopianTree(int n) {

    if(n==0)
        return 1;
    int flag=0, ans=1;
    for(int i=1; i<=n; i++)
    {
        if(flag==1)
        {
            ans +=1;
            flag=0;
        }
        else
        {
            ans *=2;
            flag=1;
        }
    }
     return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = utopianTree(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
