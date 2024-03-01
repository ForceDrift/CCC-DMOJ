#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 
int main()
{	
	
	int type, size, dmoj, peg; 
	cin >> type >> size; 
	vector<int> a(size), b(size);
	for (int i = 0; i < size; i++) {
		cin >> dmoj;
		a[i] = dmoj; 
	}
	for (int i = 0; i < size; i++) {
		cin >> peg;
		b[i] = peg;
	}

	

	sort(b.begin(), b.end());
	sort(a.begin(), a.end());
	long long sum = 0; 

	for (int i = 0; i < size; i++) {
		if (type == 1) {
			sum += max(a[i], b[i]);
		}
	};
	reverse(a.begin(), a.end());

	for (int i = 0; i < size; i++) {
		if (type == 2) {
			
			sum += max(a[i], b[i]);
		}
	};
	
	cout << sum; 
}