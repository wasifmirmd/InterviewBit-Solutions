//We know A is the greatest number dividing A. So if A and B are coprime, we can return the value of X to be A. Else, we can try to remove the common factors of A and B from A.
int Solution::cpFact(int A, int B) {
  while(__gcd(A,B) != 1){
    A = A / __gcd(A,B);
  } 
  return A;
}
