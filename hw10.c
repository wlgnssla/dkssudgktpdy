#include <stdio.h>
#include <string.h>

typedef struct {
    char name[20];
    char country[20];
    int population;
} cityInfo; 

int main() {
    cityInfo cities[3]; 

    printf("Input three cities:\n");
    for (int i = 0; i < 3; i++) {

        printf("Name> ");
        fgets(cities[i].name, sizeof(cities[i].name), stdin);
        cities[i].name[strcspn(cities[i].name, "\n")] = 0;

        printf("Country> ");
        fgets(cities[i].country, sizeof(cities[i].country), stdin);
        cities[i].country[strcspn(cities[i].country, "\n")] = 0;

        printf("Population> ");
        scanf("%d", &cities[i].population);
        getchar(); 
    }

    printf("Printing the three cities:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d. %s in %s with a population of %d people\n", i + 1, cities[i].name, cities[i].country, cities[i].population);
    }

    return 0;
}
