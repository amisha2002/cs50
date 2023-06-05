#include <cs50.h>
#include <stdio.h>
#include<stdlib.h>

int main(void)
{
   string a;
  long n = get_long("credit number");
//  printf("%li\n",n);
  int count=0,sum1=0, sum2=0,sum3,rem,flag=0;
  long temp=n;
  while(n!=0) {
    rem = n%10;
  //  printf("---------------------------");
// printf("rem:  %i\n",rem);
    count++;
  // printf("count:  %i\n",count);
if(count%2==0) {
        sum2 =sum2 + rem*2;
      //  printf("sum2:  %i\n",sum2);
}
else {
        sum1 = sum1 + rem;
    //    printf("sum1:  %i\n",sum1);
}
    n=n/10;
 //   printf("n:  %li\n",n);
 switch(n) {
 case 4:
    if(count==12) {
      flag = 1;
      break;
    }
    else if(count==15) {
      flag = 1;
      break;
    }
  case 34: if(count==13) {
     flag = 3;
     break;
    }
    case 37: if(count==13) {
      flag = 3;
      break;
    }
    case 51:
     if(count==14) {
      flag = 2;
      break;
    }
    case 52:
     if(count==14) {
      flag = 2;
      break;
    }
    case 53:
     if(count==14) {
      flag = 2;
      break;
    }
    case 54:
     if(count==14) {
      flag = 2;
      break;
    }
    case 55:
     if(count==14) {
      flag = 2;
      break;
    }
  }

//    printf("flag %i",flag);
  }
 // printf("sum1: %i sum2: %i\n",sum1,sum2);
  sum3 = sum1+sum2;

//printf("sum3:  %i\n",sum3);
  int rem2 = sum3%10;
  if(rem2==0)
    {
      if(flag==1) {
          printf("VISA\n");
      }
      if(flag==2) {
          printf("MASTERCARD\n");
      }
      if(flag==3) {
          printf("AMEX\n");
      }
    }
    // else if((sum3+1)%10==0) {
    //    if(flag==1) {
    //       printf("VISA\n");
    //   }
    //   if(flag==2) {
    //       printf("MASTERCARD\n");
    //   }
    //   if(flag==3) {
    //       printf("AMEX\n");
    //   }
    //   else {
    //          printf("INVALID\n");
    //   }

    // }
     else if(rem!=0) {
       if(flag==1) {
          printf("VISA\n");
      }
      if(flag==2) {
          printf("MASTERCARD\n");
      }
      if(flag==3) {
          printf("AMEX\n");
      }
      else {
      printf("INVALID");
    }
    }
    else {
      printf("INVALID");
    }





}
