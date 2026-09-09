#include <iostream>

int main() {
    std::cout << "Mon Nom";
    std::cout << "Ma Ville";

    return 0;
}

// L'invite est collée parce que j'ai pas mis de \n à la fin.
// Donc le curseur reste bloqué directement après mon texte.
// Quand le programme s'arrête, le terminal réaffiche son prompt là où le curseur s'est arrêté, tout simplement.
// C'est pas un bug, c'est juste que le PC fait exactement ce qu'on lui dit sans inventer de lignes.
