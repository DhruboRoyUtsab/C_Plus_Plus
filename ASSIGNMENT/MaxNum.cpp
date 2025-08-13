#include<iostream>
using namespace std;
int main(){
    int array[4] = {45,65,63,56};
    int index;
    int max = array[0];
    for(index=0;index<4;index++){
        if(max < array[index]){
            max = array[index];
        }
    }
    cout<<"Max among four is = "<<max;
    return 0;
}