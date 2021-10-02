#include <iostream>;
using namespace std;

const double PI = 3.14;

// 设计圆类，求圆的周长

class Circle
{
public:
	Circle(double r);
	~Circle();

	double radius;
	double calculateZC()
	{
		return 2 * PI * radius;
	}
};

// 构造函数
// 类的构造函数是类的一种特殊的成员函数，它会在每次创建类的新对象时执行。
// 构造函数的名称与类的名称是完全相同的，并且不会返回任何类型，也不会返回 
// void。构造函数可用于为某些成员变量设置初始值。
// 初始化列表: https://www.runoob.com/cplusplus/cpp-constructor-destructor.html
Circle::Circle(double r)
{
	radius = r;
	cout << "Object is being created" << endl;
}

// 析构函数 
// 析构函数的名称与类的名称是完全相同的，只是在前面加了个波浪号（~）
// 作为前缀，它不会返回任何值，也不能带有任何参数。析构函数有助于在
// 跳出程序（比如关闭文件、释放内存等）前释放资源。
Circle::~Circle()
{
	cout << "Object is being deleted" << endl;
}



int main_8()
{
	// 实例化对象,设置属性,使用行为;
	Circle cc(9);
	// cc.radius = 10;
	cout << "cc 的周长:" << cc.calculateZC() << endl;


	system("pause");
	return 0;
}