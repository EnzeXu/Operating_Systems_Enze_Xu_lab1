//
//  prog1.c
//  prog1
//
//  Created by ENZE XU on 2021/9/25.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <memory.h>
#define MAXN 10000


void commandPrint(char *line) {
    int argc = 0;
    char *argv[MAXN];
    char *token;
    token = strtok(line, " ");
    while(token != NULL){
        argv[argc] = token;
        token = strtok(NULL, " ");
        argc++;
    }
    if (strlen(argv[argc - 1]) == 1 && argv[argc - 1][0] == 10) argc -= 1;
    else if (argv[argc - 1][strlen(argv[argc - 1]) - 1] == '\n') argv[argc - 1][strlen(argv[argc - 1]) - 1] = '\0';
    for (int i = 0; i < argc; ++i) {
        printf("argv[%d] %s (length = %ld)\n", i, argv[i], strlen(argv[i]));
    }
}

void prog1(void) {
    char line[MAXN];
    while(1) {
        printf("%%enter data: ");
        fgets(line, MAXN, stdin);
        if (strcmp(line, "exit\n") == 0) {
            printf("OK close shop and go home\n");
            break;
        }
        commandPrint(line);
    }
}

int main(int argc, const char * argv[]) {
    prog1();
    return 0;
}
