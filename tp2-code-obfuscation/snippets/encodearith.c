int classify(int n ) 
{ 
  int steps ;

  {
#line 6 "collatz.c"
  steps = 0;
#line 7
  if ((int )((((unsigned int )n | ((unsigned int )n - 1U)) >> 31U) & 1U)) {
#line 8
    return (-1);
  }
#line 9
  while ((int )(((((unsigned int )n - 1U) | (1U - (unsigned int )n)) >> 31U) & 1U)) {
#line 10
    if ((int )((((((unsigned int )(n % 2) + ((int )((unsigned int )(n % 2)) >> 31)) ^ ((int )((unsigned int )(n % 2)) >> 31)) - 1U) >> 31U) & 1U)) {
#line 11
      n /= 2;
    } else {
#line 13
      n = ((3 * n | 1) << 1) - (3 * n ^ 1);
    }
#line 14
    steps = ((steps | 1) + (steps | 1)) - (steps ^ 1);
  }
#line 16
  if (10 < steps) {
#line 17
    return ((steps - ~ 100) - 1);
  }
#line 18
  return (steps);
}
}
