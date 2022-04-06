#include<stdio.h> 
 int input_aray_size() 
 { 
   int n; 
   printf("enter n value\n"); 
   scanf("%d",&n); 
   return n; 
 } 
 void input_array(int n,int a[10]) 
 { 
   int i; 
   for(i=0;i<n;i++) 
   { 
     printf("enter array value\n"); 
     scanf("%d",&a[i]); 
   } 
 } 
 int sum_composite_number(int n,int a[10]) 
 { 
   int sum=0,i,j,count; 
   for(i=0;i<n;i++) 
   { 
    count=0;
    for(j=1;j<=a[i];j++)
    {
        if(a[i]%j==0)
        count++;
    }
    if(count>2)
    sum=sum+a[i];
   } 
   return sum; 
 } 
 void output(int sum) 
 { 
   printf("sum is %d",sum); 
 } 
 int main() 
{
    int n,sum;
    n=input_aray_size();
    int a[n];
    input_array(n,a);
    sum=sum_composite_number(n,a);
    output(sum);
    return 0;
    
}