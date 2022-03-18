#include<iostream>
using namespace std;


int main9()
{
  // int c = 0;
   //while (c < 10)
  // {
  //	   srand(time(NULL));//不加这个，就是假随机数。
  //	   int a = rand() % 10;
  //	   int b = rand() % 10;
  //	   while (a * a * a + b * b * b + c * c * c == a * 100 + b * 10 + c)
  //	   {
  //		   int d = a * 100 + b * 10 + c;
  //			   cout << d << endl;
  //			   cout << c << endl;
  //			   c++;
  //	     }
  //	}这个代码运行，程序好像顶不住。不同结果。0，1或370，371。0,1程序肯定出错了。
   //二代版 抄的
	/*1、将所有的三位数进行输出（100、999）
		2、在所有三位数中找到水仙花数
		水仙花数153
		获取个位153％10=3    对数字取模于10可以获取到个位
		获取十位153 / 10 = 15     15％10=5先整除于10，得到两位数，再取模于10，得到十位
		获取百位153 / 100 = 1    直接整除于100，获取百位*/
		//第一步找到所求东西的扩大范围，打下简版程序。分步验证，是否可行。第二步用条件筛选出来，补全程序。
	int num = 100;
	do
	{
		int a = 0;
		int b = 0;
		int c = 0;

		a = num % 10;
		b = num / 10 % 10;
		c = num / 100;

		if (a * a * a + b * b * b + c * c * c == num)
		{
			cout << num << endl;
		}
		num++;
	} while (num < 1000);
	system("pause");

	return 0;
}