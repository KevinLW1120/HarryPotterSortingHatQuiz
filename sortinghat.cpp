#include <iostream>

int main() {

    int gryffindor = 0;
    int hufflepuff = 0;
    int ravenclaw = 0;
    int slytherin = 0;

    int answer1, answer2, answer3, answer4;

    int max = 0;
    std::string house;

    std::cout << "Sorting Hat Quiz!\n";

    //Question 1
    std::cout << "\nWhen I'm dead, I want to people to remember me as: \n";
    std::cout << "1) The Good\n";
    std::cout << "2) The Great\n";
    std::cout << "3) The Wise\n";
    std::cout << "4) The Bold\n";

    std::cin >> answer1;

    //Question 1 if/else
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

    //Question 2
    std::cout << "\nDawm or Dusk?\n";
    std::cout << "1) Dawn\n";
    std::cout << "2) Dusk\n";

    std::cin>> answer2;

    //Question 2 if/else
    if (answer2 == 1) {
        gryffindor++;
        ravenclaw++;
    } else if (answer2 == 2) {
        slytherin++;
        hufflepuff++;
    } else {
        std::cout << "invalid input\n";
    }

    //Question 3
    std::cout<< "\nWhat kind of instument most pleases your ear?\n";
    std::cout << "1) The violin\n";
    std::cout << "2) The trumpet\n";
    std::cout << "3) The piano\n";
    std::cout << "4) The drum\n";

    std::cin >> answer3;

    //Question 3 if/else
    if (answer3 == 1) {
        slytherin++;
    } else if (answer3 == 2) {
        hufflepuff++;
    } else if (answer3 == 3) {
        ravenclaw++;
    } else if (answer3 == 4) {
        gryffindor++;
    } else {
        std::cout << "invalid input\n";
    }

    //Question 4
    std::cout << "\nWhich road tempts you most?\n";
    std::cout << "1) The wide, sunny grassy lane\n";
    std::cout << "1) The narrow, dark, lantern-lit alley\n";
    std::cout << "1) The twisting, leaf-stream path through woods\n";
    std::cout << "1) The cobbled street lined (ancient buildings)\n";

    //Question 4 if/esle
    if (answer4 == 1) {
        hufflepuff++;
    } else if (answer4 == 2) {
        slytherin++;
    } else if (answer4 == 3) {
        gryffindor++;
    } else if (answer4 == 4) {
        ravenclaw++;
    } else {
        std::cout << "invalid input\n";
    }
}