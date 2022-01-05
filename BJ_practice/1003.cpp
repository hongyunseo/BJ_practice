#include <stdio.h>

int fibonacci(int n) {
	if (n == 0) {
		return 0;
	}
	else if (n == 1) {
		return 1;
	}
	else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}

int main() {
	int N = 0;
	int T = 0;
	int f0 = 0;
	int f1 = 0;
	scanf_s("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf_s("%d", &T);
		fibonacci(T);
		if (T == 0) {
			f0 = 1;
			f1 = 0;
		}
		else if (T == 1) {
			f0 = 0;
			f1 = 1;
		}
		else {
			f0 = fibonacci(T - 2) + fibonacci(T - 3);
			f1 = fibonacci(T - 1) + fibonacci(T - 2);
		}
		printf("%d %d\n", f0, f1);
	}
}