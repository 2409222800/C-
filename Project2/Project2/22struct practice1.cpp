#include<iostream>
using namespace std;



struct student
{
	string name;

	int age = 0;
	int score = 0;
};


//�������е��βθ�Ϊָ�룬���Լ����ڴ�ռ䣬���Ҳ��Ḵ���µĸ�������
void printStudents(const student *s)
{
	//s->age = 200; ����const֮��һ�����޸ĵĲ����ͻᱨ�����Է�ֹ���ǵ������
	cout << "������" << s->name << " ���䣺" << s->age << " ������" << s->score << endl;
}




int main22()
{
	//�ṹ����constʹ�ó���
  //���ã���const����ֹ�����

	//�����ṹ�����
	struct student s = { "����",15 , 70 };

	//ͨ��������ӡ�ṹ�������Ϣ
	printStudents(&s);//ָ�봫�ݴ���ͬ������Ϣֻռ�ĸ��ֽڣ���ֵ���ݺá�




	system("pause");

	return 0;
}