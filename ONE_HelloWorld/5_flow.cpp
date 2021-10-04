#include <iostream>
using namespace std;

int main_5()
{
	// 分支结构
	// 1、一级分支结构
	int score = 520;
	if ( score > 600)
	{
		cout << "恭喜你，通过分数测验" << endl;
	}
	else 
	{
		cout << "再战一年" << endl;
	}
	// 2、 多分支结构
	if (1)
	{
		cout << "恭喜你，通过分数测验" << endl;
	} 
	else if(1)
	{
		cout << "恭喜你，通过分数测验" << endl;
	}
	else 
	{
		cout << "再战一年" << endl;
	}
	// 3、三目运算符 ： 表达式1 ? 表达式2: 表达式3
	// 三目运算符返回的是变量，可以继续赋值； 
	1 ? cout << "---1---" << endl : cout << "---0---" << endl;

	// 4、 switch 制定多条件语句
	int a = 1;
	switch (a)
	{
	case 1:
		cout << "再战一年" << endl;
		break;
	case 2:
		cout << "再战一年" << endl;
		break;
	case 3:
		cout << "再战一年" << endl;
		break;
	case 4:
		cout << "再战一年" << endl;
		break;
	default:
		break;
	}

	// 选择结构
	
	// 循环结构
	while (true)
	{
		break;
	};

	// for(起始表达式;条件表达式;末尾循环体){循环语句}
	for (int i = 0; i < 10; i++) 
	{
		i++;
	}

	// 至少执行一次;
	do 
	{
		cout << "再战一年" << endl;
	} while (0);



	// cout << "hello world" << endl;


	system("pause");
	return 0;
}
