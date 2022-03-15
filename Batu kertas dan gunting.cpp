#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));
    int game = rand() % 3 + 1;
    int pengguna = 0;
    
    std::cout << "===================\n";
    std::cout << "Tebak angka\n";
    std::cout << "===================\n";
    
    std::cout << "1) Batu\n";
    std::cout << "2) Kertas\n";
    std::cout << "3) Gunting\n";

    std::cout << "Tebak!: ";

    std::cin >> pengguna;

    std::cout << "Komputer: " << game << "\n";

    if (pengguna == game){
        std::cout <<"Weh, hasilnya sama!\n";
    }
    else if (pengguna == 1){
        if (game == 2){
            std::cout <<"Yah!!, kamu kalah! \n";
        }
        else if (game == 3){
            std::cout << "Kamu menang!\n";
        }
    }
    else if (pengguna == 2){
        if(game == 1){
            std::cout <<"Kau menang, hebatt!!\n";
        }
        else if(game == 3){
            std::cout <<"Yah, kalah dong\n";
        }
    }
    else if (pengguna == 3){
        if(game == 1){
            std::cout << "Kalah lagi dong \n";
        }
        else if (game == 2){
            std::cout <<"Menang!! \n";
        }
    }

    std::cout <<"Selesai\n";
    
}