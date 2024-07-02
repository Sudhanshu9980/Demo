#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,ch;
printf("enter the two no\n");
scanf("%d%d",&a,&b);
printf("enter the choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:c=a+b;
printf("%d",c);
break;
case 2:c=a-b;
printf("%d",c);
break;
case 3:c=a*b;
printf("%d",c);
break;
case 4:c=a%b;
printf("%d",c);
break;
default:
printf("enter the wrong choice");
getch();

}
}
