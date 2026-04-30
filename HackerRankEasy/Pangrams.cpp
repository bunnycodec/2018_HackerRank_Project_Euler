#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int i;
	string s;
	int arr[125] = {0};

	getline(cin, s);

	transform(s.begin(), s.end(), s.begin(), ::tolower);

	for(auto &i: s)
		arr[i]++;

	for(i=97; i<=122; i++)
		if(arr[i]==0)
		{
			cout << "not pangram";
			return 0;
		}

	cout << "pangram";

	return 0;
}
