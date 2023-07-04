#include <cs50.h>
#include <stdio.h>

int discount(float price, int percentage);

int main(void){

    float regular = get_float("Price: ");
    int disPer = get_int("Discount: ");
    float salePrice = discount(regular, disPer);
    printf("%.2f\n", salePrice);

}

int discount(float price, int percentage){

    return price * (100 - percentage) / 100;
}
