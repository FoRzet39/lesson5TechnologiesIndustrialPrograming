// #include <iostream>
// #include <cmath>
// using namespace std;

// int main(){
//     double a, b, c;
//     cout << "Введите значение а:";
//     cin >> a;
//     cout << "Введите значение b:";
//     cin >> b;
//     c = sqrt(a*a + b*b);
//     cout << "Гипотенуза равна:" << c <<
// } 1 задача

// #include <iostream>
// using namespace std;

// int main() {
//     double v, t;
//     cout << "Введите скорость v (км/ч): ";
//     cin >> v;
//     cout << "Введите время t (ч): ";
//     cin >> t;
//     double s = v * t;
//     double mark = s - 109 * (int)(s / 109);
//     cout << "Отметка: " << mark << " км" << endl;
//     return 0;
// } Здача 2


// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Введите число: ";
//     cin >> n;
//     int tens = (n / 10) % 10;
//     cout << "Число десятков: " << tens << endl;
//     return 0;
// }Задача 3

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Введите число: ";
//     cin >> n;
//     int next = n + 2 - (n % 2);
//     cout << "Следующее чётное: " << next << endl;
//     return 0;
// } Задача 4

// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     n %= 86400;

//     int h = n / 3600;
//     int m = (n % 3600) / 60;
//     int s = n % 60;

//     cout << h << ":"
//          << setw(2) << setfill('0') << m << ":"
//          << setw(2) << setfill('0') << s;
//     return 0;
// }Задача 5

// #include <iostream>
// using namespace std;

// int main() {
//     int a, b;
//     cin >> a >> b;
//     a = a + b;
//     b = a - b;
//     a = a - b;
//     cout << a << " " << b;
//     return 0;
// } Задание 6


// #include <iostream>
// using namespace std;

// int main() {
//     int h, a, b;
//     cin >> h >> a >> b;

//     int d;
//     if (a >= h)
//         d = 1;
//     else
//         d = (h - a + (a - b) - 1) / (a - b) + 1;

//     cout << d;
//     return 0;
// } Задание 7



// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int a = n / 1000;
//     int b = n / 100 % 10;
//     int c = n / 10 % 10;
//     int d = n % 10;
//     cout << (a == d && b == c);
//     return 0;
// } Задание 8

// #include <iostream>
// using namespace std;

// int main() {
//     int n, m;
//     cin >> n >> m;
//     int res = (n % m == 0 || m % n == 0);
//     cout << res;
//     return 0;
// } Задание 9


// #include <iostream>
// using namespace std;

// int main() {
//     int a, b;
//     cin >> a >> b;
//     int d = a - b;
//     int k = (d + 1000) / 2000;   // 0 при a>=b, 1 при a<b
//     cout << a * (1 - k) + b * k;
//     return 0;
// } Задание 10







