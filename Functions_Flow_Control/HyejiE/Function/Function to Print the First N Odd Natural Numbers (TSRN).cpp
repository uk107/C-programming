//
// Created by HaejiK on 2024-07-23.
//

# include <stdio.h>
void Nth_odd(int n) {
    int number;
    int cnt = 0;
    printf("You must keep entering numbers until you find the nth odd number.\n");
    while (cnt < n) {
        printf("Enter the number\n");
        scanf("%d", &number);
        // when number is odd
        if (number & 1) {
            cnt++;
        }
    }
    printf("%dth odd number is %d", n,number);

}

int main() {
    int n;
    printf("Enter the Nth number\n");
    scanf("%d", &n);
    Nth_odd(n);
}
