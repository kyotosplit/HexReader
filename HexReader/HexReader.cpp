#include <iostream>
#include <iomanip>

int main()
{
    char caractere;

    std::cout << "Digite caracteres (Que vao aparecer em codigo hexadecimal)" << std::endl;

    do {
        std::cin.get(caractere);

        if (caractere != '\n') {
            system("cls");
            std::cout << "Codigo hexadecimal: 0x" << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(caractere) << std::endl;
            
        }
    } while (caractere != '0');
   
    return 0;
}

