#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
// bool repeat(string s[]) {
//     int flag=0;
//     for(int i=0;i<26;i++) {
// for(int j=0;j<26;j++) {
//         if(s[1][i]==s[1][j]) {
//             flag=1;
//         }
//     }
// }
// if(flag==1) {
//     return true;
// }
// else{
// return false;
// }

//}
int main(int argc, string argv[])
{
    if(argc!=2) {
        return 1;
    }
    else {
if(strlen(argv[1])!=26) {
    return 1;
}
    for(int i=0;i<26;i++) {
    if(!isalpha(argv[1][i])) {
        return 1;
    }
    for(int j=i+1;j<26;j++) {
        if(argv[1][i]==argv[1][j]) {
            return 1;
        }
    }
    }

string p= get_string("Plaintext: ");
for(int i=0;i<strlen(p);i++){
    for(int j=0;j<strlen(argv[1]);j++) {
        if(isupper(p[i]) && p[i]%65==j) {
            if(islower(argv[1][j])) {
               p[i]=argv[1][j]-32;
               break;
            }
            else {
            p[i]=argv[1][j];
            break;
            }
        }
            if(islower(p[i]) && p[i]%97==j) {
            if(isupper(argv[1][j])) {
               p[i]=argv[1][j]+32;
               break;
            }
            else {
            p[i]=argv[1][j];
            break;
            }
        }
    }
}
printf("ciphertext: %s\n",p);
}}