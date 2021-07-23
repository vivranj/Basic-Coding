#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	vector<int> v;
	for (int i = 0; i < v.size(); i++)
	{
		int a;
		cin >> a;
		v.push_back(a);
	}
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i];
	}
	return 0;
}