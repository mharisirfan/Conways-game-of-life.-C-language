#include <stdio.h>
#include <stdlib.h>

void  next_tick (char *ptr_prev, char *ptr_next, int m, int n)
{
    char press;
int offset,i,j;
int checkstar=0;
int row;

///------------------------------------------------///
printf("Given Generation\n");
 for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%c ", *(ptr_prev+(i*n)+j));
        }
        printf(" \n");
    }
///---------------------------------------------------///
 for(i=0;i<m;i++)
{
    for(j=0; j<n ;j++)
    {
         offset=(i*n)+j;
         printf("The Value stored at %d x %d is %c \n",i,j,*(ptr_prev+offset));

        if(i==0) ///row 0
        {
            if(offset==0)/// cornor
           {

            if(*(ptr_prev+offset)==42 || *(ptr_prev+offset)==32)
            {
                if(*(ptr_prev+(offset+1))=='*') ///first neighbour
                {
                    checkstar=checkstar+1;
                }

                row=i+1;
                offset=row*n+j;

                if(*(ptr_prev+offset)=='*') ///second neighbour
                {
                    checkstar=checkstar+1;
                }

                if(*(ptr_prev+(offset+1))=='*') ///first neighbour
                {
                    checkstar=checkstar+1;
                }

                 offset=i*n+j;

                if(*(ptr_prev+offset)==42)   ///check
            {
                if(checkstar>3)
                {
                *(ptr_next+offset)=32;
                }
                if(checkstar==2 ||checkstar==3)
                {
                *(ptr_next+offset)=42;
                }
                if(checkstar<2)
                {
                *(ptr_next+offset)=32;
                }
               }
               else if(*(ptr_prev+offset)=32)
                 {
                     if(checkstar==3)
                     {
                         *(ptr_next+offset)=42;
                     }
                     else
                     {
                         *(ptr_next+offset)=32;
                     }
                 }
            }
           }

if(offset==n-1)
{
    checkstar=0;
    row=0;
    if(*(ptr_prev+offset)=='*'|| *(ptr_prev+offset)==32)

            {
                if(*(ptr_prev+(offset-1))=='*') ///first neighbour
                {
                    checkstar=checkstar+1;
                }
                 row=i+1;
                offset=(row*n)+j;

                if(*(ptr_prev+offset)=='*') ///second neighbour
                {
                    checkstar=checkstar+1;
                }

                if(*(ptr_prev+(offset-1))=='*') ///first neighbour
                {
                    checkstar=checkstar+1;
                }
                 offset=i*n+j;
                if(*(ptr_prev+offset)==42)   ///check
            {
                if(checkstar>3)
                {
                *(ptr_next+offset)=32;
                }
                if(checkstar==2 ||checkstar==3)
                {
                *(ptr_next+offset)=42;
                }
                if(checkstar<2)
                {
                *(ptr_next+offset)=32;
                }
               }

               else if(*(ptr_prev+offset)=32)
                 {
                     if(checkstar==3)
                     {
                         *(ptr_next+offset)=42;
                     }
                     else
                     {
                         *(ptr_next+offset)=32;
                     }
                 }
            }
}


else if (offset!=0 && offset!=n-1)
{
    checkstar=0;
    row=0;
    if(*(ptr_prev+offset)=='*'|| *(ptr_prev+offset)==32)

            {
                if(*(ptr_prev+(offset-1))=='*') ///first neighbour
                {
                    checkstar=checkstar+1;
                }


                if(*(ptr_prev+(offset+1))=='*') ///second neighbour
                {
                    checkstar=checkstar+1;
                }

                offset+=(n-1);

                if(*(ptr_prev+offset)=='*') ///first neighbour
                {
                    checkstar=checkstar+1;
                }

                offset=offset+1;

                if(*(ptr_prev+offset)=='*') ///first neighbour
                {
                    checkstar=checkstar+1;
                }

                offset=offset+1;

                if(*(ptr_prev+offset)=='*') ///first neighbour
                {
                    checkstar=checkstar+1;
                }

                 offset=i*n+j;
                 if(*(ptr_prev+offset)==42)   ///check
               {

                if(checkstar>3)
                {
                *(ptr_next+offset)=32;
                }
                if(checkstar==2 ||checkstar==3)
                {
                *(ptr_next+offset)=42;
                }
                if(checkstar<2)
                {
                *(ptr_next+offset)=32;
                }
               }

               else if(*(ptr_prev+offset)=32)
                 {
                     if(checkstar==3)
                     {
                         *(ptr_next+offset)=42;
                     }
                     else
                     {
                         *(ptr_next+offset)=32;
                     }
                 }
            }
}
        }///end i==0
        if(i==m-1)
        {
            checkstar=0;
           if(j==0)
           {
               offset=(i*n)+j;
                    if(*(ptr_prev+offset)=='*'|| *(ptr_prev+offset)==32)
            {

           offset+=1;
                if(*(ptr_prev+offset)=='*') ///first neighbour
                {
                    checkstar=checkstar+1;
                }
                row=i-1;
                offset=row*n+j;

                if(*(ptr_prev+offset)=='*') ///second neighbour
                {
                    checkstar=checkstar+1;
                }
                offset=offset+1;

                if(*(ptr_prev+offset)=='*') ///first neighbour
                {
                    checkstar=checkstar+1;
                }
                 offset=i*n+j;
            if(*(ptr_prev+offset)==42)   ///check
               {

                if(checkstar>3)
                {
                *(ptr_next+offset)=32;
                }

                if(checkstar==2 ||checkstar==3)
                {
                *(ptr_next+offset)=42;
                }

                if(checkstar<2)
                {
                *(ptr_next+offset)=32;
                }
               }
               else if(*(ptr_prev+offset)=32)
                 {
                     if(checkstar==3)
                     {
                         *(ptr_next+offset)=42;
                     }
                     else
                     {
                         *(ptr_next+offset)=32;
                     }
                 }
            }
           }  ///j==0 end
           checkstar=0;
           if(j==n-1)
           {
               offset=(i*n)+j;
                    if(*(ptr_prev+offset)=='*'|| *(ptr_prev+offset)==32)
            {

           offset-=1;

                if(*(ptr_prev+offset)=='*') ///first neighbour
                {
                    checkstar=checkstar+1;
                }
                row=i-1;
                offset=row*n+j;

                if(*(ptr_prev+offset)=='*') ///second neighbour
                {
                    checkstar=checkstar+1;
                }
                offset=offset-1;

                if(*(ptr_prev+offset)=='*') ///first neighbour
                {
                    checkstar=checkstar+1;
                }
                 offset=i*n+j;
                if(*(ptr_prev+offset)==42)   ///check
               {

                if(checkstar>3)
                {
                *(ptr_next+offset)=32;
                }
                if(checkstar==2 ||checkstar==3)
                {
                *(ptr_next+offset)=42;
                }
                if(checkstar<2)
                {
                *(ptr_next+offset)=32;
                }
               }
               else if(*(ptr_prev+offset)=32)
                 {
                     if(checkstar==3)
                     {
                         *(ptr_next+offset)=42;
                     }
                     else
                     {
                         *(ptr_next+offset)=32;
                     }
                 }
            }
           }
           else if(j!=0 && j!=n-1)

           {
               offset=(i*n)+j;
               checkstar=0;
                  row=0;
              if(*(ptr_prev+offset)=='*'|| *(ptr_prev+offset)==32)

            {
                if(*(ptr_prev+(offset-1))=='*') ///first neighbour
                {
                    checkstar=checkstar+1;
                }

                if(*(ptr_prev+(offset+1))=='*') ///second neighbour
                {
                    checkstar=checkstar+1;
                }
                row=i-1;
                offset=(row*n)+j;

                if(*(ptr_prev+offset)=='*') ///first neighbour
                {
                    checkstar=checkstar+1;
                }
                if(*(ptr_prev+(offset-1))=='*') ///first neighbour
                {
                    checkstar=checkstar+1;
                }
                if(*(ptr_prev+(offset+1))=='*') ///first neighbour
                {
                    checkstar=checkstar+1;
                }
                 offset=i*n+j;
                 if(*(ptr_prev+offset)==42)   ///check
               {

                if(checkstar>3)
                {
                *(ptr_next+offset)=32;
                }

                if(checkstar==2 ||checkstar==3)
                {
                *(ptr_next+offset)=42;
                }

                if(checkstar<2)
                {
                *(ptr_next+offset)=32;
                }
               }

               else if(*(ptr_prev+offset)=32)
                 {
                     if(checkstar==3)
                     {
                         *(ptr_next+offset)=42;
                     }
                     else
                     {
                         *(ptr_next+offset)=32;
                     }
                 }
            }
           }
           }


       if(j==0 && i!=0 && i!=m-1)

       {

      offset=(i*n)+j;
       row=0;
      checkstar=0;

    if(*(ptr_prev+offset)=='*'|| *(ptr_prev+offset)==32)

            {
           row=i-1;
           offset=row*n+j;
                if(*(ptr_prev+offset)=='*') ///first neighbour
                {
                    checkstar=checkstar+1;
                }
                offset=offset+1;
                if(*(ptr_prev+offset)=='*') ///second neighbour
                {
                    checkstar=checkstar+1;
                }
                row=i+1;
                offset=(row*n)+j;
                if(*(ptr_prev+offset)=='*') ///first neighbour
                {
                    checkstar=checkstar+1;
                }
                offset=offset+1;
                if(*(ptr_prev+offset)=='*') ///first neighbour
                {
                    checkstar=checkstar+1;
                }
                offset=(i*n)+j;
                if(*(ptr_prev+(offset+1))=='*') ///first neighbour
                {
                    checkstar=checkstar+1;
                }
                 offset=i*n+j;
                  if(*(ptr_prev+offset)==42)   ///check
               {

                if(checkstar>3)
                {
                *(ptr_next+offset)=32;
                }
                if(checkstar==2 ||checkstar==3)
                {
                *(ptr_next+offset)=42;
                }
                if(checkstar<2)
                {
                *(ptr_next+offset)=32;
                }
               }
               else if(*(ptr_prev+offset)=32)
                 {
                     if(checkstar==3)
                     {
                         *(ptr_next+offset)=42;
                     }
                     else
                     {
                         *(ptr_next+offset)=32;
                     }
                 }
            }

       }
        if(j==n-1 && i!=0 && i!=m-1)

       {
      offset=(i*n)+j;
       row=0;
      checkstar=0;

    if(*(ptr_prev+offset)=='*'|| *(ptr_prev+offset)==32)

            {
           row=i-1;
           offset=row*n+j;

                if(*(ptr_prev+offset)=='*') ///first neighbour
                {
                    checkstar=checkstar+1;
                }
                offset=offset-1;

                if(*(ptr_prev+offset)=='*') ///second neighbour
                {
                    checkstar=checkstar+1;
                }
                row=i+1;
                offset=(row*n)+j;

                if(*(ptr_prev+offset)=='*') ///first neighbour
                {
                    checkstar=checkstar+1;
                }
                offset=offset-1;
                if(*(ptr_prev+offset)=='*') ///first neighbour
                {
                    checkstar=checkstar+1;
                }
                offset=i*n+j;
                if(*(ptr_prev+(offset-1))=='*') ///first neighbour
                {
                    checkstar=checkstar+1;
                }
                 offset=i*n+j;
                  if(*(ptr_prev+offset)==42)   ///check
               {

                if(checkstar>3)
                {
                *(ptr_next+offset)=32;
                }

                if(checkstar==2 ||checkstar==3)
                {
                *(ptr_next+offset)=42;
                }
                if(checkstar<2)
                {
                *(ptr_next+offset)=32;
                }
               }

               else if(*(ptr_prev+offset)=32)
                 {
                     if(checkstar==3)
                     {
                         *(ptr_next+offset)=42;
                     }
                     else
                     {
                         *(ptr_next+offset)=32;
                     }
                 }
            }
       }



       if(j!=0 && j!=n-1 && i!=0 && i!=m-1)

       {
           checkstar=0;
           row=0;
            offset=(i*n)+j;
            if(*(ptr_prev+offset)=='*'|| *(ptr_prev+offset)==32)

            {
                if(*(ptr_prev+(offset+1))=='*') ///first neighbour
                {
                    checkstar=checkstar+1;
                }

                if(*(ptr_prev+(offset-1))=='*') ///second neighbour
                {
                    checkstar=checkstar+1;
                }

                row=i+1;
                offset=(row*n)+j;

                if(*(ptr_prev+offset)=='*') ///first neighbour
                {
                    checkstar=checkstar+1;
                }
                if(*(ptr_prev+(offset+1))=='*') ///first neighbour
                {
                    checkstar=checkstar+1;
                }

                if(*(ptr_prev+(offset-1))=='*') ///first neighbour
                {
                    checkstar=checkstar+1;
                }
                row=i-1;
                offset=(row*n)+j;

                if(*(ptr_prev+offset)=='*') ///first neighbour
                {
                    checkstar=checkstar+1;
                }

                if(*(ptr_prev+(offset+1))=='*') ///first neighbour
                {
                    checkstar=checkstar+1;
                }
                if(*(ptr_prev+(offset-1))=='*') ///first neighbour
                {
                    checkstar=checkstar+1;
                }
                 offset=i*n+j;
                    if(*(ptr_prev+offset)==42)   ///check
               {

                if(checkstar>3)
                {
                *(ptr_next+offset)=32;
                }

                if(checkstar==2 ||checkstar==3)
                {
                *(ptr_next+offset)=42;
                }

                if(checkstar<2)
                {
                *(ptr_next+offset)=32;
                }
               }

               else if(*(ptr_prev+offset)=32)
                 {
                     if(checkstar==3)
                     {
                         *(ptr_next+offset)=42;
                     }
                     else
                     {
                         *(ptr_next+offset)=32;
                     }
                 }
            }
       }
                 }
}

