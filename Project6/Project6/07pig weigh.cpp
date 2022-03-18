#include<iostream>
using namespace std;


int main7()
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	cout << "请输入三头猪的重量" << endl;
	cin >> num1; cin >> num2; cin >> num3;
	if (num1 > num2 and num1 > num3) //&&也是与
	{
		cout <<"第一头猪最重，重为；" << endl;
	}
	else if (num2 > num1 and num2 > num3)
	{
		cout << "第二头猪最重，重为；" << endl;
	}
	else
	{
		cout << "第三头猪最重，重为；"<<num3 << endl;//bug 相等就是三猪重。
	}
	//三目运算符
	/*表达式1？表达式2：表达式3  
	解释如果表达式1的值为真，执行表达式2，并返回表达式2的结果。
	如果表达式1的值为假，执行表达式3，并返回表达式3的结果。
	用于a b比较，将变量大的付给c
	注意 在c++中三目运算符返回的是变量，可以继续赋值。
	*/
	/*switch语句
	语法：
	switch(表达式)//表达式可能会有2个或更多结果
	{
       case结果1:执行语句；
	   break；//退出当前分支结构

	   case结果2:执行语句；break;
	   ...
	   default:执行语句；break;
	}
	注意case里如果没有break，那么程序会一直向下执行！！！！
	 if和switch区别
	 switch缺点，判断时候只能是整型或者字符型，不可以是一个区间
	 优点，结构清晰，执行效率高

	*/
	/*循环结构
	语法：while（循环条件）{循环语句}
	解释：只要循环条件的结果为真，就执行循环语句。
	注意；不要出现死循环
	*/



	system("pause");

	return 0;
}