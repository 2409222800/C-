#include<iostream>
using namespace std;

struct Student
{

	string name;
	
	int age;
	
	int score;
	
};

//�����ϡ����ڲ�����������Ϊ������׵�ַ������Ҫ&��
struct student
{
	string name;
	int age;
	int score;
};

//������ʦ�ṹ��
struct teacher
{
	int id;
	string name;
	int age;
	struct student stu;
  };

int main20()
{ //�ṹ������
	/*���ã����Զ���Ľṹ����뵽�����з���ά��
	�﷨��struct �ṹ���� ������[Ԫ�ظ���]={ {},{},...{}}*/

	struct Student stuArray[3] =
	{
		{"����",18,100},
		{"����",28,99},
		{"����",38,66}
	};
	//3���ṹ�������е�Ԫ�ظ�ֵ
	stuArray[2].name = "����";
	stuArray[2].age = 80;
	stuArray[2].score = 60;

	//4�����ṹ������
	for (int i = 0; i < 3; i++)
	{
		cout << "������" << stuArray[i].name 
			 << " ���䣺" << stuArray[i].age 
			 << " ������" << stuArray[i].score << endl;
	}

	//�ṹ��ָ��
 /* ���ã�ͨ��ָ����ʽṹ���еĳ�Ա
	  ���ò�����->����ͨ���ṹ��ָ����ʽṹ������*/

	//1����ѧ���ṹ�����
	student s = { "����",18,100 };
	//2ͨ��ָ��ָ��ṹ�����
	student* p = &s;
	//3ͨ��ָ����ʽṹ������е�����
	//ͨ���ṹ��ָ�� ���ʽṹ���е����ԣ���Ҫ���á�->'
	cout<<"������" << p->name<<"���䣺" << p->age<<"������" << p->score << endl;

	//�ṹ��Ƕ�׽ṹ��
	//���ã��ṹ���еĳ�Ա��������һ���ṹ��
	//������ʦ
	/*teacher t;
	t.id = 10000;
	t.name = "����";
	t.age = 50;
	t.stu.name = "С��";
	t.stu.age = 20;
	t.stu.score = 60;

	cout << "��ʦ������" << t.name << "��ʦ��ţ�" << t.id << " ��ʦ���䣺" << t.age << "��ʦ������ѧ��������"
		<< t.stu.name << " ѧ�����䣺" << t.stu.age << " ѧ�����Է���Ϊ�� " << t.stu.score;*/
	//�ֳ����˻���ͬ��ԭ�򣬡���
	//�ܽ᣺�ڽṹ���п��Զ�����һ���ṹ����Ϊ��Ա���������ʵ�����⡣

	system("pause");

	return 0;
}
