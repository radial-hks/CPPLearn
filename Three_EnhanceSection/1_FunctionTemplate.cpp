using namespace std;
#include <iostream>
#include <string>

// �������ͽ�������
void swapInt(int &a, int &b) // ���÷�ʽ����
{
	int tem = a;
	a = b;
	b = tem;
}

void swapFloat(float& a, float& b) // ���÷�ʽ����
{
	float tem = a;
	a = b;
	b = tem;
}

// ����ģ��
// ���߱���������Ĵ����е�T��Ҫ����T��һ��ͨ����������; 
template <typename T>
void Rswap(T& a, T& b)
{
	T tem = a;
	a = b;
	b = tem;
}


int main() 
{
	// ����
	int a = 100;
	int b = 10;
	swapInt(a, b);

	// ����
	float a1 = 100;
	float b1 = 11;
	swapFloat(a1, b1);

	// ����ģ��
	// 1���Զ������Ƶ�;
	Rswap(a, b); // �Ƶ� T Ϊ int ����;

	// 2����ʽָ������
	Rswap<int>(a, b);

	
	system("pause");
	return 0;
}

