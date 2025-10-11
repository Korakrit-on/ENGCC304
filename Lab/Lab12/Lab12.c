#include <stdio.h>
#include <string.h>

struct Student {
    char Name[20];
    char ID[5];
    int ScoreSub1;
    int ScoreSub2;
    int ScoreSub3;
    int ScoreSub4;
    int ScoreSub5;
} typedef S;


char grade(int score) {
    if (score >= 80) return 'A';
    else if (score >= 70) return 'B';
    else if (score >= 60) return 'C';
    else if (score >= 50) return 'D';
    else return 'F';
}

int main() {
    S students[3];

    printf("Enter the details of 3 students:\n");
    for (int i = 0; i < 3; i++) {
        printf("Student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].Name);
        printf("ID: ");
        scanf("%s", students[i].ID);
        printf("Score Subject 1: ");
        scanf("%f", &students[i].ScoreSub1);
        printf("Score Subject 2: ");
        scanf("%f", &students[i].ScoreSub2);
        printf("Score Subject 3: ");
        scanf("%f", &students[i].ScoreSub3);
        printf("Score Subject 4: ");
        scanf("%f", &students[i].ScoreSub4);
        printf("Score Subject 5: ");
        scanf("%f", &students[i].ScoreSub5);
    }

    printf("\n--- Grade Report ---\n");
    for (int i = 0; i < 3; i++) {
        printf("Name: %s, ID: %s\n", students[i].Name, students[i].ID);
        printf("Subject 1: %.2f (%c)\n", students[i].ScoreSub1, grade(students[i].ScoreSub1));
        printf("Subject 2: %.2f (%c)\n", students[i].ScoreSub2, grade(students[i].ScoreSub2));
        printf("Subject 3: %.2f (%c)\n", students[i].ScoreSub3, grade(students[i].ScoreSub3));
        printf("Subject 4: %.2f (%c)\n", students[i].ScoreSub4, grade(students[i].ScoreSub4));
        printf("Subject 5: %.2f (%c)\n", students[i].ScoreSub5, grade(students[i].ScoreSub5));
        printf("---------------------\n");
    }

    return 0 ;
}