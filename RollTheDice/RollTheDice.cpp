#include <iostream>

int main()
{

    int scorePlayerOne = 0;
    int diceResult = 0;
    char exitOrNot = 'n';

    // Comment on fait pour jouer à plusieurs ?
    // Est ce qu'on peut factoriser des éléments ?

    // Ca y est c sur git
    // Ca y est c sur git
    // Ca y est c sur git

    do
    {
        srand(time(nullptr));

        diceResult = 1 + rand() % 6;
        std::cout << "DICE = " << diceResult << '\n';

        // Conditions de stop de la partie
        if (diceResult == 1)
        {
            scorePlayerOne = 0;
        }else
        {
            scorePlayerOne += diceResult;
        }


        if (diceResult == 1 || scorePlayerOne > 20)
        {
            std::cout << "Game Over !!!!!!!!!!!!!!!!!!\n";
        }else
        {
            std::cout << "Do you want to exit ?" << '\n';
            std::cin >> exitOrNot;
        }

        std::cout << "SCORE = " << scorePlayerOne << '\n';


    }while (exitOrNot != 'y' && diceResult != 1 && scorePlayerOne <= 20);

}
