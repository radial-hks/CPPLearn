using namespace std;
#include <iostream>
#include <string>

// ��ͨ������ģ�庯���ĵ���
//�� �������ģ�����ͨ����������ʵ�֣����޵�����ͨ������
//�� ����ͨ�� ��ģ������б�ǿ�Ƶ��ú���ģ�壻
//�� ����ģ����Է������أ�
//�� �������ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ�壻

// ��ͨ����
int AddNumber(int a, int b)
{
	cout << "������ͨ����" << endl;
	return a + b;
}

// ģ�庯��
template <typename T>
T AddNumber(T a, T b)
{
	cout << "����ģ�庯��" << endl;
	return a + b;
}

template <typename T>
T AddNumber(T a, T b,T c)
{
	cout << "����ģ�庯��������--��ֵ�桿" << endl;
	return a + b + c;
}


void test_01()
{
	int a = 10;
	int b = 20;
	// Ĭ�ϵ��õ��ǡ���ͨ������
	cout << AddNumber(a, b) << endl;

	// ǿ�Ƶ��á�ģ�庯����
	//  ��ģ������б�ǿ�Ƶ��ú���ģ�壻
	cout << AddNumber<>(a, b) << endl;
}

void test_02()
{
	int a = 10;
	int b = 20;
	int c = 30;
	cout << AddNumber<int>(a, b) << endl;
	cout << AddNumber<int>(a, b, c) << endl;

}

int main()
{
	// ����
	test_01();
	test_02();

	system("pause");
	return 0;
}