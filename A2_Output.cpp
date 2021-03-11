#include <iostream>
using namespace std;
int main()
{int a;
cin >> a; 
int n;
cin >> n;


int arr[n];

for(int i = 0; i < n; i++){
	cin >> arr[i];
}
for(int i = 0; i < n; i++){
	if(a == arr[i])cout << a;
}


return 0;
}
