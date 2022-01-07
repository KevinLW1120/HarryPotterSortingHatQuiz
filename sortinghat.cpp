#include <iostream>

int main() {

    int gryffindor = 0;
    int hufflepuff = 0;
    int ravenclaw = 0;
    int slytherin = 0;

    int answer1, answer2, answer3, answer4;

    std::cout << "Sorting Hat Quiz!\n";

    //Questions
    std::cout << "\nWhen I'm dead, I want to people to remember me as: \n";
    std::cout << "1) The Good\n";
    std::cout << "2) The Great\n";
    std::cout << "3) The Wise\n";
    std::cout << "4) The Bold\n";

    std::cin >> answer1;

    if (answer1 == 1) {
        hufflepuff++;
    } else if (answer1 == 2) {
        slytherin++;
    }else if (answer1 == 3) { 
        ravenclaw++;
    } else if (answer1 == 4) {
        gryffindor++;
    } else {
        std::cout << "Invalid Output.\n";
    }

    
}