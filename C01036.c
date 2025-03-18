#include <stdio.h>
#include <string.h>

int main() {
	char N[9 + 5]; scanf("%s", N);
	int s = 1;

	for (int i = 0; i < strlen(N); ++i) {
		s *= N[i] - '0';
	};

	printf("%d", s);
	return 0;
}