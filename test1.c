#include <stdio.h>

void displayProducts();
void getProduct();  
void getQuantity();
void calculateTotal();
void getPrice();

#define LAPTOP 1
#define PHONE 2
#define BOOK 3

int main() {

    int choice,product,quantity;
    float price, discount, total;
    while(1) {
        printf("Menu:\n");
        printf("1. Choose Product\n");
        printf("2. Enter Quantity\n");
        printf("3. Caculate Total\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {

        case 1:  
            displayProducts();
            getProduct();  
            break;

        case 2: 
            getQuantity();
            break;

        case 3:
            getPrice();
            void displayDiscountRules();   
            calculateTotal();
            break;

        case 4:
            return 0;

        default: {
  printf("Invalid choice\n"); 
}
    }
}
void displayDiscountRules() {

int productType;

if(product == LAPTOP) {
productType = LAPTOP;
}
else if(product == PHONE) {
productType = PHONE;
}
else {
productType = BOOK;
}

if(productType == LAPTOP) {
    printf("May tinh:\n");

if(price > 100) {
  printf("1. Price > 100 trieu: 10%% discount\n");
}
if(price > 200) {
  printf("2. Price > 200 trieu: 15%% discount\n");
}
} else if(productType == PHONE) {
    printf("Dien thoai:\n");

if(price > 100) {  
  printf("1. Price > 100 trieu: 5%% discount\n");
}
if(price > 200) {
  printf("2. Price > 200 trieu: 10%% discount\n");
}
} else {
    printf("Sach vo:\n");

if(price > 50) {
  printf("1. Price > 50 trieu: 50%% discount\n");
}
if(price > 200) {
  printf("2. Price > 200 trieu: 70%% discount\n");
}
}

}
return 0;
}
