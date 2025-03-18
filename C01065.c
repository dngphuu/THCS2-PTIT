#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char n[11]; scanf("%s", n);
	int cnt[10] = {0}; // Dem so xhien

	for (int i = 0; i < strlen(n); i++) {
		cnt[n[i] - '0']++;
	} 

	for (int i = 0; i < strlen(n); i++) {
		if ((n[i] == '2' || n[i] == '3' || n[i] == '5' || n[i] == '7') && cnt[n[i] - '0'] != 0) {
			printf("%c %d\n", n[i], cnt[n[i] - '0']);
			cnt[n[i] - '0'] = 0;
		}
	} 

	return 0;
}