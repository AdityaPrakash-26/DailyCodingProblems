#include <iostream>
#include <stack>
using namespace std;

class CallCounter {
public:
    stack<int> calls;

    int ping(int t);
};

int CallCounter::ping(int t){

    stack<int> temp = calls;
    
    if(calls.empty()){
        calls.push(t);
        return 1;
    }
    int count = 1;
    while(!temp.empty() && t - temp.top() <= 3000){
        temp.pop();
        count++;
    }
    calls.push(t);
    return count;
}

int main() {
    CallCounter obj;

    int t1 = obj.ping(1);
    int t2 = obj.ping(300);
    int t3 = obj.ping(3000);
    int t4 = obj.ping(3002);
    int t5 = obj.ping(7002);

    cout<<t1<<" "<<t2<<" "<<t3<<" "<<t4<<" "<<t5<<endl;
}