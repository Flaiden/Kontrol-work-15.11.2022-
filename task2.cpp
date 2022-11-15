#include <iostream>
using namespace std;

int main(){
int x, y;
cout << "Введите координат x"<< endl;
cin >> x;
cout << "Введите координат y"<< endl;
cin>> y;
if(x>0){
if(y>0)cout<<"1 четверть";
else cout<<"4 четверть";
}
else{
if(y>0)cout<<"2 четверть";
else cout<<"3 четверть";
}
}
