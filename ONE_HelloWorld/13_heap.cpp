
#include <iostream>
using namespace std;

int* HeapTest()
{
	// ����new�ؼ��֣����Խ����ݿ��ٵ�����
	// int a = 10;
	// return &a;
	int* pointer = new int(10);
	return pointer;
}

int main_4()
{
	int* c = HeapTest();
	cout << *c << endl;
	// �ڴ�ӡһ��
	cout << *c << endl;

	system("pause");
	return 0;
}