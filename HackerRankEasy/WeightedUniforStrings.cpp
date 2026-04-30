#include<iostream>
#include<limits>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int i=1, temp=0, n;
	string s;
	vector<int> sum;

	getline(cin, s);
	temp = s[0]-96;

	while(s[i])
	{
		sum.push_back(temp);
		if(s[i]==s[i-1])
			temp += (s[i]-96);
		else
			temp = s[i]-96;
		i++;
	}

	sum.push_back(temp);

	cin >> n;
	 
	for(i=0; i<n; i++)
	{
		cin >> temp; 
		if(find(sum.begin(), sum.end(), temp) != sum.end())
			cout << "Yes\n";
		else
			cout << "No\n";
	}

	return 0;
}
