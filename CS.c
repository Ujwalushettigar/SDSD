// LINEAR SEARCH 
// #include<stdio.h>
// #include<stdlib.h>
// void main()
// {
//     int n,a[10],key,i;
//     printf("Enter the number of keys:\n");
//     scanf("%d",&n);
//     printf("Enter the keys:\n");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("Enter the key to be found:\n");
//     scanf("%d",&key);
//     for(i=0;i<n;i++)
//     {
//         if(a[i]==key)
//         {
//             printf("\n%d present in position %d",key,i+1);
//             exit(0);
//         }
//     }
//     printf("The given key does not exist!");
// }

// BINARY SEARCH
// #include<stdio.h>
// #include<stdlib.h>
// void main()
// {
//     int n,a[20],i,key,low,high,mid;
//     printf("Enter the number of keys:\n");
//     scanf("%d",&n);
//     printf("Enter the keys in ascending order:\n");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",a[i]);
//     }
//     printf("Enter the key to be found:\n");
//     scanf("%d",&key);
//     low=0;
//     high=n-1;
//     while(low<=high)
//     {
//         mid=(low+high)/2;
//         if(key=a[mid])
//         {
//             printf("%d is found at position %d",key,mid+1);
//             exit(0);
//         }            
//         else if(key<a[mid])
//         {
//             high=mid-1;
//         }
//         else if(key>a[mid])
//         {
//             low=mid+1;
//         }
//     }
//     printf("The given key is not found !!!\n");
// }

// BUBBLE SORTING
// #include<stdio.h>
// void main()
// {
//     int n,i,j,a[30],temp;
//     printf("Enter the number of elements:\n");
//     scanf("%d",&n);
//     printf("Enter array elements:\n");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<n-1;i++)
//     {
//             for(j=0;j<n-i-1;j++)
//             {
//                 if(a[j]>a[j+1])
//                 {
//                     temp=a[j];
//                     a[j]=a[j+1];
//                     a[j+1]=temp;
//                 }
//             }
//     }
//     printf("After sorting:\n");
//     for(i=0;i<n;i++)
//     {
//         printf("%d ",a[i]);
//     }
// }

// SELECTION SORT
// #include<stdio.h>
// void main()
// {
//     int n,a[100],i,j,min,temp;
//     printf("Enter the number of elements:\n");
//     scanf("%d",&n);
//     printf("Enter the unsorted list:\n");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<n-1;i++)
//     {
//         min=i;
//         for(j=i+1;j<n;j++)
//         {
//             if(a[j]<a[min])
//             {
//                 min=j;
//             }
//         }
//         temp=a[i];
//         a[i]=a[min];
//         a[min]=temp;
//     }
//     printf("The elements of the array after sorting:\n");
//     for(i=0;i<n;i++)
//     {
//         printf("%d ",a[i]);
//     }
// }

// INSERTION SORT
// #include<stdio.h>
// void main()
// {
//     int n,a[100],i,j,temp;
//     printf("Enter the number of elements:\n");
//     scanf("%d",&n);
//     printf("Enter the unsorted list:\n");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(i=1;i<n;i++)
//     {
//         temp=a[i];
//         j=i-1;
//         while(j>=0 && a[j]>temp)
//         {
//             a[j+1]=a[j];
//             j=j-1;
//         }
//         a[j+1]=temp;
//     }
//     printf("The elements of the array after sorting:\n");
//     for(i=0;i<n;i++)
//     {
//         printf("%d ",a[i]);
//     }
// }

// FIBONACCI SERIES
// #include<stdio.h>
// int fib(int);
// void main()
// {
//     int n,i;
//     printf("Enter the number of terms:\n");
//     scanf("%d",&n);
//     printf("The fibonacci series is given by:\n");
//     for(i=0;i<n;i++)
//     {
//         printf("%d ",fib(i));
//     }
// }
// int fib(int a)
// {
//     if(a==0)
//     {
//         return 0;
//     }
//     else if(a==1)
//     {
//         return 1;
//     }
//     else
//     {    
//         return (fib(a-1)+fib(a-2));
//     }
// }

// FACTORIAL
// #include<stdio.h>
// int fact(int);
// void main()
// {
//     int n,fact();
//     printf("Enter the number:\n");
//     scanf("%d",&n);
//     printf("Factorial:%d",fact(n));
// }
// int fact(int a)
// {
//     if(a==0)
//     {
//         return 1;
//     }
//     else 
//     {
//         return a*fact(a-1);
//     }
// }

// MEAN VARIANCE AND STANDARD DEVIATION USING THE POINTERS
// #include<stdio.h>
// #include<math.h>
// void main()
// {
//     int i,n;
//     float a[100],mean,var,sd,sum=0,sum1=0,*p;
//     printf("Enter the number of terms:\n");
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//     {
//         scanf("%f",&a[i]);
//     }
//     p=a;
//     for(i=0;i<n;i++)
//     {
//         sum=sum+*p;
//         p++;
//     }
//     mean=sum/n;
//     p=a;
//     for(i=0;i<n;i++)
//     {
//         sum1=sum1+pow((*p-mean),2);
//         p++;
//     }
//     var=sum1;
//     sd=sqrt(var);
//     printf("Sum=%f",sum);
//     printf("Mean=%f",mean);
//     printf("Variance=%f",var);
//     printf("Standard Deviation=%f",sd);
// }