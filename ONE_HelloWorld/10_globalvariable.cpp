#include <iostream>
using namespace std;

// 2��ȫ�ֱ���
int num3 = 10;
int num4 = 20;

// 4.2 const ���ε�ȫ�ֱ���
const int num8 = 14;
 
int main_2() 
{
	// ȫ����
	//  ȫ�ֱ�������̬����������

	// 1����ͨ�ֲ�����
	int num1 = 10;
	int num2 = 20;
	cout << "�ֲ�����num1�ĵ�ַ" << (int)&num1 << endl;
	cout << "�ֲ�����num2�ĵ�ַ" << (int)&num2 << endl;

	// 2��ȫ�ֱ����ĵ�ַ
	cout << "ȫ�ֱ���num3�ĵ�ַ" << (int)&num3 << endl;
	cout << "ȫ�ֱ���num4�ĵ�ַ" << (int)&num4 << endl;

	// 3����̬����
	static int num5 = 10;
	static int num6 = 10;
	cout << "��̬����num5�ĵ�ַ" << (int)&num5 << endl;
	cout << "��̬����num6�ĵ�ַ" << (int)&num6 << endl;

	// 4������: �ַ���������const���εı���
	// 4.1 �ַ���
	cout << "�ַ�������num5�ĵ�ַ" << (int)&"radial" << endl;
	// 4.2 const ���ε�ȫ�ֱ���
	const int num7 = 13;
	cout << "�ֲ�����num7�ĵ�ַ" << (int)&num7 << endl;
	// 4.3 const ���εľֲ�����
	cout << "ȫ�ֱ���num8�ĵ�ַ" << (int)&num8 << endl;

	return 0;
}