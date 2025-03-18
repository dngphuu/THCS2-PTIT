#include <stdio.h>
#include <string.h>

int main() {
	char n[9 + 5]; scanf("%s", n);

	printf("%d %d", n[0] - '0', n[strlen(n) - 1] - '0');

	return 0;
}