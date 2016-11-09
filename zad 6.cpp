#include <iostream>
using namespace std;
int main(){
	int row;
	cin >> row;
	int num = 1;

	for (int i = 1;i <= row;i++)
	{
		for (int j = 1;j <= i ; j++)
		{
			cout << num;
			num++;
		}
		cout << endl;
	}
	system("pause");
	return 0;

}