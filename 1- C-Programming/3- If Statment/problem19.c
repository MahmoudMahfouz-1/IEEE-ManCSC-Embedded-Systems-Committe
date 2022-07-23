#include <stdio.h>


int main()
{
    int Physics, Chemistry, Biology, Mathematics, Computer;
    float percentage;
    printf("Enter five subjects marks: ");
    scanf("%d%d%d%d%d", &Physics, &Chemistry, &Biology, &Mathematics, &Computer);
    per = (Physics + Chemistry + Biology + Mathematics + Computer) / 5.0
    if(per >= 90)
        printf("Grade A");
    else if(per >= 80)
        printf("Grade B");
    else if(per >= 70)
        printf("Grade C");
    else if(per >= 60)
        printf("Grade D");
    else if(per >= 40)
        printf("Grade E");
    else
        printf("Grade F");
    return 0;
}
