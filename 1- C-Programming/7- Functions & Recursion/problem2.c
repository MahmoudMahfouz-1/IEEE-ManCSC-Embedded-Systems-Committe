#include <stdio.h>
int circle(float r)
{
    printf("Diameter = %.2f\n",2*r);
    printf("Circumference = %.2f\n",2*r*3.14);
    printf("Area = %.2f\n",2*r*r);
}
int main() {
    float num;
    scanf("%f",&num);
    circle(num);

    return 0;
}