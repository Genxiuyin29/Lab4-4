#include <stdio.h>

int main(void) {
float  h,l1,l2,area,suml,per;
printf("Enter L1 : ");
scanf("%f",&l1);

printf("Enter L2 : ");
scanf("%f",&l2);

printf("Enter Height : ");
scanf("%f",&h);

per = (l2/l1)*100;
suml = l1+l2;

if(per >=40 ){
area = 0.5*h*suml;
printf("Area is : %0.2f",area);
}

}