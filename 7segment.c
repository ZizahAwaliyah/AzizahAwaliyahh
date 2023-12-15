#include <stdio.h>

void Decimal_to_SevenSegment(int N, int segment[]) {
    if (N == 0) {
        segment[0] = 1; segment[1] = 1; segment[2] = 1;
        segment[3] = 0; segment[4] = 1; segment[5] = 1;
        segment[6] = 1;
    } else if (N == 1) {
        segment[0] = 0; segment[1] = 0; segment[2] = 1;
        segment[3] = 0; segment[4] = 0; segment[5] = 1;
        segment[6] = 0;
    } else if (N == 2) {
        segment[0] = 1; segment[1] = 0; segment[2] = 1;
        segment[3] = 1; segment[4] = 1; segment[5] = 0;
        segment[6] = 1;
    } else if (N == 3) {
        segment[0] = 1; segment[1] = 0; segment[2] = 1;
        segment[3] = 1; segment[4] = 0; segment[5] = 1;
        segment[6] = 1;
    } else if (N == 4) {
        segment[0] = 0; segment[1] = 1; segment[2] = 1;
        segment[3] = 1; segment[4] = 0; segment[5] = 1;
        segment[6] = 0;
    } else if (N == 5) {
        segment[0] = 1; segment[1] = 1; segment[2] = 0;
        segment[3] = 1; segment[4] = 0; segment[5] = 1;
        segment[6] = 1;
    } else if (N == 6) {
        segment[0] = 1; segment[1] = 1; segment[2] = 0;
        segment[3] = 1; segment[4] = 1; segment[5] = 1;
        segment[6] = 1;
    } else if (N == 7) {
        segment[0] = 1; segment[1] = 0; segment[2] = 1;
        segment[3] = 0; segment[4] = 0; segment[5] = 1;
        segment[6] = 0;
    } else if (N == 8) {
        segment[0] = 1; segment[1] = 1; segment[2] = 1;
        segment[3] = 1; segment[4] = 1; segment[5] = 1;
        segment[6] = 1;
    } else if (N == 9) {
        segment[0] = 1; segment[1] = 1; segment[2] = 1;
        segment[3] = 1; segment[4] = 0; segment[5] = 1;
        segment[6] = 1;
    }
}

void Print_SevenSegment(int Segment[]) {
    char horizontal[] = "=====\n";
    char vertical[] = "|| ";

    for (int i = 0; i < 7; i++) {
        if (i % 3 == 0 || i == 0) {
            if (Segment[i] == 1) {
                printf("%s", horizontal);
            } else {
                printf("\n");
            }
        } else {
            if (Segment[i] == 1) {
                printf("%s", vertical);
            } else {
                printf("   ");
            }

            if (i == 2 || i == 5) {
                printf("\n");
            }
        }
    }
}

void Draw_Table(int segment[]) {
    printf("===============================\n");
    printf("|| a | b | c | d | e | f | g ||\n");
    printf("-------------------------------\n");
    printf("|| %d | %d | %d | %d | %d | %d | %d ||\n",
           segment[0], segment[1], segment[2],
           segment[3], segment[4], segment[5],
           segment[6]);
    printf("===============================\n");
}

int main() {
    printf("\n===== Display Seven_Segment =====\n");
    printf("Name     : Azizah Awaliyah\n");
    printf("NIM      : D121231062\n");
   

    int exit = 0;

    while (!exit) {
        int N;
        printf("Enter number to display (0-9), input else to exit : ");
        scanf("%d", &N);

        if (N >= 0 && N < 10) {
            int Segment[7];
            Decimal_to_SevenSegment(N, Segment);

            printf("%d to Seven_Segment Representation in Table :\n", N);
            Draw_Table(Segment);

            printf("Seven_Segment Display of %d :\n", N);
            Print_SevenSegment(Segment);
            printf("\n");
        } else {
            exit = 1;
            printf("\nProgram End\n");
        }
    }

    return 0;
}
