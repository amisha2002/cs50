#include <cs50.h>
#include <stdio.h>
#include<stdlib.h>
void check(long n,int c) {
    if(c==15 && ((n>=340000000000000 && n<350000000000000)||( n>=370000000000000&& n<380000000000000))) {
        printf("AMEX\n");
    }
    else if((c==13 && n>=4000000000000 && n<5000000000000 ) || (c==16 && n<5000000000000000 && n>=4000000000000000  ) ){
        printf("VISA\n");
    }
    else if(c==16 && (n>=5100000000000000 || n>=5200000000000000 || n>=5300000000000000 || n>=5400000000000000 || n>=5500000000000000) && n<5600000000000000) {
        printf("MASTERCARD\n");
    }
    else {
      printf("INVALID\n");
    }
}
int main(void)
{
    int rem=0,count=0,sum1=0,sum2=0;
  long n = get_long("credit number");
long temp=n;
  while(n!=0) {
    rem = n%10;
    sum1 = sum1 + rem;
    printf("sum1: %i\n",sum1);
    n=n/10;
// printf("%li\n",n);
count=count+1;
    while(n!=0) {
    rem = n%10;
    sum2 = sum2 + rem*2;
  printf("sum2: %i\n",sum2);
    n=n/10;
//printf("%li\n",n);
    count=count+1;
    break;
    }
    printf("%i\n",count);
  }
  int rem2 = (sum1+sum2)%5;
 if(rem2>=0 && rem2<5) {
    check(temp,count);
  }
  else {
    printf("INVALID\n");
  }
}