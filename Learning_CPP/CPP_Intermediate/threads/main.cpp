#include <iostream>
#include <thread>

static bool s_fininshed = false;


void DoWork(){
    using namespace std::literals::chrono_literals;

    std::cout<<"thread id : "<<std::this_thread::get_id()<<std::endl;
    while(!s_fininshed){

        std::cout<<"Working...\n";
        std::this_thread::sleep_for(1s);
    }

}

int main(){
    std::thread worker(DoWork); // this is takign input as a function pointer
    std::cin.get();
    s_fininshed = true;
    worker.join();
    std::cout<<"finished...\n";
    std::cout<<"thread id : "<<std::this_thread::get_id()<<std::endl;


}
