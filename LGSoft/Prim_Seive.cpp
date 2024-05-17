#include<iostream>
#include<bits/stdc++.h>
using  namespace std;
const int N1 = 1e5 + 10;
#define int long long
vector<int>P;

void Prime_Seive(int N) {

	bool Prime[N1] = {0};
	memset(Prime, 1, sizeof(Prime));//Initialise

	for (int i = 3; i * i <= N; i += 2) {

		if (Prime[i] == 1) {
			//Current i number is a Prime Number and Multiples ko 0 kardo.

			for (int j = i * i; j <= N; j += i) {

				Prime[j] = 0;
			}

		}
	}


	cout << 2 << " ";
	P.push_back(2);

	for (int i = 3; i <= N; i += 2) {
		if (Prime[i] == 1) {
			cout << i << " ";
			P.push_back(i);
		}
	}

}




int32_t main() {

	int N;
	cin >> N;
	Prime_Seive(N);
	cout << endl;


	//Iterate over P:

	for (int x : P) {
		cout << x << " ";
	}
	cout << endl << endl;

	for (int i = 0; i < P.size(); i++) {

		int temp = P[i];
		int flag = 0;

		while (temp > 0) {
			int digit = temp % 10;
			if (digit != 2 and digit != 3 and digit != 5 and digit != 7) {
				flag = 1;
				break;
			}
			temp = temp / 10;
		}

		if (flag == 0) {
			cout << P[i] << endl;
		}

	}

}


//Frequency Of Characters.













