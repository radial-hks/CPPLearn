#include <iostream>
using namespace std;
#include <string>;

int main_3()
{
	// �����������߳���ʱ������ָ����Ӧ���������ͣ������޷����ڴ�����ڴ�

	// 1��������
	short s = 10;
	// 2������
	int i = 10;
	// 3��������
	long l = 10;
	// 4����������
	long long ll = 10;



	// 5��������
	// �����f�Ĺ���: ˫����ת��Ϊ������
	float f = 3.14f;
	// 6��˫����
	double d = 3.1415926;
	// Ĭ������£����һ��С��������ʾ6λ��Ч����

	// ��ѧ������
	float f2 = 3e2; // 300
	float f3 = 3e-2; //0.03

	// 6���ַ��� ֻռ��һ���ֽ� --> �洢Ϊascll������д洢
	//����ʾ�ַ��ͱ���ʱ���õ����Ž��ַ�����������Ҫ��˫���ţ� 
	//��������ֻ����һ���ַ������������ַ���;
	char ch = 'q';
	
	// 7��ת���ַ�
	// \\ ����һ��б��
	// \n ����
	// \t ˮƽ�Ʊ��

	
	// 7���ַ���
	// c ����ַ��� char ������[] = "�ַ���ֵ"; 
	char str[] = "Hello World"; //��������ż�˫Ӯ��
	
	// c++����ַ��� string  ������ = "�ַ���ֵ";
	// ����ͷ�ļ�: #include <string>;
	string str_1 = "Hello World"; 

	//8����������
	bool status = false; // ������ 1 0 // ����ֵ��������� true


	// 8���������� cin >> 	


	cout << "a = " << s << endl;
	cout << "a = " << i << endl;
	cout << "a = " << l << endl;
	cout << "a = " << ll << endl;

	cout << "char = " << ch << endl;
	cout << "char_int = " << (int)ch << endl; // ǿ��ת��Ϊ���ͽ������


	cout << str << endl;
	cout << str_1 << endl; 

	// ��ӡ�ڴ��С
	cout << "a = " << sizeof(s) << endl;
	cout << "a = " << sizeof(i) << endl;
	cout << "a = " << sizeof(l) << endl;
	cout << "a = " << sizeof(ll) << endl;

	// �ֱ��� 2 4 4 8
	
	system("pause");
	return 0;

}

// sizeof��ͳ��ָ���������͵��ڴ��С;
// sizeof(��������/����)
