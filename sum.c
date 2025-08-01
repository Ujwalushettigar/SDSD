#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,disc,root1,root2,real,img;
    printf("Enter the value of a,b and c:\n");
    scanf("%f%f%f",&a,&b,&c);
    disc=b*b-4*a*c;
    if(disc==0)
    {
        root1=root2=-b/(2*a);
        printf("Root1 = Root2 = %f\n",root1);
        printf("Roots are real and equal\n");   
    }
    else if(disc>0)
    {
        root1=(-b+sqrt(disc))/(2*a);
        root2=(-b-sqrt(disc))/(2*a);
        printf("Root1=%f\nRoot2=%f\n",root1,root2);
        printf("THe roots are real and distinct\n");
    }
    else if(disc<0)
    {
        real=-b/(2*a);
        img=sqrt(fabs(disc))/(2*a);
        printf("Root1=%f+i%f\n",real,img);
        printf("Root2=%f-i%f\n",real,img);
        printf("Roots are complex\n");
    }
}