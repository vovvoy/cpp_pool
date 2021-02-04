#include "Pony.hpp"

void ponyOnTheHeap(Pony* blabla){
    std::cout << "\n\nThis is a new pony on the heap!!!\n";
    std::cout << "And here is the some information about her." << std::endl;
    std::cout << "codename:  " << blabla->getPonyNickname() << std::endl;
    std::cout << "age:  " << blabla->getPonyAge() << std::endl;
    std::cout << "length:  " << blabla->getPonyLength() << std::endl;
    std::cout << "height:  " << blabla->getPonyHeight() << std::endl;
}


void ponyOnTheStack(Pony uh){
    std::cout << "\n\nThis is a new pony on the stack!!!\n";
    std::cout << "And here is the some information about him." << std::endl;
    std::cout << "codename:  " << uh.getPonyNickname() << std::endl;
    std::cout << "age:  " << uh.getPonyAge() << std::endl;
    std::cout << "length:  " << uh.getPonyLength() << std::endl;
    std::cout << "height:  " << uh.getPonyHeight() << std::endl << std::endl << std::endl;
}



int main() {
    Pony    vovvoy = Pony("Ps001", 25, 1.5, 96.7);
    Pony*   ljerrica = new Pony("Ph001", 10, 1.7, 77.3);

    ponyOnTheHeap(ljerrica);
    ponyOnTheStack(vovvoy);

    delete ljerrica;
    return (0);
}