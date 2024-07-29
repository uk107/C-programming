//
// Created by MinseokK on 24. 7. 25.
//
// Find the Largest Number Between Two Numbers
void checkNumber(int *x, int *y) {
    int *ptr_x = x;
    int *ptr_y = y;

    if (*ptr_x > *ptr_y) { // x가 더 크면
        printf("X is the bigger than Y");
    }else if(*ptr_x < *ptr_y) {
        printf("Y is the bigger than X");
    }else {
        printf("same X Y");
    }

}

int main() {
    int x = 6;
    int y = 7;

    checkNumber(&x, &y);
}