int fun(int x,int y)
{
    int flag = 0;
    for(int i = x; i < y; i++)
    {
        for(int j = 2; j <= i/2; j++)
        {
            if(i % j == 0)
            {
                flag = 1;
            }
        }
        if(flag == 0)
        {
            printf("%d ",i);
        }
        flag = 0;
    }
}
int main() {
    int x, y;
    printf("Enter lower and upper numbers: ");
    scanf("%d %d",&x,&y);
    fun(x,y);
    return 0;
}