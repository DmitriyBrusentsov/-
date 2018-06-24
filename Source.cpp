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
	printf("Введите порядковый номер ряда Фибоначчи: ");
	scanf_s("%i", &n);
	printf("      Порядковые номера и значения очередных чисел Фибоначчи     \n");
	fb = find_Fibonacci_number(n + 1, fb); printf("%i-ое число ряда = %g\n", n, fb);
	find_next_Fibonacci_numbers(n, fb, nextfb, prevfb);
}

/**
*Находит число Фибоначчи
*
*@param n порядковый номер числа Фибоначчи
*@param fb значение числа  Фибоначчи
*@return fb
*/
double find_Fibonacci_number(int n, double fb)
{
	fb = (pow(((1 + sqrt(5)) / 2), n) - pow(((1 - sqrt(5)) / 2), n)) / sqrt(5);
	return fb;
}
/**
*Находит cледующие числа ряда Фибоначчи
*
*@param n порядковый номер  числа Фибоначчи
*@param fb значение числа Фибоначчи
*/
void find_next_Fibonacci_numbers(int n, double  fb, double nextfb, double prevfb)
{
	for (int i = 0; i < 10; i++) {
		prevfb = find_Fibonacci_number(n + i, fb);
		fb = find_Fibonacci_number((n + 1) + i, fb);
		nextfb = prevfb + fb;
		printf("%i-ое число = %g\n", (n + 1) + i, nextfb);
	}
	getchar();
	getchar();
}
