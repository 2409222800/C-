#include<iostream>
using namespace std;

struct student
{
	string name;
	
	int age = 0;//����������ʼ��������int i�ж��� int i = 0�г�ʼ��
	int score = 0;
};

//��ӡѧ����Ϣ����
//1��ֵ����
void printStudent1(struct student s)
{
	s.age = 100;
	cout << "�Ӻ����� ������ " << s.name << " ���䣺" << s.age << " ������" << s.score;
}
//2��ַ����
void printStudent2(struct student * p)
{
	p->age = 200;
	cout << "�Ӻ���2�� ������" << p->name << " ���䣺" << p->age << " ������" << p->score << endl;
}


int main21()
{ /*1�ṹ������������
	���ã����ṹ����Ϊ���������д���
	 ���ݷ�ʽ�����֣�
	ֵ����
	��ַ����*/

	//��ѧ�����뵽һ�������У���ӡѧ�����ϵ�������Ϣ

	//�����ṹ�����
	struct student s;
	s.name = "����";
	s.age = 20;
	s.score = 85;

	//printStudent1(s);
	printStudent2(&s);
	//cout << "main�����д�ӡ ������" << s.name << " ���䣺" << s.age << " ������ " << s.score << endl;
	//������һ����Ա�����
	//ֵ���ݲ��ı䣬��ַ���ݸı䡣��ӡ��cout�ó����ݲ�ͬ
	//�ܽ᣺��������޸��������е����ݣ���ֵ���ݣ���֮�õ�ַ����
	system("pause");

	return 0;
}
