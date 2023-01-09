#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    //ASCII code or atoi
    int a, b;
    char foo[100];
    char f[100];
    char oo[100];
    
    printf("Enter the string: ");
    scanf("%[^\n]", foo);
    //protection 

    // sscanf("%s", foo, )
    
    sscanf(foo, "%s %s", f, oo);
    
    // strcpy(f);
    a = atoi(f);

    // strcpy(oo);
    b = atoi(oo);

    printf("string foo: %s\n", foo);
    printf("string f  : %s\n", f);
    printf("string oo : %s\n", oo);
    printf("num a b: %d,%d", a,b);

    return 0;
}