/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xa0883be4 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "//ad/eng/users/c/y/cyang90/Desktop/20151103_UART/UART/Data_send.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {0, 0};



static void Cont_22_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 3944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    t2 = (t0 + 4872);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 255U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 7);
    t16 = (t0 + 4760);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_23_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t9[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;

LAB0:    t1 = (t0 + 4192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 2544);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 472);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    t7 = (t6 + 4);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t8);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB7;

LAB4:    if (t20 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t9) = 1;

LAB7:    memset(t4, 0, 8);
    t24 = (t9 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t24) != 0)
        goto LAB10;

LAB11:    t31 = (t4 + 4);
    t32 = *((unsigned int *)t4);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB12;

LAB13:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t31) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t40, 8);

LAB20:    t41 = (t0 + 4936);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    memset(t45, 0, 8);
    t46 = 1U;
    t47 = t46;
    t48 = (t3 + 4);
    t49 = *((unsigned int *)t3);
    t46 = (t46 & t49);
    t50 = *((unsigned int *)t48);
    t47 = (t47 & t50);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t52 | t46);
    t53 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t53 | t47);
    xsi_driver_vfirst_trans(t41, 0, 0);
    t54 = (t0 + 4776);
    *((int *)t54) = 1;

LAB1:    return;
LAB6:    t23 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t30 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB11;

LAB12:    t35 = ((char*)((ng1)));
    goto LAB13;

LAB14:    t40 = ((char*)((ng2)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 1, t35, 1, t40, 1);
    goto LAB20;

LAB18:    memcpy(t3, t35, 8);
    goto LAB20;

}

static void Always_25_2(char *t0)
{
    char t6[8];
    char t21[8];
    char t36[8];
    char t44[8];
    char t85[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    char *t86;

LAB0:    t1 = (t0 + 4440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 4792);
    *((int *)t2) = 1;
    t3 = (t0 + 4472);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(26, ng0);

LAB5:    xsi_set_current_line(27, ng0);
    t4 = (t0 + 1664U);
    t5 = *((char **)t4);
    t4 = (t0 + 2864);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1504U);
    t3 = *((char **)t2);
    t2 = (t0 + 3024);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1344U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t2) != 0)
        goto LAB8;

LAB9:    t5 = (t6 + 4);
    t12 = *((unsigned int *)t6);
    t13 = (!(t12));
    t14 = *((unsigned int *)t5);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB10;

LAB11:    memcpy(t44, t6, 8);

LAB12:    t72 = (t44 + 4);
    t73 = *((unsigned int *)t72);
    t74 = (~(t73));
    t75 = *((unsigned int *)t44);
    t76 = (t75 & t74);
    t77 = (t76 != 0);
    if (t77 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1504U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB28;

LAB29:
LAB30:
LAB26:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    t16 = (t0 + 2544);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 472);
    t20 = *((char **)t19);
    memset(t21, 0, 8);
    t19 = (t18 + 4);
    t22 = (t20 + 4);
    t23 = *((unsigned int *)t18);
    t24 = *((unsigned int *)t20);
    t25 = (t23 ^ t24);
    t26 = *((unsigned int *)t19);
    t27 = *((unsigned int *)t22);
    t28 = (t26 ^ t27);
    t29 = (t25 | t28);
    t30 = *((unsigned int *)t19);
    t31 = *((unsigned int *)t22);
    t32 = (t30 | t31);
    t33 = (~(t32));
    t34 = (t29 & t33);
    if (t34 != 0)
        goto LAB16;

LAB13:    if (t32 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t21) = 1;

LAB16:    memset(t36, 0, 8);
    t37 = (t21 + 4);
    t38 = *((unsigned int *)t37);
    t39 = (~(t38));
    t40 = *((unsigned int *)t21);
    t41 = (t40 & t39);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t37) != 0)
        goto LAB19;

LAB20:    t45 = *((unsigned int *)t6);
    t46 = *((unsigned int *)t36);
    t47 = (t45 | t46);
    *((unsigned int *)t44) = t47;
    t48 = (t6 + 4);
    t49 = (t36 + 4);
    t50 = (t44 + 4);
    t51 = *((unsigned int *)t48);
    t52 = *((unsigned int *)t49);
    t53 = (t51 | t52);
    *((unsigned int *)t50) = t53;
    t54 = *((unsigned int *)t50);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB12;

LAB15:    t35 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB16;

LAB17:    *((unsigned int *)t36) = 1;
    goto LAB20;

LAB19:    t43 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB20;

