#include <stdio.h>
#include <string.h>

struct Movie
{
    char title[50];
    char director[50];
    int year;
    char genre[30];
};

int main()
{
    struct Movie m[10];
    int n = 0;
    int choice, i, found;
    char searchTitle[50];

    do
    {
        printf("\nMOVIE DATABASE\n");
        printf("1. Add Movie\n");
        printf("2. Display Movies\n");
        printf("3. Search Movie\n");
        printf("4. Update Movie\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            printf("\nEnter Movie Title: ");
            scanf(" %[^\n]", m[n].title);

            printf("Enter Director: ");
            scanf(" %[^\n]", m[n].director);

            printf("Enter Release Year: ");
            scanf("%d", &m[n].year);

            printf("Enter Genre: ");
            scanf(" %[^\n]", m[n].genre);

            n++;

            printf("\nMovie added successfully!\n");
        }

        else if(choice == 2)
        {
            if(n == 0)
            {
                printf("\nNo movies available.\n");
            }
            else
            {
                printf("\nMOVIE RECORDS\n");

                for(i = 0; i < n; i++)
                {
                    printf("\nMovie %d\n", i + 1);
                    printf("Title%s\n", m[i].title);
                    printf("Director%s\n", m[i].director);
                    printf("Release Year%d\n", m[i].year);
                    printf("Genre%s\n", m[i].genre);
                }
            }
        }

        else if(choice == 3)
        {
            printf("\nEnter movie title to search: ");
            scanf(" %[^\n]", searchTitle);

            found = 0;

            for(i = 0; i < n; i++)
            {
                if(strcmp(m[i].title, searchTitle) == 0)
                {
                    printf("\nMovie Found!\n");
                    printf("Title%s\n", m[i].title);
                    printf("Director%s\n", m[i].director);
                    printf("Release Year%d\n", m[i].year);
                    printf("Genre%s\n", m[i].genre);

                    found = 1;
                    break;
                }
            }

            if(found == 0)
            {
                printf("\nMovie not found.\n");
            }
        }

        else if(choice == 4)
        {
            printf("\nEnter movie title to update: ");
            scanf(" %[^\n]", searchTitle);

            found = 0;

            for(i = 0; i < n; i++)
            {
                if(strcmp(m[i].title, searchTitle) == 0)
                {
                    printf("\nEnter new Director: ");
                    scanf(" %[^\n]", m[i].director);

                    printf("Enter new Release Year: ");
                    scanf("%d", &m[i].year);

                    printf("Enter new Genre: ");
                    scanf(" %[^\n]", m[i].genre);

                    printf("\nMovie updated successfully!\n");

                    found = 1;
                    break;
                }
            }

            if(found == 0)
            {
                printf("\nMovie not found.\n");
            }
        }

        else if(choice == 5)
        {
            printf("\nExiting Movie Database\n");
        }

        else
        {
            printf("\nInvalid choice!\n");
        }

    } while(choice != 5);

    return 0;
}