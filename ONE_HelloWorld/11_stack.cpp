#include <iostream>
using namespace std;

// ջ�����ݵ�ע������
// ����Ҫ���ؾֲ������ĵ�ַ��ջ�����ٵ������ɱ������Զ��ͷţ���


int* func()
{
	int a = 10; // �ֲ�����,�����ջ����ջ���������ں���ִ������Զ��ͷ�
	return &a; // ���ؾֲ������ĵ�ַ
}

int main_3()
{
	int* b = func();
	cout << *b << endl;
	// �ڴ�ӡһ��
	cout << *b << endl;
	system("pause");
	return 0;
}