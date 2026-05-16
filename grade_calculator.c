#include <stdio.h>

int main() {
    int n, i;
    float marks, total = 0, average, percentage;

    printf("=== Student Grade Calculator ===\n");
    printf("Enter number of subjects: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("Enter marks for subject %d (out of 100): ", i);
        scanf("%f", &marks);
        total += marks;
    }

    average = total / n;
    percentage = (total / (n * 100)) * 100;

    printf("\n===== RESULT =====\n");
    printf("Total Marks: %.2f / %d\n", total, n * 100);
    printf("Average: %.2f\n", average);
    printf("Percentage: %.2f%%\n", percentage);

    if(percentage >= 90) {
        printf("Grade: A+ (Excellent!)\n");
    } else if(percentage >= 80) {
        printf("Grade: A (Very Good!)\n");
    } else if(percentage >= 70) {
        printf("Grade: B (Good)\n");
    } else if(percentage >= 60) {
        printf("Grade: C (Average)\n");
    } else if(percentage >= 50) {
        printf("Grade: D (Below Average)\n");
    } else {
        printf("Grade: F (Failed)\n");
    }

    return 0;
}