#include <iostream>
using namespace std;

int main_6()
{
	// ���鶨��
	// �﷨: �������� ������[] = ��ʼֵ
	// �����е�ÿ������Ԫ�ض�����ͬ����������
	// ���������������ڴ�λ����ɵ�;

	// ��ʼ��������һ����ʼ����;

	
	// 1��һά���鶨������ַ�ʽ:
	// �������� ������[���鳤��];
	int arr[4];
	arr[0] = 1;
	arr[1] = 1;
	arr[2] = 1;
	arr[3] = 1;
	// �������� ������[���鳤��] = {ֵ1��ֵ2��ֵ3��ֵ4}; // �������
	int array_1[4] = { 1,2,3,4 }; 
	// �������� ������[] = {ֵ1��ֵ2��ֵ3��ֵ4��}; //�Զ������Ƶ���
	int array_2[] = { 1,2,3,4,1,2,3,4 };
	

	//2��һά����������;
	//ͳ�������������ڴ��еĳ���;
	cout << sizeof(array_2) << endl;
	cout << sizeof(array_2[0]) << endl;
	
	//���Ի�ȡ�������ڴ��е��׵�ַ;
	cout << array_2 << endl;



	

	system("pause");
	return 0;

}