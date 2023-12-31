#include <iostream>
#include "locale.h"
#include "easy.h"
using namespace std;

void itc_name() {
    setlocale(0, "Russian");
    cout << "Òèìîôåé";
}

void itc_fio() {
    setlocale(0, "Russian");
    itc_name();
    cout << " Ñòàíèñëàâîâè÷ Âåòðîâ";
}

int itc_abs(int a) {
	if (a > 0)
		return a;
	return -a;
}

double itc_fabs(double a) {
	if (a > 0)
		return a;
	return -a;
}

int itc_revnbr(int a) {
	return a % 10 * 100 + a / 10 % 10 * 10 + a / 100;
}

bool itc_iseven(int a) {
	if (a % 2)
		return false;
	return true;
}

int itc_max(int a, int b) {
	if (a > b)
		return a;
	return b;
}

int itc_min(int a, int b) {
	if (a < b)
		return a;
	return b;
}

double itc_fmax(double a, double b) {
	if (a > b)
		return a;
	return b;
}

double itc_fmin(double a, double b) {
	if (a < b)
		return a;
	return b;
}

int itc_sqrt(int a) {
	if (a == 1)
		return 1;
	if (a == 0)
		return 0;
	if (a == 4)
		return 2;
	for (int i = 2; i < a / 2; i++) {
		if ((a / i == i) && (a % i == 0))
			return i;
	}
	return -1;
}

int itc_skv(int a) {
	if (a <= 0)
		return -1;
	return a * a;
}

int itc_spr(int a, int b) {
	if ((a <= 0) || (b <= 0))
		return -1;
	return a * b;
}

int itc_str(int a, int b, int c) {
	if ((a <= 0) || (b <= 0) || (c <= 0))
		return -1;
	int max, min, sum = a + b + c;
	min = itc_min(itc_min(a, b), c);
	max = itc_max(itc_max(a, b), c);
	if (sum - max <= max)
		return -1;
	if (max - (sum - max - min) > min)
		return -1;
	return itc_sqrt(int((sum / 2.0 - a) * (sum / 2.0 - b) * (sum / 2.0 - c) * sum / 2.0));
}

double itc_scir(int a) {
	if (a <= 0)
		return -1;
	return a * a * 3.14;
}

double itc_pow(int a, int b) {
	double n = 1.0;
	if (b == 0)
		return 1;
	if (b > 0) {
		for (int i = 1; i <= b; i++) {
			n *= a;
		}
	}
	else {
		b = -b;
		for (int i = 1; i <= b; i++) {
			n /= a;
		}
	}
	return n;
}

bool itc_ispositive(int a) {
	if (a < 0)
		return false;
	return true;
}

bool itc_ispositive_d(double a) {
	if (a < 0)
		return false;
	return true;
}
