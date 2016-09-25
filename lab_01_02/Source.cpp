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
		printf("выберите пункт меню: ");
		scanf("%d", &choose);
		switch (choose)
		{
		case 1:
			printf("выполняется программа нахождения площади\n");
			cout << "результат работы программы: " << area(2) << '\n';
			break;
		case 2:
			printf("выполняется программа нахождения периметра\n");
			cout << "результат работы программы: " << perimetr(2.3) << '\n';
			break;
		case 3:
			printf("выполняется программа формирования минимального массива из двух\n");
			printf("введите размерность массива: ");
			scanf("%d", &n);
			generat(mas, n);
			generat(mas1, n);
			mass(mas2, mas, mas1, n);
			output(mas2, n);
			break;
		case 4:
			printf("выполняется программа сортировки массива пузырьком\n");
			printf("введите размерность массива: ");
			scanf("%d", &n);
			generat(mas, n);
			output(mas, n);
			sort(mas, n);
			printf("выводим отсортированный массив\n");
			output(mas, n);
			break;
		case 5:
			printf("выполняется программа генерации массива или матрицы случайными числами и выводом их на экран\n");
			printf("введите размерность массива или матрицы: ");
			scanf("%d", &n);
			x = n;
			generat(mas, n);
			output(mas, n);
			break;
		case 6:
			printf("выполняется программа подсчета главной диагонали матрицы\n");
			printf("введите размерность матрицы: ");
			scanf("%d", &n);
			x = n;
			generat(mas3, n, x);
			cout << "результат работы программы: "<< glav(mas3, n, x)<< '\n';
			break;
		case 7:
			printf("выполняется программа подсчета плорщади треугольника по заданным параметрам\n");
			cout<<"результат работы программы: "<<triangle(3.8)<<'\n';
			break;
		case 8:
			printf("выполняется программа вычисления объема\n");
			cout << "результат работы программы " << volume(p, 1.2) << '\n';
			break;
		case 0:
			printf("работа программы завершена!\n");
			break;
		default:
			printf("такого пункта не существует!\n");
			break;
		}

	} while (choose != 0);
}