LAB21:    t56 = *((unsigned int *)t44);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t44) = (t56 | t57);
    t58 = (t6 + 4);
    t59 = (t36 + 4);
    t60 = *((unsigned int *)t58);
    t61 = (~(t60));
    t62 = *((unsigned int *)t6);
    t63 = (t62 & t61);
    t64 = *((unsigned int *)t59);
    t65 = (~(t64));
    t66 = *((unsigned int *)t36);
    t67 = (t66 & t65);
    t68 = (~(t63));
    t69 = (~(t67));
    t70 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t70 & t68);
    t71 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t71 & t69);
    goto LAB23;

LAB24:    xsi_set_current_line(31, ng0);

LAB27:    xsi_set_current_line(32, ng0);
    t78 = ((char*)((ng2)));
    t79 = (t0 + 2544);
    xsi_vlogvar_wait_assign_value(t79, t78, 0, 0, 14, 0LL);
    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2704);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB26;

LAB28:    xsi_set_current_line(36, ng0);

LAB31:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 3024);
    t5 = (t4 + 56U);
    t16 = *((char **)t5);
    memset(t6, 0, 8);
    t17 = (t16 + 4);
    t12 = *((unsigned int *)t17);
    t13 = (~(t12));
    t14 = *((unsigned int *)t16);
    t15 = (t14 & t13);
    t23 = (t15 & 1U);
    if (t23 != 0)
        goto LAB35;

LAB33:    if (*((unsigned int *)t17) == 0)
        goto LAB32;

LAB34:    t18 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t18) = 1;

LAB35:    memset(t21, 0, 8);
    t19 = (t6 + 4);
    t24 = *((unsigned int *)t19);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t19) != 0)
        goto LAB38;

LAB39:    t22 = (t21 + 4);
    t29 = *((unsigned int *)t21);
    t30 = *((unsigned int *)t22);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB40;

LAB41:    memcpy(t44, t21, 8);

LAB42:    t72 = (t44 + 4);
    t74 = *((unsigned int *)t72);
    t75 = (~(t74));
    t76 = *((unsigned int *)t44);
    t77 = (t76 & t75);
    t80 = (t77 != 0);
    if (t80 > 0)
        goto LAB50;

LAB51:
LAB52:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1664U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t2) != 0)
        goto LAB56;

LAB57:    t5 = (t6 + 4);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t5);
    t14 = (t12 || t13);
    if (t14 > 0)
        goto LAB58;

LAB59:    memcpy(t44, t6, 8);

LAB60:    t72 = (t44 + 4);
    t76 = *((unsigned int *)t72);
    t77 = (~(t76));
    t80 = *((unsigned int *)t44);
    t81 = (t80 & t77);
    t82 = (t81 != 0);
    if (t82 > 0)
        goto LAB72;

LAB73:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1664U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB79;

LAB77:    if (*((unsigned int *)t2) == 0)
        goto LAB76;

LAB78:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;

LAB79:    t5 = (t6 + 4);
    t12 = *((unsigned int *)t5);
    t13 = (~(t12));
    t14 = *((unsigned int *)t6);
    t15 = (t14 & t13);
    t23 = (t15 != 0);
    if (t23 > 0)
        goto LAB80;

LAB81:
LAB82:
LAB74:    goto LAB30;

LAB32:    *((unsigned int *)t6) = 1;
    goto LAB35;

LAB36:    *((unsigned int *)t21) = 1;
    goto LAB39;

LAB38:    t20 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB39;

LAB40:    t35 = (t0 + 1664U);
    t37 = *((char **)t35);
    memset(t36, 0, 8);
    t35 = (t37 + 4);
    t32 = *((unsigned int *)t35);
    t33 = (~(t32));
    t34 = *((unsigned int *)t37);
    t38 = (t34 & t33);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t35) != 0)
        goto LAB45;

LAB46:    t40 = *((unsigned int *)t21);
    t41 = *((unsigned int *)t36);
    t42 = (t40 & t41);
    *((unsigned int *)t44) = t42;
    t48 = (t21 + 4);
    t49 = (t36 + 4);
    t50 = (t44 + 4);
    t45 = *((unsigned int *)t48);
    t46 = *((unsigned int *)t49);
    t47 = (t45 | t46);
    *((unsigned int *)t50) = t47;
    t51 = *((unsigned int *)t50);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB47;

LAB48:
LAB49:    goto LAB42;

LAB43:    *((unsigned int *)t36) = 1;
    goto LAB46;

LAB45:    t43 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB46;

LAB47:    t53 = *((unsigned int *)t44);
    t54 = *((unsigned int *)t50);
    *((unsigned int *)t44) = (t53 | t54);
    t58 = (t21 + 4);
    t59 = (t36 + 4);
    t55 = *((unsigned int *)t21);
    t56 = (~(t55));
    t57 = *((unsigned int *)t58);
    t60 = (~(t57));
    t61 = *((unsigned int *)t36);
    t62 = (~(t61));
    t64 = *((unsigned int *)t59);
    t65 = (~(t64));
    t63 = (t56 & t60);
    t67 = (t62 & t65);
    t66 = (~(t63));
    t68 = (~(t67));
    t69 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t69 & t66);
    t70 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t70 & t68);
    t71 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t71 & t66);
    t73 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t73 & t68);
    goto LAB49;

