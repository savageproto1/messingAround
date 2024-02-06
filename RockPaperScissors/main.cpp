#include <iostream>
#include <string>

typedef std::string str;

str in;

const str str_rock = "rock";
const str str_paper = "paper";
const str str_scissors = "scissors";

#define rock 1
#define paper 2
#define scissors 3

int main(){
std::cin>>in;

short player;

srand(time(NULL));

int computer = (rand() % 3) + 1;

if(in.find(str_rock) != std::string::npos){
    player = rock;
}

if(in.find(str_paper) != std::string::npos){
    player = paper;
}

if(in.find(str_scissors) != std::string::npos){
    player = scissors;
}



}