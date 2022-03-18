#include<iostream>
using namespace std;
#include<string> //不写也得，可能更新了


//标识符命名规则
//标识符不可以是关键字
//标识符是由字母，数字，下划线构成。
//标识符第一个字符只能是字母或下划线
//标识符是区分大小写
//给变量命名最好做到见名知意

int main5()
{
	cout << "short 类型所占内存空间为;  " << sizeof(short) << endl;
//其他类型类似,放short的地方也可以换成放变量名.语法sizeof(数据类型/变量)
	//1单精度float
	//2双精度double
	//默认情况下 输出一个小数，会显示出6位有效数字

	float f1 = 3.1415926f;//不加f默认为双精度，还要转换
		cout << "f1 =" << f1 << endl;
		double d1 = 3.1415926;
		//科学计数法
		float f2 = 3e2; //3*10^2
	//字符型 语法： char ch = 'a';
		//注意1：在显示字符型变量时，用单引号将字符括起来，不要用双引号
		//2 单引号内只能有一个字符，不可以是字符串
		//1字符型变量的创建方式
		char ch = 'a';
		//4字符型变量对应ascii编码 a-97 A-65
		//转义字符 \n \t \\
		//\t 整齐地输出数据
		cout << "hello world\n";  //c语言中的打法
		//1、c风格字符串 注意事项 char 字符串名 []
		//2、等号后面要用双引号 包含起来字符串
		char str[] = "hello world";
		cout << str << endl;
		//2、c++风格字符串
		//包含一个头文件 
		string  str2 = "hello world";
		cout << str2 << endl;

		cout << (int)ch << endl;
		cout << "d1 = "<< d1 << endl;
		cout << "f2 = "  << f2 << endl;
		//bool类型


	system("pause");

	return 0;
}