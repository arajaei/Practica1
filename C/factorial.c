int factorial(int a) {
  
  int s=1;
  int i=1;
  while (i<=a) {
    s=s*i;
    i=i+1;
  }
  return s;
}