/*
Name:Brian Gachoki
Reg no:CT100/G/26160/25
Description:surface_area.c_programme
*/

#include <stdio.h>
int main () {
	//variable declaration

	float pie, radius ,height , surface_area;
	pie=3.142;
     
    //prompt the user to enter radius
   printf("\n Enter radius: ");
    scanf("%f", &radius);
    
    //prompt the user to enter height
    printf("\n Enter height: ");
    scanf("%f", &height); 
    
    //compute surface_area
    
    surface_area = (2 * pie * radius * radius) + (2 * pie * radius * height);
    
    //display surface area
    printf("\n surface_area is %.2f", surface_area);
    
    return 0;
}
