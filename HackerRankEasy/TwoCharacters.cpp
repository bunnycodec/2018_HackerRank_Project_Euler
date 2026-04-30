#include<iostream>
#include<vector>
#include<set>
#include<limits>

using namespace std;

int check(char x, char y, string s)
{
	int i;
	string temp;
	for(i=0; i<s.length(); i++)
	{
		if(s[i] == x)
			temp = temp + x;
		if(s[i] == y)
			temp = temp + y;
	}

	for(i=0; i<temp.length()-1; i++)
		if(temp[i]==temp[i+1])
			return 0;
	
	return temp.length();
}

int main()
{
	int i, j, n, temp, ans=0;
	string s;
	set<char> ch;
	set<char>::iterator itr, itr2;

	cin >> n;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	getline(cin, s);
	vector<char> arr(s.begin(),s.end());

	for(auto &it: arr)
		ch.insert(it);

	for(itr = ch.begin(); itr != ch.end(); itr++)
	{
		for(itr2 = ch.begin(); itr2 != ch.end(); itr2++)
		{
			temp = check(*itr, *itr2, s);
			if(temp > ans)
				ans = temp;
		}
	}

	cout << ans;

	return 0;
}
