#include <iostream>
using namespace std;

int main()
{
	const int num = 12;
	const int* ptr = &num; //������ ������ ����� num�� �ּڰ��� ptr�� ����
	const int* (&ref) = ptr; //�����ͺ��� ptr �� �����ϴ� ������ ref�� ����(������ ������ ���� ������ ����)
	cout << num << endl;
	cout << ptr << endl;
	cout << ref << endl;
	cout << "result: " << *ref << endl;

	return 0;
}