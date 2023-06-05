// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>
#include <string.h>
void replace(string ip);
int main(int argc, string argv[])
{
    if(argc!=2) {
        printf("error");
    }
    else {
       replace(argv[1]);
    }

}
void replace(string ip) {
    int len=strlen(ip);
    for(int i=0;i<len;i++) {
        if(ip[i]=='a') {
            ip[i]='6';
        }
        else if(ip[i]=='e') {
            ip[i]='3';
        }
        else if(ip[i]=='i') {
            ip[i]='1';
        }
        else if(ip[i]=='o') {
            ip[i]='0';
        }
    }
   printf("%s",ip);
}
