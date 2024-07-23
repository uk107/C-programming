#include <stdio.h>

int using_if(int a, int b) {
    int result;
    if (a > b) {
        result = 1;
        printf("%d is bigge\n", a);
    } else if (a < b) {
        result = 0;
        printf("%d is bigger\n", b);
    } else {
        result = 2;
        printf("same number\n");
    }
    return result;
}

void using_switch(int result) {
    switch(result) {
        case 0:
            printf("b is bigger\n");
        break;
        case 1:
            printf("a is bigger\n");
        break;
        case 2:
            printf("same number\n");
        break;
    }

}

int main() {
    int a, b;
    printf("Enter the two numbers\n");
    scanf("%d %d",&a,&b);
    int result = using_if(a,b);
    using_switch(result);

}

