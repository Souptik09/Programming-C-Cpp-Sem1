#include<stdio.h>

main()

{

   int num,rem,sum=0,t;
   printf("Enter the number");
   scanf("%d",&num);
     t = num;
     while(num>0)
     {
       rem= num%10;
       sum=sum+(rem*rem*rem);
       num=num/10;
     }
   if (t==sum)
   printf("Aramstrong number");
   else
   printf("not Aramstrong number");


}
