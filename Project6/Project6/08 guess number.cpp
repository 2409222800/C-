#include<iostream>
using namespace std;


int main8()
{
	int a = 0;  int b = 0;
	srand(time(NULL));//������������Ǽ��������
	a = rand() % 100 + 1;//rand()%100 ����0~99 �����;
	//cout << a << endl;
	while (a > b or b > a)
	{
		cout << "����������" << endl;
		cin >> b;
		
	    if (a > b)
		{
			cout << "���ֹ�С" << endl;
		 }
		else if (a == b)//���ﷸ���ˣ���==�˲����ж���ȣ�=�Ǹ�ֵ
		{
			break;
		 }
		else
		{
			cout << "���ֹ���" << endl;
		 }
	}
	   cout << "����ʤ����" << endl;
/*do whileѭ�����
�﷨ do{ѭ�����}while��ѭ��������
ע�⣺��while����������do while ����ִ��һ��ѭ����䣬���ж�ѭ������
*/




	system("pause");

	return 0;
}