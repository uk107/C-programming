//
// Created by MinseokK on 24. 7. 23.
//
// Check if an Alphabet is Uppercase or Lowercase

#include <stdio.h>
int main(){
    char chr;
    printf("input the A~Z : ");
    scanf("%c", &chr);

    if (chr >= 'A' && chr <= 'Z') { //A~Z
        printf("This Alphabet is Uppercase");
    }else if (chr >= 'a' && chr <= 'z') {
        printf("This Alphabet is Lowercase");
    }else {
        printf("Alphabet only");
    }
}