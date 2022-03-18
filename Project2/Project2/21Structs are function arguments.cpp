#include<iostream>
using namespace std;

struct student
{
	string name;
	
	int age = 0;//问题解决，初始化就行了int i叫定义 int i = 0叫初始化
	int score = 0;
};

//打印学生信息函数
//1、值传递
void printStudent1(struct student s)
{
	s.age = 100;
	cout << "子函数中 姓名： " << s.name << " 年龄：" << s.age << " 分数：" << s.score;
}
//2地址传递
void printStudent2(struct student * p)
{
	p->age = 200;
	cout << "子函数2中 姓名：" << p->name << " 年龄：" << p->age << " 分数：" << p->score << endl;
}


int main21()
{ /*1结构体做函数参数
	作用：将结构体作为参数向函数中传递
	 传递方式有两种：
	值传递
	地址传递*/

	//将学生传入到一个参数中，打印学生身上的所有信息

	//创建结构体变量
	struct student s;
	s.name = "张三";
	s.age = 20;
	s.score = 85;

	//printStudent1(s);
	printStudent2(&s);
	//cout << "main函数中打印 姓名：" << s.name << " 年龄：" << s.age << " 分数： " << s.score << endl;
	//上面那一行起对比作用
	//值传递不改变，地址传递改变。打印和cout得出数据不同
	//总结：如果不想修改主函数中的数据，用值传递，反之用地址传递
	system("pause");

	return 0;
}
