
#include <math.h>
#include <stdio.h>
#include <conio.h>

int main(void) {
	double x = 6.0, y = 4.0, hasil;

	hasil = pow(x, y);
	printf("%.1f ^ %.1f is %.1f\n", x, y, hasil);

	_getch();
	return;
}