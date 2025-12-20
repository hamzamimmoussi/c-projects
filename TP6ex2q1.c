#include <stdio.h>
int d=3;
int Ajout(int a) {
    int res;
    res = a++;
    return res;}
int main() {
    int c=10;
    c=Ajout(c);
    d=Ajout(d);
    printf("c=%d\n",c);
    printf("d=%d\n",d);
    return 0;
}

