#include <stdio.h>

int main() {
	int n; scanf("%d", &n);
	int l = 1; 

	while (n / 10 != 0) {
		l += 1;
		n /= 10;
	}

	printf("%d", l);
	return 0;
}