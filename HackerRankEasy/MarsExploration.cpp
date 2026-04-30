#include<iostream>
#include<vector>
#include<set>
#include<limits>

using namespace std;

int main()
{
	int i=0, j=0, ans=0;
	string s;
	char arr[] = {'S', 'O', 'S'};
	getline(cin, s);

	while(i<s.length())
	{
		if(s[i]!=arr[j])
			ans++;

		if(j==2)
			j = 0;
		else
			j++;
		i++;
	}

	cout << ans;

	return 0;
}
