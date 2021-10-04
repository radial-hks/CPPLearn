#include <iostream>
using namespace std;

// 基础函数定义
int get_age()
{
	int age = 26;
	return age;
}


// 值传递

void swap(int num1, int num2)
{
	// 只是进行了值传递【变量的作用域】
	// 
	// 交换前的数值
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	int med = num1;
	num1 = num2;
	num2 = med;

	// 交换之后
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
}

int main_7()
{
	int a = 10;
	int b = 5;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	// 执行数值交换
	swap(a, b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	system("pause");
	return 0;

}