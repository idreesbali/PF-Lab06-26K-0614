#include <stdio.h>
int main() {
    int pool = 1;
    int sauna = 2;
    int trainer = 4;
    int hour24 = 8;
    int access_number = 0;
    do{
        printf("Enter member's stored access number: ");
        scanf("%d", &access_number);
        if(access_number==9999) {
            break;
        } 
        int mode = 0;
        int hour=0, min=0;
        printf("Enter current time(24-hour clock): ");
        scanf("%d:%d",&hour, &min);
        printf("\nMode Type: %s", ((hour>=22 || hour<6))? "Late Night Mode":"Standard Mode");
        if(hour>=22 || hour < 6) {
            if((access_number & hour24) != 0) {
                printf("\nStatus: Entry Allowed\n");
            } else {
                printf("\nStatus: Entry Not Allowed\n");
            }
            
        } else {
            if((access_number & pool) != 0 || (access_number & sauna) != 0 || (access_number & trainer) != 0) {
                printf("\nStatus: Entry Allowed\n");
            } else {
                printf("\nStatus: Entry Not Allowed\n");
            }
        }
        printf("Personal Trainer Access: %s\n\n", ((access_number & trainer) !=0)? "Allowed":"Not Allowed");

    } while(access_number!=9999);
    return 0;
}