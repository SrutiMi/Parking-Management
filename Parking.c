#include<stdio.h>
#include<stdlib.h>

#include<time.h>
int menu();
int detail();
void bus_entry();
int bus_exit();
void car_entry();
int car_exit();
void cycle_entry();
int cycle_exit();
void bike_entry();
int bike_exit();
int delete();
int set_price();
int capacity();
void option();
void re_access();

int NumberOfCar=0, NumberOfBus=0, NumberOfCycle=0, amount=0, count=0, NumberOfBike=0;
int PriceOfCar=0, PriceOfBus=0, PriceOfCycle=0, PriceofBike=0, CapacityOfCar=0, CapacityOfBus=0, CapacityOfCycle=0, CapacityOfBike=0;;
int noCarIn=0,noBusIn=0, noCycleIn=0, noBikeIn=0;

int main(){
   
    // set_price();
    capacity();
    option();
  
    
    return 0;
}
void re_access(){
    int n;
    printf("Do you want to re-access the menu :(0(No)/1(Yes)) : ");
    scanf("%d",&n);
    if(n==1){
          option();
    }
}

void option(){
       int c=menu();
       switch(c){
        case 404:
           printf("Exiting from the Garage");
           exit(0);
        case 11:
            cycle_entry();
            break;
        case 21:
            bike_entry();
            break;
        case 31:
            car_entry();
            break;
        case 41:
            bus_entry();
            break;
         case 10:
            cycle_exit();
            break;
        case 20:
            bike_exit();
            break;
        case 30:
            car_exit();
            break;
        case 40:
            bus_exit();
            break;
        case 5:
            detail();
            break;
        default :
            printf("\nwrong choice\n");
            option();
      }
}
void delay(int milliseconds)
{
    long pause;
    clock_t now,then;

    pause = milliseconds*(CLOCKS_PER_SEC/1000);
    now = then = clock();
    while( (now-then) < pause )
        now = clock();
}
int menu()
{
    int ch;
    printf("\n************************************************************************\n");
    printf("\t\tWelcome to  :\n");
    printf("****************************************************************************\n");
    printf("OUR SERVICES");
    printf("\n11. Cycle Parking ");
    printf("\n10. Removing Parked Cycle");
    printf("\n21. Bike Parking");
    printf("\n20. Removing Parked Bike");
    printf("\n31. Car Parking");
    printf("\n30. Removing Parked Car");
    printf("\n41. Bus Parking");
    printf("\n40. Removing Parked Bus");
    printf("\n5. Show data");
    printf("\n1.RATE CHART");//have to add that chart in the program
    printf("\n404. Exit from the garage \n");
    printf("\n**************************************************************************\n\n");
    printf("\n Choose an option to avail our services :: ");
    scanf("%d",&ch);
    printf("_______________________________________________________________________________\n");
    return(ch);
}

int delete()
{
    NumberOfBus=0;
    NumberOfCar=0;
    NumberOfCar=0;
    NumberOfCycle=0;
    amount=0;
    count=0;
    return 0;
}
int detail()
{
    printf("\nNumber of Bus= %d",NumberOfBus );
    printf("\nNumber of Car = %d",NumberOfCar);
    printf("\nNumber of Cycle = %d", NumberOfCycle);
    printf("\nNumber of Bike = %d", NumberOfBike);
    printf("\nTotal vehicle = %d",NumberOfBus+ NumberOfCar + NumberOfCycle + NumberOfBike);
    printf("\nTotal amount gained = %d",amount); 
    return 0;
}
void bus_entry()
{   
    if(noBusIn < CapacityOfBus)
    {
        noBusIn++;
        NumberOfBus++;
        amount += PriceOfBus;
        count++;
        printf("\nEntered successfully!!\n");
    }
    else
    {
        printf("\n!!Capacity full!!\n");
    }
    delay(1000);
    printf("\n_______________________________________________________________\n");
    option();
    
}

void car_entry()
{
    if(noCarIn < CapacityOfCar)
    {
        noCarIn++;
        NumberOfCar++;
        amount += PriceOfCar;
        count++;
        printf("\nEntered successfully!!\n");
    }
    else
    {
        printf("\n!!Capacity full!!\n");
    }
    delay(1000);
    printf("\n_______________________________________________________________\n");

    option();
}

void cycle_entry()
{
    if (noCycleIn < CapacityOfCycle)
    {
        noCycleIn++;
        NumberOfCycle++;
        amount += PriceOfCycle;
        count++;
        printf("\nEntered successfully!!\n");
    }
    else
    {
       printf("\n!!Capacity full!!\n"); 
    }
    delay(1000);
    printf("\n_______________________________________________________________\n");

    option();
}

void bike_entry()
{ 
    if(noBikeIn < CapacityOfBike)
    {
        noBikeIn++;
        NumberOfBike++;
        amount += PriceofBike;
        count++;
        printf("\nEntered successfully!!\n");
    }
    else
    {
       printf("\n!!Capacity full!!\n"); 
    }
    delay(1000);
    printf("\n_______________________________________________________________\n");

    option();
}

int set_price()
{
    printf("\nPlease set the parking fees of vehicles:\n");
    printf("Enter the parking fees of cycle: ");
    scanf("%d",&PriceOfCycle);
    printf("Enter the parking fees of bike: ");
    scanf("%d",&PriceofBike);
    printf("Enter the parking fees of car: ");
    scanf("%d",&PriceOfCar);
    printf("Enter the parking fees of bus: ");
    scanf("%d",&PriceOfBus);
    return 0;
}
int bus_exit()
{
    if(noBusIn > 0)
    {
        printf("Exit successfull!\n");
        noBusIn--;
    }
    else
    {
        printf("No bus inside to exit!!\n");
    }
    re_access();
    return 0;
}
int car_exit()
{
    if(noCarIn > 0)
    {
        printf("Exit successfull!\n");
        noCarIn--;
    }
    else
    {
        printf("No car inside to exit!!\n");
    }
    re_access();
    return 0;
}
int cycle_exit()
{   
    if(noCycleIn > 0)
    {
        printf("Exit successfull!\n");
        noCycleIn--;
    }
    else
    {
        printf("No cycle inside to exit!!\n");
    }
    re_access();
    return 0;
}
int bike_exit()
{ 
    if(noBikeIn > 0)
    {
        printf("Exit successfu ll!\n");
        noBikeIn--;
    }
    else
    {
        printf("No bike inside to exit!!\n");
    }
    re_access();
    return 0;

}

int capacity()
{
    printf("\n Please insert the capacity of each vehicle:\n");
    printf("Enter the total capacity of cycle: ");
    scanf("%d",&CapacityOfCycle);
    printf("Enter the total capacity of bike: ");
    scanf("%d",&CapacityOfBike);
    printf("Enter the total capacity of car: ");
    scanf("%d",&CapacityOfCar);
    printf("Enter the total capacity of bus: ");
    scanf("%d",&CapacityOfBus);
    return 0;
}


  


