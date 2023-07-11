#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "flek.h"

int main()
{
    srand(time(NULL));
    acceuil();
    mot_de_passe();
    principale();
    logo();
    return 0;
}
