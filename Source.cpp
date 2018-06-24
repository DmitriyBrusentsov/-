#include <stdio.h>
#include <math.h>
#include <locale.h>

double find_Fibonacci_number(int n, double  fb);
void find_next_Fibonacci_numbers(int n, double  fb, double nextFb, double prevfb);

int main(void)
{
	int n;
	double fb = 0, nextfb = 0, prevfb = 0;
	setlocale(LC_ALL, "Rus");
	printf("������� ���������� ����� ���� ���������: ");
	scanf_s("%i", &n);
	printf("      ���������� ������ � �������� ��������� ����� ���������     \n");
	fb = find_Fibonacci_number(n + 1, fb); printf("%i-�� ����� ���� = %g\n", n, fb);
	find_next_Fibonacci_numbers(n, fb, nextfb, prevfb);
}

/**
*������� ����� ���������
*
*@param n ���������� ����� ����� ���������
*@param fb �������� �����  ���������
*@return fb
*/
double find_Fibonacci_number(int n, double fb)
{
	fb = (pow(((1 + sqrt(5)) / 2), n) - pow(((1 - sqrt(5)) / 2), n)) / sqrt(5);
	return fb;
}

