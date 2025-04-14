#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int bhaskara1(float a,float b, float c)
 {
     float x1;
     float delta1;

    delta1=b*b-4*a*c;

    x1= (-b + sqrt(delta1))/(2*a);

    printf("%f\n",x1);


    return x1;
 }
 int bhaskara2(float a,float b, float c)
 {
     float x2;
     float delta2;

    delta2=b*b-4*a*c;


    x2= (-b - sqrt(delta2))/(2*a);

     printf("%f",x2);


    return x2;
 }

int main()
{
    float x1,x2,a,b,c;

    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);

   bhaskara1(a,b,c);

   bhaskara2(a,b,c);

  return 0;
}
