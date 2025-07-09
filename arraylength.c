//input a name from user and find the length of word using looping statement
#include <stdio.h>

int main() {
    char name[100];
    int length = 0;
    
    printf("Enter a name: ");
    scanf("%s", name);
    
    for(int i=0; name[i]!='\0'; i++) {
        length++;
    }
    
    printf("The length of the name is %d\n", length);
    return 0;
}
