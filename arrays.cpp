#include <iostream>
using namespace std;
int main(){
    string Footballers[5] = {"Ronaldo","Messi","Neymar","Ramos","Bale"};
    cout << Footballers[0];
    Footballers[1] = "Haaland";
    cout <<"\n" << Footballers[0];
    for(int i=0;i<4;i++){
        cout<<Footballers[i]<<endl;
    }
    return 0;
}