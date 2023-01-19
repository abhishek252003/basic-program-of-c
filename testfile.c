#include<stdio.h>
int main(){

    int age;

    printf("enter your age\n");
    scanf("%d", &age);

    printf("your age is %d\n", age);
    if (age<18)
{
     printf("you are not eligable for driving any car\n");

}
    else if (age=18)

    {
        printf("you are eligble only for gearless bike\n");
    }
    
   
    else{
    printf("you are eligble for driving any car\n");
   }
    

    return 0;

}