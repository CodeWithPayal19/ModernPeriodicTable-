#include<stdio.h>
int main()
{
    int n;
    int m;
    int a;
    int exit;
    int exi;

    printf("welcome to modern periodic table \n\n");

    printf(">enter 1 to know about an element\n\n");
    printf(">enter 2 to close the periodic table\n\n");
    
    printf("enter\n ");
    scanf("%d",&n);

    if(n==1)
    {
        printf("> press 3 to serch the element by atomic number\n\n");

        printf("enter\n\n");
        scanf("%d",&m);

        if(m==3)
        {
            printf("enter the atomic number of the element to be serched:");
            scanf("%d",&a);

            if(a==1)
            {
                printf("name : hydrogen\n");
                printf("symbol : H\n");
                printf("Atomic Number : 1\n");
                printf("Electronic Configuration : 1s^1\n");
                printf("Discovered By : Henry Cavendish\n");
                printf("Charge : +1\n");
            }

            if(a==2)
            {
                printf("name : Helium\n");
                printf("symbol : He\n");
                printf("Atomic Number : 2\n");
                printf("Electronic Configuration : 1s2\n");
                printf("Discovered By : French astronomer Jules Janssen\n");
                printf("Charge : 0\n");
            }

        }
    }

    else if(n==2)
    {
        printf("Do you want to exit?(yes/no)\n");
        printf("> press 6 for yes\n ");
        printf("> press 7 for no\n ");

        printf("enter\n");
        scanf("%d",&exit);

        if(exit==6)
        {
            printf("are you sure, you want to close the periodic table?(yes/no)\n");
            printf(">press 4 for yes\n");
            printf(">press 5 for no \n");

            printf("enter\n");
            scanf("%d",&exit);

            if(exi==4)
            {
                printf("the periodic table has closed");
            }
            else if(exi==5)
            {
                printf("periodic table has no closed and you can continue to learn more about elements\n\n");
                printf("enter the atomic number of the element to be serched : \n\n");
                scanf("%d",&a);
                
                if(a==1)
                {
                printf("name : hydrogen\n");
                printf("symbol : H\n");
                printf("Atomic Number : 1\n");
                printf("Electronic Configuration : 1s^1\n");
                printf("Discovered By : Henry Cavendish\n");
                printf("Charge : +1\n");
                }
            }
        }
        else if(exit==7)
        {
            printf("periodic table has not closed and you can continue to learn mire elements\n\n");

            printf("enter the atomic number of the elements to be serched:");
            scanf("%d",&a);

            if(a==1)
            {
                 printf("name : hydrogen\n");
                printf("symbol : H\n");
                printf("Atomic Number : 1\n");
                printf("Electronic Configuration : 1s^1\n");
                printf("Discovered By : Henry Cavendish\n");
                printf("Charge : +1\n");
            }
        }
    }

}