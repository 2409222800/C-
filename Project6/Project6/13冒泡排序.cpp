#include<iostream>
using namespace std;


int main13()
{
	/*冒泡排序
	* 作用：最常见的排序算法，对数组内元素进行排序
	* 1比较相邻的元素。如果第一个比第二个大，就交换他们两个。
	* 2对每一对相邻元素做同样的工作，执行完毕后，找到第一个最大值。
	* 3重复以上的步骤，每次比较次数-1，直到不需要比较。
	* 外层  排序总轮数 = 元素个数 -1；
	* 内层  每轮对比次数 = 元素个数 -排序轮数 -1
	*/
	int brr[9] = { 4,2,8,0,5,7,1,3,9 };
	for (int i = 0; i < 9 - 1; i++)
	{ 
		//内层循环对比
		for (int j = 0; j < 9 - 1 - i; j++)
		{
			if (brr[j] > brr[j + 1])
			{
				int temp = brr[j];
				brr[j] =brr[j + 1];
				brr[j + 1] = temp;
			}
		}
		}
	cout << "排序后：" << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << brr[i] << " ";
	}
	cout << endl;
	system("pause");

	return 0;
}