// // ex 1
// #include <stdio.h>

// int isPrime(int n) {
//     if (n <= 1) return 0;  
//     for (int i = 2; i * i <= n; i++) {  
//         if (n % i == 0) return 0; 
//     }
//     return 1; 
// }

// void findPrimePairs(int num) {
//     printf("the prime pairs that sum to %d are:\n", num);
//     for (int i = 2; i <= num / 2; i++) {  
//         if (isPrime(i) && isPrime(num - i)) {  
//             printf("%d + %d\n", i, num - i); 
//         }
//     }
// }

// int main() {
//     int number;
//     printf("enter a number: ");
//     scanf("%d", &number);

//     findPrimePairs(number);

//     return 0;
// }
 
// // ex 3
// #include <stdio.h>

// void printPyramid(int n) {
//     for (int i = 1; i <= n; i++) {
//      for (int j = i; j < n; j++) {
//             printf(" ");
//         }
//      for (int k = 1; k <= (2 * i - 1); k++) {
//             printf("*");
//         }
//         printf("\n");
//     }
// }

// int main() {
//     int rows;
//     printf("enter the number of rows for the pyramid: ");
//     scanf("%d", &rows);
//     printPyramid(rows);
//     return 0;
// }
