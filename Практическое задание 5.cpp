// #include <iostream>
// using namespace std;

// int main() {
//     double X, Y;
//     cin >> X >> Y;

//     int day = 1;
//     double sum = X;

//     while (sum < Y) {
//         sum *= 1.1;
//         day++;
//     }

//     cout << day << endl;
//     return 0;
// }Задание 1



// #include <iostream>
// using namespace std;

// int main() {
//     long long A, B;
//     cin >> A >> B;

//     while (A > B) {
//         if (A % 2 == 0 && A / 2 >= B) {
//             A = A / 2;
//             cout << ":2" << endl;
//         } else {
//             A = A - 1;
//             cout << "-1" << endl;
//         }
//     }

//     return 0;
// } Задание 2


// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int a[1000];
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }

//     int removed = 0;
//     bool changed = true;

//     while (changed) {
//         changed = false;

//         for (int i = 0; i + 1 < n; i++) {
//                 for (int j = i; j + 2 < n; j++) {
//                     a[j] = a[j + 2];
//                 }
//                 n = n - 2;
//                 removed = removed + 2;
//                 changed = true;
//                 break;
//             }
//         }
//     }

//     cout << removed << endl;
//     return 0;
// } Задание 3






