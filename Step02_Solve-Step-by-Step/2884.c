#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//2884�� �˶� �ð�
int main() {
	int H, M;
	scanf("%d %d", &H, &M);

	M -= 45;
	if (M < 0) {
		M += 60;
		H -= 1;
		if (H < 0)
			H = 23;
	}
	printf("%d %d", H, M);
	return 0;
}