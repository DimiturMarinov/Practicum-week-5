#include <iostream>
using namespace std;

int main(){
	int num;
	cin >> num;
	if (num >= 0 && num <= 10){
		for (int i = num; i <= 100; i++){
			if (i % 2 == 0 && i % 3 == 0){
				cout << i << " ";
			}
		}
	}
	cout << endl;
	

	system("pause");
	return 0;
}