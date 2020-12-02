// triple-X.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>

bool playGameAtDifficulty(int difficulty) {
    std::cout << "You run to door number " << difficulty << " with a three digit locker\n";
    std::cout << "On the doors are also written the following instructions:\n";

    srand(time(NULL));

    const int a = rand() % difficulty + difficulty;
    const int b = rand() % difficulty + difficulty;
    const int c = rand() % difficulty + difficulty;

    const int sum = a + b + c;
    const int product = a * b * c;

    std::cout << std::endl;
    std::cout << "+ There are three numbers in the code\n";
    std::cout << "+ The codes multiply to give " << product << std::endl;
    std::cout << "+ The codes add-up to " << sum << std::endl;

    std::cout << std::endl;
    std::cout << "Enter the three numbers followed by x\n";
    std::cout << std::endl;
    
    int answerA, answerB, answerC;
    std::cin >> answerA >> answerB >> answerC;

    int GuessSum = answerA + answerB + answerC;
    int GuessProduct = answerA * answerB * answerC;

    if (GuessSum == sum && GuessProduct == product)
    {
        std::cout << "\nYou entered correct numbers!\n";
        return true;
    }
    else
    {
        std::cout << "\nYou lost! :(((\n";
        return false;
    }
}

int main()
{
    //TO-DO zrobić z tego tablicę i wyświetlać po literze z przerwami
    std::cout << "You're in a long corridor. At the first end there is only darkness.\n";
    std::cout << "At the second end you see door\n";
    std::cout << "Suddenly you can hear sounds coming to you from the first end\n";
    std::cout << "Then you see it...\n";
    std::cout << "It have disfigured eyes, with flies buzz in and out\n";
    std::cout << "Monstrously large, three-fingered claws";
    std::cout << "Unnaturally long legs covered with fur\n";
    std::cout << "And this creature creature has just begun to approach you!!!\n";

    int difficulty = 2;
    int maxDifficulty = 10;

    while (difficulty <= maxDifficulty)
    {
        playGameAtDifficulty(difficulty);
        std::cin.clear();
        std::cin.ignore();
        difficulty++;
    }

    std::cout << "YOU ESCAPED !!! Congratulations !!!\n";
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
