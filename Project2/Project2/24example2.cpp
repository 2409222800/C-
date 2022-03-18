#include<iostream>

using namespace std;


//英雄结构体
struct Hero
{
	string name;

	int age = 0;
	string sex;
};

void bubbleSort(struct Hero heroArray[], int len)
{

	for (int i = 0; i < len -1; i++)
	{
		
		for (int j = 0; j < len - i -1 ; j++)
		{
		    //如果j下标的元素年龄大于j+1下标的元素的年龄，交换两个元素
			if (heroArray[j].age > heroArray[j + 1].age)
			{
				struct Hero temp = heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] = temp;
			}
			
		}
	}
}
//打印排序后数组中的信息
void printHero(struct Hero heroArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << " 姓名：" << heroArray[i].name << "年龄：" << heroArray[i].age
			<< " 性别：" << heroArray[i].sex << endl;
	}
}


int main24()
{
	/*案例：设计一个英雄的结构体，包括成员姓名、年龄、性别；创建结构体数组，数组中存放5名英雄。
	通过冒泡排序的算法，将数组中的英雄按照年龄进行升序排序，最终打印排序后的结果。*/

	//2创建数组存放5名英雄
	struct Hero heroArray[5] =
	{
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"},
	};

	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	for (int i = 0; i < len; i++)

		//3对数组进行排序，按照年龄进行升序排序
		bubbleSort(heroArray, len);

	//4将排序后结果打印输出
	printHero(heroArray, len);

   system("pause");

	return 0;
}
