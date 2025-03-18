#include <stdio.h>

int main() {	
	int n; scanf("%d", &n);
	int c = 0; int l = 0;

	while (n) {
		if (n % 10 % 2 == 0) {
			c += 1;
		} else {
			l += 1;
		}
		n /= 10;
	}

	printf("%d %d\n", l, c);

	return 0;
}