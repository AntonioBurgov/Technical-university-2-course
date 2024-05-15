#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the struct for Car
struct Car {
    char brand[30];
    int horsePower;
};

// Example function demonstrating the usage of the Car struct
void example() {
    struct Car car;
    strcpy(car.brand, "Mazda");
    printf("%s\n", car.brand);
}

// Define the struct for Product
struct Product {
    char type[30];
    double price;
    int amount;
};

// Define the struct for Shop
struct Shop {
    char name[30];
    char address[30];
    struct Product products[2];
};

// Function to search for a product
void searchProduct(struct Shop shop, char userInput[]) {
    for (int i = 0; i < 2; i++) {
        if (strcmp(shop.products[i].type, userInput) == 0) {
            printf("Product found!\n");
            printf("Product: %s\n", shop.products[i].type);
            printf("Price: %.2f\n", shop.products[i].price);
            printf("Amount: %d\n", shop.products[i].amount);
            return;
        }
    }
    printf("Product not found!\n");
}

int main() {
    // Create a Shop instance
    struct Shop shop1;
    strcpy(shop1.name, "Kaufland");
    strcpy(shop1.address, "ulica1");

    // Create Product instances
    struct Product product1;
    strcpy(product1.type, "TV");
    product1.price = 500.99;
    product1.amount = 10;

    struct Product product2;
    strcpy(product2.type, "shoes");
    product2.price = 120;
    product2.amount = 5;

    // Assign products to the shop
    shop1.products[0] = product1;
    shop1.products[1] = product2;


    char userInput[30];
    printf("Enter the product you want to search for: ");
    scanf("%s", userInput);

    // Search f
    searchProduct(shop1, userInput);

    return 0;
}
