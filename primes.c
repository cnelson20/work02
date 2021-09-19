#include <stdio.h>
#include <stdlib.h>

struct prime {
	unsigned int p;
	struct prime *next;
};

int main() {
	unsigned int a = 2;
	struct prime *firstPrime;
	firstPrime = malloc(sizeof(struct prime));
	firstPrime->p = 2;
	firstPrime->next = NULL;
	while (1) {
		a++;
		struct prime *loopP = firstPrime;
		while (loopP->next != NULL) {
			if (a % loopP->p == 0) {
				break;
			} else {
				loopP = loopP->next;
			}
		}
		if (loopP->next == NULL) {
			loopP->next = malloc(sizeof(struct prime));
			loopP->next->p = a;
			loopP->next->next = NULL;
			printf("Prime: %d\n",a);
		}
	}
	return (0);
}