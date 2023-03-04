#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct rectangle{
    float Ax, Ay, Bx, By, Cx, Cy, Dx, Dy;
};

void perimeter(struct rectangle rec){
    printf("Периметр = %g\n", (sqrt(pow(rec.Bx - rec.Ax, 2) + pow(rec.By - rec.Ay, 2))) * 2 +
    (sqrt(pow(rec.Dx - rec.Ax, 2) + pow(rec.Dy - rec.Ay, 2))) * 2);
}

void area(struct rectangle rec){
    printf("Площадь = %g\n", (sqrt(pow(rec.Bx - rec.Ax, 2) + pow(rec.By - rec.Ay, 2))) *
    sqrt(pow(rec.Dx - rec.Ax, 2) + pow(rec.Dy - rec.Ay, 2)));
}

int main(){
    struct rectangle rec;
    printf("Введите координаты левой нижней точки:\n");
    scanf("%f %f", &rec.Ax, &rec.Ay);
    printf("Введите координаты левой верхней точки:\n");
    scanf("%f %f", &rec.Bx, &rec.By);
    printf("Введите координаты правой верхней точки:\n");
    scanf("%f %f", &rec.Cx, &rec.Cy);
    printf("Введите координаты правой нижней точки:\n");
    scanf("%f %f", &rec.Dx, &rec.Dy);
    if (rec.Ax == 0 && rec.Ay == 0 && rec.Bx == 0 && rec.By == 0
    && rec.Cx == 0 && rec.Cy == 0 && rec.Dx == 0 && rec.Dy == 0){
        printf("Этот объект - точка => Периметр и площадь равны 0\n");
        exit(1);
    };
    if ((sqrt(pow(rec.Bx - rec.Ax, 2) + pow(rec.By - rec.Ay, 2))) !=
    (sqrt(pow(rec.Cx - rec.Dx, 2) + pow(rec.Cy - rec.Dy, 2))) ||
    (sqrt(pow(rec.Ax - rec.Dx, 2) + pow(rec.Ay - rec.Dy, 2))) !=
    (sqrt(pow(rec.Bx - rec.Cx, 2) + pow(rec.By - rec.Cy, 2)))){
        printf("Длины или широты двух орезков не равны => прямоугольника существовать не может\n");
        exit(1);
    };
    perimeter(rec);
    area(rec);
    return 0;
}