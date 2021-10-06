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
		// 打印自己的信息
		cout << this->m_name << " " << this->m_age << endl;
	}

	////类成员
	//string m_name;
	//int m_age;
	NameType m_name;
	AgeType m_age;

};


void test_o1()
{
	// 实例化【模板的参数列表】
	Snake<string, int> snake = Snake<string,int>("radial", 13);
	// Snake<string, int> snake_01("radial", 13); // 括号法 
	snake.ShowInfo();
}

int main() 
{
	//测试
	test_o1();
	system("pause");
	return 0;
};