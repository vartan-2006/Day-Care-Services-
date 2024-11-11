#include <stdio.h>
int main() 
{
            // Block 1: Customer Details
            char name[100], aadhar[20];
            int phone, age;
            printf("Welcome to the Care Centre!\n");
            printf("Please enter the Customer Details.\n");
            printf("Enter your full name:");
            scanf("%s %s %s",&name[0],&name[1],&name[2]);
            printf("Enter your phone number: ");
            scanf("%d", &phone);
            printf("Enter your AadharCard Number: ");
            scanf("%s",&aadhar);
            printf("Enter your Age: ");
            scanf("%d", &age);
            // Block 2: Medication
            char diabetes[200][200] = {"Insulin", "Metformin", "Glipizide"};
            char arthritis[200][200] = {"Methotrexate", "Ibuprofen", "Naproxen"};
            char heartds[200][200] = {"Aspirin", "Atorvastatin", "Losartan"};
            char anaemia[200][200] = {"Ferphate", "Vitamin B12", "Folic Acid"};
            char bp[200][200] = {"Lisinopril", "Amlodipine", "Metoprolol"};
            int dbtprice[3] = {10, 5, 6};
            int artprice[3] = {8, 4, 3};
            int hrtprice[3] = {7, 9, 5};
            int aniprice[3] = {5, 3, 4};
            int bpprice[3] = {3, 5, 7};
            int dbtdosage,ardosage,hrtdosage,anidosage,bpdosage;
            int totalmedication = 0, choice, medicineChoice,basiccost=5000,transport,intensec,totalfood = 0;
            // Diabetes
            printf("\nDoes the patient have Diabetes (1 for Yes, 0 for No)? ");
            scanf("%d", &choice);
            if (choice == 1) 
            {
                printf("|SR.No.\t| Name\t\t| Price\t|\n");

                for (int sr = 0; sr < 3; sr++) 
                {
                    printf("|%d\t| %s\t| %d\t|\n", sr + 1, diabetes[sr],
                    dbtprice[sr]);
                }
                    printf("Enter the SR.NO. of the medicine to be added in the bill:");
                    scanf("%d", &medicineChoice);
                    printf("Enter the number of dosage per month:");
                    scanf("%d",&dbtdosage);
                if (medicineChoice >= 1 && medicineChoice <= 3) 
                {
                    totalmedication += (dbtdosage)*dbtprice[medicineChoice - 1];
                } 
                else 
                {
                    printf("Invalid Input!\n");
                    return 0;
                }
            }
            else if (choice==0)
            {
              
            }
            else
            {
                printf("Invalid Input!\n");
                    return 0;
            }
            
            // Arthritis
            printf("\nDoes the patient have Arthritis (1 for Yes, 0 for No)? ");
            scanf("%d", &choice);
            if (choice == 1) 
            {
                printf("|SR.No.\t| Name\t\t| Price\t|\n");
                for (int sr = 0; sr < 3; sr++) 
                {
                    printf("|%d\t| %s\t| %d\t|\n", sr + 1, arthritis[sr],artprice[sr]);
                }
                    printf("Enter the SR.NO. of the medicine to be added in the bill:");
                    scanf("%d", &medicineChoice);
                    printf("Enter the number of dosage per month:");
                    scanf("%d",&ardosage);
                if (medicineChoice >= 1 && medicineChoice <= 3) 
                {
                    totalmedication += ardosage*artprice[medicineChoice - 1];
                } 
                else 
                {
                    printf("Invalid Input!\n");
                    return 0;
                }
            }
            else if (choice==0)
            {
              
            }
            else
            {
                printf("Invalid Input!\n");
                    return 0;
            }
            // Heart Disease
            printf("\nDoes the patient have Heart Disease (1 for Yes, 0 for No)?");
            scanf("%d", &choice);
            if (choice == 1) 
            {
                printf("|SR.No.\t| Name\t\t| Price\t|\n");
                for (int sr = 0; sr < 3; sr++) 
                {
                    printf("|%d\t| %s\t| %d\t|\n", sr + 1, heartds[sr],
                    hrtprice[sr]);
                }
                    printf("Enter the SR.NO. of the medicine to be added in the bill:");
                    scanf("%d", &medicineChoice);
                    printf("Enter the number of dosage per month:");
                    scanf("%d",&hrtdosage);
                if (medicineChoice >= 1 && medicineChoice <= 3) 
                {
                    totalmedication += hrtdosage*hrtprice[medicineChoice - 1];
                } 
                else 
                {
                    printf("Invalid Input!\n");
                    return 0;
                }
            }
            else if (choice==0)
            {
              
            }
            else
            {
                printf("Invalid Input!\n");
                    return 0;
            }
            // Anemia
            printf("\nDoes the patient have Anemia (1 for Yes, 0 for No)? ");
            scanf("%d", &choice);
            if (choice == 1) 
            {
                printf("|SR.No.\t| Name\t\t| Price\t|\n");
                for (int sr = 0; sr < 3; sr++) 
                {
                    printf("|%d\t| %s\t| %d\t|\n", sr + 1, anaemia[sr],
                    aniprice[sr]);
                }
                    printf("Enter the SR.NO. of the medicine to be added in the bill:");
                    scanf("%d", &medicineChoice);
                    printf("Enter the frequency of the services monthly:");
                    scanf("%d",&anidosage);
                if (medicineChoice >= 1 && medicineChoice <= 3) 
                {
                    totalmedication += anidosage*aniprice[medicineChoice - 1];
                } 
                else 
                {
                    printf("Invalid Input!\n");
                    return 0;
                }
            }
            else if (choice==0)
            {
              
            }
            else
            {
                printf("Invalid Input!\n");
                    return 0;
            }

            // Blood Pressure
            printf("\nDoes the patient have Blood Pressure issues (1 for Yes, 0 for No)? ");
            scanf("%d", &choice);
            if (choice == 1) 
            {
                printf("|SR.No.\t| Name\t\t| Price\t|\n");
                for (int sr = 0; sr < 3; sr++) 
                {
                    printf("|%d\t| %s\t| %d\t|\n", sr + 1, bp[sr], bpprice[sr]);
                }
                    printf("Enter the SR.NO. of the medicine to be added in the bill:");
                    scanf("%d", &medicineChoice);
                    printf("Enter the number of dosage per month:");
                    scanf("%d",&bpdosage);
                if (medicineChoice >= 1 && medicineChoice <= 3) 
                {
                    totalmedication +=bpdosage*bpprice[medicineChoice - 1];
                } 
                else 
                {
                    printf("Invalid Input!\n");
                    return 0;
                }
            }
            else if (choice==0)
            {
              
            }
            else
            {
                printf("Invalid Input!\n");
                    return 0;
            }
            // Block 3: Food
            printf("\nDo you want to avail food services (1 for Yes, 0 for No)?");
            scanf("%d",&choice);
            if(choice==1)
            {
                char food[3][50] = {"Veg Meal", "Non-Veg Meal", "Special Diet"};
                int foodprice[3] = {150, 200, 250};
                int food_choice,meals;
                printf("Select the food option for the patient:\n");
                printf("|SR.No.\t|\tFood\t\t|\tPrice\t|\n");
                for (int i = 0; i < 3; i++) 
                {
                    printf("|%d\t|\t%s\t|\t%d\t|\n", i+1, food[i], foodprice[i]);
                }
                    printf("Enter the SR.NO. of the food to be added to the bill:");
                    scanf("%d", &food_choice);
                if (food_choice >= 1 && food_choice <= 3) 
                {
                   totalfood +=60*foodprice[food_choice-1];
                } else 
                {
                    printf("Invalid Input\n");
                    return 0;
                }
                }
            else if (choice==0)
            {
              
            }
            else
            {
                printf("Invalid Input!\n");
                return 0;
            }
                printf("Do you want to avail transprotation services(1 for yes,0 for no):");
                scanf("%d",&choice);
                if (choice==1)
                {
                    transport=4000;
                }
                else if (choice==0)
                {
                    transport=0;
                }
            
                else
                {
                    printf("Invalid Input");
                    return 0;
                }
            printf("Do you want to avail Intensive Care services(1 for yes,0 for no):");
            scanf("%d",&choice);
            if (choice==1)
            {
                intensec=7000;
            }
            else if (choice==0)
            {
                intensec=0;
            }
            
            else
            {
                printf("Invalid Input");
                return 0;
            }
            // Block 4: Any Other Services
            char services[3][50] = {"Physiotherapy","Counseling"};
            int serviceprice[3] = {300,500};
            int service_choice, totalservices = 0,frequency;
            printf("Do you want any extra sevices?(1 for yes,0 for no)");
            scanf("%d",&choice);
            if (choice==1)
            {
                printf("Select any additional services for the patient:\n");
                printf("|SR.No.\t|\tService\t\t|\tPrice\t|\n");
                for (int i = 0; i < 2; i++) 
                {
                    printf("|%d\t|\t%s\t|\t%d\t|\n", i+1, services[i],
                    serviceprice[i]);
                }
                printf("Enter the SR.NO. of the service to be added to the bill: ");
                scanf("%d", &service_choice);
                printf("Enter the frequency of the services monthly:");
                scanf("%d",&frequency);
                if(service_choice >= 1 && service_choice <= 3) 
                {
                    totalservices += serviceprice[service_choice-1];
                }
            }
            else if (choice!=0)
            {
                printf("Invalid Input\n");
                return 0;
            }
            // Block 5: Bill
            printf("For %s %s %s\nAdhar no-%d\nPhone no.-%d\nAGE-%d",&name[0],&name[1],&name[2],aadhar,phone,age);
            printf("\n\n\t\t--- Final Bill ---\n");
            printf("--------------------------------------------\n");
            printf("|\tDescription\t|\tAmount (Rs)\t|\n");
            printf("--------------------------------------------\n");
            // Assuming total_medication, total_food, and total_services are already defined
            printf("|\tBasic Cost\t|\t%d\t|\n",basiccost);
            printf("|\tIntensive Care\t|\t%d\t|\n",intensec);
            printf("|\tTransportation\t|\t%d\t|\n",transport);
            printf("|\tMedication Cost\t|\t%d\t|\n", totalmedication);
            printf("|\tFood Cost\t|\t%d\t|\n",totalfood);
            printf("|\tOther Services\t|\t%d\t|\n", totalservices);
            int totalbill = totalmedication + totalfood + totalservices+transport+intensec+basiccost;
            printf("--------------------------------------------\n");
            printf("|\tTotal Bill\t|\t%d\t|\n", totalbill);
            printf("--------------------------------------------\n");

            return 0;

}