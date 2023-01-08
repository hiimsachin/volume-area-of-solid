#include<stdio.h>
#include<conio.h>
#include<dos.h>

void main()
{
    int i=0 ;
     {
      clrscr();
      gotoxy(31,12);
      printf("Press Enter to start");
      getch();
      }


      clrscr();

      gotoxy(35,12);
      printf("Loading");

      while(!kbhit())
      {
       gotoxy(35,12);
       delay(500);
       gotoxy(35+7+i,12);
       printf(".");
       i++;
       if(i==3)
       {  gotoxy(35,12);
	  delay(500);
	  gotoxy(35+7,12);
	  printf(".");
	  gotoxy(35+7,12);
	  printf("   ");
	  i=0;
       }
      }

clrscr();
{
   int answer,a,s;

  printf("\n***************************************************\n");
  printf("\nPRESS 1 TO FIND THE TOTAL SURFACE AREA OF SOLID\n");
  printf("\nPRESS 2 TO FIND THE VOLUME OF SOLID\n");
  printf("\nPRESS 3 TO FIND THE CURVED SURFACE AREA OF SOLID\n ");
  printf("\nPRESS 0 TO EXIT\n");
  printf("\n***************************************************\n");

  printf("\nEnter the answer : ");
  scanf("%d",&answer);


  switch(answer)

			   //VOLUME
  case 2 :

{
   int volume ;
   float cube,a ;
   float cuboid,l,b,h;
   float cone,r;
   float cylinder;
   float sphere;
   float hemisphere;
   float prism,A,s1,s2,s3,H,S;
   float pyramid;


   clrscr();
   printf("\n**************************************************\n");
   printf("\nPRESS 1 TO FIND THE VOLUME OF CUBE\n");
   printf("\nPRESS 2 TO FIND THE VOLUME OF CUBOID\n");
   printf("\nPRESS 3 TO FIND THE VOLUME OF CONE\n");
   printf("\nPRESS 4 TO FIND THE VOLUME OF CYLINDER\n");
   printf("\nPRESS 5 TO FIND THE VOLUME OF SPHERE\n");
   printf("\nPRESS 6 TO FIND THE VOLUME OF HEMI-SPHERE\n");
   printf("\nPRESS 7 TO FIND THE VOLUME OF PRISM\n");
   printf("\nPRESS 8 TO FIND THE VOLUME OF PYRAMID\n");
   printf("\nPRESS 0 TO EXIT\n");
   printf("\n**************************************************\n");
   printf("\nEnter the number : ");
   scanf("%d",&volume);

   switch(volume)
   {
    case 1 :
    clrscr();
    gotoxy(31,2);
    printf("VOLUME OF CUBE\n");
    printf("\n_____________________________________\n");
    printf("\nEnter The Side Of Cube = ");
    scanf("%f",&a);
    cube=(a*a*a);
    printf("\nVolume of cube is = %f",cube );
    printf("\n_____________________________________\n");
    break;

    case 2:
    clrscr();
    gotoxy(31,2);
    printf("VOLUME OF CUBOID\n");
    printf("\n____________________________________\n");
    printf("\nEnter The Length of Cuboid : ");
    scanf("%f",&l);
    printf("\nEnter The Breadth of Cuboid : ");
    scanf("%f",&b);
    printf("\nEnter The Height of Cuboid : ");
    scanf("%f",&h);
    cuboid=(l*b*h) ;
    printf("\nVolume of Cuboid = %f",cuboid);
    printf("\n___________________________________\n");
    break;

    case 3:
    clrscr();
    gotoxy(31,2);
    printf("VOLUME OF CONE\n");
    printf("\n__________________________________\n");
    printf("\nEnter the radius of base of cone : ");
    scanf("%f",&r);
    printf("\nEnter the height of the cone : ");
    scanf("%f",&h);
    cone=(3.14*r*r*h)/3 ;
    printf("\nVolume of Cone is = %f",cone);
    printf("\n_________________________________\n");
    break;

    case 4 :
    clrscr();
    gotoxy(31,2);
    printf("VOLUME OF CYLINDER\n");
    printf("\n_________________________________________\n");
    printf("\nEnter the radius of the base : ");
    scanf("%f",&r);
    printf("\nEnter the height of the cylinder : ");
    scanf("%f",&h);
    cylinder=3.14*r*r*h;
    printf("\nVolume of Cylinder is : %f",cylinder);
    printf("\n________________________________________\n");
    break ;

    case 5 :
    clrscr();
    gotoxy(31,2);
    printf("VOLUME OF SPHERE\n");
    printf("\n______________________________________________\n");
    printf("\nEnter the radius of Sphere : ");
    scanf("%f",&r);
    sphere=(3.14*r*r*r*4)/3;
    printf("\nvolume of sphere is : %f",sphere);
    printf("\n_____________________________________________\n");
    break;

    case 6:
    clrscr();
    gotoxy(31,2);
    printf("VOLUME OF HEMI-SPHERE\n");
    printf("\n____________________________________________\n");
    printf("\nEnter the radius of hemi-sphere : ");
    scanf("%f",&r);
    hemisphere=(3.14*r*r*r*2)/3;
    printf("\nvolume of Hemi-Sphere is : %f",hemisphere);
    printf("\n___________________________________________\n");
    break;

    case 7:
    clrscr();
    gotoxy(31,2);
    printf("VOLUME OF PRISM \n");
    printf("\n__________________________________________\n");
    printf("\nEnter the area of base of prism : ");
    scanf("%f",&A);
    printf("\nEnter the height of Prism : ");
    scanf("%f",&h);
    prism=A*h;
    printf("\nVolume of Prism : %f",prism);
    printf("\n___________________________________________\n");
    break;

    case 8 :
    clrscr();
    gotoxy(31,2);
    printf("VOLUME OF PYRAMID\n");
    printf("\n___________________________________________\n");
    printf("\nEnter the area of base of pyramid : ");
    scanf("%f",&A);
    printf("\Enter the height of pyramid : ");
    scanf("%f",&h);
    pyramid=A*h/3;
    printf("\nVolume of Pyramid : %f",pyramid);
    printf("\n___________________________________________\n");
    break ;

    case 0 :
    clrscr();
    gotoxy(31,12);
    printf("Thank you Visit Again :)");
    break;

    default:
    printf("\nplease choose right one");
    }
    break;

			    //Total Surface Area

   case 1:
   {
   clrscr();
   printf("\n**************************************************\n");
   printf("\nPRESS 1 TO FIND THE TOTAL SURFACE AREA OF CUBE\n");
   printf("\nPRESS 2 TO FIND THE TOTAL SURFACE AREA OF CUBOID\n");
   printf("\nPRESS 3 TO FIND THE TOTAL SURFACE AREA OF CONE\n");
   printf("\nPRESS 4 TO FIND THE TOTAL SURFACE AREA OF CYLINDER\n");
   printf("\nPRESS 5 TO FIND THE TOTAL SURFACE AREA OF SPHERE\n");
   printf("\nPRESS 6 TO FIND THE TOTAL SURFACE AREA OF HEMI-SPHERE\n");
   printf("\nPRESS 0 TO EXIT\n");
   printf("\n**************************************************\n");
   printf("\nEnter the number : ");
   scanf("%d",&volume);

    switch(volume)
   {
    case 1 :
    clrscr();
    gotoxy(27,2);
    printf("TOTAL SURFACE AREA OF CUBE\n");
    printf("\n_____________________________________________\n");
    printf("\nEnter The Side Of Cube = ");
    scanf("%f",&a);
    cube=(6*a*a);
    printf("\nTotal Surface Area of cube is = %f",cube );
    printf("\n_____________________________________________\n");
    break;

    case 2:
    clrscr();
    gotoxy(28,2);
    printf("TOTAL SURFACE AREA OF CUBOID\n");
    printf("\n_______________________________________________\n");
    printf("\nEnter The Length of Cuboid : ");
    scanf("%f",&l);
    printf("\nEnter The Breadth of Cuboid : ");
    scanf("%f",&b);
    printf("\nEnter The Height of Cuboid : ");
    scanf("%f",&h);
    cuboid= 2*(l*b+b*h+h*l);
    printf("\nTotal Surface Area of Cuboid = %f",cuboid);
    printf("\n______________________________________________\n");
    break;

    case 3:
    clrscr();
    gotoxy(28,2);
    printf("TOTAL SURFACE AREA OF CONE\n");
    printf("\n_______________________________________________\n");
    printf("\nEnter the radius of base of cone : ");
    scanf("%f",&r);
    printf("\nEnter the length of the cone : ");
    scanf("%f",&l);
    cone= 3.14*r*(l+r);
    printf("\nTotal Surface Area of Cone is = %f",cone);
    printf("\n_______________________________________________\n");
    break;

    case 4 :
    clrscr();
    gotoxy(28,2);
    printf("TOTAL SURFACE AREA OF CYLINDER\n");
    printf("\n__________________________________________________\n");
    printf("\nEnter the radius of the base : ");
    scanf("%f",&r);
    printf("\nEnter the height of the cylinder : ");
    scanf("%f",&h);
    cylinder=3.14*r*2*(r+h);
    printf("\nTotal Surface Area of Cylinder is : %f",cylinder);
    printf("\n__________________________________________________\n");
    break ;

    case 5 :
    clrscr();
    gotoxy(28,2);
    printf("TOTAL SURFACE AREA OF SPHERE\n");
    printf("\n_________________________________________________\n");
    printf("\nEnter the radius of Sphere : ");
    scanf("%f",&r);
    sphere=(3.14*r*r*4);
    printf("\nTotal Surface Area of sphere is : %f",sphere);
    printf("\n_________________________________________________\n");
    break;

    case 6:
    clrscr();
    gotoxy(28,2);
    printf("TOTAL SURFACE AREA OF HEMI-SPHERE\n");
    printf("\n__________________________________________________________\n");
    printf("\nEnter the radius of hemi-sphere : ");
    scanf("%f",&r);
    hemisphere=(3.14*r*r*3);
    printf("\nTotal Surface Area of Hemi-Sphere is : %f",hemisphere);
    printf("\n__________________________________________________________\n");
    break;

    case 0 :
    clrscr();
    gotoxy(31,12);
    printf("Thank you Visit Again :)");
    break;


    default:
    printf("\nplease choose right one");

    }

    break;
    }

		      //Curved Sureface Area

   case 3:
   {
   clrscr();
   printf("\n**************************************************\n");
   printf("\nPRESS 1 TO FIND THE CURVED SURFACE AREA OF CUBE\n");
   printf("\nPRESS 2 TO FIND THE CURVED SURFACE AREA OF CUBOID\n");
   printf("\nPRESS 3 TO FIND THE CURVED SURFACE AREA OF CONE\n");
   printf("\nPRESS 4 TO FIND THE CURVED SURFACE AREA OF CYLINDER\n");
   printf("\nPRESS 5 TO FIND THE CURVED SURFACE AREA OF SPHERE\n");
   printf("\nPRESS 6 TO FIND THE CURVED SURFACE AREA OF HEMI-SPHERE\n");
   printf("\nPRESS 0 TO EXIT\n");
   printf("\n**************************************************\n");
   printf("\nEnter the number : ");
   scanf("%d",&volume);

   switch(volume)
   {
    case 1 :
    clrscr();
    gotoxy(27,2);
    printf(" CURVED SURFACE AREA OF CUBE\n");
    printf("\n______________________________________________\n");
    printf("\nEnter The Side Of Cube = ");
    scanf("%f",&a);
    cube=(4*a*a);
    printf("\nCurved Surface Area of cube is = %f",cube );
    printf("\n______________________________________________\n");
    break;

    case 2:

    clrscr();
    gotoxy(28,2);
    printf(" CURVED SURFACE AREA OF CUBOID\n");
    printf("\n_______________________________________\n");
    printf("\nEnter The Length of Cuboid : ");
    scanf("%f",&l);
    printf("\nEnter The Breadth of Cuboid : ");
    scanf("%f",&b);
    printf("\nEnter The Height of Cuboid : ");
    scanf("%f",&h);
    cuboid= 2*h*(l+b);
    printf("\nCurved Surface Area of Cuboid = %f",cuboid);
    printf("\n_______________________________________\n");
    break;


    case 3:
    clrscr();
    gotoxy(28,2);
    printf(" CURVED SURFACE AREA OF CONE\n");
    printf("\n_________________________________________\n");
    printf("\nEnter the radius of base of cone : ");
    scanf("%f",&r);
    printf("\nEnter the length of the cone : ");
    scanf("%f",&l);
    cone= 3.14*r*l;
    printf("\nCurved Surface Area of Cone is = %f",cone);
    printf("\n_________________________________________\n");
    break;

    case 4 :
    clrscr();
    gotoxy(28,2);
    printf(" CURVED SURFACE AREA OF CYLINDER\n");
    printf("\n__________________________________________\n");
    printf("\nEnter the radius of the base : ");
    scanf("%f",&r);
    printf("\nEnter the height of the cylinder : ");
    scanf("%f",&h);
    cylinder=3.14*r*2*h;
    printf("\nCurved Surface Area of Cylinder is : %f",cylinder);
    printf("\n__________________________________________\n");
    break ;

    case 5 :
    clrscr();
    gotoxy(28,2);
    printf(" CURVED SURFACE AREA OF SPHERE\n");
    printf("\n___________________________________________\n");
    printf("\nEnter the radius of Sphere : ");
    scanf("%f",&r);
    sphere=(3.14*r*r*4);
    printf("\nCurved Surface Area of sphere is : %f",sphere);
    printf("\n___________________________________________\n");
    break;

    case 6:
    clrscr();
    gotoxy(28,2);
    printf(" CURVED SURFACE AREA OF HEMI-SPHERE\n");
    printf("\n_________________________________________________________\n");
    printf("\nEnter the radius of hemi-sphere : ");
    scanf("%f",&r);
    hemisphere=(3.14*r*r*2);
    printf("\nCurved Surface Area of Hemi-Sphere is : %f",hemisphere);
    printf("\n_________________________________________________________\n");
    break;

    case 0 :
    clrscr();
    gotoxy(31,12);
    printf("Thank you Visit Again :)");
    break;

    default:
    printf("\nplease choose right one");

    }
    break;

    case 0 :
    clrscr();
    gotoxy(31,12);
    printf("Thank you Visit Again :)");
    break;
    }

    default:
    printf("\nplease choose right one");

    } //answer



}//volume
getch();
} //void
