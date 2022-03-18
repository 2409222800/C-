#include<iostream>
using namespace std;
void swap(int a, int b);
void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

int main16()
{
	/*函数的分文件编写
 *
 */
	int a = 10;
	int b = 20;

	swap(a, b);
	system("pause");

	return 0;
}







