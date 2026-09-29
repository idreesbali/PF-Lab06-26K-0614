#include <stdio.h>
int main() {
    int age=0;
    do {
    int price, discount = 0, day, bonus = 0, final = 0;
    printf("Enter your age(0 to exit): ");
    scanf("%d", &age);
    if(age==0) {
        break;
    } else if(age<0) {
        printf("\nInvalid Age\n");
        continue;
    }
    printf("Please enter the day of the month(1-31): ");
    scanf("%d", &day);
    printf("1. A Regular Movie\n2. A 3D Movie\n3. A Premier (first-day) show\n");
    printf("\nEnter your choice(1-3): ");
    int choice;
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            price = 500;
            break;
        case 2:
            price = 800;
            break;
        case 3:
            price = 1200;
            break;
        default:
            printf("\nInvalid Choice");
            return 0;
    }
    if(age<13) {
        discount = 30;
    } else if(age>=60) {
        discount = 20;
    }
    discount = (price * discount / 100);
    if(day%5==0) {
        printf("\nIt is Bonus Day");
        bonus = 50;
    }
    final = price - discount - bonus;
    if(final<100) {
        int i = 100 - final;
        final += i;
    }
    printf("\nFinal Bill: %d\n", final);
    } while (age != 0);
    printf("\nKiosk Closed\nThankyou");
}