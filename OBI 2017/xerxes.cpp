#include <cstdlib>
#include <iostream>

using namespace std;

int verificaResultado(int dario, int xerxes) {
  
       switch(dario) {
         case 0:
            switch(xerxes){  
               case 4: case 3: return 1; break;
            }
         break;
         
         case 1: 
            switch(xerxes){
                case 0: case 4: return 1; break;
            }
         break;
         
         case 2: 
            switch(xerxes){  
                case 0: case 1: return 1; break;
            }
         break;
         
         case 3: 
            switch(xerxes){  
                case 2: case 1: return 1; break;
                }
         break;
         
         case 4: 
            switch(xerxes){  
                case 3: case 2: return 1; break;
                }
         break;
              
        }
        
        return 0;
              
    
}

int main(int argc, char *argv[])
{
    int N, D, X;
    int pont_dario = 0;
    int pont_xerxes = 0;
    
    cin >> N;
    
    while(N--) {
               
       cin >> D >> X;
                    
     if(verificaResultado(D,X))
        pont_xerxes++;
     else
        pont_dario++;
        
   }
   
   
   if(pont_dario > pont_xerxes)
      cout << "dario" << endl;
   else
       cout << "xerxes" << endl;
       
   return 0;
   
}
