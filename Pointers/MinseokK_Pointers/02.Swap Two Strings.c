//
// Created by MinseokK on 24. 7. 25.
//
// Swap Two Strings
void swapStr(char **a, char **b) {
    char *temp = *a; // address of *a
    char *ptr_1 = *b;
    char *ptr_2 = temp;
    printf("%s\n", ptr_1);
    printf("%s", ptr_2);

}

int main() {
    char *s = malloc(100* sizeof(char));
    char *b = malloc(100* sizeof(char));
    printf("input 2 str : ");
    scanf("%s%s", s, b);

    swapStr(&s, &b); // s의 주소값, b의 주소값


}