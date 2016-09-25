#include <stdio.h>
#include <Windows.h>
#include <locale.h>
#include <iostream>
#include "Header.h"
#include "menu.h"

using namespace std;

template<typename T>
T area(T a);
template<typename T>
T area(T a, T b, T c);
template<typename T>
T area(T a, T b);
template<typename T>
T perimetr(T a, T b, T c);
template<typename T>
T perimetr(T a, T b);
template<typename T>
T perimetr(T a);
template<typename T>
void mass(T array[], T mas[], T massiv[], int n);
template<typename T>
void sort(T mas[], int n);
template<typename T>
void generat(T mas[], int n);
template<typename T>
void generat(T mas[], int n, int x);
template <typename T>
void output(T mas[], int n);
template <typename T>
T glav(T mas[], int n, int size);
template<typename T>
T triangle(T a);
template<typename T>
T triangle(T a, T b);
template <typename T>
T triangle(T a, T b, T c);
template<typename T>
T volume(float p, T R);
template<typename T>
void volume(float p, T r, T h);
template<typename T>
T volume(float p, T r, T R, T h);

int main()
{
	int n;
	int x;
	float p=3.14;
	float mas3[100][100];
	float mas[1000];
	float mas1[1000];
	float mas2[1000];
	setlocale(LC_ALL, "rus");
	int choose;
	do
	{
		printf(ploshad);
		printf(perim);
		printf(mini);
		printf(SortBublle);
		printf(gen);
		printf(glavD);
		printf(plo);
		printf(obem);
		printf(exit);
		printf("�������� ����� ����: ");
		scanf("%d", &choose);
		switch (choose)
		{
		case 1:
			printf("����������� ��������� ���������� �������\n");
			cout << "��������� ������ ���������: " << area(2) << '\n';
			break;
		case 2:
			printf("����������� ��������� ���������� ���������\n");
			cout << "��������� ������ ���������: " << perimetr(2.3) << '\n';
			break;
		case 3:
			printf("����������� ��������� ������������ ������������ ������� �� ����\n");
			printf("������� ����������� �������: ");
			scanf("%d", &n);
			generat(mas, n);
			generat(mas1, n);
			mass(mas2, mas, mas1, n);
			output(mas2, n);
			break;
		case 4:
			printf("����������� ��������� ���������� ������� ���������\n");
			printf("������� ����������� �������: ");
			scanf("%d", &n);
			generat(mas, n);
			output(mas, n);
			sort(mas, n);
			printf("������� ��������������� ������\n");
			output(mas, n);
			break;
		case 5:
			printf("����������� ��������� ��������� ������� ��� ������� ���������� ������� � ������� �� �� �����\n");
			printf("������� ����������� ������� ��� �������: ");
			scanf("%d", &n);
			x = n;
			generat(mas, n);
			output(mas, n);
			break;
		case 6:
			printf("����������� ��������� �������� ������� ��������� �������\n");
			printf("������� ����������� �������: ");
			scanf("%d", &n);
			x = n;
			generat(mas3, n, x);
			cout << "��������� ������ ���������: "<< glav(mas3, n, x)<< '\n';
			break;
		case 7:
			printf("����������� ��������� �������� �������� ������������ �� �������� ����������\n");
			cout<<"��������� ������ ���������: "<<triangle(3.8)<<'\n';
			break;
		case 8:
			printf("����������� ��������� ���������� ������\n");
			cout << "��������� ������ ��������� " << volume(p, 1.2) << '\n';
			break;
		case 0:
			printf("������ ��������� ���������!\n");
			break;
		default:
			printf("������ ������ �� ����������!\n");
			break;
		}

	} while (choose != 0);
}