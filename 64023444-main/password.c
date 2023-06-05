// Check that a password has at least one lowercase letter, uppercase letter, number and symbol
// Practice iterating through a string
// Practice using the ctype library

#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include<string.h>
bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

// TODO: Complete the Boolean function below
bool valid(string password)

{
    int len=strlen(password);
    bool a=false,b=false,c=false,d=false;
    for(int i=0;i<len;i++) {
        if(password[i]>='a' && password[i]<='z') {
            a=true;
        }
         else if(password[i]>='A' && password[i]<='Z') {
            b=true;
        }
         else if(password[i]>='0' && password[i]<='9') {
            c=true;
        }
        else {
            d=true;
        }
    }
    if(a && b && c && d) {
        return true;
    }
    else {
        return false;
    }
}
