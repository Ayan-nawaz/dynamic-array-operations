#include <stdio.h>

int main() {
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};

    int sumeven = 0;
    int sumodd = 0;

    for (int i = 0; i < 7; i++) {
        if (i % 2 == 0) {
            sumeven += arr[i];
        } else {
            sumodd += arr[i];
        }
    }

    int res = sumeven - sumodd;

    printf("Sum of even index elements = %d\n", sumeven);
    printf("Sum of odd index elements = %d\n", sumodd);
    printf("Difference = %d\n", res);

    return 0;
}

