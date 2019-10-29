#include <iostream>
#include <ctime>
using namespace std;
void MOVE(int n,char nguon,char trunggian,char dich){
    if (n==1) cout <<"Chuyen "<<nguon<<" sang "<<dich<<endl;
    else {
        MOVE(n-1,nguon,dich,trunggian);
        MOVE(1,nguon,trunggian,dich);
        MOVE(n-1,trunggian,nguon,dich);
    }
}
int main(){
    char nguon='A';
    char dich='C';
    char trunggian='B';
    int n;
    cin>>n;
    auto start=clock();
    MOVE(n,nguon,trunggian,dich);
    auto Finist=clock();
    cout <<"Runtime "<< Finist-start;
}
