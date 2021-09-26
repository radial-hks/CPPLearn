#include <iostream>
using namespace std;

// 栈区数据的注意事项
// 【不要返回局部变量的地址，栈区开辟的数据由编译器自动释放；】


int* func()
{
	int a = 10; // 局部变量,存放在栈区，栈区的数据在函数执行完后自动释放
	return &a; // 返回局部变量的地址
}

int main_3()
{
	int* b = func();
	cout << *b << endl;
	// 在打印一次
	cout << *b << endl;
	system("pause");
	return 0;
}