#include <string>
#include <algorithm>
#include <iostream>
using namespace std;


void test_01() 
{
	// 1、string 构造函数
	// - string();
	// - string(const char* s);
	// - string(const string& str); 拷贝构造
	// - string(int n,char c);

	string a;
	
	const char* s = "radial";
	string b(s);

	string c(b);

	string(5, 'b');

	// 断点测试吧
	
}



int main()
{
	// 测试
	test_01();
	//test_02();
	//test_03();

	system("pause");
	return 0;
}