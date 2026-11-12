  while (1) {
    __asm__ volatile ("##_ANNOTATION_INITIALREGION_-TIG-iO-7HVG-2-classify--1":);
    p3 = (struct 1_opaqueNodeStruct *)malloc(sizeof(struct 1_opaqueNodeStruct ));
    p3->next = p3;
    p3->prev = p3;
    i4 = 0;
    while (i4 < 3) {
      p5 = (struct 1_opaqueNodeStruct *)malloc(sizeof(struct 1_opaqueNodeStruct ));
      p5->data = i4;
      p5->next = p3->next;
      p5->prev = p3;
      (p3->next)->prev = p5;
      p3->next = p5;
      i4 ++;
    }
    opaque_list_ptr1_1_0 = (6714554899578244406UL + ~ 6714554899578244406UL) + - (~ ((unsigned long )p3->next ^ 6714554899578244406UL));
    opaque_list_ptr2_1_0 = (6714554899578244406UL + ((unsigned long )p3->next & ~ 6714554899578244406UL)) + - ((unsigned long )p3->next & 6714554899578244406UL);
  OPAQUE7 = (int )(((((((((((((((((((((unsigned int )(! ((opaque_array_1[((unsigned int )((entropy * 8 ^ ((long )(entropy * 8) >> 63L)) - ((long )(entropy * 8) >
  /* ... a single opaque expression of 11,666 chars, always == 1 (full text in collatz_opaque.c) ... */
  if (OPAQUE7) { steps = 0; } else { /* dead */ }
