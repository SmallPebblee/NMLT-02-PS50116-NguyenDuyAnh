#include <stdio.h>
#include <string.h>
int main(){
    char string1[20] = "Fpt Polytechnic HCM";
    char string2[20] = "P";
    printf("vi tri: %s", strstr(string1, string2));

    
    return 0;
}