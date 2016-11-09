#include <iostream>
using namespace std;

int main(){
	int num1, num2;
	cin >> num1;
	cin >> num2;
	int multiplic = 1;
	for (int i = num1; i <= num2; i++){
		multiplic = multiplic*i;
	}
	cout << multiplic << endl;


	system("pause");
	return 0;
}