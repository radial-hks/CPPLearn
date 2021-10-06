using namespace std;
#include <iostream>
#include <string>

// 普通函数与模板函数的调用
//● 如果函数模板和普通函数都可以实现，有限调用普通函数；
//● 可以通过 空模板参数列表强制调用函数模板；
//● 函数模板可以发生重载；
//● 如果函数模板可以产生更好的匹配，优先调用函数模板；

// 普通函数
int AddNumber(int a, int b)
{
	cout << "来自普通函数" << endl;
	return a + b;
}

// 模板函数
template <typename T>
T AddNumber(T a, T b)
{
	cout << "来自模板函数" << endl;
	return a + b;
}

template <typename T>
T AddNumber(T a, T b,T c)
{
	cout << "来自模板函数【重载--多值版】" << endl;
	return a + b + c;
}


void test_01()
{
	int a = 10;
	int b = 20;
	// 默认调用的是【普通函数】
	cout << AddNumber(a, b) << endl;

	// 强制调用【模板函数】
	//  空模板参数列表强制调用函数模板；
	cout << AddNumber<>(a, b) << endl;
}

void test_02()
{
	int a = 10;
	int b = 20;
	int c = 30;
	cout << AddNumber<int>(a, b) << endl;
	cout << AddNumber<int>(a, b, c) << endl;

}

int main()
{
	// 测试
	test_01();
	test_02();

	system("pause");
	return 0;
}