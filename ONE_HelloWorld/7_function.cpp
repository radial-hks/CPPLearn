#include <iostream>
using namespace std;

// ������������
int get_age()
{
	int age = 26;
	return age;
}


// ֵ����

void swap(int num1, int num2)
{
	// ֻ�ǽ�����ֵ���ݡ�������������
	// 
	// ����ǰ����ֵ
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	int med = num1;
	num1 = num2;
	num2 = med;

	// ����֮��
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
}

int main_7()
{
	int a = 10;
	int b = 5;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	// ִ����ֵ����
	swap(a, b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	system("pause");
	return 0;

}