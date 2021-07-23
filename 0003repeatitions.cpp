#include<iostream>
#include<string>
using namespace std;
int main()
{
	int c = 1, c1 = 0;
	string s;
	cin >> s;
	int len = s.size();
	for (int i = 0; i < len - 1; i++)
	{
		if (s[i + 1] == s[i])
		{
			c++;
		}
		else
		{
			c1 = max(c, c1);
			c = 1;
		}
	}
	cout << max(c, c1) << "\n";
	return 0;
}