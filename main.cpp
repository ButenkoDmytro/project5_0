#include <iostream>
using namespace std;

int main(){
    const int size = 10;
    int c[size] {0};
    float sum = 0;

    for (int i = 0; i < size; i++){
        cout << "Enter = " << endl;
        cin >> c[i];
    }
    for (int i = 0; i < size; i++){
        sum = sum + c[i];
    }
    cout << "Arithmetic mean = " << sum / size;
    return 0;
}