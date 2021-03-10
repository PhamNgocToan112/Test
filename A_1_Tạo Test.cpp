#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
	srand((unsigned)time(NULL));
	int n = rand() % 100 + 1;
	cout << n << endl;
	
	int a[n];
	for (int i = 0; i < n; i++) a[i] = rand() % 100 + 1;
	for (int i = 0; i < n; i++) cout << a[i] << " ";
	cout << endl;
	
	int tmp;
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(a[i] > a[j]){
				
				tmp = a[i];
				a[i] = a[j];	
				a[j] = tmp; 
			}
		}
	}
	
	for (int i = 0; i < n; i++) cout << a[i] << " ";
	return 0;
}
