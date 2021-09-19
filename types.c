#include <stdio.h>
#include <stdlib.h>

int main() {
	float a = 7.0f / 3.0f;
	printf("%.3f\n",a);
	int b = 7 / 3;
	printf("%d\n",b);
	unsigned char overflow = 0;
	overflow += 256;
	printf("%d\n",overflow);
	unsigned short overflowS = 0;
	overflowS += 65536;
	printf("%d\n",overflowS);
}