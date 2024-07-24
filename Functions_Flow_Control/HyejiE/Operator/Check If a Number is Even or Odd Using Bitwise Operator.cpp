
# include <stdio.h>
int check_number(int number) {
    int result;
    if (number & 1) {
        result = 1;
    } else if (!(number & 1)){
        result = 0;
    }
    return result;
}

int main() {
    int number;
    printf("Enter the number \n");
    scanf("%d",&number);
    int result = check_number(number);
    if (result) {
        printf("number is odd");
    } else {
        printf("number is even");
    }

}
