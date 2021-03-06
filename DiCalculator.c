#include<stdio.h>
#include<math.h>
#define Pi 3.14
int main()
{
    char answer='y';
    //This variables for units.....
    char unit[10];
//----------------------------------------------------------
    // This variables for choices..
    int choice,Subchoice1,Subchoice2,Subchoice3;
//-----------------------------------------------------------
// ******************** AREA ***********************
    // This variables for calculating area of square..
    float areaSqu, sideSqu;
    // This  variables for calculating area of circle..
    float radiCir,areaCir;
    // This  variables for calculating area of Triangle..
    float HeiTri,BasTri,areaTri;
//-----------------------------------------------------------
// ******************** VOLUME ***********************
    // This variables for calculating Volume of Cube..
    float sideCub,VolCub;
    // This variables for calculating Volume of Sphere..
    float radiSp,VolSp;
    // This variables for calculating Volume of Cylinder..
    float radiCyl,HeiCyl,VolCyl;
//-----------------------------------------------------------
// ******************** DENSITY ***********************
    // This variables for calculating Density of Water..
    float Mass,VolWat,Density;


do{


    printf("************ DIMENSIONAL CALCULATOR ************** \n");

    printf("\n");
    printf("1.Calculate Area\n");
    printf("2.Calculate Volume\n");
    printf("3.Calculate Density\n");
    printf("\n");
    printf("Enter the above option to perform: ");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        printf("\n");
        printf("1.Area of Square.\n");
        printf("2.Area of Circle.\n");
        printf("3.Area of Triangle.\n");
        printf("\n");
        printf("Enter the above option to perform: ");
        scanf("%d",&Subchoice1);

        switch (Subchoice1)
        {
        case 1:
            printf("\n************** AREA OF SQUARE ************\n");
            printf("Enter the value of side of Square: ");
            scanf("%f",&sideSqu);
            fflush(stdin);
            printf("Enter the unit you want to calculate: ");
            scanf("%s",&unit);
            areaSqu = pow(sideSqu,2);
            printf("---------------------------------------------\n");
            printf("Area of Square is: %0.2f %s sq.\n",areaSqu,unit);
            printf("---------------------------------------------\n");
            break;

        case 2:
            printf("\n************** AREA OF CIRCLE ************\n");
            printf("Enter the value of radius: ");
            scanf("%f",&radiCir);
            fflush(stdin);
            printf("Enter the unit you want to calculate: ");
            scanf("%s",&unit);
            areaCir = Pi * pow(radiCir,2);
            printf("---------------------------------------------\n");
            printf("Area of Circle is: %0.2f %s sq.\n",areaCir,unit);
            printf("---------------------------------------------\n");
            break;

        case 3:
            printf("\n************** AREA OF TRIANGLE ************\n");
            printf("Enter the value of Height and Base of Triangle: ");
            scanf("%f%f",&HeiTri,&BasTri);
            fflush(stdin);
            printf("Enter the unit you want to calculate: ");
            scanf("%s",&unit);
            areaTri = (HeiTri * BasTri)/2;
            printf("---------------------------------------------\n");
            printf("The area of Triangle is: %0.2f %s sq.\n",areaTri,unit);
            printf("---------------------------------------------\n");
            break;
        }
        break;

    case 2:
        printf("\n");
        printf("1.Volume of Cube.\n");
        printf("2.Volume of Sphere.\n");
        printf("3.Volume of Cylinder.\n");
        printf("\n");
        printf("Enter the above option to perform: ");
        scanf("%d",&Subchoice2);

        switch(Subchoice2)
        {
        case 1:
            printf("\n************** VOLUME OF CUBE ************\n");
            printf("Enter the value of side of Cube: ");
            scanf("%f",&sideCub);
            fflush(stdin);
            printf("Enter the unit you want to calculate: ");
            scanf("%s",&unit);
            VolCub = pow(sideCub,3);
            printf("---------------------------------------------\n");
            printf("Volume of Cube is: %0.2f %s cub.\n",VolCub,unit);
            printf("---------------------------------------------\n");
            break;

        case 2:
            printf("\n************** VOLUME OF SPHERE ************\n");
            printf("Enter the value of radius: ");
            scanf("%f",&radiSp);
            fflush(stdin);
            printf("Enter the unit you want to calculate: ");
            scanf("%s",&unit);
            VolSp = (4/3) * Pi * pow(radiSp,3);
            printf("---------------------------------------------\n");
            printf("Volume of Sphere is: %0.2f %s cub.\n",VolSp,unit);
            printf("---------------------------------------------\n");
            break;

        case 3:
            printf("\n************** VOLUME OF CYLINDER ************\n");
            printf("Enter the value of Radius and Height of Cylinder: ");
            scanf("%f%f",&radiCyl,&HeiCyl);
            fflush(stdin);
            printf("Enter the unit you want to calculate: ");
            scanf("%s",&unit);
            VolCyl = Pi * pow(radiCyl,2) * HeiCyl;
            printf("---------------------------------------------\n");
            printf("The Volume of Cylinder is: %0.2f %s cub.\n",VolCyl,unit);
            printf("---------------------------------------------\n");
            break;
        }
        break;

    case 3:
        printf("\n");
        printf("1.Density of Water.\n");
        //printf("2.Volume of Sphere.\n");
        //printf("3.Volume of Cylinder.\n");
        printf("\n");
        printf("Enter the above option to perform: ");
        scanf("%d",&Subchoice3);

        switch(Subchoice3)
        {
        case 1:
            printf("\n************** DENSITY OF WATER ************\n");
            printf("Enter the value of Mass in kg and Volume in m cub.: ");
            scanf("%f%f",&Mass,&VolWat);
            Density = Mass/VolWat;
            printf("---------------------------------------------\n");
            printf("Density of Water is: %0.2f Kg/m-cub.\n",Density);
            printf("---------------------------------------------\n");
            break;
        }
        break;

    }
    printf("Do you want to Calculate again(y/n): ");
    fflush(stdin);
    scanf("%c",&answer);
}while(answer!='n');

return 0;
}
