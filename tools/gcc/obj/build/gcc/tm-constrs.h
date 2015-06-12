/* Generated automatically by the program 'build/genpreds'
   from the machine description file '/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md'.  */

#ifndef GCC_TM_CONSTRS_H
#define GCC_TM_CONSTRS_H

static inline bool
satisfies_constraint_j (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (
#line 72 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/constraints.md"
(TARGET_32BIT && arm_arch_thumb2)) && ((GET_CODE (op) == HIGH) || ((GET_CODE (op) == CONST_INT) && (
#line 75 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/constraints.md"
((ival & 0xffff0000) == 0))));
}
static inline bool
satisfies_constraint_I (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 92 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/constraints.md"
(TARGET_32BIT ? const_ok_for_arm (ival)
		   : ival >= 0 && ival <= 255));
}
static inline bool
satisfies_constraint_J (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 99 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/constraints.md"
(TARGET_32BIT ? (ival >= -4095 && ival <= 4095)
		   : (ival >= -255 && ival <= -1)));
}
static inline bool
satisfies_constraint_K (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 107 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/constraints.md"
(TARGET_32BIT ? const_ok_for_arm (~ival)
		   : thumb_shiftable_const (ival)));
}
static inline bool
satisfies_constraint_L (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 114 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/constraints.md"
(TARGET_32BIT ? const_ok_for_arm (-ival)
		   : (ival >= -7 && ival <= 7)));
}
static inline bool
satisfies_constraint_M (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 123 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/constraints.md"
(TARGET_32BIT ? ((ival >= 0 && ival <= 32)
				 || ((ival & (ival - 1)) == 0))
		   : ((ival >= 0 && ival <= 1020) && ((ival & 3) == 0))));
}
static inline bool
satisfies_constraint_N (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 130 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/constraints.md"
(!TARGET_32BIT && (ival >= 0 && ival <= 31)));
}
static inline bool
satisfies_constraint_O (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 136 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/constraints.md"
(TARGET_THUMB1 && ival >= -508 && ival <= 508
		   && ((ival & 3) == 0)));
}
static inline bool
satisfies_constraint_Pa (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 142 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/constraints.md"
(TARGET_THUMB1 && ival >= -510 && ival <= 510
		    && (ival > 255 || ival < -255)));
}
static inline bool
satisfies_constraint_Pb (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 148 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/constraints.md"
(TARGET_THUMB1 && ival >= -262 && ival <= 262
		    && (ival > 255 || ival < -255)));
}
static inline bool
satisfies_constraint_Ps (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 154 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/constraints.md"
(TARGET_THUMB2 && ival >= -255 && ival <= 255));
}
static inline bool
satisfies_constraint_Pt (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 159 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/constraints.md"
(TARGET_THUMB2 && ival >= -7 && ival <= 7));
}
static inline bool
satisfies_constraint_G (rtx op)
{
  return (GET_CODE (op) == CONST_DOUBLE) && (
#line 164 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/constraints.md"
(TARGET_32BIT && arm_const_double_rtx (op)));
}
static inline bool
satisfies_constraint_H (rtx op)
{
  return (GET_CODE (op) == CONST_DOUBLE) && (
#line 169 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/constraints.md"
(TARGET_32BIT && neg_const_double_rtx_ok_for_fpa (op)));
}
static inline bool
satisfies_constraint_Da (rtx op)
{
  switch (GET_CODE (op))
    {
    case CONST_DOUBLE:
    case CONST_INT:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return 
#line 176 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/constraints.md"
(TARGET_32BIT && arm_const_double_inline_cost (op) == 2);
}
static inline bool
satisfies_constraint_Db (rtx op)
{
  switch (GET_CODE (op))
    {
    case CONST_DOUBLE:
    case CONST_INT:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return 
#line 183 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/constraints.md"
(TARGET_32BIT && arm_const_double_inline_cost (op) == 3);
}
static inline bool
satisfies_constraint_Dc (rtx op)
{
  switch (GET_CODE (op))
    {
    case CONST_DOUBLE:
    case CONST_INT:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return 
#line 191 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/constraints.md"
(TARGET_32BIT && arm_const_double_inline_cost (op) == 4
		   && !(optimize_size || arm_ld_sched));
}
static inline bool
satisfies_constraint_Dn (rtx op)
{
  return (GET_CODE (op) == CONST_VECTOR) && (
#line 199 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/constraints.md"
(TARGET_32BIT
		   && imm_for_neon_mov_operand (op, GET_MODE (op))));
}
static inline bool
satisfies_constraint_Dl (rtx op)
{
  return (GET_CODE (op) == CONST_VECTOR) && (
#line 207 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/constraints.md"
(TARGET_32BIT
		   && imm_for_neon_logic_operand (op, GET_MODE (op))));
}
static inline bool
satisfies_constraint_DL (rtx op)
{
  return (GET_CODE (op) == CONST_VECTOR) && (
#line 215 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/constraints.md"
(TARGET_32BIT
		   && imm_for_neon_inv_logic_operand (op, GET_MODE (op))));
}
static inline bool
satisfies_constraint_Dv (rtx op)
{
  return (GET_CODE (op) == CONST_DOUBLE) && (
#line 223 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/constraints.md"
(TARGET_32BIT && vfp3_const_double_rtx (op)));
}
static inline bool
satisfies_constraint_Dy (rtx op)
{
  return (GET_CODE (op) == CONST_DOUBLE) && (
#line 230 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/constraints.md"
(TARGET_32BIT && TARGET_VFP_DOUBLE && vfp3_const_double_rtx (op)));
}
static inline bool
satisfies_constraint_Ut (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 237 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/constraints.md"
(TARGET_32BIT && neon_struct_mem_operand (op)));
}
static inline bool
satisfies_constraint_Uv (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 243 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/constraints.md"
(TARGET_32BIT && arm_coproc_mem_operand (op, FALSE)));
}
static inline bool
satisfies_constraint_Uy (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 249 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/constraints.md"
(TARGET_32BIT && arm_coproc_mem_operand (op, TRUE)));
}
static inline bool
satisfies_constraint_Un (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 256 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/constraints.md"
(TARGET_32BIT && neon_vector_mem_operand (op, 0)));
}
static inline bool
satisfies_constraint_Um (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 263 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/constraints.md"
(TARGET_32BIT && neon_vector_mem_operand (op, 2)));
}
static inline bool
satisfies_constraint_Us (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 270 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/constraints.md"
(TARGET_32BIT && neon_vector_mem_operand (op, 1)));
}
static inline bool
satisfies_constraint_Uq (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 276 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/constraints.md"
(TARGET_ARM
		   && arm_legitimate_address_outer_p (GET_MODE (op), XEXP (op, 0),
						      SIGN_EXTEND, 0)));
}
static inline bool
satisfies_constraint_Q (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 284 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/constraints.md"
(REG_P (XEXP (op, 0))));
}
#endif /* tm-constrs.h */
