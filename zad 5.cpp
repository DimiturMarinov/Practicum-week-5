#include <iostream>

using namespace std;
int main(){
	int p, q;
	cin >> p;
	cin >> q;
	bool isPrime;
	for (p; p <= q; p++){
		isPrime = true;
		for (int i = 2; i < p; i++){
		if (p%i == 0){
			isPrime = false;
		}
	}
	if (isPrime) cout << p << " " << endl;
	}

	system("pause");
	return 0;
}