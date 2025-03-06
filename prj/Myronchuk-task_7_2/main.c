#include <stdio.h>

#define SIZE 10

// Функція для введення 10 чисел у масив
void inputNumbers(int arr[]) {
    printf("Введіть 10 цілих чисел:\n");
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }
}

// Функція для знаходження суми парних чисел
int sumEvenNumbers(int arr[]) {
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }
    return sum;
}

// Функція для знаходження добутку непарних чисел
int productOddNumbers(int arr[]) {
    int product = 1;
    int hasOdd = 0;
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] % 2 != 0) {
            product *= arr[i];
            hasOdd = 1;
        }
    }
    return hasOdd ? product : 1; // Якщо немає непарних, повертаємо 1
}

// Функція для підрахунку кількості від’ємних чисел
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

    // Введення масиву
    inputNumbers(numbers);

    // Обчислення результатів
    int sumEven = sumEvenNumbers(numbers);
    int productOdd = productOddNumbers(numbers);
    int countNeg = countNegativeNumbers(numbers);

    // Вивід результатів
    printf("Сума парних чисел: %d\n", sumEven);
    printf("Добуток непарних чисел: %d\n", productOdd);
    printf("Кількість від'ємних чисел: %d\n", countNeg);

    return 0;
}
