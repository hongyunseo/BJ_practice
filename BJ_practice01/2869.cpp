#include <stdio.h>
int main()
{
	int N = 0;
	int cnt = 0;
	scanf_s("%d", &N);

	while (N > 0) {
		if (N % 5 == 0) {
			N = N - 5;
			cnt++;
		}
		else if (N % 3 == 0) {
			N = N - 3;
			cnt++;
		}
		else if (N > 5) {
			N = N - 5;
			cnt++;
		}
		else {
			cnt = -1;
			break;
		}

	}
	printf("%d", cnt);
}