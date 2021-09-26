#include <iostream>;
using namespace std;


// 2.1 ֵ����
void Sweap(int a,int b)
{
	int temp = a;
	a = b;
	b = temp;
}

// 2.3 ��ַ����
void SweapWithPointer(int *a, int *b)
{
	// ����ָ��
	int temp = *a;
	*a = *b;
	*b = temp;
}

// 2.3����������������
// - ��������ʱ�������������ü������β�����ʵ��
// - ���Լ�ָ���޸�ʵ��
void ReferenceTest(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}


// 2.4 ������Ϊ�����ķ���ֵ
// - ��Ҫ���ؾֲ�����������
int& returref()
{
	int a = 10;
	return a;
}
// - �����ĵ��ÿ�����Ϊ��ֵ
int& returref_2()
{
	static int a = 10;
	return a;
}

// 3�������βΣ���ֹ�����
void PrintDataRef(const int &val)
{	
	// val = 100; �޸��Ǳ���ֹ��
	cout << "val=" << val << endl;
}

int main_6()
{
	int num101 = 10;
	cout << num101 << endl;

	// 1�����û���ʹ��:�����������
	int &num102 = num101;
	num102 = 100;
	cout << num102 << endl;

	// 2�������е�ʹ��
	// 2.1 ֵ����
	int a = 10;
	int b = 20;
	Sweap(a, b); // ֵ���ݣ��ββ�������ʵ�Ρ���ӡabֵû�з����ı䡿
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	
	// 2.2 ָ��
	SweapWithPointer(&a, &b);// ��ַ���ݣ��βλ�����ʵ�Ρ���ӡabֵ�����ı䡿
	cout << "��ַ���� a=" << a << endl;
	cout << "��ַ���� b=" << b << endl;
	
	// 2.3 ���ô��ݲ����ݲ���
	int &a_ref = a;
	int& b_ref = b;
	ReferenceTest(a_ref, b_ref);// ���ô��ݣ��βλ�����ʵ�Ρ���ӡabֵ�����ı䡿
	cout << "���ô��� a=" << a << endl;
	cout << "���ô��� b=" << b << endl;

	// 2.4 ������Ϊ�����ķ���ֵ
	int& ref = returref();
	cout << "ref=" << ref << endl; // �ɹ�
	
	int& ref2 = returref_2();
	cout << "ref2=" << ref2 << endl;
	returref_2() = 10000; // ������Ϊ��ֵ�Ĵ��ڡ������ķ���ֵΪ���á�
	cout << "ref2=" << ref2 << endl;
	
	// 3�����õı��ʡ��﷨�ǡ�
	// - ���õı��ʾ�����C++�ڲ�ʵ�ֵ�һ��ָ�볣����
	
	int radial = 100;
	
	int& ref_ = radial; //  �൱��: int* const ref_ = &radial;
	ref_ = 120;//�൱��: *ref_ = 120;

	// 4����������
	// - �����βΣ���ֹ�����
	int hks = 100;
	int& ref_2 = radial; 
	// int& ref_2 = 100;��ʧ�ܡ� ��������һ��Ϸ����ڴ�ռ�
	const int& ref_3 = 100; // [ֻ��]
	// �൱��
	// int temp = 100;
	// int& ref_2 = temp;

	PrintDataRef(hks);

	system("pause");
	return 0;
}