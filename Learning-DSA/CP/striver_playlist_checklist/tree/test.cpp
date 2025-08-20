#include <iostream>
#include <mutex>
using namespace std;

int main() {
    mutex mtx;
    lock_guard<mutex> lock(mtx);
    cout << "Mutex works!" << endl;
    return 0;
}
