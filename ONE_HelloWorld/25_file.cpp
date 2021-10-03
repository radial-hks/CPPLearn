#include <iostream>;
using namespace std;
#include <string>;
#include <fstream>; // 数据持久化【头文件】

// 操作文件的三大类:
// 1、ofstream:写操作
//- ios::app	追加模式。所有写入都追加到文件末尾。
//- ios::ate	文件打开后定位到文件末尾。
//- ios::in	打开文件用于读取。
//- ios::out	打开文件用于写入。
//- ios::trunc	如果该文件已经存在，其内容将在打开文件之前被截断，即把文件长度设为 0。
//- ios::binary 二进制方式

void writetofile()
{
	// 创建流对象
	/*ofstream outfile;
	outfile.open("file.dat", ios::out | ios::trunc);*/
	ofstream ofs;
	// 打开文件
	ofs.open("data.txt",ios::out);
	// 写入数据
	ofs << "数据持久化";
	// 关闭文件
	ofs.close();

}

// 2、ifstream:读操作
void readfromfile()
{
	char data[100];
	// 以读模式打开文件
	ifstream infile;
	infile.open("data.txt", ios::in);
	// infile.is_open() 判断文件是否可以打开成功

	cout << "Reading from the file" << endl;
	infile >> data;

	// 在屏幕上写入数据
	cout << data << endl;

	// 再次从文件读取数据，并显示它
	infile >> data;
	cout << data << endl;

	// 关闭打开的文件
	infile.close();
}


// 3、fstream:读写操作



int main_16() 
{
	// 文件写入
	writetofile();

	// 文件读取
	readfromfile();

	return 0;
}


