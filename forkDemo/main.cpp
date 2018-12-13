#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/sysinfo.h>

void printMemStat() {
	struct sysinfo si;
	sysinfo(&si);
	printf("===\n");
	printf("Total: %llu\n", si.totalram);
	printf("Free: %llu\n", si.freeram);
}

int main() {
	long len = 200000000;
	long * array = (long *)malloc(len * sizeof(long));
	long i = 0;
	for (; i < len; i++) {
		array[i] = i;
	}

	printMemStat();
	if (fork() == 0) {
		/*child*/
		printMemStat();

		i = 0;
		for (; i < len / 2; i++) {
			array[i] = i + 1;
		}

		printMemStat();

		i = 0;
		for (; i < len; i++) {
			array[i] = i + 1;
		}

		printMemStat();

	} else {
		/*parent*/
		int times = 10;
		while (times-- > 0) {
			sleep(1);
		}
	}

	return 0;
}
