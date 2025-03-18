#include <stdio.h>

int main() {
	int a, b; scanf("%d%d", &a, &b);
	int a0 = a, b0 = b;
	int r, ucln;
	long long bcnn;

	if (b == 0) {
		ucln = a;
	} else {
		while (a % b != 0) {
			r = a % b;
			a = b;
			b = r;
		}

		ucln = b;	
	}

	bcnn = a0 * b0 / ucln;

	printf("%d\n%lld", ucln, bcnn);

	return 0;
}