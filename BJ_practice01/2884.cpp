#include <stdio.h>
#include <math.h>

void main() {
	int A, B, V;
	scanf_s("%d %d %d", &A, &B, &V);
	printf("%.1f", ceil(double((V - B) / (A - B))));
}