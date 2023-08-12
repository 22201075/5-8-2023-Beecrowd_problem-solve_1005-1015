#include <stdio.h>

int main() {
    double a,b,c,pi=3.14159,triangleArea,circleArea,trapeziumArea,squareArea,rectangleArea;
    scanf("%lf %lf %lf",&a,&b,&c);
    triangleArea = (1.00/2)*a*c;
    circleArea = pi*c*c;
    trapeziumArea = (1.00/2)*(a+b)*c;
    squareArea = b*b;
    rectangleArea = a*b;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",triangleArea,circleArea,trapeziumArea,squareArea,rectangleArea);
    return 0;
}
