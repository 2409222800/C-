#include<iostream>
using namespace std;


int main8()
{
	int a = 0;  int b = 0;
	srand(time(NULL));//不加这个，就是假随机数。
	a = rand() % 100 + 1;//rand()%100 生成0~99 随机数;
	//cout << a << endl;
	while (a > b or b > a)
	{
		cout << "请输入数字" << endl;
		cin >> b;
		
	    if (a > b)
		{
			cout << "数字过小" << endl;
		 }
		else if (a == b)//这里犯错了，忘==了才是判断相等，=是赋值
		{
			break;
		 }
		else
		{
			cout << "数字过大" << endl;
		 }
	}
	   cout << "你获得胜利了" << endl;
/*do while循环语句
语法 do{循环语句}while（循环条件）
注意：与while的区别在于do while 会先执行一次循环语句，再判断循环条件
*/




	system("pause");

	return 0;
}