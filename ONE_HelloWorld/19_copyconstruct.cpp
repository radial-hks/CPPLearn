#include <iostream>;
using namespace std;


class People
{
public:
	// 无参（默认）构造函数
	People() {
		cout << "无参构造函数！" << endl;
	};
	// 有参构造函数
	People(int age_) {
		age = age_;
		// name = name;
		cout << "有参构造函数！" << endl;
	};
	// 拷贝构造函数
	// 参数为对象引用
	People(const People& People) {
		age = People.age;
		// name = People.name;
		cout << "拷贝构造函数！" << endl;
	};

	~People() {
		cout << "默认析构造函数！" << endl;
	};
	
	// 对象属性
	int age;
	// string name;
};

// 1、使用一个已经创建完毕的对象初始化一个新对象
void test1()
{
	People p11 = People(10);
	cout << "P1の年龄为:" << p11.age << endl;
	People p12 = People(p11);
	cout << "P2的年龄为:" << p12.age << endl;
}

// 2、值传递的方式给函数参数传值

void DoSomeThing(People p)
{
	// 执行 XXX
}
void test2()
{
	// 值传递
	People p;
	DoSomeThing(p);
}

// 3、以值的方式传递局部对象
People test3()
{
	People pp;
	cout << (int*)&pp << endl;
	return pp;
}


int main_10()
{
	// 拷贝构造函数调用时机
	
	// 1、使用一个已经创建完毕的对象初始化一个新对象
	/*People p1 = People(13, "radial");
	People p2 = People(p1);
	cout << "P2の年龄为:" << p2.name << endl;*/
	test1();
	
	// 2、值传递的方式给函数参数传值
	test2();
	
	// 3、以值的方式传递局部对象
	People radial = test3();
	// 函数内部与外部并不是同一个对象
	cout << (int*)&radial << endl;
	system("pause");
	return 0;
}