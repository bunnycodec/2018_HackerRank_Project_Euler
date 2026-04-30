#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {

    int sea = 0, ans = 0, i, flag=1;
    vector<char> arr(s.begin(), s.end());
    
    for(i=0; i<arr.size(); i++)
    {
        if(arr[i]=='D')
        {
            if(sea==0 && flag==1)
            {
                flag=0;
                ans++;
            }
            sea--;
        }
        else
        {
            sea++;
            if(sea==0 && flag==0)
                flag=1;
        }
    }
    
    return ans;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
