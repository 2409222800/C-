#include<iostream>
using namespace std;



struct student
{
	string name;

	int age = 0;
	int score = 0;
};


//将函数中的形参改为指针，可以减少内存空间，而且不会复制新的副本出来
void printStudents(const student *s)
{
	//s->age = 200; 加入const之后，一旦有修改的操作就会报错，可以防止我们的误操作
	cout << "姓名：" << s->name << " 年龄：" << s->age << " 分数：" << s->score << endl;
}




int main22()
{
	//结构体中const使用场景
  //作用：用const来防止误操作

	//创建结构体变量
	struct student s = { "张三",15 , 70 };

	//通过函数打印结构体变量信息
	printStudents(&s);//指针传递传递同样的信息只占四个字节，比值传递好。




	system("pause");

	return 0;
}