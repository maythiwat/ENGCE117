#include <stdio.h>
#include <string.h>

void Ascending(char* arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (strcmp(arr[j], arr[minIndex]) < 0) {
                minIndex = j;
            }
        }
        char* temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}//end function

void Descending(char* arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (strcmp(arr[j], arr[maxIndex]) > 0) {
                maxIndex = j;
            }
        }
        char* temp = arr[i];
        arr[i] = arr[maxIndex];
        arr[maxIndex] = temp;
    }
}//end function

int main() {
    FILE *fp;
    char* items[100];
    char buffer[100];
    int count = 0;

    fp = fopen("a15-8.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while (fscanf(fp, "%s", buffer) != EOF) {
        items[count] = strdup(buffer);
        count++;
    }
    fclose(fp);

    printf("Normal (%d Item): ", count);
    for (int i = 0; i < count; i++) {
        printf("%s", items[i]);
        if (i == count - 1) {
            printf(" .\n");
        } else {
            printf(", ");
        }
    }

    Ascending(items, count);
    printf("Sort (A to Z)  : ");
    for (int i = 0; i < count; i++) {
        printf("%s", items[i]);
        if (i == count - 1) {
            printf(" .\n");
        } else {
            printf(", ");
        }
    }

    Descending(items, count);
    printf("Sort (Z to A)  : ");
    for (int i = 0; i < count; i++) {
        printf("%s", items[i]);
        if (i == count - 1) {
            printf(" .\n");
        } else {
            printf(", ");
        }
    }

    return 0;
}//end function
