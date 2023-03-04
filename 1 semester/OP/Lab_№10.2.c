#include <stdio.h>
#include <math.h>

int distance(int n, float coordinates[][2])
{
    float distance[n][n - 1];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            distance[i][j] = sqrt(pow((coordinates[i][0] - coordinates[j][0]), 2) + 
            pow((coordinates[i][1] - coordinates[j][1]), 2));
        }
    }   
    for (int i = 0; i < n; i++){
      for (int j = 0; j < n - 1; j++){
        if (distance[i][j] == 0 && i == 0 && j == 0){
            printf("Расстояние от ПЕРВОЙ точки до остальных\n");
            continue;
        }
        else if (distance[i][j] == 0){
            printf("Расстояние от СЛЕДУЮЩЕЙ точки до остальных\n");
            continue;
        }
        printf("%g \n", distance[i][j]);
      }
    }
}

int main()
{
    printf("Введите кол-во точек:\n");
    int n;
    scanf("%d", &n);
    printf("Введите координаты точек:\n");
    float coordinates[n][2];
    float x, y;
    for (int i = 0; i < n; i++)
    {
        scanf("%f %f", &x, &y);
        coordinates[i][0] = x;
        coordinates[i][1] = y;
    }
    distance(n, coordinates);
    return 0;
}