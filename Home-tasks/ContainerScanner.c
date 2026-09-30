#include <stdio.h>
int main() {
    printf("Enter the number of containers: ");
    int cont;
    scanf("%d", &cont);
    for(int i = 1; i<=cont; i++){
        int loaded=0;
        printf("\nFor Container no. %d\n", i);
        printf("Enter weight in kgs: ");
        int weight=0;
        scanf("%d", &weight);
        printf("\nChoose cargo type: ");
        printf("\n1. General Goods\n2. Hazardous Materials\n3. Refrigerated Goods\n");
        printf("\nEnter cargo type(1-3): ");
        int type;
        scanf("%d",&type);
        switch(type) {
            case 1:
                if(weight<=20000) {
                    loaded=1;
                }
                break;
            case 2:
                if(weight <= 15000 && i%2 != 0) {
                    loaded = 1;
                } break;
            case 3:
                if(weight<=18000) {
                    loaded=1;
                } break;
            default: 
                printf("\nInvalid Input\n");
                continue;
        } 
        int track = 0;
        track = weight % 97;
        track %= 100;
        if (loaded) {
            printf("\nStatus: Loaded\nTracking Code: %d\n", track);
        } else {
            printf("\nStatus: Not Eligible to be loaded\n");
        }
        
    }
    return 0;
}