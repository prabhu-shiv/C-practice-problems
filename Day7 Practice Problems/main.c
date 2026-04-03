#include "day7.h"

int main(){
    int choice;

    while(1){
        printf("\n===== FILE OPERATIONS MENU =====\n");
        printf("1. Display File\n");
        printf("2. Copy File\n");
        printf("3. File Statistics\n");
        printf("4. Separate Odd/Even\n");
        printf("5. Add Contact (Text)\n");
        printf("6. Show Contacts (Text)\n");
        printf("7. Add Contact (Binary)\n");
        printf("8. Show Contacts (Binary)\n");
        printf("0. Exit\n");

        printf("Enter choice: ");
        scanf("%d",&choice);

        if(choice==0) break;

        if(choice==1){
            display_file("input.txt");
        }
        else if(choice==2){
            copy_file("input.txt","copy.txt");
        }
        else if(choice==3){
            file_statistics("input.txt");
        }
        else if(choice==4){
            separate_odd_even("numbers.txt");
        }
        else if(choice==5){
            add_contact_text("contacts.txt");
        }
        else if(choice==6){
            display_contacts_text("contacts.txt");
        }
        else if(choice==7){
            add_contact_binary("contacts.bin");
        }
        else if(choice==8){
            display_contacts_binary("contacts.bin");
        }
        else{
            printf("Invalid choice\n");
        }
    }

    return 0;
}