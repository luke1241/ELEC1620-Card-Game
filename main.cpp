//Librarys used
#include <iostream>
#include <stdlib.h>
#include <string>
#include "Card.h"

//Function prototypes
int user_input(int range);
bool is_number(std::string string);
void main_menu();
void main_game();
void instructions();

//Variable declarations


int main(){
    Card card("name", 1, 1, 1);
    main_menu();
}

int user_input(int range){
    std::string input;

    int int_input;

    while (1) {
        std::cout << "USER INPUT:";
        std::cin >> input;

        if (is_number(input)){
            int_input = stoi(input);

            if (int_input <= range && int_input >= 1){
                return int_input;
            }
            else {
                std::cout << "INPUT IS OUT OF RANGE!" << std::endl;
            }
        }
        else {
            std::cout << "YOU MUST ENTER AN INTEGER!" << std::endl;
        }
    }  
        
    
}

//https://www.delftstack.com/howto/cpp/how-to-determine-if-a-string-is-number-cpp/#:~:text=Use%20std%3A%3Aisdigit%20Method%20to%20Determine%20if%20a%20String%20Is%20a%20Number,-The%20first%20version&text=Namely%2C%20pass%20a%20string%20as,none%20is%20found%20returns%20true.
bool is_number(std::string string){
    for (char c : string){
        if (std::isdigit(c) == 0) return false;
    }
    return true;
}

void main_menu(){
    std::cout << "---------->SPACE WARRIOR<----------" << std::endl << std::endl << std::endl << std::endl;
    std::cout << "            -Main Menu-            " << std::endl;
    std::cout << "          1.  Play Game            " << std::endl;
    std::cout << "         2.  Instructions          " << std::endl;

    int selection = user_input(2);

    if (selection == 1){
        main_game();
    }
    else if (selection == 2){
        instructions();
    }
}

void main_game(){
    std::cout << "Main Game";
    //std::cout << testCard._name << std::endl;
    //std::cout << testCard._attack << std::endl;
    //std::cout << testCard._defence << std::endl;
    //std::cout << testCard._agility << std::endl;
}

void instructions(){
    std::cout << "           -Instructions-" << std::endl << std::endl;

    //instructions go here

    std::cout << "Enter 1 to return to the Main Menu" << std::endl;
    int selection = user_input(1);

    if (selection == 1){
        main_menu();
    }
}