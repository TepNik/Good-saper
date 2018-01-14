#include <iostream>
#include <ctime>
#include <cstdlib>
#include "print_field.h"
#include "flag.h"
#include "is_end.h"
#include "play.h"
#include "unflag.h"

int main()
{
	int SIZEX, SIZEY, NOFMINES, NOFFLAGS = 0;
	setlocale(LC_ALL, "Russian");
	std::cout << "�����\n" << "������� ������ x:";
	std::cin >> SIZEX;
	std::cout << "������� ������ y:";
	std::cin >> SIZEY;
	std::cout << "������� ���������� ���:";
	std::cin >> NOFMINES;
	while (NOFMINES >= SIZEX*SIZEY)
	{
		std::cout << "������� ����� ���. ������� ���������� ���:";
		std::cin >> NOFMINES;
	}
	int **status = new int*[SIZEX];
	for (int i = 0; i < SIZEX; ++i)
	{
		status[i] = new int[SIZEY];
		for (int j = 0; j < SIZEY; ++j)
		{
			status[i][j] = -1;
		}
	}
	bool **mines = new bool*[SIZEX];
	for (int i = 0; i < SIZEX; ++i)
	{
		mines[i] = new bool[SIZEY];
		for (int j = 0; j < SIZEY; ++j)
		{
			mines[i][j] = false;
		}
	}
	int x1, y1, choise1;
	print_field(SIZEX, SIZEY, status, mines);
	std::cout << "1. �������\n" << "2. ��������� ����\n" << "3. ����� ����\n";
	std::cin >> choise1;
	std::cout << "������� ���������� ����� ������(x y):";
	std::cin >> x1 >> y1;
	srand(time(NULL));
	for (int i = 0; i < NOFMINES; ++i)
	{
		int x, y;
		x = rand() % SIZEX;
		y = rand() % SIZEY;
		if (mines[x][y] == false)
		{
			if ((x != x1 - 1) || (y != y1 - 1))
				mines[x][y] = true;
			else
				--i;
		}
		else
			--i;
	}
	bool stat = false, stat2 = false;
	long long int begin = time(0), end;
	while (!is_end(SIZEX, SIZEY, status, mines, NOFMINES))
	{
		if (stat)
			print_field(SIZEX, SIZEY, status, mines);
		stat = true;
		int choise, x, y;
		if (stat2)
		{
			std::cout << "1. �������\n" << "2. ��������� ����\n" << "3. ����� ����\n";
			std::cin >> choise;
			std::cout << "������� ���������� ����� ������(x y):";
			std::cin >> x >> y;
		}
		else
		{
			choise = choise1;
			x = x1;
			y = y1;
		}
		stat2 = true;
		if (choise == 1)
			play(x, y, status, mines, SIZEX, SIZEY, stat);
		else if (choise == 2)
			flag(x, y, status, mines, SIZEX, SIZEY, stat, NOFFLAGS, NOFMINES);
		else if (choise == 3)
			unflag(x, y, status, mines, SIZEX, SIZEY, stat);
		else
		{
			stat = false;
			std::cout << "�������� ���� �� ���������:\n";
			continue;
		}
	}
	std::cout << "�� ��������!\n";
	end = time(0);
	std::cout << "�����:" << end - begin << " ������.\n";
	system("pause");
	return 0;
}