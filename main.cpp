#include <iostream>
#include "temp.h"

using namespace std;

int main(){
    obj.GetValue1();
    while(true){
        obj.GetOp();
        if(obj.op == '='){
            cout << "\nResult : " << obj.a << endl;
            break;
            return true;
        }
        obj.GetValue2();
        if(obj.op == '+'){
            obj.Add();
        }
        if(obj.op == '-'){
            obj.Sub();
        }
        if(obj.op == '/'){
            obj.Sub();
        }
        if(obj.op == '*'){
            obj.Multi();
        }
    }    
    return 0;
}