#include<iostream>
#include<string>
using namespace std;

void bubbleSort(int* arr, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			//���j>j+1��ֵ  ��������
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
//��ӡ����
void printArray(int * arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
 }

//1����ѧ���������ͣ�ѧ������(���������䣬����)
//�Զ����������ͣ�һЩ���ͼ�����ɵ�һ������
//�﷨ struct �������� {��Ա�б�}

struct Student
{
	//��Ա�б�

	//����
	string name;
	//����
	int age{};
	//����
	int score{};//����ʦ��ĳ����ˣ����ٷ��̳̾͸Ĺ�����û�������ˡ�����ֻ���Ե�һ��
	//֪�������ִ��󡣽��������
	/*����������
	���������ߴ��� 
	���������� */

	
	Student() {};
 };//�ڷֺ���ߴ�s3˳�㴴���ṹ�����


int main19()
{
	//1�ȴ�������
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };

	//���鳤��
	int len = sizeof(arr)/ sizeof(arr[0]);
	//2����������ʵ��ð������
	bubbleSort(arr, len);
	//3��ӡ����������
	printArray(arr, len);

	//8�ṹ��
	/*�ṹ�������û��Զ�����������ͣ������û��洢��ͬ����������
	* �﷨��struct �ṹ���� {�ṹ���Ա�б�}��
	* ͨ���ṹ�崴�������ķ�ʽ�����֣�
	* struct�ṹ���� ������
	* struct�ṹ���� ������ = {��Ա1ֵ����Ա2ֵ...}
	* ����ṹ��ʱ˳�㴴������
	*/

 //1 struct Student s1
	//struct�ؼ��ֿ���ʡ��
	 Student s1;
	//��s1���Ը�ֵ��ͨ��.���ʽṹ������е�����
	s1.name = "����";
	s1.age = 18;
	s1.score = 100;

	cout << " ������ " << s1.name << " ���䣺 " << s1.age << " ������ " << s1.score << endl;

	//2 struct Student s2 = {...}
	/*struct Student s2 = {"����",19,80};
	cout << "������" << s2.name << " ���䣺" << s2.age << " ������" << s2.score << endl;*/
	
	
	//3�ڶ���ṹ��ʱ˳�㴴���ṹ�����
	/*s3.name = "����";
	s3.age = 20;
	s3.score = 60;
	cout << "������" << s3.name << " ���䣺" << s3.age << " ������" << s3.score << endl;*/

  //�ڶ��ֺ͵����ֶ���������Ϊʲô
 /*�ܽ᣺����ṹ��ʱ�Ĺؼ���struct������ʡ��
	�����ṹ�����ʱ���ؼ���struct����ʡ��
	�ṹ��������ò�����"."���ʳ�Ա*/
	system("pause");

	return 0;
}
