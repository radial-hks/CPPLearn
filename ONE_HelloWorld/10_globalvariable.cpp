#include <iostream>
using namespace std;

// 2、全局变量
int num3 = 10;
int num4 = 20;

// 4.2 const 修饰的全局变量
const int num8 = 14;
 
int main_2() 
{
	// 全局区
	//  全局变量、静态变量、常量

	// 1、普通局部变量
	int num1 = 10;
	int num2 = 20;
	cout << "局部变量num1的地址" << (int)&num1 << endl;
	cout << "局部变量num2的地址" << (int)&num2 << endl;

	// 2、全局变量的地址
	cout << "全局变量num3的地址" << (int)&num3 << endl;
	cout << "全局变量num4的地址" << (int)&num4 << endl;

	// 3、静态变量
	static int num5 = 10;
	static int num6 = 10;
	cout << "静态变量num5的地址" << (int)&num5 << endl;
	cout << "静态变量num6的地址" << (int)&num6 << endl;

	// 4、常量: 字符串常量及const修饰的变量
	// 4.1 字符串
	cout << "字符串变量num5的地址" << (int)&"radial" << endl;
	// 4.2 const 修饰的全局变量
	const int num7 = 13;
	cout << "局部变量num7的地址" << (int)&num7 << endl;
	// 4.3 const 修饰的局部变量
	cout << "全局变量num8的地址" << (int)&num8 << endl;

	return 0;
}