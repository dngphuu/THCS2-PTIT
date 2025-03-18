#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int ktcphuong(int S) {
	int n = sqrt(S);

	if (n * n == S) return n;
	if ((n + 1)*(n + 1) == S) return n + 1;

	return 0;
}

void swap(int *a, int *b) {
		int temp = *a;
		*a = *b;
		*b = temp;
	}



int main() {
	bool isSqr = false;
	int a, b, c, d, e, f;
	scanf("%d%d", &a, &b);
	scanf("%d%d", &c, &d);
	scanf("%d%d", &e, &f);

	int totalArea = a*b + c*d + e*f;
	int y = ktcphuong(totalArea);

	if (a > b) swap(&a, &b);
	if (c > d) swap(&c, &d);
	if (e > f) swap(&e, &f);

	if (y == 0) {
		printf("NO\n");
		return 0;
	}

	if (b == y && d == y && f == y) {
		isSqr = true;
	} else {
		if (d == y) {swap(&a, &c); swap(&b, &d);}
		if (f == y) {swap(&a, &e); swap(&b, &f);}
		if (b == y) {
			a = y - a;
			if ((c == a && e == a) || (c == a && f == a) || (d == a && e == a) || (d == a && f == a)) {
				isSqr = true;
			}
		}
	}

	if (isSqr) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}

	return 0;
}