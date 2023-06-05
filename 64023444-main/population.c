#include<stdio.h>
#include<cs50.h>
int main() {
    int start, end, years=0;
    do {
        start = get_int("start");
    }while(start<9);
    do {
        end = get_int("end");
    }while(end<=start);

while(start<end) {
start = start + start/3 - start/4;
years++;
}
printf("%i",years);

}