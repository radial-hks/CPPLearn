#include <string>
#include <algorithm>
#include <iostream>
using namespace std;


void test_01() 
{
	// 1��string ���캯��
	// - string();
	// - string(const char* s);
	// - string(const string& str); ��������
	// - string(int n,char c);

	string a;
	
	const char* s = "radial";
	string b(s);

	string c(b);

	string(5, 'b');

	// �ϵ���԰�
	
}



int main()
{
	// ����
	test_01();
	//test_02();
	//test_03();

	system("pause");
	return 0;
}