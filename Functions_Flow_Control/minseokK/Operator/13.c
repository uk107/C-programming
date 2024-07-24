//
// Created by MinseokK on 24. 7. 23.
//
// Calculate Simple Interest
// A 미래 가치 (Future Value)
// P 원금 (Principal)
// r 연 이자율 (Annual interest Rate)
// t time
// 원금 : 1000만, 연 이자율 : 5%, 시간 : 3 -> A = 10.000.000 + (10.000.000 * 0.05 * 3)
int main() {
    int principal, time;
    float annual_interest_rate;


    printf("principal : ");
    scanf("%d",&principal);
    printf("time : ");
    scanf("%d",&time);
    printf("annual_interest_rate : ");
    scanf("%f", &annual_interest_rate);

    float result = principal + (principal * (0.01 * annual_interest_rate) * time);

    printf("simple interest : %f", result);


}
