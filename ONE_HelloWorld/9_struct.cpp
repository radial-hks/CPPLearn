#include <iostream>
using namespace std;



// �ṹ�������û��Զ�����������ͣ������û��洢��ͬ���������ͣ�
struct user
{
	string name;
	int age;
	bool gender;
};


int main_1()
{
	// 1��
	struct user u1;
	u1.age = 23;
	u1.name = "HW";
	u1.gender = false;

	// 2��
	struct user u2 = { "HW",23,false };

	// 3�� �ṹ������
	struct user array[3] =
	{
		{ "HW", 23, false },
		{ "HW_", 24, false },
		{ "HW_@", 25, false }
	};

	array[0].name = "radial";

	// 4���ṹ��ָ�� 
	struct user u4 = { "radial",23,false };
	user* p = &u4;
	&p->age; // ʹ�ü�ͷ���ʽṹ�������ʹ�á�

	// ʹ���Ǻŷ���ָ���е�ֵ
	cout << "a = " << *(&p->age) << endl;
	int age = 26;
	cout << "a = " << age << endl;
	system("pause");
	return 0;

}