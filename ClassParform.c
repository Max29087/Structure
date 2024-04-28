#include <stdio.h>
#include <string.h>
#include <limits.h>
#define n 2
struct player
{
    int id;
    char name[100];
    int type;
    float kpi;
};
typedef struct player plr;
void display(plr p[])
{
    for (int i = 0; i < n; i++)
    {
        printf("Name: ");
        puts(p[i].name);
        printf("ID: %d\n", p[i].id);
        printf("Type: %d\n", p[i].type);
        printf("KIP: %f", p[i].kpi);
    }
}
int main()
{
    plr p[n];
    for (int i = 0; i < n; i++)
    {
        fflush(stdin);
        printf("Nmae: ");
        fgets(p[i].name, 100, stdin);
        printf("ID: ");
        scanf("%d", &p[i].id);
        printf("Type: ");
        scanf("%d", &p[i].type);
        printf("KPI: ");
        scanf("%f", &p[i].kpi);
    }
    float max_kpi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (p[i].kpi > max_kpi)
        {
            max_kpi = p[i].kpi;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (max_kpi == p[i].kpi)
        {
            printf("\n\nOutPut\n\n");
            printf("Name: ");
            puts(p[i].name);
            printf("ID: %d\n", p[i].id);
            printf("Type: %d\n", p[i].type);
            printf("KIP: %.2f\n", p[i].kpi);
        }
    }
    return 0;
}