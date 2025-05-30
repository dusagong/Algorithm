 재귀 함수의 기본 구조
항상 다음 두 가지로 이루어져 있어:

    기저 조건(Base Case)

    더 이상 재귀 호출을 하지 않을 조건

    무한 루프 방지 역할

    재귀 호출(Recursive Case)

    자기 자신을 다시 부름

    문제를 점점 더 작게 쪼갬


void 함수() {
    if (기저 조건) return;      // 멈추는 조건
    ...
    함수();                    // 자기 자신 호출
}


int factorial(int n) {
    if (n == 0) return 1;           // 기저 조건
    return n * factorial(n - 1);    // 재귀 호출
}