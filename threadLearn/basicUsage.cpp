#include <iostream>
#include <thread>

// Function to be executed by the thread
void printHello() {
    std::cout << "Hello from the thread!" << std::endl;
}

int main() {
    // Create a thread that runs the printHello function    
    std::thread t(printHello);
    
    // Wait for the thread to finish
    t.join();
    //detach 主线程结束之后，子线程继续运行
    //joinbale 判断线程是否可以join 
    std::cout << "Hello from the main thread!" << std::endl;

    return 0;
}