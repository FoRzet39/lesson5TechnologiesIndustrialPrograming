// #include <iostream>
// using namespace std;

// int main() {
//     int a, b;
//     cout << "Введите a и b: ";
//     cin >> a >> b;

//     cout << "Было: a=" << a << ", b=" << b << "\n";

//     a = a + b;
//     b = a - b;
//     a = a - b;

//     cout << "Стало: a=" << a << ", b=" << b << "\n";
//     return 0;
// }Задание 1

// #include <iostream>
// using namespace std;

// int main() {
//     int n;

//     cout << "Введите n: ";
//     cin >> n;

//     int fact = 1;
//     int F = 1;

//     for (int i = 1; i <= n; i++) {
//         fact = fact * i;
//         F = F * fact;
//     }

//     cout << "F(" << n << ") = " << F << "\n";
//     return 0;
// } Задание 2

// #include <iostream>
// using namespace std;

// int main() {
//     int A;
//     cout << "Введите A (0 или 1): ";
//     cin >> A;

//     int B = 2 - A;

//     cout << "B = " << B << "\n";
//     return 0;
// } Задание 3

// #include <iostream>
// using namespace std;

// int main() {
//     int a, b;
//     int A[1000], B[1000];

//     cout << "Сколько чисел в массиве A? ";
//     cin >> a;
//     cout << "Введите " << a << " чисел по возрастанию:\n";
//     for (int k = 0; k < a; k++) cin >> A[k];

//     cout << "Сколько чисел в массиве B? ";
//     cin >> b;
//     cout << "Введите " << b << " чисел по возрастанию:\n";
//     for (int k = 0; k < b; k++) cin >> B[k];

//     cout << "Объединённый массив: ";

//     int i = 0;
//     int j = 0;

//     for (int cnt = 0; cnt < a + b; cnt++) {
//         if (i >= a) {
//             cout << B[j] << " ";
//             j = j + 1;
//         } else if (j >= b) {
//             cout << A[i] << " ";
//             i = i + 1;
//         } else {
//             if (A[i] <= B[j]) {
//                 cout << A[i] << " ";
//                 i = i + 1;
//             } else {
//                 cout << B[j] << " ";
//                 j = j + 1;
//             }
//         }
//     }

//     cout << "\n";
//     return 0;
// } Задание 4

// #include <iostream>
// using namespace std;

// int main() {
//     int n;

//     cout << "Введите n: ";
//     cin >> n;

//     int sumAll = n * (n + 1) / 2;
//     int sumArray = 0;

//     cout << "Введите " << n << " чисел (одно от 0 до " << n << " пропущено):\n";
//     for (int i = 0; i < n; i++) {
//         int x;
//         cin >> x;
//         sumArray = sumArray + x;
//     }

//     int j = sumAll - sumArray;

//     cout << "Пропущенное число: " << j << "\n";
//     return 0;
// } Задание 5















