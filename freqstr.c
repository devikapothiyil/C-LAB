#include <stdio.h>
#include <string.h>

void main() {
    int lenstr, i, charFreq=0;
    char sen[100], searchChar;

    printf("Enter a sentence: ");
    gets(sen);

    lenstr = strlen(sen);

    printf("Enter a character to find the frequency of occurence of it in the entered sentence: ");
    scanf("%c", &searchChar);
    for(i=0; i<lenstr; i++){
        if(searchChar == sen[i]){
            charFreq += 1;
        }
    }

    if (charFreq > 0){
        printf("the character is present %d times in the sentence.", charFreq);

    }
    else {
        printf("The character is not present in the entered sentence.");
    }
}
