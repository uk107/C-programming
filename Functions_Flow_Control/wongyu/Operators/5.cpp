#include <stdio.h>

int main() {
    float Mile, Killermeter;

    printf("enter Mile: ");
    scanf("%f", &Mile);

    Killermeter = Mile * 1.60934;  // 1 미터 = 3.28084 피트
    printf("%.2f Killermeter.\n", Killermeter);

    return 0;
}
