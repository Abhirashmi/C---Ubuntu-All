#include<stdio.h>
#include<stdlib.h>
int main()
{
int age;
printf("enter age");
scanf("%d",&age);
if(age<18){
printf("your age is less than 18");

if(age==2){
printf("your age is equal to 20");
}
else {
printf ("you are less than 18 and also not 20 in age");
}
}
else if(age==18){
printf("your age is 18");
}
else{
printf("greator than 18");
}
return 0;
}
