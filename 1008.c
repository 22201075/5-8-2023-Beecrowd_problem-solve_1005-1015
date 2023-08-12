
#include <stdio.h>

int main() {
    int id;
    double hours,perHourSalary,totalSalary;
    scanf("%d %lf %lf",&id,&hours,&perHourSalary);
    totalSalary = hours*perHourSalary;
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n",id,totalSalary);
    return 0;
}
