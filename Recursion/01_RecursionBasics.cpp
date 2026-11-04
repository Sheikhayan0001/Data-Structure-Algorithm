// ========================================================= RECURSION =============================================================================
// BASE CONDITION
// RECURSIVE CALL = CALLING FUN ITSELF INSIDE FUN
// PROPER DIRECTON = IT SHOULD REDUCE THE DATA WE HAVE TO WORK ON

void count(int i; int n){
    // Base Case 
    if(i > n){
        return;
    }
    cout << i;
    // Recusive Call
    cout(i+1 ,n);
}
