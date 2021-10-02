#include <iostream>;
using namespace std;

class Cat
{
public:
	Cat() 
	{
		// 构造函数
		
	};
	Cat(int weight)
	{
		// 构造函数
		// 1、当形参和成员变量同名时，可用this指针来进行区分;
		this->weight = weight;

	};
	~Cat()
	{
		// 析构函数

	};
	
	void SetWeight(int weight)
	{
		// 非静态成员函数
		// 1、当形参和成员变量同名时，可用this指针来进行区分;
		// 指向被调用的成员函数所属的对象
		this->weight = weight;

	};

	Cat& AddWeight(int num)
	{
		this->weight += num;
		// 返回自身
		return  *this;
	};
	int weight;

	
};

int main_11()
{
	// this指针，特殊的对象指针，指向被调用的成员函数所属的对象；
	// this指针，隐含每一个非静态成员函数内的一种指针；
	// this指针，不需要定义，直接使用即可；

	// this 指针的用途:
	// 1、当形参和成员变量同名时，可用this指针来进行区分;
	// 2、在类的非静态成员函数中返回对象本身，可以使用 return *this;


	Cat cat = Cat(300);
	cat.AddWeight(100).AddWeight(100); // 链式编程

	system("pause");
	return 0;
}


// this 指针的本质 : 指针常量，指针指向是不允许修改的
// Cat* const this 
// 常对象只能调用常函数（const 修饰的函数）


// 常函数
// 1.1 成员函数后添加const后我们称之为常函数;
// 1.2 常函数内不能修改成员属性;
// 1.3 成员属性声明时添加 mutable后，在常函数中依然可以修改;

// 常对象
// 2.1 声明对象前加 const 称该对象为常对象；
// 2.2 常对象只能调用常函数；