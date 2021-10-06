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


//类模板对象作函数的参数传入方式
//1、指定传入的类型-- - 直接显示对象的数据类型；
void Show_01(Snake<string, int> &s) 
{
	s.ShowInfo();
};
void test_01()
{
	Snake<string, int> snake("radial", 13);
	Show_01(snake);
}
// 2、参数模板化-- - 将对象中的参数变为模板进行传递；
template <typename T1, typename T2>
void Show_02(Snake<T1, T2>& s)
{
	//typeid(T1).name() // 查看类型名称
	s.ShowInfo();
};

void test_02() 
{
	Snake<string, int> snake("radial_01", 14);
	Show_02<string, int>(snake);
}

//3、整个类模板化-- - 将这个对象类型模板化进行传递；
template <typename T3>
void Show_03(T3& s)
{
	s.ShowInfo();
};

void test_03()
{
	Snake<string, int> snake("radial_02", 15);

	Show_03(snake); //  隐式推导
	Show_03<Snake<string, int>>(snake); // 显示指定类型
}

int main()
{
	//测试
	test_01();
	test_02();
	test_03();
	system("pause");
	return 0;
};