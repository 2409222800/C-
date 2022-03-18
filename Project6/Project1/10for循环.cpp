#include<iostream>
using namespace std;
int main10()
{
// for循环语句
//作用：满足循环条件，执行循环浯句
//语法；for（起始表达式；条件表达式；末尾循环体）{ 循环语句;}
//int i = 0;
//for(;;)
//{
  //if(i〉=10）
  //{
    //  break;
   //}
 //  cout<<i<<endl;
  // i++;//可以提出来，不过略显繁琐。
//}
    
//嵌套循环
//作用：在循环体中再嵌套一层循环，解决一些实际问题。
  for (int a = 0; a < 10; a++)
  {
     for (int i = 0; i < 10; i++)
     {
         cout << "*";
     }
     cout << endl;
  }//外层执行一次，内层执行一周
  system("pause");

  return 0;
}