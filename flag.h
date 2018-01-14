#pragma once
void flag(int x, int y, int **status, bool **mines, int SIZEX, int SIZEY, bool &stat, int NOFFLAGS, int NOFMINES)
{
	if ((x <= 0) || (y <= 0) || (x > SIZEX) || (y > SIZEY))
	{
		std::cout << "�������� ���������� ����������.\n";
		stat = false;
		return;
	}
	if (NOFFLAGS == NOFMINES)
	{
		std::cout << "�� ����� ��� ����� ������������ ���������� ������.\n";
		stat = false;
		return;
	}
	if (status[x - 1][y - 1] >= 0)
	{
		std::cout << "��� ����� ��� �������.\n";
		stat = false;
		return;
	}
	if ((status[x - 1][y - 1] < 0) && (NOFFLAGS < NOFMINES))
		status[x - 1][y - 1] = -2;
}