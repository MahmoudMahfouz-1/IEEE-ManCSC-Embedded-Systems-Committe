#include <stdio.h>
int fun(int x,int y)
{
    if(x > y)
    {
        printf("Minimum : %d\n",y);
        printf("Maximum : %d\n",x);
    }
    else if(x < y)
    {
        printf("Minimum : %d\n",x);
        printf("Maximum : %d\n",y);
    }
    else
        printf("Numbers are equal\n");
}
int main() {
    int x, y;
    printf("Enter 2 Numbers: ");
    scanf("%d %d",&x,&y);
    fun(x,y);
    return 0;
}