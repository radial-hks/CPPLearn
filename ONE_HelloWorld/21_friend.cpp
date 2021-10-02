#include <iostream>;
using namespace std;
#include <string>; // 字符串输出

// 友元，让一个函数或者类，访问另一个类中的私有成员, 关键字: friend
// 友元的三种实现:
// 1、全局函数作友元；
// 2、类作友元；
// 3、友元函数；

class Building
{
	// 1、全局函数作友元
	friend void GoodGuy(Building* building); // 全局函数声明；
public:
	Building() 
	{
		Sittingroom = "客厅";
		Bedroom = "卧室";
	};
public:
	string Sittingroom;

private:
	string Bedroom;

};

void GoodGuy(Building* building)
{
	cout << "访问客厅" << building->Sittingroom << endl;
	cout << "访问客厅" << building->Bedroom << endl;
};

int main_12()
{
	// 
	Building b;
	GoodGuy(&b);
	system("pause");
	return 0;
}

