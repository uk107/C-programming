#include <stdio.h>

int static Number1, Number2, *Point1, *Point2;

// Function
void swap(int *number1, int *number2) {
    int State;
    State = * number1;
    *number1 = *number2;
    *number2 = State;
}

int main() {
    // Read value
    printf("enter twe number");
    scanf("%d %d", &Number1, &Number2);

    // define val
    Point1 = &Number1;
    Point2 = &Number2;
    // Print
    printf("Before swap: Number1 = %d, Number2 = %d\n", Number1, Number2);
    printf("address Number1 = %d, address Number2 = %d\n", &Number1, &Number2);

    swap(Point1, Point2);

    // 각 주소값을 비교했을때 주소값은 변경된것이 아닌 내부 값이 변경됨
    // 또한 포인터 값을 넣었을시 메모리 위치 자체 변경이 아닌 값에 변경이다.
    // 포인터는 각 변수에 가리키는 메모리위치를 저장하는 변수다.


    // last result
    printf("After swap: Number1 = %d, Number2 = %d\n", Number1, Number2);
    printf("address Number1 = %d, address Number2 = %d\n", &Number1, &Number2);

    return 0;
}
