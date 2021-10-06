using namespace std;
#include <iostream>
#include <string>

// 两个整型交换函数
void swapInt(int &a, int &b) // 引用方式传递
{
	int tem = a;
	a = b;
	b = tem;
}

void swapFloat(float& a, float& b) // 引用方式传递
{
	float tem = a;
	a = b;
	b = tem;
}

// 函数模板
// 告诉编译器后面的代码中的T不要报错，T是一个通用数据类型; 
template <typename T>
void Rswap(T& a, T& b)
{
	T tem = a;
	a = b;
	b = tem;
}


int main() 
{
	// 测试
	int a = 100;
	int b = 10;
	swapInt(a, b);

	// 测试
	float a1 = 100;
	float b1 = 11;
	swapFloat(a1, b1);

	// 函数模板
	// 1、自动类型推导;
	Rswap(a, b); // 推导 T 为 int 类型;

	// 2、显式指定类型
	Rswap<int>(a, b);

	
	system("pause");
	return 0;
}

