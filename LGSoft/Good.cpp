#include<iostream>
#include<bits/stdc++.h>
using  namespace std;
#define int long long



bool IsPrime(int x) {

	if (x < 2) {
		return false;
	}

	if (x % 2 == 0) {
		if (x == 2) {
			return true;
		} else {
			return false;
		}

		//return x == 2;
	}

	for (int i = 3; i <= sqrt(x); i += 2) {

		if (x % i == 0) {
			return false;
		}

	}
	return true;
}


int32_t main() {
	int n;
	cin >> n;


	//Check if This number is Prime or not.


	if (IsPrime(n) == 0) {
		cout << "No" << endl;
		return 0;
	}


	int temp = n;
	while (temp > 0) {
		int digit = n % 10;
		if (digit != 2 and digit != 3 and digit != 5 and digit != 7) {
			cout << "No" << endl;
			return 0;
		}
		temp = temp / 10;
	}


	cout << "Yes" << endl;

}



//Prime Number Logic:

// 1, n: (2 ---- n - 1)


// n---->sqrt(n)


// x*y=n;

// x<=sqrt(n);
// y>=sqrt(n);


















