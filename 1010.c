#include <stdio.h>

int main() {
    char name;
    double unit,price,totalAmount;

    scanf("%s %lf %lf",&name,&unit,&price);
    totalAmount = unit*price;

    scanf("%s %lf %lf",&name,&unit,&price);
    totalAmount += unit*price;

    printf("VALOR A PAGAR: R$ %.2lf\n",totalAmount);
    return 0;
}
