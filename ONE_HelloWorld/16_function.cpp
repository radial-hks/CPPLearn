#include <iostream>;
using namespace std;

// 1��Ĭ�ϲ���
// - ����ֵ���� ������������=Ĭ��ֵ��{}
int AddNumbers_1(int a, int b, int c)
{
	return  a + b + c;
}

int AddNumbers_2(int a, int b=10, int c=10)
{
	// - 1.1 ע������: ���ĳ��λ���Ѿ�����Ĭ�ϲ����������λ��֮��
	// �����ұ���Ҫ��Ĭ��ֵ��
	return  a + b + c;
}

// 1.2 �������������Ĭ�ϲ���������ʵ�־Ͳ�����Ĭ�ϲ���; ��ֻ����һ����Ĭ�ϲ�����

int addNum(int a = 10, int b = 10); // �������������Ҫ��
int addNum(int a, int b)  // ʵ��
{
	return a + b;
}

// 2��ռλ����
// int AddNumbers_3(int a��int)
int AddNumbers_3(int a��int = 10) // int ��ʱ������û��ʹ�õ�, �ҿ�����Ĭ�ϲ��� 
{
	// ռλ
	cout << "this is a func_" << endl;
	return 0;
}


// 3���������ء���Ҫ��
// - �����������ظ�����߸����ԡ������ʽ��������
// �������صĸ���:
// - ͬһ��������
// - ����������ͬ;
// - �����������Ͳ�ͬ�����߸�����ͬ������˳��ͬ��

// ע��: �����ķ���ֵ��������Ϊ�������صĵ�������
int AddNumbers_4(int a , int b);
int AddNumbers_4(int b, bool a);
int AddNumbers_4(string a, string b);
int AddNumbers_4(int a, int b, int c);

// ��Ӧ�ö��� int ��ʾ���е�ì�ܡ��ðɣ�ֱ�ӱ��벻ͨ����
int AddNumbers_4(int a, int b)
{
	cout << "---a b---" << endl;
	return 0;
}
int AddNumbers_4(int b, bool a)
{
	cout << "---b a---" << endl;
	return 0;
}
int AddNumbers_4(string a, string b)
{
	cout << "---str_ab---" << endl;
	return 0;
}
int AddNumbers_4(int a, int b, int c) 
{
	cout << "---a b c---" << endl;
	return 0;
}

// ע������: 
// 3.1 ������Ϊ��������
int AddNumbers_4(int &a);
int AddNumbers_4(const int& a);

// 3.2 ����������������Ĭ�ϲ���
int AddNumbers_5(int a,int b = 10);
int AddNumbers_5(int a); // �������������ʱ����޷�ִ���ˣ�

int main_7()
{
	// �����߼�
	cout << AddNumbers_1(10,10,10) << endl;
	
	cout << AddNumbers_2(10) << endl;


	// ��������
	AddNumbers_4(4, 3);
	AddNumbers_4("4", "3");
}