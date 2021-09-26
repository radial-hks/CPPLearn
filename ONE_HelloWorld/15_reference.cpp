#include <iostream>;
using namespace std;


// 2.1 值传递
void Sweap(int a,int b)
{
	int temp = a;
	a = b;
	b = temp;
}

// 2.3 地址传递
void SweapWithPointer(int *a, int *b)
{
	// 传出指针
	int temp = *a;
	*a = *b;
	*b = temp;
}

// 2.3、引用做函数参数
// - 函数传参时，可以利用引用技术让形参修饰实参
// - 可以简化指针修改实参
void ReferenceTest(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}


// 2.4 引用作为函数的返回值
// - 不要返回局部变量的引用
int& returref()
{
	int a = 10;
	return a;
}
// - 函数的调用可以作为左值
int& returref_2()
{
	static int a = 10;
	return a;
}

// 3、修饰形参，防止误操作
void PrintDataRef(const int &val)
{	
	// val = 100; 修改是被禁止的
	cout << "val=" << val << endl;
}

int main_6()
{
	int num101 = 10;
	cout << num101 << endl;

	// 1、引用基本使用:给变量起别名
	int &num102 = num101;
	num102 = 100;
	cout << num102 << endl;

	// 2、函数中的使用
	// 2.1 值传递
	int a = 10;
	int b = 20;
	Sweap(a, b); // 值传递，形参不会修饰实参【打印ab值没有发生改变】
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	
	// 2.2 指针
	SweapWithPointer(&a, &b);// 地址传递，形参会修饰实参【打印ab值发生改变】
	cout << "地址传递 a=" << a << endl;
	cout << "地址传递 b=" << b << endl;
	
	// 2.3 引用传递产传递参数
	int &a_ref = a;
	int& b_ref = b;
	ReferenceTest(a_ref, b_ref);// 引用传递，形参会修饰实参【打印ab值发生改变】
	cout << "引用传递 a=" << a << endl;
	cout << "引用传递 b=" << b << endl;

	// 2.4 引用作为函数的返回值
	int& ref = returref();
	cout << "ref=" << ref << endl; // 成功
	
	int& ref2 = returref_2();
	cout << "ref2=" << ref2 << endl;
	returref_2() = 10000; // 可以作为左值的存在【函数的返回值为引用】
	cout << "ref2=" << ref2 << endl;
	
	// 3、引用的本质【语法糖】
	// - 引用的本质就是在C++内部实现的一个指针常量；
	
	int radial = 100;
	
	int& ref_ = radial; //  相当于: int* const ref_ = &radial;
	ref_ = 120;//相当于: *ref_ = 120;

	// 4、常量引用
	// - 修饰形参，防止误操作
	int hks = 100;
	int& ref_2 = radial; 
	// int& ref_2 = 100;【失败】 必须引用一块合法的内存空间
	const int& ref_3 = 100; // [只读]
	// 相当于
	// int temp = 100;
	// int& ref_2 = temp;

	PrintDataRef(hks);

	system("pause");
	return 0;
}