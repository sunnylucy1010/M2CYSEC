int classify(int n ) 
{ 
  int steps ;
  unsigned long NEXT ;

  {
  {
  NEXT = 9UL;
  }
  while (1) {
    switch (NEXT) {
    case 4UL: ;
    if (steps > 10) {
      {
      NEXT = 2UL;
      }
    } else {
      {
      NEXT = 6UL;
      }
    }
    break;
    case 12UL: ;
    return (-1);
    break;
    case 1UL: 
#line 13 "collatz.c"
    n = 3 * n + 1;
    {
    NEXT = 0UL;
    }
    /* ... remaining cases (5 /1 /0 /6 /2) handle the other blocks ... */
    }
  }
}
