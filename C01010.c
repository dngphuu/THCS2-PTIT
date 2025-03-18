#include <stdio.h>

int main() {
	int d; scanf("%d", &d);

	int year = d / 365;
	int week = d % 365 / 7;
	int day = d - (year * 365) - (week * 7);

	printf("%d %d %d", year, week, day);

	return 0;
}