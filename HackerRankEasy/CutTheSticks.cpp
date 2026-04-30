#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, temp, min, i;
    cin >> n;

    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }
    
    vector<int> ans;
        
    while(arr.size()>1)
    {
        ans.push_back(arr.size());
        min = *min_element(arr.begin()+0, arr.begin()+arr.size());
        for(i=0; i<arr.size(); i++)
        {
            arr[i] = arr[i] - min;
            if(arr[i]==0)
            {
                arr.erase(arr.begin()+i);
                i--;
            }
        }
    }
    
    for(i=0; i<ans.size(); i++)
        cout << ans[i] << "\n";
    if(arr.size()==1)
        cout << 1;

    return 0;
}
