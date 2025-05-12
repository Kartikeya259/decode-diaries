#include <stdio.h>
int main(){
    int F, Floor;
    int totalrings = 0, waitcount = 0, totaltime = 0;

    printf("Enter the top floor: ");
    scanf("%d", &F);

    for(Floor = 1; Floor <= F; Floor++) {
        totaltime += 2;  //each floor take 2 seconds to reach

        if(Floor % 4==0 && Floor % 7 == 0){
            continue; //no ring, no wait only time counted
        }

        //ring sound conditions
        if(Floor %2 != 0){
            totalrings +=1; // odd floor
        }
        else if (floor % 4 == 0){
            totalrings += 2; //even and divisible by 4
        }
        else{
            //even but not divisible by 4 = no ring


        }
        if (Floor % 7 == 0){
            totaltime += 5;
            waitcount++;
        }
    }

    printf("Total rings: %d\n", totalrings);
    printf("Total waits: %d\n", waitcount);
    printf("Total time: %dseconds\n", totaltime);


    return 0;
}