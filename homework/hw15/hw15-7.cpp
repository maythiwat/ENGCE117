#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    int year;
    int month;
    int day;
    int ageYears;
    int ageMonths;
};

void calculateAge(int birthYear, int birthMonth, int birthDay, int currentYear, int currentMonth, int currentDay, int* years, int* months) {
    *years = currentYear - birthYear;
    *months = currentMonth - birthMonth;

    if (*months < 0) {
        *years -= 1;
        *months += 12;
    }
    if (currentDay < birthDay) {
        *months -= 1;
        if (*months < 0) {
            *years -= 1;
            *months += 12;
        }
    }
}//end function

int main() {
    FILE *fp;
    struct Person persons[100];
    int count = 0;
    char line[200];

    int currentYear = 2018;
    int currentMonth = 6;
    int currentDay = 21;

    fp = fopen("a15-7.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fgets(line, sizeof(line), fp);

    while (fscanf(fp, "%*d %s %d-%d-%d", persons[count].name, &persons[count].year, &persons[count].month, &persons[count].day) == 4) {
        calculateAge(persons[count].year, persons[count].month, persons[count].day, currentYear, currentMonth, currentDay, &persons[count].ageYears, &persons[count].ageMonths);
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("No valid data found in the file.\n");
        return 1;
    }

    int maxIndex = 0;
    int minIndex = 0;
    for (int i = 1; i < count; i++) {
        if (persons[i].ageYears > persons[maxIndex].ageYears || 
            (persons[i].ageYears == persons[maxIndex].ageYears && persons[i].ageMonths > persons[maxIndex].ageMonths)) {
            maxIndex = i;
        }
        if (persons[i].ageYears < persons[minIndex].ageYears || 
            (persons[i].ageYears == persons[minIndex].ageYears && persons[i].ageMonths < persons[minIndex].ageMonths)) {
            minIndex = i;
        }
    }

    for (int i = 0; i < count; i++) {
        printf("%s %d Years, %d Months\n", persons[i].name, persons[i].ageYears, persons[i].ageMonths);
    }

    printf("\nMax : %s (%d Years, %d Months)\n", persons[maxIndex].name, persons[maxIndex].ageYears, persons[maxIndex].ageMonths);
    printf("Min : %s (%d Years, %d Months)\n", persons[minIndex].name, persons[minIndex].ageYears, persons[minIndex].ageMonths);

    return 0;
}//end function
