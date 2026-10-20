// #include <iostream>
// using namespace std;

// int main() {
//     long long a, b;
//     char op;
//     cin >> a >> op >> b;
//     if (op == '+') cout << a + b;
//     else if (op == '-') cout << a - b;
//     else if (op == '*') cout << a * b;
//     else if (op == '/') cout << a / b;
//     return 0;
// } Задание 1



// #include <iostream>
// using namespace std;

// int main() {
//     int n, m, k;
//     cin >> n >> m >> k;
//     if ((k % n == 0 || k % m == 0) && k < n * m)
//         cout << "YES";
//     else
//         cout << "NO";
//     return 0;
// } задание 2


// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     int x;
//     cin >> x;
//     int val[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
//     string sym[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
//     string res = "";
//     for (int i = 0; i < 13; i++) {
//         while (x >= val[i]) {
//             res += sym[i];
//             x -= val[i];
//         }
//     }
//     cout << res;
//     return 0;
// } задание 3