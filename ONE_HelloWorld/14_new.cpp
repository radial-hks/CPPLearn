
#include <iostream>;
using namespace std;

void PrintData()
{
	int* pointer = new int(10);
	cout << *pointer << endl;
	cout << *pointer << endl;
	cout << *pointer << endl;
	
	// 手动释放内存；
	delete pointer;

	// cout << *pointer << endl;
}

void CreateIntHeap() 
{
	int * array = new int[10];
	for (int i = 1; i < 10; i++) {
		array[i] = i + 1000;
	}
	for (int i = 1; i < 10; i++) {
		cout << array[i] << endl;
	}

	// 释放数组 
	delete[] array;
}


int main()
{
	// 1、new 基本语法 : "返回的是改数据类型的指针"
	PrintData();
	
	// 2、在堆区利用 new 开辟数组；
	CreateIntHeap();

	system("pause");
	return 0;
}