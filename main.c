#include <stdio.h>
#include <string.h>

int main() {
    int choice;
    char username[50];
    char password[50];
    FILE *file;

    while (1) {
        printf("\n1. Register\n2. Exit\nChoice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Username: ");
            scanf("%s", username);

            printf("Password: ");
            scanf("%s", password);

            file = fopen("users.txt", "a");
            if (file == NULL) {
                printf("Error opening file\n");
                return 1;
            }

            fprintf(file, "%s %s\n", username, password);
            fclose(file);

            printf("User registered successfully\n");
        }
        else if (choice == 2) {
            break;
        }
        else {
            printf("Invalid choice\n");
        }
    }

    return 0;
}
