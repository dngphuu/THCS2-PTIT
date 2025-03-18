#include <stdio.h>

int main() {
	int n;
	int a, b; scanf("%d %d", &a, &b);

	if (a > b) {
		n = a;
		a = b;
		b = n;
	}

	n = b - a + 1;

	printf("%d", (a + b) * n / 2);

	return 0;
}