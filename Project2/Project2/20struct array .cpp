#include<iostream>
using namespace std;

struct Student
{

	string name;
	
	int age;
	
	int score;
	
};

//上上上。。节补充数组名即为数组的首地址，不需要&符
struct student
{
	string name;
	int age;
	int score;
};

//定义老师结构体
struct teacher
{
	int id;
	string name;
	int age;
	struct student stu;
  };

int main20()
{ //结构体数组
	/*作用：将自定义的结构体放入到数组中方便维护
	语法：struct 结构体名 数组名[元素个数]={ {},{},...{}}*/

	struct Student stuArray[3] =
	{
		{"张三",18,100},
		{"李四",28,99},
		{"王五",38,66}
	};
	//3给结构体数组中的元素赋值
	stuArray[2].name = "赵六";
	stuArray[2].age = 80;
	stuArray[2].score = 60;

	//4遍历结构体数组
	for (int i = 0; i < 3; i++)
	{
		cout << "姓名：" << stuArray[i].name 
			 << " 年龄：" << stuArray[i].age 
			 << " 分数：" << stuArray[i].score << endl;
	}

	//结构体指针
 /* 作用：通过指针访问结构体中的成员
	  利用操作符->可以通过结构体指针访问结构体属性*/

	//1创建学生结构体变量
	student s = { "张三",18,100 };
	//2通过指针指向结构体变量
	student* p = &s;
	//3通过指针访问结构体变量中的数据
	//通过结构体指针 访问结构体中的属性，需要利用’->'
	cout<<"姓名：" << p->name<<"年龄：" << p->age<<"分数：" << p->score << endl;

	//结构体嵌套结构体
	//作用：结构体中的成员可以是另一个结构体
	//创建老师
	/*teacher t;
	t.id = 10000;
	t.name = "老王";
	t.age = 50;
	t.stu.name = "小王";
	t.stu.age = 20;
	t.stu.score = 60;

	cout << "老师姓名：" << t.name << "老师编号：" << t.id << " 老师年龄：" << t.age << "老师辅导的学生姓名："
		<< t.stu.name << " 学生年龄：" << t.stu.age << " 学生考试分数为： " << t.stu.score;*/
	//又出错了还是同个原因，。。
	//总结：在结构体中可以定义另一个结构体作为成员，用来解决实际问题。

	system("pause");

	return 0;
}
