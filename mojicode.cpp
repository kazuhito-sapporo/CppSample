#include <climits>
#include <iostream>

using namespace std;
int main() {
    char c;
    cout << "文字を入力してください　：　" ;
    cin >> c;
    cout << "入力された文字は　" << c << "　です。" << endl
            << "文字コードは　" << int(c) << "　です。" << endl;
    return 0;
}