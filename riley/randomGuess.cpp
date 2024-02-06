#include<iostream>

int main(){
    int rand = random() % 100;

    int inputNum;

    std::cin>>inputNum;

    std::cout<< "computer - " << rand << "    user - " << inputNum << "\n";

        if(rand == inputNum){
            std::cout<<"win\n";
        }else(std::cout<<"loose\n");

}