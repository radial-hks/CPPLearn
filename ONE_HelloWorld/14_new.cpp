
#include <iostream>;
using namespace std;

void PrintData()
{
	int* pointer = new int(10);
	cout << *pointer << endl;
	cout << *pointer << endl;
	cout << *pointer << endl;
	
	// �ֶ��ͷ��ڴ棻
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

	// �ͷ����� 
	delete[] array;
}


int main()
{
	// 1��new �����﷨ : "���ص��Ǹ��������͵�ָ��"
	PrintData();
	
	// 2���ڶ������� new �������飻
	CreateIntHeap();

	system("pause");
	return 0;
}