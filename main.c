#include <stdio.h>

int main(void) {
float  h,l1,l2,area,suml,per;
printf("Enter L1 : ");
scanf("%f",&l1);

printf("Enter L2 : ");
scanf("%f",&l2);

per = ((l2-l1)/l1)*100;
printf("Percent = %0.00f % \n",per);


if(per >=40 ){
  
  printf("Enter Height : ");
  scanf("%f",&h);
  suml = l1+l2;
  area = 0.5*h*suml;
  printf("Area is : %0.2f",area);

}else{
  printf("error");
}

}