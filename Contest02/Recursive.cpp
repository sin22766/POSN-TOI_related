#include <iostream>
using lli = long long int;
using namespace std;

int getSequence(int n){
    if(n <= 1){
        return 1;
    }
    else{
        return getSequence(n-1)+n;
    }
}
int main(){
    lli a,sum = 0;
    cin >> a;
    for(lli i = 1;i <= a;i++){
        lli temp = 1;
        for(lli j=0;j < i;j++){
            temp*=getSequence(i)-j;
        }
        sum+=temp;
    }
    cout << sum;
    return 0;
}
