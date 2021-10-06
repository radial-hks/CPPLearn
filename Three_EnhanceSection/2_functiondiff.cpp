using namespace std;
#include <iostream>
#include <string>

// 普通函数与模板函数的区别
// 1、普通函数调用可以发生隐式类型转换；
// 2、函数模板  用自动类型推导，不可以发生隐式类型转换；
// 3、函数模板  用显示指定类型，可以发生隐式类型转换；

// 普通函数
int AddNumber(int a,int b)
{
	return a + b;
}

// 模板函数
template <typename T>
T AddNumber_(T a, T b) 
{
	return a + b;
}


void test_01()
{
	int a = 10;
	int b = 20; 
	char c = 'a'; // 转换为 ascall 值，97【隐式类型转换】
	cout << AddNumber(a, c) << endl;
}

void test_02()
{
	int a = 10;
	int b = 20;
	char c = 'a'; // 转换为 ascall 值，97
	// cout << AddNumber_(a, c) << endl; // 无法进行隐式类型转换
	cout << AddNumber_<int>(a, c) << endl; // 可以进行隐式转换
}

int main()
{
	// 测试
	test_01();
	test_02();

	system("pause");
	return 0;
}