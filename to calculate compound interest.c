/*
Student Name:Salav Thapa
Subject:Programing Fundamental
Roll:
Program:to enter p,t,r and calculate compound interest
Lab Sheet No:6
Date:2016-11-25
*/
#include<stdio.h>
#include<math.h>
int main(){
    float a,p,t,r,CI;
    printf("Enter the value of p:\n");
    scanf("%f",&p);
    printf("Enter the value of t:\n");
    scanf("%f",&t);
    printf("Enter the value of r:\n");
    scanf("%f",&r);
    a=(1+r/100);
    CI=(p*pow(a,t)-1);
    printf("the value of CI is %f \n", CI);
    return 0;
}
