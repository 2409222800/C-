#include<iostream>
using namespace std;
#include<ctime>
#include <string>

//����1
//ѧУ������������Ŀ��ÿ����ʦ����5��ѧ�����ܹ���3����ʦ����������
//���ѧ������ʦ�Ľṹ�壬��������ʦ�Ľṹ���У�����ʦ������һ�����5��ѧ����������Ϊ��Ա
//ѧ���ĳ�Ա�����������Է���������������3����ʦ��ͨ��������ÿ����ʦ��������ѧ����ֵ��
//���մ�ӡ����ʦ�����Լ���ʦ������ѧ�����ݡ�

struct student
{
	string sName;

	int age = 0;
	int score = 0;
};

struct Teacher 
{ 
	string tName;
	
	struct student sArray[5];//ѧ���ṹ��Ҫ��ǰ�档
};



//����ʦ��ѧ����ֵ�ĺ���
void allocateSpace(struct Teacher tArray[], int len)
{    

	string nameSeed = "ABCDE";
	//����ʦ��ʼ��ֵ
	for (int i = 0; i < len; i++)
	{
		tArray[i].tName = "Teacher_";
		tArray[i].tName += nameSeed[i];

		//ͨ��ѭ����ÿ����ʦ������ѧ����ֵ
	
		
		for (int j = 0; j < 5; j++)
		{
			tArray[i].sArray[j].sName = "Student_";
			tArray[i].sArray[j].sName += nameSeed[j];

			int random = rand() % 61 + 40;//40~100//rand()%61  0+40~60+40
			tArray[i].sArray[j].score = random ;
		}
	}
}

//��ӡ������Ϣ
void printInfo(struct Teacher tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "��ʦ������ " << tArray[i].tName << endl;

		for (int j = 0; j < 5; j++)
		{
			cout << "\tѧ�������� " << tArray[i].sArray[j].sName <<
				" ���Է����� " << tArray[i].sArray[j].score << endl;

		}
	}
}






int main23()
{    
	//���������
	srand(time(NULL));

	//1����3����ʦ������
	struct Teacher tArray[3];

	//2ͨ��������������ʦ����Ϣ��ֵ��������ʦ����ѧ����Ϣ��ֵ
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);

	//3��ӡ������ʦ��������ѧ����Ϣ
	printInfo(tArray, len);



	system("pause");

	return 0;
}