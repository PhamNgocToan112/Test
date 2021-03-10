#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b;
	
	for (int i = 0;i < b ;i++) 
	{
		cin >> c;
		if (a == c) cout << c << " ";
	}
	return 0;	
}
