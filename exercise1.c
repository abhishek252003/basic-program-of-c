#include<stdio.h>
/*print multiplication table of a number eneterd by the user in preety form*/
int main()
{
    int i, a; 
    printf("enter the number you want multiplication\n");
    scanf("%d", &a);
    for(int i=a;i<=a*10;i=i+a){
        printf("%d\n",i);
    }

    printf("multiplication of %d", a );
    return 0;


}