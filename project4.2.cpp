#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    cout << boolalpha << (A >= 0) || (B < -2) << noboolalpha << endl;
    return 0;
}