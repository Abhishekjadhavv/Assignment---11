// Write a function to calculate LCM of two numbers. (TSRS)

#include<stdio.h>

int lcm(int,int);

int main(){
    int a,b;
    
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    
    printf("Lcm is %d",lcm(a,b));
    return 0;
}

int lcm(int a,int b){
 
 for(int i = a>b?a:b;i<=a*b;i++){
    if(i%a==0 && i%b==0)
      return i;
 }

}