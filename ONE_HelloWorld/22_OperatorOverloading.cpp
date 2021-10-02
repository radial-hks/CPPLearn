#include <iostream>;
using namespace std;
#include <string>; // 字符串输出


// 运算符重载: 对已有的运算符进行重新定义，赋予另一种功能，以适应不同的数据类型；

// 1、加号运算符重载
class OperatorAdd
{
public:
	 OperatorAdd();
	~ OperatorAdd();
	int number_a;
	int number_b;

	OperatorAdd operator+ (OperatorAdd &p) 
	{
		// 成员函数运算符重载
		OperatorAdd temp;
		temp.number_a = this->number_a + p.number_a;
		temp.number_b = this->number_b + p.number_b;
		return temp; // 返回值引用
	};
	OperatorAdd operator+ (int number)
	{
		// 发生函数重载
		OperatorAdd temp;
		temp.number_a = this->number_a + number;
		// temp.number_b = this->number_b + p.number_b;
		return temp; // 返回值引用
	};
	
};

// 2、全局函数运算符重载
//OperatorAdd operator+(OperatorAdd p1,OperatorAdd p2) 
//{
//	OperatorAdd temp;
//	temp.number_a = p1.number_a + p2.number_a;
//	temp.number_b = p1.number_b + p2.number_b;
//	return temp;
//};

//void operator<<(ostream &cout, OperatorAdd p) 
//{
//	cout << p.number_a << "||" << p.number_b << endl;
//}; 

ostream& operator<<(ostream& cout, OperatorAdd p)
{
	cout << p.number_a << "||" << p.number_b << endl;
	return cout;
};

 OperatorAdd:: OperatorAdd()
{
	 number_a = 100;
	 number_b = 300;
}

 OperatorAdd::~ OperatorAdd()
{
}

int main_13()
{
	// 成员函数运算符重载的本质;
	OperatorAdd p1, p2;
	OperatorAdd p3 = p1.operator+(p2);
	OperatorAdd p4 = p1 + p2;
	cout << p4.number_a << endl;

	// 全局函数运算符重载的本质
	//OperatorAdd p5 = operator+(p1,p2);
	//OperatorAdd p5 = p1 + p2;

	// 运算符重载也可以发生函数重载
	OperatorAdd p6 = p1 + 100;

	// 左移运算符 
	// 重载左移运算符可以实现输出自定义数据类型;
	cout << p6;
	cout << p6 << p6;

	return 0;

	// 对于内置的数据类型的表达式的运算符是不可能改变的;
	// 不要滥用运算符重载;
}