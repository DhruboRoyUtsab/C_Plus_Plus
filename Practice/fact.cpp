#include<iostream>
using namespace std;
int factorinal (int n){
    int fact = 1;
    for(int i = 1; i<=n; i++){
        fact = fact *i;
    }
    return fact;
}
int main(){
    cout<<factorinal(10)<<endl;

}