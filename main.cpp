#include <iostream.h>
using namespace std;
int main(int argc, char *argv[])
{
	int a = 1024;
	int &b = a;
	cout << "a =" << a << endl;
	cout << "b =" << b << endl;
	
	b = 1023;
	cout << "a =" << a << endl;
	cout << "b =" << b << endl;
	
	/*���ó�ʼ��������һ�����󣬲���ֵ*/
	//int &c = 10;
	//cout << "c =" << c << endl;
	
	const int d = 100;
	const int &e = d;
	/*��const���ò��ܰ󶨵�const ����*/
	/*��Ϊconst������ֻ���ģ����Է�
	const����ֵ���޸Ļ��޸�ԭ�����ֵ��*/ 
    //int &f = d; 
	cout << "e = " << e << endl; 
	/*const ���ÿ��Գ�ʼ��Ϊ��ͬ���͵Ķ�����ʼ��Ϊ��ֵ*/
	 int f =12;
	 const int &g = 12;
	 const  int &h = g + f; 
	 cout << "g = " << g << endl;
	 cout << "h = " << h << endl; 
	 
	 double  i = 3.14;
	 const int &j = i;
	 cout << "i = " << i << endl;
	 cout << "j = " << j << endl; 

	 
	return 0;
}