#include <stdio.h>
int main() {
    printf("Enter number of students: ");
    int students;
    scanf("%d",&students);
    for(int i=1; i<=students; i++){
        int sum=0;
        printf("\nFor Student no. %d\n", i);
        int mark[3];
        for(int j=0; j<3; j++){
        printf("Enter Subject %d marks: ",j+1);
        scanf("%d",&mark[j]);
        sum += mark[j];
    }
    int avg = sum / 3;
    switch(avg / 10) {
        case 9 ... 10:
            printf("\nGrade: A");
            break;
        case 8:
            printf("\nGrade: B");
            break;
        case 7:
            printf("\nGrade: C");
            break;
        case 6:
            printf("Grade: D");
            break;
        default:
            printf("Grade: F");
    }
    printf("\nOverall Status: %s\n", (avg >= 60 && mark[0] >= 40 && mark[1] >= 40 && mark[2] >=40)? "Passed":"Failed");
}
return 0;
}