LAB50:    xsi_set_current_line(38, ng0);

LAB53:    xsi_set_current_line(39, ng0);
    t78 = ((char*)((ng2)));
    t79 = (t0 + 2544);
    xsi_vlogvar_wait_assign_value(t79, t78, 0, 0, 14, 0LL);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2704);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB52;

LAB54:    *((unsigned int *)t6) = 1;
    goto LAB57;

LAB56:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB57;

LAB58:    t16 = (t0 + 2864);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng3)));
    memset(t21, 0, 8);
    t20 = (t18 + 4);
    t22 = (t19 + 4);
    t15 = *((unsigned int *)t18);
    t23 = *((unsigned int *)t19);
    t24 = (t15 ^ t23);
    t25 = *((unsigned int *)t20);
    t26 = *((unsigned int *)t22);
    t27 = (t25 ^ t26);
    t28 = (t24 | t27);
    t29 = *((unsigned int *)t20);
    t30 = *((unsigned int *)t22);
    t31 = (t29 | t30);
    t32 = (~(t31));
    t33 = (t28 & t32);
    if (t33 != 0)
        goto LAB64;

LAB61:    if (t31 != 0)
        goto LAB63;

LAB62:    *((unsigned int *)t21) = 1;

LAB64:    memset(t36, 0, 8);
    t37 = (t21 + 4);
    t34 = *((unsigned int *)t37);
    t38 = (~(t34));
    t39 = *((unsigned int *)t21);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t37) != 0)
        goto LAB67;

LAB68:    t42 = *((unsigned int *)t6);
    t45 = *((unsigned int *)t36);
    t46 = (t42 & t45);
    *((unsigned int *)t44) = t46;
    t48 = (t6 + 4);
    t49 = (t36 + 4);
    t50 = (t44 + 4);
    t47 = *((unsigned int *)t48);
    t51 = *((unsigned int *)t49);
    t52 = (t47 | t51);
    *((unsigned int *)t50) = t52;
    t53 = *((unsigned int *)t50);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB69;

LAB70:
LAB71:    goto LAB60;

LAB63:    t35 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB64;

LAB65:    *((unsigned int *)t36) = 1;
    goto LAB68;

LAB67:    t43 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB68;

LAB69:    t55 = *((unsigned int *)t44);
    t56 = *((unsigned int *)t50);
    *((unsigned int *)t44) = (t55 | t56);
    t58 = (t6 + 4);
    t59 = (t36 + 4);
    t57 = *((unsigned int *)t6);
    t60 = (~(t57));
    t61 = *((unsigned int *)t58);
    t62 = (~(t61));
    t64 = *((unsigned int *)t36);
    t65 = (~(t64));
    t66 = *((unsigned int *)t59);
    t68 = (~(t66));
    t63 = (t60 & t62);
    t67 = (t65 & t68);
    t69 = (~(t63));
    t70 = (~(t67));
    t71 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t71 & t69);
    t73 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t73 & t70);
    t74 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t74 & t69);
    t75 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t75 & t70);
    goto LAB71;

LAB72:    xsi_set_current_line(43, ng0);

LAB75:    xsi_set_current_line(44, ng0);
    t78 = (t0 + 2544);
    t79 = (t78 + 56U);
    t83 = *((char **)t79);
    t84 = ((char*)((ng1)));
    memset(t85, 0, 8);
    xsi_vlog_unsigned_add(t85, 14, t83, 14, t84, 14);
    t86 = (t0 + 2544);
    xsi_vlogvar_wait_assign_value(t86, t85, 0, 0, 14, 0LL);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2704);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB74;

LAB76:    *((unsigned int *)t6) = 1;
    goto LAB79;

LAB80:    xsi_set_current_line(48, ng0);

LAB83:    xsi_set_current_line(49, ng0);
    t16 = (t0 + 2544);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 2544);
    xsi_vlogvar_wait_assign_value(t19, t18, 0, 0, 14, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2704);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB82;

}


extern void work_m_00000000001029743401_1481832007_init()
{
	static char *pe[] = {(void *)Cont_22_0,(void *)Cont_23_1,(void *)Always_25_2};
	xsi_register_didat("work_m_00000000001029743401_1481832007", "isim/top_tb_isim_beh.exe.sim/work/m_00000000001029743401_1481832007.didat");
	xsi_register_executes(pe);
}
