//
// Created by MinseokK on 24. 7. 25.
//
// Swap Two Integer Values
//
void swap(int *a, int *b)
{
    int temp = *a;  // tmep copy address of *a
    *a = *b;
    *b = temp;
}

int main()
{
    int x, y;
    printf("input 2 number : ");
    scanf("%d%d",&x, &y);

    swap(&x, &y);

    printf("%d %d\n", x, y);
}