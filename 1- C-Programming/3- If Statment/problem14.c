#include <stdio.h>


int main()
{
    int angle1, angle2, angle3;
    printf("Enter the first angle: ");
    scanf("%d", &angle1);
    printf("Enter the second angle: ");
    scanf("%d", &angle2);
    printf("Enter the third angle: ");
    scanf("%d", &angle3);
    if(angle1 + angle2 + agnle3 == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0)
        printf("the triangle is valid.\n");
    else
        printf("the triangle isn't valid.\n");

    return 0;
}
