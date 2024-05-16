#include <stdio.h>
#include <stdlib.h>

    typedef struct IceCream
    {
        char code[3];
        char name[20];
        int weight;
        float price;
    }IceCream;

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n<=1
       ||n>=15)
    {
        perror("error");
        return 1;
    }

    IceCream *products = (IceCream *)malloc(n *sizeof (IceCream));
    if(products == NULL){
        perror("Erroe");
        return 1;
    }

    for(int i = 0;i<n;i++)
    {
        printf("Enter a code: ");
        scanf("%s",products[i].code);

        printf("Enter a name: ");
        scanf("%s",products[i].name);

        printf("Enter a weight: ");
        scanf("%d",&products[i].weight);

        printf("Enter a price: ");
        scanf("%f",&products[i].price);
    }

        for(int i = 0;i<n;i++)
    {
        printf("%s\n",products[i].name);

    }




    free(products);
    return 0;


}

float totalPrice(IceCream products[],int n, char letter)
{
    float sum = 0;
    for(int i =0;i<n;i++)
    {
        if(products[i].name[0] == letter)
        {
            sum+=products[i].price * products[i].weight;
        }
    }
    return sum;
}

float findProduct(IceCream products[],int n,float price, int weigth)
{
    FILE *fp = fopen("info.txt", "w");
    if(fp ==NULL)
        {
        perror("Error");
        return 1;
    }

        int counter = 0;
        for(int i =0;i<n;i++)
    {
        if(products[i].price<price &&products[i].weight<weigth)
        {
            fprintf(fp,"%s%s%d%fleva\n",products[i].code,products[i].name,products[i].weight,products[i].price)
            counter++;
        }

    }
     fclose(fp);
    return counter;

}

void product(char code[3])
{
    FILE *fp = fopen("icecream.bin", "rb");
    if(fp ==NULL)
        {
        perror("Error");
        return ;
        }
    IceCream product;
    while(fread(&product,sizeof (product),1,fp) == 1)
    {
        if(strcmp(product.code, code)== 0)
        {
            printf("IceCream - %s",product.name);
            printf("IceCream - %f BGN",product.price);
            fclose(fp);
            return;
        }
    }
    printf("Product was not found");
    fclose(fp);

}


