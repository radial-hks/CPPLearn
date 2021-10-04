#include <iostream>
using namespace std;
#include <string>;

int main_3()
{
	// 创建变量或者常量时，必须指定相应的数据类型，否则无法给内存分配内存

	// 1、短整型
	short s = 10;
	// 2、整型
	int i = 10;
	// 3、长整型
	long l = 10;
	// 4、长长整型
	long long ll = 10;



	// 5、单精度
	// 不添加f的过程: 双精度转换为单精度
	float f = 3.14f;
	// 6、双精度
	double d = 3.1415926;
	// 默认情况下，输出一个小数，会显示6位有效数字

	// 科学计数法
	float f2 = 3e2; // 300
	float f3 = 3e-2; //0.03

	// 6、字符型 只占用一个字节 --> 存储为ascll编码进行存储
	//在显示字符型变量时，用单引号将字符括起来，不要用双引号； 
	//单引号内只能有一个字符，不可以是字符串;
	char ch = 'q';
	
	// 7、转义字符
	// \\ 代表一个斜线
	// \n 换行
	// \t 水平制表符

	
	// 7、字符串
	// c 风格字符串 char 变量名[] = "字符串值"; 
	char str[] = "Hello World"; //添加中括号计双赢好
	
	// c++风格字符串 string  变量名 = "字符串值";
	// 包含头文件: #include <string>;
	string str_1 = "Hello World"; 

	//8、布尔类型
	bool status = false; // 本质是 1 0 // 非零值都代表的是 true


	// 8、数据输入 cin >> 	


	cout << "a = " << s << endl;
	cout << "a = " << i << endl;
	cout << "a = " << l << endl;
	cout << "a = " << ll << endl;

	cout << "char = " << ch << endl;
	cout << "char_int = " << (int)ch << endl; // 强制转换为整型进行输出


	cout << str << endl;
	cout << str_1 << endl; 

	// 打印内存大小
	cout << "a = " << sizeof(s) << endl;
	cout << "a = " << sizeof(i) << endl;
	cout << "a = " << sizeof(l) << endl;
	cout << "a = " << sizeof(ll) << endl;

	// 分别是 2 4 4 8
	
	system("pause");
	return 0;

}

// sizeof：统计指定数据类型的内存大小;
// sizeof(数据类型/变量)
