#include<stdio.h>

int main()
{
       //determine the total weekly pay for each employee based on their ID
        int employeeID;
        double hourlyPayRate,hoursWorked,totalPay,overallTotalPayroll=0.0; 

        printf("Enter employee information (enter 9 for employee Id to exit): \n");
        while (1){
        	
		printf("Enter your employee id: ");
        scanf("%d",&employeeID);
        
        if (employeeID == 9){
        	break;
		}
		
		printf("Enter your hourly pay rate: ");
        scanf("%lf",&hourlyPayRate);
        
		printf("Enter your hours worked: ");
        scanf("%lf",&hoursWorked);

        
        
        switch (hoursWorked <= 40)
        {
        case 1:
            
                totalPay=hourlyPayRate * hoursWorked;
                break;
        case 0:
                totalPay = (40 * hourlyPayRate) + (1.5 * hourlyPayRate * (hoursWorked-40));
                break;
            }
        printf("Total weekly pay for employee ID %d:  TL %.2lf\n",employeeID, totalPay);
        
        overallTotalPayroll += totalPay;
        }
        
        printf("Overall total payroll for the week:  TL %.5lf\n",overallTotalPayroll);
   

    return 0;
}
