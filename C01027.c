#include <stdio.h>

int ucln(int a, int b) {
	if (a == 0 || b == 0) {
		return a + b; 
	};

	while (a != b) {
		if (a > b) {
			a = a - b;
		} else {
			b = b - a;
		};
	};


	return a; 
};

int main() {
	int N; scanf("%d", &N);
	int a, b;

	while (N--) {
		scanf("%d %d", &a, &b);

		printf("%d\n", ucln(a, b));
	};

	return 0;
};