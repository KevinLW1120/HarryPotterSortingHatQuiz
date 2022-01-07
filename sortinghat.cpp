#include <iostream>

int main() {

    int gryffindor = 0;
    int hufflepuff = 0;
    int ravenclaw = 0;
    int slytherin = 0;

    int answer1, answer2, answer3, answer4;

    int max = 0;
    std::string house;

    std::cout << "===============\n";
    std::cout << "The Sorting Hat\n";
    std::cout << "===============\n\n";

    //Question 1
    std::cout<< "Question 1 of 4\n\n";
    std::cout << "\nWhen I'm dead, I want to people to remember me as: \n";
    std::cout << "1) The Good\n";
    std::cout << "2) The Great\n";
    std::cout << "3) The Wise\n";
    std::cout << "4) The Bold\n";

    std::cout << "\nEnter your answer (1-4): ";
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
    std::cout<< "\nQuestion 2 of 4\n\n";
    std::cout << "\nDawm or Dusk?\n";
    std::cout << "1) Dawn\n";
    std::cout << "2) Dusk\n";

    std::cout << "\nEnter your answer (1 or 2): ";
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
    std::cout<< "\nQuestion 3 of 4\n\n";
    std::cout<< "\nWhat kind of instument most pleases your ear?\n";
    std::cout << "1) The violin\n";
    std::cout << "2) The trumpet\n";
    std::cout << "3) The piano\n";
    std::cout << "4) The drum\n";

    std::cout << "\nEnter your answer (1-4): ";
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
    std::cout<< "\nQuestion 4 of 4\n\n";
    std::cout << "\nWhich road tempts you most?\n";
    std::cout << "1) The wide, sunny grassy lane\n";
    std::cout << "2) The narrow, dark, lantern-lit alley\n";
    std::cout << "3) The twisting, leaf-stream path through woods\n";
    std::cout << "4) The cobbled street lined (ancient buildings)\n";

    std::cout << "\nEnter your answer (1-4): ";
    std::cin>> answer4;

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

    //Calculates which House has the most points.
    if(gryffindor > max) {
        max = gryffindor;
        house = "Gryffindor";
    }

    if(hufflepuff > max) {
        max = hufflepuff;
        house = "Hufflepuff";
    }

    if(ravenclaw > max) {
        max = ravenclaw;
        house = "Ravenclaw";
    }

    if(slytherin > max) {
        max = slytherin;
        house = "Slytherin";
    }

    std::cout<< "\n\n" << house << "!\n";
}