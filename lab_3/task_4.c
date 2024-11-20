#include<stdio.h>
#include<math.h>

int main() {
    int students, capacity;
    printf("Enter total number of students: ");
    scanf("%d", &students);
    printf("Enter the capacity of one bus: ");
    scanf("%d", &capacity);
    float bus = (float) students / capacity;
    printf("Total number of buses required: %.0f", ceil(bus));
    return 0;
}