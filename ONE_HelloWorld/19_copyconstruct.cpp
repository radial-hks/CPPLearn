#include <iostream>;
using namespace std;


class People
{
public:
	// �޲Σ�Ĭ�ϣ����캯��
	People() {
		cout << "�޲ι��캯����" << endl;
	};
	// �вι��캯��
	People(int age_) {
		age = age_;
		// name = name;
		cout << "�вι��캯����" << endl;
	};
	// �������캯��
	// ����Ϊ��������
	People(const People& People) {
		age = People.age;
		// name = People.name;
		cout << "�������캯����" << endl;
	};

	~People() {
		cout << "Ĭ�������캯����" << endl;
	};
	
	// ��������
	int age;
	// string name;
};

// 1��ʹ��һ���Ѿ�������ϵĶ����ʼ��һ���¶���
void test1()
{
	People p11 = People(10);
	cout << "P1������Ϊ:" << p11.age << endl;
	People p12 = People(p11);
	cout << "P2������Ϊ:" << p12.age << endl;
}

// 2��ֵ���ݵķ�ʽ������������ֵ

void DoSomeThing(People p)
{
	// ִ�� XXX
}
void test2()
{
	// ֵ����
	People p;
	DoSomeThing(p);
}

// 3����ֵ�ķ�ʽ���ݾֲ�����
People test3()
{
	People pp;
	cout << (int*)&pp << endl;
	return pp;
}


int main_10()
{
	// �������캯������ʱ��
	
	// 1��ʹ��һ���Ѿ�������ϵĶ����ʼ��һ���¶���
	/*People p1 = People(13, "radial");
	People p2 = People(p1);
	cout << "P2������Ϊ:" << p2.name << endl;*/
	test1();
	
	// 2��ֵ���ݵķ�ʽ������������ֵ
	test2();
	
	// 3����ֵ�ķ�ʽ���ݾֲ�����
	People radial = test3();
	// �����ڲ����ⲿ������ͬһ������
	cout << (int*)&radial << endl;
	system("pause");
	return 0;
}