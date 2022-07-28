// Write a function to calculate HCF of two numbers. (TSRS)

#include<stdio.h>
int HCF(int a,int b);
int main(){
    int a,b;

    printf("Enter two number");
    scanf("%d%d",&a,&b);
    
    printf("HCF IS %d",HCF(a,b));
    return 0;

}

int HCF(int a,int b){
  
  for(int i = a<b?a:b;i>=1;){
      if(a%i==0 && b%i==0){
         return i;
      }
      
      if(i==(a<b?a:b)){
        i/=2;
      }else{
        i--;
      }
  }
}