#include<iostream>

using namespace std;


//Ӣ�۽ṹ��
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
		    //���j�±��Ԫ���������j+1�±��Ԫ�ص����䣬��������Ԫ��
			if (heroArray[j].age > heroArray[j + 1].age)
			{
				struct Hero temp = heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] = temp;
			}
			
		}
	}
}
//��ӡ����������е���Ϣ
void printHero(struct Hero heroArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << " ������" << heroArray[i].name << "���䣺" << heroArray[i].age
			<< " �Ա�" << heroArray[i].sex << endl;
	}
}


int main24()
{
	/*���������һ��Ӣ�۵Ľṹ�壬������Ա���������䡢�Ա𣻴����ṹ�����飬�����д��5��Ӣ�ۡ�
	ͨ��ð��������㷨���������е�Ӣ�۰���������������������մ�ӡ�����Ľ����*/

	//2����������5��Ӣ��
	struct Hero heroArray[5] =
	{
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"},
	};

	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	for (int i = 0; i < len; i++)

		//3������������򣬰������������������
		bubbleSort(heroArray, len);

	//4�����������ӡ���
	printHero(heroArray, len);

   system("pause");

	return 0;
}
