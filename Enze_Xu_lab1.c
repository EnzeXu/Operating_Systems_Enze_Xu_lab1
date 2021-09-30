#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <memory.h>
#define MAXN 10000


void splitAndPrint(char *line) {
	int length = strlen(line);
	int index = 0;
	int tmp_length = 0;
	int argv_count = 0;
	while(index < length) {
		char tmp[MAXN];
		if (line[index] == ' ' || line[index] == '\n') {
			if (strlen(tmp) > 0) {
				printf("argv[%d] %s", argv_count++, tmp);
				printf(" (length = %d)", strlen(tmp));
				printf("\n");
				memset(tmp, 0, sizeof(tmp));
				tmp_length = 0;
			}
		} else {
			tmp[tmp_length++] = line[index];
			tmp[tmp_length] = '\0';
		}
		index ++;
	}
}

void prog1(void) {
	char *line = NULL;
	long unsigned length = 0;
	while(1) {
		printf("%%enter data: ");
		getline(&line, &length, stdin);
		if (strcmp(line, "exit\n") == 0) {
			printf("OK close shop and go home\n");
			break;
		}
		else {
			splitAndPrint(line);
		}
	}
	free(line);
}

int main() {
	prog1();
	return 0;
}
