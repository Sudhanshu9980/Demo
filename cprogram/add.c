#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
  printf("enter the value a\n");
  scanf("%d",&a);
if(a==100)
{
    printf("genious");
}
else if(a>=75 && a<100) {
    printf("topper");
}
else if (a>=35 && a<75)
    {
        printf("first");

    }
else{
    printf("fail");
}
getch();
}
