#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    int age;
    int salary;
    char job[50];
};

void findHighestSalaryInJob(struct Employee employees[], int count, char job[], int* highestSalaryIndex) {
    *highestSalaryIndex = -1;
    int highestSalary = -1;
    for (int i = 0; i < count; i++) {
        if (strcmp(employees[i].job, job) == 0) {
            if (employees[i].salary > highestSalary) {
                highestSalary = employees[i].salary;
                *highestSalaryIndex = i;
            }
        }
    }
}//end function

void printSalaryWithComma(float salary) {
    char result_str[50];
    sprintf(result_str, "%.2f", salary);
    int len = strlen(result_str);
    
    for( int i = 0 ; i < len - 3 ; i++ ) {  
        if( i != 0 && ( len - i ) % 3 == 0 ) {
            printf( "," ) ;  
        }
        printf( "%c", result_str[ i ] ) ;
    }
    printf( "%s Bath", strchr( result_str, '.' ) ) ;  
}//end function

int main() {
    FILE *fp;
    struct Employee employees[100];
    int count = 0;
    float totalSalary = 0.0;
    char line[200];
    char job[50];

    fp = fopen("a15-6.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fgets(line, sizeof(line), fp);

    while (fscanf(fp, "%s %d %d %s", employees[count].name, &employees[count].age, &employees[count].salary, employees[count].job) == 4) {
        totalSalary += employees[count].salary;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("No valid data found in the file.\n");
        return 1;
    }

    float averageSalary = totalSalary / count;

    int checkedJobs[100] = {0};

    for (int i = 0; i < count; i++) {
        if (checkedJobs[i]) continue;

        strcpy(job, employees[i].job);
        int highestSalaryIndex;
        findHighestSalaryInJob(employees, count, job, &highestSalaryIndex);

        if (strcmp(employees[highestSalaryIndex].job, "HR") != 0 && strcmp(employees[highestSalaryIndex].job, "Founder") != 0) {
            printf("%s: %s(%d yrs) ", job, employees[highestSalaryIndex].name, employees[highestSalaryIndex].age);
            printSalaryWithComma(employees[highestSalaryIndex].salary);
            printf("\n");

            for (int j = 0; j < count; j++) {
                if (strcmp(employees[j].job, job) == 0) {
                    checkedJobs[j] = 1;
                }
            }
        }
    }

    printf("Average Salary: ");
    printSalaryWithComma(averageSalary);
    printf("\n");

    return 0;
}//end function
