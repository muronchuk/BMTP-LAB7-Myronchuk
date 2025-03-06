#include <stdio.h>

#define SIZE 10

// ������� ��� �������� 10 ����� � �����
void inputNumbers(int arr[]) {
    printf("������ 10 ����� �����:\n");
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }
}

// ������� ��� ����������� ���� ������ �����
int sumEvenNumbers(int arr[]) {
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }
    return sum;
}

// ������� ��� ����������� ������� �������� �����
int productOddNumbers(int arr[]) {
    int product = 1;
    int hasOdd = 0;
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] % 2 != 0) {
            product *= arr[i];
            hasOdd = 1;
        }
    }
    return hasOdd ? product : 1; // ���� ���� ��������, ��������� 1
}

// ������� ��� ��������� ������� �䒺���� �����
int countNegativeNumbers(int arr[]) {
    int count = 0;
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] < 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int numbers[SIZE];

    // �������� ������
    inputNumbers(numbers);

    // ���������� ����������
    int sumEven = sumEvenNumbers(numbers);
    int productOdd = productOddNumbers(numbers);
    int countNeg = countNegativeNumbers(numbers);

    // ���� ����������
    printf("���� ������ �����: %d\n", sumEven);
    printf("������� �������� �����: %d\n", productOdd);
    printf("ʳ������ ��'����� �����: %d\n", countNeg);

    return 0;
}
