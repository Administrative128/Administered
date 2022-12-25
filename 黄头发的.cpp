#include <iostream>
using namespace std;
int n[15];
int main()
{
	for (int i = 1; i <= 10; i++)
	{
		int x;
		cin >> x;
		n[x]++;
	}
	int m = -1, po;
	for (int i = 1; i <= 10; i++)
	{
		if (n[i] > m)
		{
			m = n[i];
			po = i;
		}
	}
	cout << po;
	return 0;
}
