#include <iostream>
using namespace std;
int main(){
	int num;
	cin >> num;
	bool isPrime = true;
	if (num > 0){
		for (int i = 2; i*i <= num; i++){
			if (num%i == 0){
				isPrime = false;
				cout << "not prime, bad luck, Brian" << endl;
			}
		}
	}
	if (isPrime){
		cout << "the number is prime :) " << endl;
	}

	system("pause");
	return 0;
}