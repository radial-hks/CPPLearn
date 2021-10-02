#include <iostream>;
using namespace std;

// 1、构造函数分类:
// 1.1 按参数划分: 有参和无参构造，无参又称为默认构造函数；
// 1.2 按类型划分: 普通构造和拷贝构造

class Person
{
public:
	// 无参（默认）构造函数
	Person() {
		cout << "无参构造函数！" << endl;
	};	
	// 有参构造函数
	Person(int age) {
		age = age;
		cout << "有参构造函数！" << endl;
	};
	// 拷贝构造函数
	// 参数为对象引用
	Person(const Person& person) {
		age = person.age;
		cout << "拷贝构造函数！" << endl;
	};

	~Person() {
		cout << "默认析构造函数！" << endl;
	};
	int age;

private:

};


int main_9()
{
	// 2、构造函数调用
	// 2.1 括号法（常用）
	Person p1(10);
	// 注意: 调用无参函数不能添加括号，若加了，编译器会认为这是一个函数声明；
	// Person P2; // 无参构造函数调用
	// Person P2(); // 名为 p2 的函数声明

	// 2.2 显式法
	Person p3 = Person();
	Person p4 = Person(10);
	Person p5 = Person(p4);
	// Person(10) 单独写就行匿名对象，当执行结束后，会立马析构；

	// 2.3 隐式转换法
	Person p6 = 10; // Person p6 = Person(10);
	Person p7 = p6; // Person p7 = Person(p7);
	// 注意: 不能使用拷贝构造函数 初始化匿名对象，编译器认为是对象声明；
	// Person p8(p7);

	system("pause");
	return 0;
}

//默认情况下， C++ 编译器至少给一个类添加三个函数:
//1、默认构造函数 （无参，函数体为空）；
//2、默认析构函数 （无参，函数体为空）；
//3、默认拷贝构造函数 ， 对对属性进行值拷贝；
//
//构造函数调用规则如下 :
//● 如果用户有定义有参构造函数，c++ 不再提供默认无参构造，但是会提供默认拷贝构造；
//● 如果用户定义拷贝构造函数，c++ 不会再提供其他构造函数;
