#include<stdio.h>

//1. print the sum of n no.s
/*int main() {
    int sum=0 , n,i;
    scanf("%d",&n);
    for (int i=1; i<=n; i++){
        sum=sum+i;
    }
    {
        printf("sum=%d",sum);
    }
    
    return 0;
}*/

//2. print the factorial of the no.s
/*int main() {
    int fact=1 , n,i;
    scanf("%d",&n);
    for (int i=1; i<=n; i++){
        fact=fact*i;
    }
        printf("fact=%d",fact);
    
    
    return 0;
}*/

//3. print the sum of n numbers using while loop
/*int main(){
    int sum=0,n,r;
    printf("Enter no");
    scanf("%d",&n);
    while(n>0)
    {
    r=n%10;
    sum=sum+r;
    n=n/10;
    }
    printf("sum=%d",sum);

    return 0;
}*/

/*int main(){
    int sum=0,n,r;
    printf("Enter no");
    scanf("%d",&n);
    while(n>0)
    {
    r=n%10;
    sum==n
    ;
    n=n/10;
    }
    printf("sum=%d",sum);

    return 0;
}*/

//4.reverse of a no

/*int main(){
    int rev=0,n,i;
    printf("Enter no");
    scanf("%d",&n);
    while(n>0)
    {
    i=n%10;
    rev=rev*10+i;
    n=n/10;
    }
    printf("rev=%d",rev);

    return 0;
}*/

// 5. print the prime no
/*int main(){
    int n,i,c=0;
    printf("%d",&n);
    scanf("%d",&n);
    for(i=1; i<=n,;i++);
    {
        if(n%i==0)
        c++;
    }
    if(c=2)
    {
        printf("No.is prime");
    }
    else{
        printf("No is not prime");
    }
    return 0;
}*/

// 6. print the fibonacci series using recurrsion
/*int fib(int);
int main()
{
    int i,x,n;
    printf("enter number : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        x=fib(i);
        printf("\t %d",x);
    }
}
    int fib(int a)
    {
        if((a==0) || (a==1))
        {
            return (a);
        
        }else{
            return (fib(a-1)+fib(a-2));
        }
    }*/

