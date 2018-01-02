#include <iostream>

using namespace std;

int main(){
    int min, a, b;
    cin >> min;
    cin >> a >> b;
    if(min >= a+b)
        cout << "Farei hoje!" << endl;
    else
        cout << "Deixa para amanha!" << endl;
    return 0;
}
