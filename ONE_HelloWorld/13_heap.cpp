
#include <iostream>
using namespace std;

int* HeapTest()
{
	// 利用new关键字，可以将数据开辟到堆区
	// int a = 10;
	// return &a;
	int* pointer = new int(10);
	return pointer;
}

int main_4()
{
	int* c = HeapTest();
	cout << *c << endl;
	// 在打印一次
	cout << *c << endl;

	system("pause");
	return 0;
}