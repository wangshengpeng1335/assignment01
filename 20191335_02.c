#include <stdio.h>
int main()
{
    int num;
    int i = 0;
    int arr[100];
    int cnt = 0;
    int sum = 0;

    printf("Enter your data,for example:+10 -20 +35 -27.And then,enter the return key.\n");
    
    while(1)
    {
        scanf("%d",&num);
        char c = getchar();
        arr[i++] = num;
        if(c == '\n')
        {
            break;
        }
        cnt = cnt + 1;
    }

    for(i = 0;i <= cnt;i++)
    {
        sum = sum + arr[i];

    }
        printf("numberSum=%d\n\n",sum);

        printf("*******************\n");
        printf("Wang ShengPeng\n");
        printf("Student ID : 20191335\n");
        printf("*******************\n");

  return 0;
}