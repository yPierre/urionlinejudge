#include <iostream>
#include <string>

using namespace std;

int main(){

    string nome[9] = {"Dasher", "Dancer", "Prancer", "Vixen", "Comet", "Cupid", "Donner", "Blitzen", "Rudolph"};
    int total = 0, num;

    for(int i = 0; i < 9; i++){
        cin >> num;
        total += num;
    }

    while(total > 9)
        total-=9;

    total--;
    cout << nome[total] << endl;




    return 0;
}
