#include <stdio.h>
void main()
{
    int x,i;
    int womenIn=0;  //to know who wants to go
    int menIn=0;
    int woman_leaves=0;
    int state=1;
    int womenCount=0;  //to know how many are inside
    int menCount=0;
    int man_leaves=0;
    int who=0;
    void stateOfBathRoom(){
        if(state==1){
            printf("\nBathRoom is Empty");
        }
        else{
            if(womenIn==1)
            printf("\nBathRoom is not Empty\n Women Inside");
            else if(menIn==1)
            printf("\nBathRoom is not Empty\n Man Inside");
        }
    }

    void womenWantsToEnter(){
        if(state==1||(womenIn==1&&menIn==0)){
            printf("\nYou can Enter Now");
           womenIn=1;
           womenCount++;
        }
        else{
            printf("\nyou need to wait, Only men are Allowed");
        }
    }

    void menWantsToEnter(){
        if(state==1||(menIn==1&&womenIn==0)){
            printf("\nYou can Enter Now");
            menIn=1;
            menCount++;
        }
        else{
            printf("\nyou need to wait, Only women are Allowed");
        }
    }

    void womenLeaves(){
        if(womenIn==1 && womenCount>0)
        womenCount--;
        else{
            printf("\nInvalid option");
        }
        if(womenIn==0){
            state=1; //womenCount==0; womenIn==0 && state=1
            printf("\nEmpty, AnyOne Can Enter Know");
        }
    }

    void menLeaves(){
        if(menIn==1 && menCount>0)
        menCount--;
        else{
            printf("\nInvalid option");
        }
        if(menIn==0){
            state=1;
            printf("\nEmpty, AnyOne Can Enter Know");
        }
    }

    for(i=0;i<20;i++){
    printf("\nWelcome to gender-segregated bathrooms");
    printf("Do you want to enter or leave\n Enter 1 else 2");
    scanf("%d",&x);
    switch(x){
	case 1:    printf("\nPlease enter your gender who wants to enter");
    printf("\nFor Men Enter 1 \n Women Please Enter 2");
    scanf("%d",&who);
    switch(who){
        case 1: menWantsToEnter(); break;
        case 2:womenWantsToEnter(); break;
        default: printf("\nInvalid option Please Re enter the value");
    }
	break;
	case 2:
    printf("\nPlease enter your gender who is leaving");
    printf("\nFor Men leaving 1 \n Women Please Enter 2");
    scanf("%d",&who);
    switch(who){
        case 1: menLeaves(); break;
        case 2: womenLeaves(); break;
        default: printf("\nInvalid option Please Re enter the value");
    }
	break;
	default: printf("Invalid Option");
	}
	}
}
