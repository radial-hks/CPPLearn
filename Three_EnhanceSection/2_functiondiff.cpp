using namespace std;
#include <iostream>
#include <string>

// ��ͨ������ģ�庯��������
// 1����ͨ�������ÿ��Է�����ʽ����ת����
// 2������ģ��  ���Զ������Ƶ��������Է�����ʽ����ת����
// 3������ģ��  ����ʾָ�����ͣ����Է�����ʽ����ת����

// ��ͨ����
int AddNumber(int a,int b)
{
	return a + b;
}

// ģ�庯��
template <typename T>
T AddNumber_(T a, T b) 
{
	return a + b;
}


void test_01()
{
	int a = 10;
	int b = 20; 
	char c = 'a'; // ת��Ϊ ascall ֵ��97����ʽ����ת����
	cout << AddNumber(a, c) << endl;
}

void test_02()
{
	int a = 10;
	int b = 20;
	char c = 'a'; // ת��Ϊ ascall ֵ��97
	// cout << AddNumber_(a, c) << endl; // �޷�������ʽ����ת��
	cout << AddNumber_<int>(a, c) << endl; // ���Խ�����ʽת��
}

int main()
{
	// ����
	test_01();
	test_02();

	system("pause");
	return 0;
}