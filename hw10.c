#include <stdio.h>
#include <string.h>

typedef struct {
    char name[20];
    char country[20];
    int population;
} infolist;

int main() {
    infolist list[3];

    printf("Input three cities:\n");
    for (int i = 0; i < 3; i++) {
        printf("Name: ");
        fgets(list[i].name, sizeof(list[i].name), stdin);

        printf("Country: ");
        fgets(list[i].country, sizeof(list[i].country), stdin);

        printf("Population: ");
        scanf("%d", &list[i].population);
        getchar();
    }

    printf("Printing the three cities:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d. %s in %s with a population of %d people\n", i + 1, list[i].name, list[i].country, list[i].population);
    }

    return 0;
}
