#include<iostream>
using namespace std;


int main12()
{
  /* while()
   {
	while (arr[x],x<5,x++)
	  { a=arr[x];
	  b=arr[x+1]
	  if(a>b)//对比对象错了。
	    Max=a
	  else
	    Max=b   //Max可以是一个集合就好了。
	
	   }
	
	}
  *///自己想的低级代码。
	//高级版
	
	//int arr[5] = { 300,350,200,400,250 };
	//int max = 0;
	//for (int i = 0; i < 5; i++)
	//{
	//	//cout << arr[i] << endl;
	//	if (arr[i] > max)
	//	{
	//		max = arr[i];
	//	}
	//}
	//cout << "最重的小猪体重为：" << max << endl;

	////数组元素逆置
	////案例描述：请声明一个5个元素的数组，并且将元素逆置.python中直接有这个函数，c++是底层语言。
	////1、创建数组
	//int arr[5] = { 1,3,2,5,4 };
	//cout << "数组逆置前：" << endl;
	//for (int i = 0; i < 5; i++)
	//{
	//	cout << arr[i] << endl;
	//}
	
	//2实现逆置
	//2.1记录起始下标位置
	//2.2记录结束下标位置
	//2.3起始下标与结束下标的元素互换
	//2.4起始位置++ 结束位置--
	//2.5循环执行2.1操作，直到起始位置>=结束位置

	//int start = 0;
	//int end = sizeof(arr) / sizeof(arr[0]) - 1;//结束下标
	//while (start < end)
	//{ //实现元素互换
	//	int temp = arr[start];
	//	arr[start] = arr[end];
	//	arr[end] = temp;
	//	//下标更新
	//	start++;
	//	end--;
	//}
	////3打印逆置后的数组
	//cout << "数组逆置后：" << endl;
	//for (int i = 0; i < 5; i++)
	//{
	//	cout << arr[i] << endl;
	//}
	system("pause");

	return 0;
}