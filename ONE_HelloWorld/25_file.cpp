#include <iostream>;
using namespace std;
#include <string>;
#include <fstream>; // ���ݳ־û���ͷ�ļ���

// �����ļ���������:
// 1��ofstream:д����
//- ios::app	׷��ģʽ������д�붼׷�ӵ��ļ�ĩβ��
//- ios::ate	�ļ��򿪺�λ���ļ�ĩβ��
//- ios::in	���ļ����ڶ�ȡ��
//- ios::out	���ļ�����д�롣
//- ios::trunc	������ļ��Ѿ����ڣ������ݽ��ڴ��ļ�֮ǰ���ضϣ������ļ�������Ϊ 0��
//- ios::binary �����Ʒ�ʽ

void writetofile()
{
	// ����������
	/*ofstream outfile;
	outfile.open("file.dat", ios::out | ios::trunc);*/
	ofstream ofs;
	// ���ļ�
	ofs.open("data.txt",ios::out);
	// д������
	ofs << "���ݳ־û�";
	// �ر��ļ�
	ofs.close();

}

// 2��ifstream:������
void readfromfile()
{
	char data[100];
	// �Զ�ģʽ���ļ�
	ifstream infile;
	infile.open("data.txt", ios::in);
	// infile.is_open() �ж��ļ��Ƿ���Դ򿪳ɹ�

	cout << "Reading from the file" << endl;
	infile >> data;

	// ����Ļ��д������
	cout << data << endl;

	// �ٴδ��ļ���ȡ���ݣ�����ʾ��
	infile >> data;
	cout << data << endl;

	// �رմ򿪵��ļ�
	infile.close();
}


// 3��fstream:��д����



int main_16() 
{
	// �ļ�д��
	writetofile();

	// �ļ���ȡ
	readfromfile();

	return 0;
}


