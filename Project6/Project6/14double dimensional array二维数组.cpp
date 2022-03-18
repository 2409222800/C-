#include<iostream>
using namespace std;

int add(int num1, int num2)//函数定义的时候，num1和num2并没有实际的数据，只是一个形式上的参数，简称形参
{
	int sum = num1 + num2;

	return sum;

}
void swap(int num3, int num4)//如果函数不需要返回值return，声明的时候可以写void
{
	cout<<"交换前：" << endl;
	cout << "num3 = " <<num3<< endl;
	cout << "num4 = " << num4 << endl;

	int temp = num3;
	num3 = num4;
	num4 = temp;

	cout << "交换后：" << endl;
	cout << "num3 = " << num3 << endl;
	cout << "num4 = " << num4 << endl;

}



int main14()
{
	//二维数组
	//二维数组就是在一维数组上，多加一个维度。
	/*定义方式
	* 1 数据类型 数组名[ 行数 ][ 列数 ];
	* 2 数据类型 数组名[ 行数 ][ 列数 ] = { {数据1, 数据2 } ，{数据3，数据4}}；
	* 3 数据类型 数组名[ 行数 ][ 列数 ] =  {数据1, 数据2，数据3，数据4}；
	* 4 数据类型 数组名[  ][ 列数 ] =  {数据1, 数据2，数据3，数据4}；
	第二种最直观
	*/
	int crr[2][3] = { {1,2,3} ,{4,5,6} };
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << crr[i][j] << endl;
		}
	}
	/*1 可以查看占用内存空间大小
	 * cout<<"二维数组占用内存空间为："<<sizeof(arr)<<endl;
	 * cout<<"二维数组第一行占用内存为："<<sizeof(arr[0])<<endl;
	 *
	 *2 可以查看二维数组的首地址
	 * cout<<"二维数组首地址："<<(int)arr <<endl;
	 * cout<<"二维数组第一行首地址为："<<(int)arr[0]<<endl;
	 * cout<<"二维数组第二行首地址为："<<(int)arr[1]<<endl;
	 *
	 * cout<<"二维数组第一个元素首地址："<<(int)&arr[0][0]<<endl;
	 * cout<<"二维数组第二个元素首地址："<<(int)&arr[0][1]<<endl;
	 */
	 //二维数组案例-考试成绩统计
	int scores[3][3] =
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};
	string names[3] = { "张三","李四","王五" };
	for (int v = 0; v < 3; v++)
	{
		int sum = 0;
		for (int d = 0; d < 3; d++)
		{
			sum += scores[v][d];
		}
		cout << names[v] << "的总分为： " << sum << endl;
	}
	/*函数
	* 概述
	* 作用：将一段经常使用的代码封装起来，减少重复代码。
	* 一个较大的程序，一般分为若干个程序块，每个模块实现特定的功能。
	* 定义：1返回值类型
	* 2函数名
	* 3参数列表
	* 4函数体语句
	* 5 return表达式
	* 语法：
	*  返回值类型 函数名（参数列表）
	* {
	     函数体语句

		 return表达式
	}
	*/

	//实现一个加法函数，功能是，传入两个整型数据，计算数据相加的结果，并且返回
/*	1 int
	2 add
	3 (int num1, int num2)
	4 int sum = num1 + num2 ;
	5 return sum;

	注意：把函数写在主程序外面，int main ( )  好像写在里面，要多加一行代码。
	*/
	
	//函数的调用
  //语法：函数名(参数)
  // a=10,b=20
  //函数调用时传入的参数称为实际参数，简称实参。

  /*值传递
  * 所谓值传递，就是函数调用时实参将数值传入给形参
  * 值传递时，如果形参发生改变，并不会影响实参
  */

	int c = 10;
	int d = 20;

	cout << "c = " << c << endl;
	cout << "d = " << d << endl;

	swap(c, d);

	cout << "c = " << c << endl;
	cout << "d = " << d << endl;
	//总结：值传递时，形参是改变不了实参的。

	system("pause");

	return 0;
}