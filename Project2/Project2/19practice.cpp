#include<iostream>
#include<string>
using namespace std;

void bubbleSort(int* arr, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			//如果j>j+1的值  交换数字
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
//打印数组
void printArray(int * arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
 }

//1创建学生数据类型：学生包括(姓名，年龄，分数)
//自定义数据类型，一些类型集合组成的一个类型
//语法 struct 类型名称 {成员列表}

struct Student
{
	//成员列表

	//姓名
	string name;
	//年龄
	int age{};
	//分数
	int score{};//按老师打的出错了，看官方教程就改过来就没有问题了。不过只可以第一种
	//知道了三种错误。建议的内容
	/*编译器警告
	链接器工具错误 
	编译器错误 */

	
	Student() {};
 };//在分号左边打s3顺便创建结构体变量


int main19()
{
	//1先创建数组
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };

	//数组长度
	int len = sizeof(arr)/ sizeof(arr[0]);
	//2创建函数，实现冒泡排序
	bubbleSort(arr, len);
	//3打印排序后的数组
	printArray(arr, len);

	//8结构体
	/*结构体属于用户自定义的数据类型，允许用户存储不同的数据类型
	* 语法：struct 结构体名 {结构体成员列表}；
	* 通过结构体创建变量的方式有三种；
	* struct结构体名 变量名
	* struct结构体名 变量名 = {成员1值，成员2值...}
	* 定义结构体时顺便创建变量
	*/

 //1 struct Student s1
	//struct关键字可以省略
	 Student s1;
	//给s1属性赋值，通过.访问结构体变量中的属性
	s1.name = "张三";
	s1.age = 18;
	s1.score = 100;

	cout << " 姓名： " << s1.name << " 年龄： " << s1.age << " 分数： " << s1.score << endl;

	//2 struct Student s2 = {...}
	/*struct Student s2 = {"李四",19,80};
	cout << "姓名：" << s2.name << " 年龄：" << s2.age << " 分数：" << s2.score << endl;*/
	
	
	//3在定义结构体时顺便创建结构体变量
	/*s3.name = "王五";
	s3.age = 20;
	s3.score = 60;
	cout << "姓名：" << s3.name << " 年龄：" << s3.age << " 分数：" << s3.score << endl;*/

  //第二种和第三种都报错，不懂为什么
 /*总结：定义结构体时的关键字struct，不可省略
	创建结构体变量时，关键字struct可以省略
	结构体变量利用操作符"."访问成员*/
	system("pause");

	return 0;
}
