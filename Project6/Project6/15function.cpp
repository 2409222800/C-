#include<iostream>
using namespace std;


//函数样式
	//1无参无返
void test01()
{
	cout << "this is test01" << endl;
 }
	//2有参无返
void test02(int a)
{
	cout << "this is test02 a = "<< a << endl;
 }
	//3无参有返
int test03()
{
	cout << "this is test03  " << endl;
	return 1000;
 }
	//4有参有返

//函数声明 提前告诉编译器函数的存在，可以利用函数的声明。这样可以不用在main前加定义，可在后加。
int max(int a, int b);

int main15()
{
	//函数样式
	//1无参无返
	test01();
	//2有参无返
	test02(100);
	//3无参有返
 int num1 =	test03();
 cout << "num1 = " << num1 << endl;
	//4有参有返
 /*函数的声明
 * 作用：告诉编译器函数名称及如何调用函数。函数的实际主体可以单独定义。
 * 
 * 函数的声明可以多次，但是函数的定义只能有一次
 * 
 */
 /*int max(int a, int b)
  {
	 return a > b ? a : b;//定义在下面。
 }*/
 int a = 100;
 int b = 99;
 cout << max(a, b) << endl;//在main里用，有点。。。。。

	system("pause");

	return 0;
}

int max(int a, int b)
  {
	 return a > b ? a : b;//定义在这里。
 }
