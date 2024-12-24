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

    std::cout << "Hello from the main thread!" << std::endl;

    return 0;
}