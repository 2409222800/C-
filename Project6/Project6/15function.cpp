#include<iostream>
using namespace std;


//������ʽ
	//1�޲��޷�
void test01()
{
	cout << "this is test01" << endl;
 }
	//2�в��޷�
void test02(int a)
{
	cout << "this is test02 a = "<< a << endl;
 }
	//3�޲��з�
int test03()
{
	cout << "this is test03  " << endl;
	return 1000;
 }
	//4�в��з�

//�������� ��ǰ���߱����������Ĵ��ڣ��������ú������������������Բ�����mainǰ�Ӷ��壬���ں�ӡ�
int max(int a, int b);

int main15()
{
	//������ʽ
	//1�޲��޷�
	test01();
	//2�в��޷�
	test02(100);
	//3�޲��з�
 int num1 =	test03();
 cout << "num1 = " << num1 << endl;
	//4�в��з�
 /*����������
 * ���ã����߱������������Ƽ���ε��ú�����������ʵ��������Ե������塣
 * 
 * �������������Զ�Σ����Ǻ����Ķ���ֻ����һ��
 * 
 */
 /*int max(int a, int b)
  {
	 return a > b ? a : b;//���������档
 }*/
 int a = 100;
 int b = 99;
 cout << max(a, b) << endl;//��main���ã��е㡣��������

	system("pause");

	return 0;
}

int max(int a, int b)
  {
	 return a > b ? a : b;//���������
 }
