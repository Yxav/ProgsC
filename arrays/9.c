int main(){
  int A[6], value=0;
 
 printf("Insert values, please:\n");
 for(int index=0; index<6; index++){
     scanf("%d", &value);
     if(value % 2 == 0){
      A[index] = value;
     } else {
      A[index] = 0;
     }
 } 

 for(int index=5; index>=0; index--){
  printf("%d ", A[index]);
 }

 return 0;
}
