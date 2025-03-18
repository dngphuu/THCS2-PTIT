#include <stdio.h>

int main() {
	int N; scanf("%d", &N); 

	for (int i = 1; i < 10; ++i) {
		printf("%d ", N * i);
	};
	printf("%d", N * 10);

	return 0;
}