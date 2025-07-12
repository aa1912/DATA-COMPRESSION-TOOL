#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void comp(char *in, char *out) {
    FILE *f1 = fopen(in, "r");
    FILE *f2 = fopen(out, "w");

    if (!f1 || !f2) {
        printf("err opening file\n");
        return;
    }

    char c, prev = 0;
    int cnt = 1;

    while ((c = fgetc(f1)) != EOF) {
        if (c == prev) {
            cnt++;
        } else {
            if (prev != 0) {
                fprintf(f2, "%c%d", prev, cnt);
            }
            prev = c;
            cnt = 1;
        }
    }

    if (prev != 0) {
        fprintf(f2, "%c%d", prev, cnt);
    }

    fclose(f1);
    fclose(f2);

    printf("done compressing.\n");
}

void decomp(char *in, char *out) {
    FILE *f1 = fopen(in, "r");
    FILE *f2 = fopen(out, "w");

    if (!f1 || !f2) {
        printf("cant open\n");
        return;
    }

    char ch;
    int cnt;

    while ((ch = fgetc(f1)) != EOF) {
        if (fscanf(f1, "%d", &cnt) != 1) break;
        for (int i = 0; i < cnt; i++) {
            fputc(ch, f2);
        }
    }

    fclose(f1);
    fclose(f2);

    printf("done decompressing.\n");
}

int main() {
    int ch;
    char in[100], out[100];

    printf("== codtech compression tool ==\n");

    while (1) {
        printf("\n1. compress\n2. decompress\n3. exit\npick: ");
        scanf("%d", &ch);

        if (ch == 1) {
            printf("in file: ");
            scanf("%s", in);
            printf("out file: ");
            scanf("%s", out);
            comp(in, out);
        } else if (ch == 2) {
            printf("in file: ");
            scanf("%s", in);
            printf("out file: ");
            scanf("%s", out);
            decomp(in, out);
        } else if (ch == 3) {
            printf("bye.\n");
            break;
        } else {
            printf("invalid\n");
        }
    }

    return 0;
}
