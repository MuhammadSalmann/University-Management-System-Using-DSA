#include "Student.h"
#include "Teacher.h"
using namespace std;

class Admin {
	public:
	Students S;		
	Teachers T;
	void AdminMenu() {
		char choice;
		do{
		cout <<"======================================================"              
           "==================================================================\n"
           "\n\n\t\t\t\t\t         A D M I N   M E N U    \n\n\n"        
           "=============================================================="
           "==========================================================" 
           "\n\t\t\t\t    __________________________________________________  "
           "\n\t\t\t\t    |                                                |  "
	       "\n\t\t\t\t    | 1 ->      M A N A G E   T E A C H E R S        |  "
		   "\n\t\t\t\t    |________________________________________________|  "
		   "\n\t\t\t\t    __________________________________________________  "
           "\n\t\t\t\t    |                                                |  "
	       "\n\t\t\t\t    | 2 ->      M A N A G E   S T U D E N T          |  "
		   "\n\t\t\t\t    |________________________________________________|  "
		   "\n\t\t\t\t    __________________________________________________  "
           "\n\t\t\t\t    |                                                |  "
	       "\n\t\t\t\t    | 3 ->      M A N A G E   C O U R S E S          |  "
		   "\n\t\t\t\t    |________________________________________________|  "
		   "\n\t\t\t\t    __________________________________________________  "
           "\n\t\t\t\t    |                                                |  "
	       "\n\t\t\t\t    | 4 ->          M A I N   M E N U                |  "
		   "\n\t\t\t\t    |________________________________________________|  "
		   "\n\t\t\t\t    __________________________________________________  "
           "\n\t\t\t\t    |                                                |  "
	       "\n\t\t\t\t    | 5 ->               E X I T                     |  "
		   "\n\t\t\t\t    |________________________________________________|  "
		   "\n\n=============================================================="
           "=========================================================="
		    "\n\t\t\t\t\t\t ENTER YOU CHOICE =  ";     cin>>choice;     system("cls");
		    switch(choice) {
			case '1':  	T.MENU();   						break;
			 
			 	 case '2': 	S.MENU();  						break;
				
					case '3': 	S.Courses :: MENU(); 		break;
					
						case '5': 	exit(0);		 		break;
				
							default:      system("cls");							 
			}
		}while(choice != '4');
	}
};
 
int main() {
	Admin A;	
	A.S.UpdateTree();		A.S.Courses :: UpdateTree();		A.T.UpdateTree();
	
	
	char choice;	system("COLOR 4E" );
	cout <<  "\n\t\t                               ||========================||" 
             "\n\t\t                               ||                        ||" 
             "\n\t\t                               ||      BSCS - III(C)     ||" 
             "\n\t\t                      ||------------------------------------------||" 
             "\n\t\t                      ||                                          ||" 
             "\n\t\t                      ||                                          ||" 
             "\n\t\t             ||-------------------------------------------------------------||" 
             "\n\t\t             ||                                                             ||" 
             "\n\t\t             ||               S E M E S T E R   P R O J E C T               ||" 
             "\n\t\t    ||------------------------------------------------------------------------------||" 
             "\n\t\t    ||                                                                              ||" 
             "\n\t\t    ||                                                                              ||" 
             "\n\t\t    ||                              U N I V E R S I T Y                             ||" 
             "\n\t\t    ||                                                                              ||" 
             "\n\t\t    ||                              M A N A G E M E N T                             ||" 
             "\n\t\t    ||                                                                              ||" 
             "\n\t\t    ||                                 S Y S T E M                                  ||" 
             "\n\t\t    ||                                                                              ||" 
             "\n\t\t    ||------------------------------------------------------------------------------||" 
             "\n\t\t             ||                                                            ||" 
             "\n\t\t             ||             SUBMITTED TO:    Mr. Sagheer Ahmed             ||" 
             "\n\t\t             ||------------------------------------------------------------||"
             "\n\t\t                      ||      C O M P U T E R  S C I E N C E      ||" 
             "\n\t\t                      ||            D E P A R T M E N T           ||" 
             "\n\t\t                      ||------------------------------------------||" 
             "\n\t\t                               ||                        ||" 
             "\n\t\t                               ||                        ||"
             "\n\t\t                               ||========================||" ;         getch();   system("cls");  
			 system("COLOR 0F" );
			 
	
		while(1) {
		cout <<"======================================================"              
           "==================================================================\n"
           "\n\n\t\t\t\t\t             W E L C O M E    \n\n\n"        
           "=============================================================="
           "==========================================================" 
		   "\n\t\t\t\t\t    ________________________________  "
           "\n\t\t\t\t\t    |                              |  "
	       "\n\t\t\t\t\t    | 1 ->    S T U D E N T        |  "
		   "\n\t\t\t\t\t    |______________________________|  "
		   "\n\t\t\t\t\t    ________________________________  "
           "\n\t\t\t\t\t    |                              |  "
	       "\n\t\t\t\t\t    | 2 ->      A D M I N          |  "
		   "\n\t\t\t\t\t    |______________________________|  "
		   "\n\t\t\t\t\t    ________________________________  "
           "\n\t\t\t\t\t    |                              |  "
	       "\n\t\t\t\t\t    | 3 ->       E X I T           |  "
		   "\n\t\t\t\t\t    |______________________________|  "
		   "\n\n=============================================================="
           "==========================================================\n"
		    "\n\t\t\t\t\t\t  ENTER YOU CHOICE =  ";     cin>>choice;     system("cls");
		    switch(choice) {
			 	
			 	 case '1': 	  A.S.StudentMENU();		break;
				
					case '2': 	A.AdminMenu();		break;
					
					    case '3':  exit(0);    		break;
							                   
							default:      system("cls");							 
			}
		}
	
	return 0;
}