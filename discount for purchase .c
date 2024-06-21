#include <stdio.h>

int main() {
    float purchaseAmount, discount = 0.0, finalAmount;
    printf("Enter the purchase amount: ");
    scanf("%f", &purchaseAmount);
    if (purchaseAmount > 5000) {
        discount = purchaseAmount * 0.10;
    }
    finalAmount = purchaseAmount - discount;
    printf("Purchase Amount: %.2f\n", purchaseAmount);
    printf("Discount: %.2f\n", discount);
    printf("Final Amount to be paid: %.2f\n", finalAmount);

    return 0;
}
