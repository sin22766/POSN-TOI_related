#include <iostream>
#include <list>
using lli = long long int;
using namespace std;

int main(){
    list<int> db;
    lli cmd;
    cin >> cmd;
    for(lli i = 0;i < cmd;i++){
        char tmp;
        cin >> tmp;
        if(tmp=='I'){
            lli tempInt;
            cin >> tempInt;
            db.push_back(tempInt);
            db.sort();
        }else if(tmp=='D'){
            lli tempInt;
            cin >> tempInt;
            for( auto d = db.begin();d != db.end();d){
                if(*d==tempInt){
                    d = db.erase(d);
                }else{
                    d++;
                }
        }
        }else if(tmp=='P'){
            lli dbsize = db.size();
            if(dbsize==0){
                cout << "NULL\n";
            }else{
                for(list<int>::iterator i = db.begin();i != db.end();i++){
                    cout << *i << "->";
                }
                cout << "NULL\n";
            }
        }
    }
}
