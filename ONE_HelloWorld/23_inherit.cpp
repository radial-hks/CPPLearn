#include <iostream>;
using namespace std;
#include <string>;

// 基类
class Animal
{
public:
	Animal();
	~Animal();
	int age = 10;
private:
	int weidgt = 10;

protected:
	int height = 10;

};

Animal::Animal()
{
}

Animal::~Animal()
{
}

// 派生类

class Pig : public Animal
{
public:
	void func() 
	{
		age = 100; // 公共权限（内外皆可访问）
		// weidgt = 100; // 无权限修改
		height = 100; // 保护权限（类内可访问，而类外不行）
	};
};

class Cat : private Animal
{
public:
	void func()
	{
		age = 100; // 私有权限（类内可访问，而类外不行）
		// weidgt = 100; // 无权限修改
		height = 100; // 私有权限（类内可访问，而类外不行）
	};
};

class Dog : protected Animal
{
public:
	void func()
	{
		age = 100; // 保护权限（类内可访问，而类外不行）
		// weidgt = 100; // 无权限修改
		height = 100; // 保护权限（类内可访问，而类外不行）
	};
};


int main_14() 
{
	// 继承: 减少重复代码
	// class 子类 : public 父类；
	// - 私有皆不可访问，公有为公有，保护为保护; 
	// class 子类 : private 父类；
	// - 私有皆不可访问, 其余皆化为私有；
	// class 子类 : protected 父类；
	// - - 私有皆不可访问, 其余皆化为保护；

	Pig p;
	Cat c;
	Dog d;

	p.age;
	
	return 0;
};



/*继承类型
当一个类派生自基类，该基类可以被继承为 public 、protected 或 private 几种类型。继承类型是通过上面讲解的访问修饰符 access - specifier 来指定的。

我们几乎不使用 protected 或 private 继承，通常使用 public 继承。当使用不同类型的继承时，遵循以下几个规则：

公有继承（public）：当一个类派生自公有基类时，基类的公有成员也是派生类的公有成员，基类的保护成员也是派生类的保护成员，基类的私有成员不能直接被派生类访问，但是可以通过调用基类的公有和保护成员来访问。
保护继承（protected）： 当一个类派生自保护基类时，基类的公有和保护成员将成为派生类的保护成员。
私有继承（private）：当一个类派生自私有基类时，基类的公有和保护成员将成为派生类的私有成员*/