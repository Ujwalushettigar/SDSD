// GRADE OF A STUDENT USING IF AND ELSE IF
// #include<stdio.h>
// void main()
// {
//     int marks;
//     printf("Enter the marks of the student:\n");
//     scanf("%d",&marks);
//     if(marks<0 || marks>100)
//     printf("Invalid input!!\n");
//     else if(marks<50)
//     printf("Grade F\n");    
//     else if(marks>=50 && marks<60)
//     printf("Grade E\n");
//     else if(marks>=60 && marks<70)
//     printf("Grade D\n");
//     else if(marks>=70 && marks<80)
//     printf("Grade C\n");
//     else if(marks>=80 && marks<90)
//     printf("Grade B\n");
//     else if(marks>=90 && marks<=100)
//     printf("Grade A\n");
// }

// LEAP YEAR
// #include<stdio.h>
// void main()
// {
//     int year;
//     printf("Enter a valid year:\n");
//     scanf("%d",&year);
//     if((year%4==0) && (year%100!=0) || (year%400==0))
//     {
//         printf("%d is a leap year",year);
//     }
//     else
//     {
//         printf("%d is not a leap year",year);
//     }
// }

// SIMPLE CALCULATOR
// #include<stdio.h>
// void main()
// {
//     float a,b,res;
//     char op;
//     printf("Enter the values of a and b:\n");
//     scanf("%f%f",&a,&b);
//     printf("Enter the operator:\n");
//     scanf("%s",&op);
//     switch(op)
//     {
//         case'+':res=a+b;
//         printf("Sum=%.2f",res);
//         break;
//         case'-':res=a-b;
//         printf("Difference=%.2f",res);
//         break;
//         case'*':res=a*b;
//         printf("Product=%.2f",res);
//         break;
//         case'/':if(b!=0)
//         {
//             res=a/b;
//             printf("Quotient=%.2f",res);
//         }
//         else
//         {
//             printf("Cannot be divided by zero!!\n");
//         }
//         break;
//         default:printf("Invalid input!!\n");
//         break;
//     }
// }

// NUMBER OF DAYS IN A MONTH
// #include<stdio.h>
// void main()
// {
//     int month;
//     printf("Enter the month number:\n");
//     scanf("%d",&month);
//     switch(month)
//     {
//         case 1:printf("January\n31 days\n");
//                 break;
//         case 2:printf("February\n28/29 days\n");
//                 break; 
//         case 3:printf("March\n31 days\n");
//                 break;
//         case 4:printf("April\n30 days\n");
//                 break;
//         case 5:printf("May\n31 days\n");
//                 break; 
//         case 6:printf("June\n30 days\n");
//                 break;  
//         case 7:printf("July\n31 days\n");
//                 break;
//         case 8:printf("August\n31 days\n");
//                 break;
//         case 9:printf("September\n30 days\n");
//                 break;  
//         case 10:printf("October\n31 days\n");
//                 break;
//         case 11:printf("November\n30 days\n");
//                 break; 
//         case 12:printf("December\n31 days\n");
//                 break;  
//         default:printf("Enter a valid month!!\n");
//                 break;                                                                
//     }
// }

// REVERSE A NUMBER
// #include<stdio.h>
// void main()
// {
//     int n,rev=0,rem;
//     printf("Enter the value of n:\n");
//     scanf("%d",&n);
//     while(n!=0)
//     {
//         rem=n%10;
//         rev=rev*10+rem;
//         n=n/10;
//     }
//     printf("The number after reversing is %d",rev);
// }

//  BINARY TO DECIMAL
// #include<stdio.h>
// void main()
// {
//     int n,dec=0,rem,base=1,bin;
//     printf("Enter the binary number:\n");
//     scanf("%d",&n);
//     bin=n;
//     while(n!=0)
//     {
//         rem=n%10;
//         dec=dec+rem*base;
//         n=n/10;
//         base=base*2;
//     }
//     printf("The binary number is %d\n",bin);
//     printf("The decimal number is %d\n",dec);
// }

