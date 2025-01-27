#include <iostream>
using namespace std;

void swappointer(int* n1, int* n2)
{
	int temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

void swappointer2(int* (&ref1), int* (&ref2)) // ptr1, ptr2��� ������ ������ �����ڷ� �����Ͽ� �Ű������� �����ڸ� �־��ְ� �� �������� ����?�� ������ �����̱� ������ �տ� *�� ���δ�.
{
	int* temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}

int main()
{
	int num1 = 5;
	int* ptr1 = &num1;
	int num2 = 10;
	int* ptr2 = &num2;

	swappointer(ptr1, ptr2);
	cout << *ptr1 << " and " << *ptr2 << endl;
	swappointer2(ptr1, ptr2);
	cout << *ptr1 << " and " << *ptr2 << endl;
	return 0;
}