#include <stdio.h>
int d=4;
int Add(int *a) {
    int res;
    res = *a++;
    return res;}
int main() {
    int e=10;
     Add(&e);
     Add(&d);
    printf("e=%d\n",e);
    printf("d=%d\n",d);
    return 0;
}