#include <stdio.h>
int main() {
    int signal = 0;
    do{
    int light = 1;
    int heater = 2;
    int ac = 4;
    int camera = 8;
    printf("Enter signal value: ");
    scanf("%d", &signal);
    if(signal==-1) {
        break;
    }
    printf("1. Switch the water heater on \n2. Switch the air conditioner off\n3. Flip the main lights\n4. Check security camera status\n");
    printf("Enter your choice: ");
    int choice;
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            signal = signal | heater;
            printf("The new value of signal: %d", signal);
            break;
        case 2:
            signal = signal & ~ac;
            printf("The new value of signal: %d", signal);
            break;
        case 3:
            signal = signal ^ light;
            printf("The new value of signal: %d", signal);
            break;
        case 4:
            if((signal&camera)!= 0) {
                printf("\nSecurity Camera is Active");
            }
            else {
                printf("\nSecurity Camera is not Active");
            }
            printf("The new value of signal: %d", signal);
            break;
        default:
            printf("\nInvalid choice");
            continue;
    }
    if((signal & ac) != 0 && (signal & heater) !=0) {
        printf("\nThe Air Conditioner and Water Heater are Active at the same time. High Risk Alert\n");
    }
    } while (signal != -1);
    return 0;
}