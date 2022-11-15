#include <iostream>
#include <fstream>

using namespace std;

int main(){

    double summa,first_pay, srok;
    cin>>summa>>first_pay>>srok;
    if(first_pay < summa * 0.2){
        return 0;
    }
    cout<< (summa - first_pay) / (11 + (srok - 1)*12);

    return 0;
}