///------------------------next generation---------------------------///
printf(" ---------------------------\n");
printf("Next Generation\n");
 for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%c ", *(ptr_next+(i*n)+j));
        }
        printf(" \n");
    }

    printf(" \n");


printf(" ---------------------------\n");
///---------------------------------------------------///


///-------------------------Asking the user to end simulation or continue---------------------///
c1:
    printf(" Enter N or n for Next Generation and Q or q to end simulation.\n");
press=getch();

if(press=='n'||press=='N')
{
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)///------------------------swapping the second array in to the first array----------------///
        {
            *(ptr_prev+(i*n)+j)= *(ptr_next+(i*n)+j);
        }
        printf(" \n");
    }

   next_tick (ptr_prev,ptr_next, m, n);      ///-----Again calling the function with Previous Array Updated.-------------///
  //  next_tick(grid1,grid2,m,n);
 printf("Next Generation\n");
 printf(" \n");
 for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%c ", *(ptr_next+(i*n)+j));
        }
        printf(" \n");
    }

 printf(" ---------------------------\n");


goto c1;
}
else if(press=='q'||press=='Q')
{
    printf("Simulation Ended");
     exit(0) ;

}


///-------------------------Asking the user to end simulation or continue---------------------///
}
int main()
{

    int m,n,choice;

    int val;



    printf("Enter the Number of Rows?");
    scanf("%d",&m);

    printf("Enter the Number of Columns?");
    scanf("%d",&n);

    char grid1[m][n];
    char grid2[m][n];
    char value;
    int i,j;
printf("You Want to generate the Grid values randomly or by yourself?\nEnter 1 to manually enter the values and 2 to generate randomly?\n");
   scanf("%d",&choice);

   if(choice==1)
{
    for( i=0 ; i<m ;i++)
    {
        for( j=0; j<n ;j++)
        {
            printf("Enter the value for row %d and column %d \n",i,j);
             scanf("%c",&val);
             printf("Enter your value.\n");
            scanf("%c", &value);
            if (value=='*' || value==32)
            {
            grid1[i][j]=value;
            }
            else
            {
            printf("you can only enter two values either a * or a space.\n\n");
            j--;
            }

       }
    }


    }


    if(choice==2)
    {

    for( i=0 ; i<m ;i++)
        {

        for( j=0; j<n ;j++)
        {

           val=rand()%2;
           if (val==0)
           {
               grid1[i][j]=42;  //42 is *
           }

           if(val==1)
           {
               grid1[i][j]=32;   // space
           }


        }
    }


    }


    next_tick(grid1,grid2,m,n);
return 0;

    }










