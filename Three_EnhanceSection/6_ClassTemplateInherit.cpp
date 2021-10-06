using namespace std;
#include <iostream>
#include <string>

// 类模板
template<typename NameType, typename AgeType>
class Snake
{
public:
	Snake(NameType name, AgeType age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	//~Snake();

	// 展示自己的信息
	void ShowInfo()
	{
		cout << this->m_name << " " << this->m_age << endl;
	}
	NameType m_name;
	AgeType m_age;

};

//● 当子类继承的父类是一个类模板时，子类在声明时，要指定父类中T的类型；
class SmallSnake:public Snake<string,int>
{
//public:
	// SmallSnake()
	// ~SmallSnake();

};

//● 若不指定，编译器无法给子类分配内存；
//● 如果想灵活指定出父类T中的类型，子类也需要变成类模板；
template<typename T1,typename T2>
class BigSnake :public Snake<T1, T2>
{
//public:
	// BigSnake()
	// ~BigSnake();

};

void test_01()
{
	SmallSnake SS = SmallSnake('00',1); // 这个有点问题的
}

void test_02()
{
	BigSnake<string,int> BS;
}


int main()
{
	//测试
	test_01();
	test_02();
	system("pause");
	return 0;
};