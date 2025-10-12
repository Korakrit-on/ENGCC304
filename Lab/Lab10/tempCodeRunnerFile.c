#include<stdio.h>
#include <string.h>

int main(){
    char word[100];
    printf("enter word: ");
    scanf("%s",&word);
    
    int ans = strlen(word);
    int Reversed = 1;

    for (int i = 0; i < ans / 2; i++){
        if (word[i] != word[ans - 1 - i]) {
            Reversed = 0;
        }
    }

    if (Reversed) {
        printf("Pass\n");
    } else {
        printf("Not Pass\n");
    }
    return 0;
}