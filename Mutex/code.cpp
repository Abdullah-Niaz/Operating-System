#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

mutex mtx;
int globalVariable = 0;

void processFunction() {
    mtx.lock(); // Lock the mutex
    globalVariable++; // Modify the shared variable
    mtx.unlock(); // Unlock the mutex
}

int main() {
    thread t1(processFunction);
    thread t2(processFunction);

    t1.join();
    t2.join();

    std::cout << "Global variable value: " << globalVariable << std::endl;

    return 0;
}
