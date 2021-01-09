#include<stdio.h>
#include<stdlib.h>
int main()
{
int age;
printf("enter your age");
scanf("%d",&age);
if(age>18){
printf("age is greator than 18");
}
if(age==18){
printf("age is equal to 18");
}
if(age<18){
printf("age is less than 18");
}
return 0;
}
