#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

template<typename T>
T area(T a, T b)
{
	T x;
	x = a*b;
	return x;
}

template<typename T>
T area(T a, T b, T c)
{
	T x;
	T p;
	p = (a + b + c) / 2;
	x = ((sqrt(a*p)*(b*p)*(c*p)));
	return x;
}

template<typename T>
T area(T a)
{
	float p = 3.14;
	T x;
	x = a*a*p;
	return x;
}

template<typename T>
T perimetr(T a, T b, T c)
{
	T x;
	x = a + b + c;
	return x;
}

template<typename T>
T perimetr(T a, T b)
{
	T x;
	x = (a + b) * 2;
	return x;
}

template<typename T>
T perimetr(T a)
{
	T x;
	float p = 3.14;
	x = p*a;
	return x;
}

template<typename T>
void mass(T array[], T mas[], T massiv[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		array[i] = min(mas[i], massiv[i]);
	}
}

template<typename T>
void sort(T mas[], int n)
{
	T t;
	int i;
	int j;
	for (i = 0; i < n - 1; i++)
	{
		for (j = n - 1; j > i; j--)
		{
			t = mas[j];
			mas[j] = mas[j - 1];
			mas[j - 1] = t;
		}
	}
}


template<typename T>
void generat(T mas[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		mas[i] = 0.01*(rand() % 1000);
	}
}

template<typename T>
void generat(T mas[100][100], int n, int x)
{
	x = n;
	int i;
	int j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			mas[i][j] = 0.01*(rand() % 1000);
		}
	}
}

template <typename T>
void output(T mas[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		cout << "i элемент массива: " << mas[i] << '\n';
	}
}

template <typename T>
T glav(T mas[100][100], int n, int size)
{
	int i;
	int j;
	T sum=0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == j)
			{
				sum += mas[i][j];
			}
		}
	}
	return sum;
}

template<typename T>
T triangle(T a)
{
	T sum;
	sum = sqrt(3) / 4 * a*a;
	return sum;
}

template<typename T>
T triangle(T a, T b)
{
	T sum;
	sum = (1 / 2)*a*b;
	return b;
}

template <typename T>
T triangle(T a, T b, T c)
{
	T sum;
	T p;
	p = (a + b + c) / 2;
	sum = sqrt(p*(p - a)*(p - b)*(p - c));
	return sum;
}

template<typename T>
T volume(float p, T R)
{
	T V;
	V = (4 / 3)*p*R*R;
	return V;
}

template<typename T>
T volume(float p, T r, T h)
{
	T V;
	V = (1 / 3)*p*r*r*h;
	return V;
}

template<typename T>
T volume(float p, T r, T R, T h)
{
	T V;
	V = (1 / 3 * p*h*(r*r + R*R + r*R));
	return V;
}