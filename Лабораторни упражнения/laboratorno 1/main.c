#include <stdio.h>
#include <stdlib.h>

typedef struct Car {
    char** brand;
}Car;


int main()
{
    Car myCar;
    myCar.brand = (char*)malloc(20 * sizeof(char));
    for(int i = 0; i<2;i++){
        myCar.*(brand + i) = malloc(20);
    }
    strcpy(myCar.brand[0], "Ferrari");
    strcpy(myCar.brand[1], "Porshe");
    printf(myCar.brand[0]);
    printf(myCar.brand[1]);


    return 0;

}
