#include <string>
#include <algorithm>
#include <iostream>
#include <iomanip>
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


void test_02()
{
	// string 赋值操作

	// 1、string& operator= (const char* s); // char* 类型字符串赋值给当前字符串；
	string a1;
	const char* s = "radial";
	a1 = s;
	// a1 = "radial";

	// 2、string& operator= (const string &s);// 把字符串s赋值给当前字符串；
	string a2;
	a2 = a1;

	// 3、string& operator= (char c);// 把字符赋值给当前字符串；
	string a3;
	a3 = 'a';

	// 4、string& assign(const char *s); // 把字符串s赋值给当前字符串；
	string a4;
	a4.assign("radial");

	// 5、string& assign(const char *s, int n); // 把字符串s的前n个字符赋值给当前字符串；

	string a5;
	a5.assign("radial", 2); // 输出 ra

	// 6、string& assign(const string &s); // 把字符串s赋值给当前字符串；
	string a6;
	a6.assign(a5);

	// 7、string& assign(int n ，char c,); // 把n个字符c赋给当前字符串
	string a7;
	a7.assign(8, 'r');

}


void test_03()
{
	// 字符串拼接
	// 【operator+=】链接: https://zh.cppreference.com/w/cpp/string/basic_string/operator%2B%3D
	// 【append】链接: https://zh.cppreference.com/w/cpp/string/basic_string/append

	string str;
	str.reserve(50); // 预留足够的存储空间以避免内存分配
	cout << str << '\n'; // 空字符串

	str += "This";
	cout << str << '\n';

	str += string(" is ");
	cout << str << '\n';

	str += 'a';
	cout << str << '\n';

	str += {' ', 's', 't', 'r', 'i', 'n', 'g', '.'};
	cout << str << '\n';

	// str += 76.85; // 等价于 str += static_cast<char>(76.85) ，可能不合意图
	// cout << str << '\n';

	str.append(3, '-');
	cout << str << '\n';

	string a1 = "radial";
	str.append(a1);
	cout << str << '\n';

	str.append("hks——————", 3);
	cout << str << '\n';

	str.append(a1, 2, 4); // 从第二位开始之后的四个字符
	cout << str << '\n';

}

void test_04()
{
	// 字符串查找及替换
	// find\rfind\replace

	// 字符串比较
	// compare

	// 字符存取
	// []，at // 也可以作为修改

	// 字符串插入及删除
	// insert erase

	// 截取子串
	// substr
	//std::string a = "0123456789abcdefghij";

	//// count 为 npos ，返回 [pos, size())
	//std::string sub1 = a.substr(10);
	//std::cout << sub1 << '\n';

	//// pos 和 pos+count 都在边界内，返回 [pos, pos+count)
	//std::string sub2 = a.substr(5, 3);
	//std::cout << sub2 << '\n';

	//// pos 在边界内， pos+count 不在，返回 [pos, size()) 
	//std::string sub4 = a.substr(a.size() - 3, 50);
	//// 这等效于
	//// std::string sub4 = a.substr(17, 3);
	//// 因为 a.size() == 20 ， pos == a.size()-3 == 17 而 a.size()-pos == 3

	//std::cout << sub4 << '\n';

	//try {
	//	// pos 在边界外，抛出
	//	std::string sub5 = a.substr(a.size() + 3, 50);
	//	std::cout << sub5 << '\n';
	//}
	//catch (const std::out_of_range& e) {
	//	std::cout << "pos exceeds string size\n";
	//}
}


int main()
{
	// 测试
	test_01();
	test_02();
	test_03();

	system("pause");
	return 0;
}