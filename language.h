#pragma once
char **phrases = new char*[19];
void seteng()
{
	phrases[0] = "Saper\n";
	phrases[1] = "Set size x:";
	phrases[2] = "Set size y:";
	phrases[3] = "Set number of mines:";
	phrases[4] = "Set normal number of mines";
	phrases[5] = "1. Make step\n";
	phrases[6] = "2. Set flag\n";
	phrases[7] = "3. Take off flag\n";
	phrases[8] = "Set coordinates through a space(x y):";
	phrases[9] = "Choose one variant:\n";
	phrases[10] = "You have won!\n";
	phrases[11] = "Time:";
	phrases[12] = " sec.\n";
	phrases[13] = "New best record in playing on this square and with this number of mines.\n";
	phrases[14] = "Best record on this square and with this number of mines:";
	phrases[15] = "Set normal coordinates.\n";
	phrases[16] = "You have lose.\n";
	phrases[17] = "On the field there are already masimum number of flags.\n";
	phrases[18] = "This dot is already opened.\n";
}

void setrus()
{
	phrases[0] = "�����\n";
	phrases[1] = "������� ������ x:";
	phrases[2] = "������� ������ y:";
	phrases[3] = "������� ���������� ���:";
	phrases[4] = "������� ���������� ���������� ���:";
	phrases[5] = "1. �������\n";
	phrases[6] = "2. ��������� ����\n";
	phrases[7] = "3. ����� ����\n";
	phrases[8] = "������� ���������� ����� ������(x y):";
	phrases[9] = "�������� ���� �� ���������:\n";
	phrases[10] = "�� ��������!\n";
	phrases[11] = "�����:";
	phrases[12] = " ���.\n";
	phrases[13] = "����� ������ ����������� �� ���� ������� � � ���� ������������ ���.\n";
	phrases[14] = "������ �� ���� ������� � � ���� ������������ ���:";
	phrases[15] = "������� ���������� ����������.\n";
	phrases[16] = "�� ���������.\n";
	phrases[17] = "�� ����� ��� ����� ������������ ���������� ������.\n";
	phrases[18] = "��� ����� ��� �������.\n";
}