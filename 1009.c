#include <stdio.h>

int main() {
    char name;
    double salary,sales,totalSalary;
    scanf("%s %lf %lf",&name,&salary,&sales);
    totalSalary = (15*sales)/100 + salary;
    printf("TOTAL = R$ %.2lf\n",totalSalary);
    return 0;
}

