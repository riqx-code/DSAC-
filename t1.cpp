#include <bits/stdc++.h>
using namespace std;

void printvector(vector<int> v)
{
	for (auto i : v)
	{
		cout << i << " ";
	}
	cout << "\n";
}

int characterReplacement(string s, int k)
{
	// get frequecy
	vector<int> freq(26, 0);
	int start = 'A';
	int max = 0;
	for (int i = 0; i < s.size(); i++)
	{
		freq[int(s.at(i)) - start] += 1;
		if (max < freq[int(s.at(i)) - start])
		{
			max = freq[int(s.at(i)) - start];
		}
	}
	int N = s.size();
	if (N - max <= k)
	{
		return N;
	}
	else
	{
		return max + k;
	}
}

int main()
{
	string s = "EPNCMLPKWFUPEVHTWIVLZGGI";
	string s1 = "ADBD",s2="ABAB";
	int start = 'A';
	for (auto i : s)
	{
		cout << i << " ";
	}
	cout << "\n";
	for (int i = 0; i < 26; i++)
	{
		cout << char(start + i) << " ";
	}
	cout << "\n";
	cout << characterReplacement(s1, 2) << endl;
}