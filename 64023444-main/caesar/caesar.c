#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, string argv[])
{
if(argc!=2) {
    printf("Usage: ./caesar key");
    return 1;
}
if(!(atoi(argv[1])>=1)) {
    printf("Usage: ./caesar key");
    return 1;
}
for(int i =0;i<strlen(argv[1]);i++) {
    if(!isdigit(argv[1][i])) {
        return 1;
    }
}
string a = get_string("Plaintext: \n");
int key = atoi(argv[1]);
for(int i=0;i<strlen(a);i++) {
    if(isupper(a[i])) {
        a[i] = (a[i]%65+key)%26 + 65;
    }
    else if(islower(a[i])) {
        a[i] = (a[i] % 97 +key)%26 + 97;
    }
}
printf("ciphertext: %s\n",a);
}

