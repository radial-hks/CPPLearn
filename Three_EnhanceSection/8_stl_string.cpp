#include <string>
#include <algorithm>
#include <iostream>
#include <iomanip>
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


void test_02()
{
	// string ��ֵ����

	// 1��string& operator= (const char* s); // char* �����ַ�����ֵ����ǰ�ַ�����
	string a1;
	const char* s = "radial";
	a1 = s;
	// a1 = "radial";

	// 2��string& operator= (const string &s);// ���ַ���s��ֵ����ǰ�ַ�����
	string a2;
	a2 = a1;

	// 3��string& operator= (char c);// ���ַ���ֵ����ǰ�ַ�����
	string a3;
	a3 = 'a';

	// 4��string& assign(const char *s); // ���ַ���s��ֵ����ǰ�ַ�����
	string a4;
	a4.assign("radial");

	// 5��string& assign(const char *s, int n); // ���ַ���s��ǰn���ַ���ֵ����ǰ�ַ�����

	string a5;
	a5.assign("radial", 2); // ��� ra

	// 6��string& assign(const string &s); // ���ַ���s��ֵ����ǰ�ַ�����
	string a6;
	a6.assign(a5);

	// 7��string& assign(int n ��char c,); // ��n���ַ�c������ǰ�ַ���
	string a7;
	a7.assign(8, 'r');

}


void test_03()
{
	// �ַ���ƴ��
	// ��operator+=������: https://zh.cppreference.com/w/cpp/string/basic_string/operator%2B%3D
	// ��append������: https://zh.cppreference.com/w/cpp/string/basic_string/append

	string str;
	str.reserve(50); // Ԥ���㹻�Ĵ洢�ռ��Ա����ڴ����
	cout << str << '\n'; // ���ַ���

	str += "This";
	cout << str << '\n';

	str += string(" is ");
	cout << str << '\n';

	str += 'a';
	cout << str << '\n';

	str += {' ', 's', 't', 'r', 'i', 'n', 'g', '.'};
	cout << str << '\n';

	// str += 76.85; // �ȼ��� str += static_cast<char>(76.85) �����ܲ�����ͼ
	// cout << str << '\n';

	str.append(3, '-');
	cout << str << '\n';

	string a1 = "radial";
	str.append(a1);
	cout << str << '\n';

	str.append("hks������������", 3);
	cout << str << '\n';

	str.append(a1, 2, 4); // �ӵڶ�λ��ʼ֮����ĸ��ַ�
	cout << str << '\n';

}

void test_04()
{
	// �ַ������Ҽ��滻
	// find\rfind\replace

	// �ַ����Ƚ�
	// compare

	// �ַ���ȡ
	// []��at // Ҳ������Ϊ�޸�

	// �ַ������뼰ɾ��
	// insert erase

	// ��ȡ�Ӵ�
	// substr
	//std::string a = "0123456789abcdefghij";

	//// count Ϊ npos ������ [pos, size())
	//std::string sub1 = a.substr(10);
	//std::cout << sub1 << '\n';

	//// pos �� pos+count ���ڱ߽��ڣ����� [pos, pos+count)
	//std::string sub2 = a.substr(5, 3);
	//std::cout << sub2 << '\n';

	//// pos �ڱ߽��ڣ� pos+count ���ڣ����� [pos, size()) 
	//std::string sub4 = a.substr(a.size() - 3, 50);
	//// ���Ч��
	//// std::string sub4 = a.substr(17, 3);
	//// ��Ϊ a.size() == 20 �� pos == a.size()-3 == 17 �� a.size()-pos == 3

	//std::cout << sub4 << '\n';

	//try {
	//	// pos �ڱ߽��⣬�׳�
	//	std::string sub5 = a.substr(a.size() + 3, 50);
	//	std::cout << sub5 << '\n';
	//}
	//catch (const std::out_of_range& e) {
	//	std::cout << "pos exceeds string size\n";
	//}
}


int main()
{
	// ����
	test_01();
	test_02();
	test_03();

	system("pause");
	return 0;
}