#include <iostream>;
using namespace std;

// 1、默认参数
// - 返回值类型 函数名（参数=默认值）{}
int AddNumbers_1(int a, int b, int c)
{
	return  a + b + c;
}

int AddNumbers_2(int a, int b=10, int c=10)
{
	// - 1.1 注意事项: 如果某个位置已经有了默认参数，从这个位置之后，
	// 从左到右必须要有默认值；
	return  a + b + c;
}

// 1.2 如果函数声明有默认参数，函数实现就不能有默认参数; 【只能有一个有默认参数】

int addNum(int a = 10, int b = 10); // 声明【这个很重要】
int addNum(int a, int b)  // 实现
{
	return a + b;
}

// 2、占位参数
// int AddNumbers_3(int a，int)
int AddNumbers_3(int a，int = 10) // int 暂时在这里没有使用到, 且可以有默认参数 
{
	// 占位
	cout << "this is a func_" << endl;
	return 0;
}


// 3、函数重载【重要】
// - 函数名可以重复，提高复用性【层叠样式表？？？】
// 函数重载的概念:
// - 同一作用域下
// - 函数名称相同;
// - 函数参数类型不同，或者个数不同，或者顺序不同；

// 注意: 函数的返回值不可以作为函数重载的的条件；
int AddNumbers_4(int a , int b);
int AddNumbers_4(int b, bool a);
int AddNumbers_4(string a, string b);
int AddNumbers_4(int a, int b, int c);

// 不应该都是 int ，示例有点矛盾【好吧，直接编译不通过】
int AddNumbers_4(int a, int b)
{
	cout << "---a b---" << endl;
	return 0;
}
int AddNumbers_4(int b, bool a)
{
	cout << "---b a---" << endl;
	return 0;
}
int AddNumbers_4(string a, string b)
{
	cout << "---str_ab---" << endl;
	return 0;
}
int AddNumbers_4(int a, int b, int c) 
{
	cout << "---a b c---" << endl;
	return 0;
}

// 注意事项: 
// 3.1 引用作为重载条件
int AddNumbers_4(int &a);
int AddNumbers_4(const int& a);

// 3.2 函数重载碰到函数默认参数
int AddNumbers_5(int a,int b = 10);
int AddNumbers_5(int a); // 出现这种情况的时候就无法执行了；

int main_7()
{
	// 函数高级
	cout << AddNumbers_1(10,10,10) << endl;
	
	cout << AddNumbers_2(10) << endl;


	// 函数重载
	AddNumbers_4(4, 3);
	AddNumbers_4("4", "3");
}