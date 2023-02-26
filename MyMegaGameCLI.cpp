#include <iostream>
#include <windows.h>
#include <string>
#include <random>

std::string LOCATIONS[] = {"Overworld", "Caves", "Ocean"};

void textOutput(std::string text)
{
    std::cout << text << std::endl;
}

std::string textInput()
{
    std::string temp; 
    std::cout << ">>> ";
    std::cin >> temp;
    return temp;
}

class MyMegaGame
{
private:
public:
    MyMegaGame() { for (int i = 0; LOCATIONS[i].size() != 0; i++) { location_num++; } }
    int location_num = 1;
};

int main()
{
    srand(time(NULL));
    system("chcp 65001");
    system("cls || clear");
    textOutput("Вы появились, перед вами огромный мир.\nКуда вы отправитесь?");
    
    MyMegaGame game;

    bool cont = 0;
    while (!cont)
    {
        std::cout << "1 - Исследовать мир" << std::endl;
        int chose = stoi(textInput());
        switch(chose)
        {
            case 1:
                break;
            default:
                std::cout << "Ошибка выбора" << std::endl;
                continue;
        }
        cont = 1;
    }

    std::cout << game.location_num << std::endl;
    for(int i = 0; i < 10; ++i)
    {   
        int ii = rand() % game.location_num;
        std::cout << LOCATIONS[ii] << std::endl;
        std::cout << ii << std::endl;
        
    }


    system("pause");
}