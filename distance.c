//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>
void distance(float x1,float y1,float x2,float y2)
{
  float dist;
  dist=(sqrt((pow((x2-x1),2)+pow((y2-y1),2))));
  printf("Distance between (%f,%f) and (%f,%f) is %f",x1,y1,x2,y2,dist);
  
}
int inputX()
{
   float x;
   printf("Enter x value:");
   scanf("%f",&x);
   return x;
int inputY()
{
    float y;
    printf("Enter y value:");
    scanf("%f",&y);
}
int main()
{
  float x1,y1,x2,y2;
  x1=pointX();
  y1=pointY();
  x2=pointX();
  y2=pointY();
  distance(x1,y1,x2,y2);
 
