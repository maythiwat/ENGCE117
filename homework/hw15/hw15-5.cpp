#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    int age;
    int salary;
};

void formatAndPrintSalary(int salary) ;
void Descending(struct Employee arr[], int size) ;

int main() {
    FILE *fp;
    struct Employee employees[100];
    int count = 0;
    int age, salary;
    float totalAge = 0.0;
    float averageAge;
    char name[50], job[50];
    char temp1[50], temp2[50], temp3[50], temp4[50];

    fp = fopen("a15-5.txt", "r");
    if (fp == NULL) {
        printf( "Error: Unable to open file!\n" ) ;
        return 1;
    }

    fscanf(fp, "%s %s %s %s", temp1, temp2, temp3, temp4);

    while (fscanf( fp, "%s %d %d %s", name, &age, &salary, job ) == 4) {
        strcpy(employees[count].name, name);
        employees[count].age = age;
        employees[count].salary = salary;
        totalAge += employees[count].age;
        count++;
    }

    fclose(fp);

    if( count == 0 ) {
        printf("No valid data found in the file.\n" ) ;
        return 1 ;
    }

    averageAge = totalAge / count ;

    printf("Average : %.2f Years\n", averageAge ) ;

    Descending(employees, count);

    for (int i = 0; i < count; i++) {
        if (employees[i].age > averageAge) {
            printf("%s(%d) : ", employees[i].name, employees[i].age);
            formatAndPrintSalary(employees[i].salary);
            printf("\n");
        }
    }
    return 0;
}//end function

void Descending(struct Employee arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j].age > arr[maxIndex].age) {
                maxIndex = j;
            }
        }
        struct Employee temp = arr[i];
        arr[i] = arr[maxIndex];
        arr[maxIndex] = temp;
    }
}//end function

void formatAndPrintSalary(int salary) {
    char formatted[20];
    sprintf(formatted, "%d", salary);

    int len = strlen(formatted);
    for (int i = 0; i < len; i++) {
        printf("%c", formatted[i]);
        if ((len - i - 1) % 3 == 0 && i != len - 1) {
            printf(",");
        }
    }
    printf(" Bath");
}//end function