 #include<iostream>
 using namespace std;
 
 int main(){
      int i,j,k;
      for(i=1;i<=5;i++){
          for(j=1;j<=i;j++){
              cout<<"* ";

          }
         
        for(int j=i;j<5;j++){
        
            cout<<"  ";

        }
          for(int j=i;j<5;j++){
        
            cout<<"  ";

        }
        for(int j=1;j<=i;j++){
            
            cout<<"* ";
        }
        cout<<endl;
      }


      
       for(i=1;i<=5;i++){
          for(int j=i;j<5;j++){
              cout<<"* ";

          }
         
        for(int j=1;j<=i;j++){
        
            cout<<"  ";

        }
          for(int j=1;j<=i;j++){
        
            cout<<"  ";

        }
        for(int j=i;j<5;j++){
            
            cout<<"* ";
        }
        cout<<endl;
      }
      return 0;
 }