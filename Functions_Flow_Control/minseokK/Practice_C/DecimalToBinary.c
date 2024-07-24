//
// Created by MinseokK on 24. 7. 24.
//

/*
 * 10진법 0 ~ 9
 * 2진법 0, 1
 * 8진법 0 ~ 7
 * 16진법 0 ~ 9 a b c d e f
 *
 */

int R(int n) { // 191

    if (n > 0) { // 191
        int result = n / 2; // 95
        int two_2 = n % 2; // 1
        R(result);
        printf("%d", two_2); // 1

    }else {
        return NULL;
    }
}

int main() {
    int n = 8;
    R(n);

}