#include<iostream>
using namespace std;
int main()
{
	long long n, a, sum1;
	cin >> n;
	sum1 = n * (n + 1) / 2;
	for (int i = 0; i < n - 1; i++)
	{
		cin >> a;
		sum1 -= a;
	}
	cout << sum1 << "\n";
	return 0;

}