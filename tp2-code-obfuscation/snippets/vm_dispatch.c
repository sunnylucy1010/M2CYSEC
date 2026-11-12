  while (1) {
    switch (*(_TIG_VZ_XNGC_1_main_$pc[0])) {
    case _TIG_VZ_XNGC_1_main_goto$label_LAB_0: 
    (_TIG_VZ_XNGC_1_main_$pc[0]) ++;
    _TIG_VZ_XNGC_1_main_$pc[0] += *((int *)_TIG_VZ_XNGC_1_main_$pc[0]);
    break;
    case _TIG_VZ_XNGC_1_main_return_int$expr_STA_0: 
    (_TIG_VZ_XNGC_1_main_$pc[0]) ++;
    return ((_TIG_VZ_XNGC_1_main_$sp[0] + 0)->_int);
    break;
    case _TIG_VZ_XNGC_1_main_load_int$left_STA_0$result_STA_0: 
    (_TIG_VZ_XNGC_1_main_$pc[0]) ++;
    (_TIG_VZ_XNGC_1_main_$sp[0] + 0)->_int = *((int *)(_TIG_VZ_XNGC_1_main_$sp[0] + 0)->_char_star);
    break;
    case _TIG_VZ_XNGC_1_main_constant_int$result_STA_0$value_LIT_0: 
    (_TIG_VZ_XNGC_1_main_$pc[0]) ++;
    (_TIG_VZ_XNGC_1_main_$sp[0] + 1)->_int = *((int *)_TIG_VZ_XNGC_1_main_$pc[0]);
    (_TIG_VZ_XNGC_1_main_$sp[0]) ++;
    _TIG_VZ_XNGC_1_main_$pc[0] += 4;
    break;
    case _TIG_VZ_XNGC_1_main_store_int$left_STA_0$right_STA_1: 
    (_TIG_VZ_XNGC_1_main_$pc[0]) ++;
    *((int *)(_TIG_VZ_XNGC_1_main_$sp[0] + 0)->_char_star) = (_TIG_VZ_XNGC_1_main_$sp[0] + -1)->_int;
    _TIG_VZ_XNGC_1_main_$sp[0] += -2;
    break;
    case _TIG_VZ_XNGC_1_main_PlusA_int_int2int$left_STA_0$result_STA_0$right_STA_1: 
    (_TIG_VZ_XNGC_1_main_$pc[0]) ++;
    (_TIG_VZ_XNGC_1_main_$sp[0] + -1)->_int = (_TIG_VZ_XNGC_1_main_$sp[0] + 0)->_int + (_TIG_VZ_XNGC_1_main_$sp[0] + -1)->_int;
    (_TIG_VZ_XNGC_1_main_$sp[0]) --;
    break;
    case _TIG_VZ_XNGC_1_main_local$result_STA_0$value_LIT_0: 
    (_TIG_VZ_XNGC_1_main_$pc[0]) ++;
    (_TIG_VZ_XNGC_1_main_$sp[0] + 1)->_char_star = (char *)((void *)(_TIG_VZ_XNGC_1_main_$locals)) + *((int *)_TIG_VZ_XNGC_1_main_$pc[0]);
    (_TIG_VZ_XNGC_1_main_$sp[0]) ++;
    _TIG_VZ_XNGC_1_main_$pc[0] += 4;
    break;
    }
  }
}
