#include <iostream>
using namespace std;

struct Point
{
	int xpos;
	int ypos;

	void MovePos(int x, int y)
	{
		xpos += x;
		ypos += y;
	}

	void AddPoint(const Point& a) // a�� ���� �������� �ʱ� ��ä const�� ��, �޸� ȿ���� ���ؼ� a�� ���� �����Ͽ� ���� �ʰ� ������ ���� ������ ������
	{
		xpos += a.xpos;
		ypos += a.ypos;
	}

	void ShowPosition()
	{
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}
};

int main()
{
	Point pos1 = { 12, 4 };
	Point pos2 = { 20, 30 };

	pos1.MovePos(-7, 10);
	pos1.ShowPosition(); // [5, 14]���

	pos1.AddPoint(pos2);
	pos1.ShowPosition(); // [25, 44] ���
	return 0;
}
