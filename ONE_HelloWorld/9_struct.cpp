#include <iostream>
using namespace std;



// 结构体属于用户自定义的数据类型，允许用户存储不同的数据类型；
struct user
{
	string name;
	int age;
	bool gender;
};


int main_1()
{
	// 1、
	struct user u1;
	u1.age = 23;
	u1.name = "HW";
	u1.gender = false;

	// 2、
	struct user u2 = { "HW",23,false };

	// 3、 结构体数组
	struct user array[3] =
	{
		{ "HW", 23, false },
		{ "HW_", 24, false },
		{ "HW_@", 25, false }
	};

	array[0].name = "radial";

	// 4、结构体指针 
	struct user u4 = { "radial",23,false };
	user* p = &u4;
	&p->age; // 使用箭头访问结构体变量【使用】

	// 使用星号访问指针中的值
	cout << "a = " << *(&p->age) << endl;
	int age = 26;
	cout << "a = " << age << endl;
	system("pause");
	return 0;

}