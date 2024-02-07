#include <string>
#include <iostream>
using namespace std;

int main(){
    string vertical[13],horizontal[13];
    bool atk,def,re,pre;
    atk = def = re = pre = false;
    for (int i = 0; i < 13; ++i) {
        for (int j = 0; j < 13; ++j) {
            char temp;
            cin >> temp;
            vertical[i].push_back(tolower(temp));
            horizontal[j].push_back(vertical[i][j]);
        }
    }
    for (int k = 0; k < 13; ++k) {
        auto itRe1 = vertical[k].find("taerter");
        auto itRe2 = horizontal[k].find("taerter");
        if(itRe1!=string::npos||itRe2!=string::npos){
            re = true;
        }
        auto itPre1 = vertical[k].find("eraperp");
        auto itPre2 = horizontal[k].find("eraperp");
        if(itPre1!=string::npos||itPre2!=string::npos){
            pre = true;
        }
        auto itAtk1 = vertical[k].find("kcatta");
        auto itAtk2 = horizontal[k].find("kcatta");
        if(itAtk1!=string::npos||itAtk2!=string::npos){
            atk = true;
        }
        auto itDef1 = vertical[k].find("esnefed");
        auto itDef2 = horizontal[k].find("esnefed");
        if(itDef1!=string::npos||itDef2!=string::npos){
            def = true;
        }
    }
    if(re){
        cout << "retreat";
    }else if(pre){
        cout << "prepare";
    }else{
        if(atk&&def){
            cout << "attack\ndefense";
        }else if(atk){
            cout << "attack";
        }else if(def){
            cout << "defense";
        }else{
            cout << "no command yet";
        }
    }

    return 0;
}