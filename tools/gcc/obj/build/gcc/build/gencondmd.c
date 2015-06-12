/* Generated automatically by the program `genconditions' from the target
   machine description file.  */

#include "bconfig.h"
#include "system.h"

/* It is necessary, but not entirely safe, to include the headers below
   in a generator program.  As a defensive measure, don't do so when the
   table isn't going to have anything in it.  */
#if GCC_VERSION >= 3001

/* Do not allow checking to confuse the issue.  */
#undef ENABLE_CHECKING
#undef ENABLE_TREE_CHECKING
#undef ENABLE_RTL_CHECKING
#undef ENABLE_RTL_FLAG_CHECKING
#undef ENABLE_GC_CHECKING
#undef ENABLE_GC_ALWAYS_COLLECT

#include "coretypes.h"
#include "tm.h"
#include "insn-constants.h"
#include "rtl.h"
#include "tm_p.h"
#include "function.h"

/* Fake - insn-config.h doesn't exist yet.  */
#define MAX_RECOG_OPERANDS 10
#define MAX_DUP_OPERANDS 10
#define MAX_INSNS_PER_SPLIT 5

#include "regs.h"
#include "recog.h"
#include "real.h"
#include "output.h"
#include "flags.h"
#include "hard-reg-set.h"
#include "resource.h"
#include "toplev.h"
#include "reload.h"
#include "tm-constrs.h"

#define HAVE_eh_return 1
#include "except.h"

/* Dummy external declarations.  */
extern rtx insn;
extern rtx ins1;
extern rtx operands[];

#endif /* gcc >= 3.0.1 */

/* Structure definition duplicated from gensupport.h rather than
   drag in that file and its dependencies.  */
struct c_test
{
  const char *expr;
  int value;
};

/* This table lists each condition found in the machine description.
   Each condition is mapped to its truth value (0 or 1), or -1 if that
   cannot be calculated at compile time.
   If we don't have __builtin_constant_p, or it's not acceptable in array
   initializers, fall back to assuming that all conditions potentially
   vary at run time.  It works in 3.0.1 and later; 3.0 only when not
   optimizing.  */

#if GCC_VERSION >= 3001
static const struct c_test insn_conditions[] = {

  { "(TARGET_32BIT) && (TARGET_32BIT\n\
   && (   register_operand (operands[0], QImode)\n\
       || register_operand (operands[1], QImode)))",
    __builtin_constant_p (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 5922 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (   register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode))))
    ? (int) (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 5922 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (   register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode))))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_DSP_MULTIPLY)",
    __builtin_constant_p (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1716 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_DSP_MULTIPLY))
    ? (int) (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1716 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_DSP_MULTIPLY))
    : -1 },
#line 113 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vec-common.md"
  { "TARGET_NEON\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4SImode))",
    __builtin_constant_p 
#line 113 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4SImode)))
    ? (int) 
#line 113 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4SImode)))
    : -1 },
#line 900 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FP16",
    __builtin_constant_p 
#line 900 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FP16)
    ? (int) 
#line 900 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FP16)
    : -1 },
#line 875 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md"
  { "TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_FPA",
    __builtin_constant_p 
#line 875 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_FPA)
    ? (int) 
#line 875 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_FPA)
    : -1 },
#line 358 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
  { "TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_VFP\n\
   && (   s_register_operand (operands[0], SFmode)\n\
       || s_register_operand (operands[1], SFmode))",
    __builtin_constant_p 
#line 358 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_VFP
   && (   s_register_operand (operands[0], SFmode)
       || s_register_operand (operands[1], SFmode)))
    ? (int) 
#line 358 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_VFP
   && (   s_register_operand (operands[0], SFmode)
       || s_register_operand (operands[1], SFmode)))
    : -1 },
#line 4243 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_32BIT && (GET_CODE (operands[1]) != MEM) && BYTES_BIG_ENDIAN",
    __builtin_constant_p 
#line 4243 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && (GET_CODE (operands[1]) != MEM) && BYTES_BIG_ENDIAN)
    ? (int) 
#line 4243 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && (GET_CODE (operands[1]) != MEM) && BYTES_BIG_ENDIAN)
    : -1 },
#line 6545 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_32BIT && XVECLEN (operands[0], 0) == 2",
    __builtin_constant_p 
#line 6545 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 2)
    ? (int) 
#line 6545 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 2)
    : -1 },
#line 3488 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_THUMB1 || arm_arch_thumb2",
    __builtin_constant_p 
#line 3488 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_THUMB1 || arm_arch_thumb2)
    ? (int) 
#line 3488 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_THUMB1 || arm_arch_thumb2)
    : -1 },
#line 6533 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_32BIT && XVECLEN (operands[0], 0) == 3",
    __builtin_constant_p 
#line 6533 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 3)
    ? (int) 
#line 6533 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 3)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_VFP\n\
   && (   s_register_operand (operands[0], SFmode)\n\
       || s_register_operand (operands[1], SFmode)))",
    __builtin_constant_p (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 358 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_VFP
   && (   s_register_operand (operands[0], SFmode)
       || s_register_operand (operands[1], SFmode))))
    ? (int) (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 358 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_VFP
   && (   s_register_operand (operands[0], SFmode)
       || s_register_operand (operands[1], SFmode))))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_THUMB2 && reload_completed\n\
   && GET_CODE(operands[3]) != PLUS\n\
   && GET_CODE(operands[3]) != MINUS)",
    __builtin_constant_p (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1094 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed
   && GET_CODE(operands[3]) != PLUS
   && GET_CODE(operands[3]) != MINUS))
    ? (int) (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1094 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed
   && GET_CODE(operands[3]) != PLUS
   && GET_CODE(operands[3]) != MINUS))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT && arm_arch5)",
    __builtin_constant_p (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 11067 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch5))
    ? (int) (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 11067 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch5))
    : -1 },
#line 459 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], V2SFmode)\n\
       || register_operand (operands[1], V2SFmode))",
    __builtin_constant_p 
#line 459 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V2SFmode)
       || register_operand (operands[1], V2SFmode)))
    ? (int) 
#line 459 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V2SFmode)
       || register_operand (operands[1], V2SFmode)))
    : -1 },
#line 152 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md"
  { "TARGET_REALLY_IWMMXT\n\
   && (   register_operand (operands[0], SImode)\n\
       || register_operand (operands[1], SImode))",
    __builtin_constant_p 
#line 152 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md"
(TARGET_REALLY_IWMMXT
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode)))
    ? (int) 
#line 152 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md"
(TARGET_REALLY_IWMMXT
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode)))
    : -1 },
#line 8714 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_ARM && GET_CODE (operands[0]) == SYMBOL_REF",
    __builtin_constant_p 
#line 8714 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && GET_CODE (operands[0]) == SYMBOL_REF)
    ? (int) 
#line 8714 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && GET_CODE (operands[0]) == SYMBOL_REF)
    : -1 },
#line 2040 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
  && (INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) < 32\n\
      && INTVAL (operands[1]) > 0 \n\
      && INTVAL (operands[1]) + (INTVAL (operands[2]) & 1) <= 8\n\
      && INTVAL (operands[1]) + INTVAL (operands[2]) <= 32)",
    __builtin_constant_p 
#line 2040 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT
  && (INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) < 32
      && INTVAL (operands[1]) > 0 
      && INTVAL (operands[1]) + (INTVAL (operands[2]) & 1) <= 8
      && INTVAL (operands[1]) + INTVAL (operands[2]) <= 32))
    ? (int) 
#line 2040 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT
  && (INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) < 32
      && INTVAL (operands[1]) > 0 
      && INTVAL (operands[1]) + (INTVAL (operands[2]) & 1) <= 8
      && INTVAL (operands[1]) + INTVAL (operands[2]) <= 32))
    : -1 },
#line 229 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && ! TARGET_IWMMXT\n\
   && !(TARGET_HARD_FLOAT && TARGET_VFP)\n\
   && (   register_operand (operands[0], SImode)\n\
       || register_operand (operands[1], SImode))",
    __builtin_constant_p 
#line 229 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && ! TARGET_IWMMXT
   && !(TARGET_HARD_FLOAT && TARGET_VFP)
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode)))
    ? (int) 
#line 229 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && ! TARGET_IWMMXT
   && !(TARGET_HARD_FLOAT && TARGET_VFP)
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode)))
    : -1 },
#line 1220 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && arm_arch_hwdiv",
    __builtin_constant_p 
#line 1220 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && arm_arch_hwdiv)
    ? (int) 
#line 1220 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && arm_arch_hwdiv)
    : -1 },
#line 6470 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_THUMB1 && XVECLEN (operands[0], 0) == 5",
    __builtin_constant_p 
#line 6470 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_THUMB1 && XVECLEN (operands[0], 0) == 5)
    ? (int) 
#line 6470 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_THUMB1 && XVECLEN (operands[0], 0) == 5)
    : -1 },
#line 11194 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "arm_arch_thumb2",
    __builtin_constant_p 
#line 11194 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(arm_arch_thumb2)
    ? (int) 
#line 11194 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(arm_arch_thumb2)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_THUMB2 && arm_arch6)",
    __builtin_constant_p (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1005 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && arm_arch6))
    ? (int) (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1005 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && arm_arch6))
    : -1 },
#line 8737 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_ARM && USE_RETURN_INSN (FALSE)",
    __builtin_constant_p 
#line 8737 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && USE_RETURN_INSN (FALSE))
    ? (int) 
#line 8737 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && USE_RETURN_INSN (FALSE))
    : -1 },
#line 5205 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_THUMB1 && satisfies_constraint_J (operands[1])",
    __builtin_constant_p 
#line 5205 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_THUMB1 && satisfies_constraint_J (operands[1]))
    ? (int) 
#line 5205 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_THUMB1 && satisfies_constraint_J (operands[1]))
    : -1 },
#line 1135 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && !const_ok_for_arm (INTVAL (operands[1]))\n\
   && const_ok_for_arm (~INTVAL (operands[1]))",
    __builtin_constant_p 
#line 1135 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT
   && !const_ok_for_arm (INTVAL (operands[1]))
   && const_ok_for_arm (~INTVAL (operands[1])))
    ? (int) 
#line 1135 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT
   && !const_ok_for_arm (INTVAL (operands[1]))
   && const_ok_for_arm (~INTVAL (operands[1])))
    : -1 },
#line 652 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
  { "TARGET_NEON && reload_completed",
    __builtin_constant_p 
#line 652 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
(TARGET_NEON && reload_completed)
    ? (int) 
#line 652 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
(TARGET_NEON && reload_completed)
    : -1 },
#line 5977 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_32BIT && !(TARGET_HARD_FLOAT && TARGET_FP16)\n\
   && (	  s_register_operand (operands[0], HFmode)\n\
       || s_register_operand (operands[1], HFmode))",
    __builtin_constant_p 
#line 5977 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && !(TARGET_HARD_FLOAT && TARGET_FP16)
   && (	  s_register_operand (operands[0], HFmode)
       || s_register_operand (operands[1], HFmode)))
    ? (int) 
#line 5977 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && !(TARGET_HARD_FLOAT && TARGET_FP16)
   && (	  s_register_operand (operands[0], HFmode)
       || s_register_operand (operands[1], HFmode)))
    : -1 },
#line 10512 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_ARM && store_multiple_sequence (operands, 2, NULL, NULL, NULL)",
    __builtin_constant_p 
#line 10512 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && store_multiple_sequence (operands, 2, NULL, NULL, NULL))
    ? (int) 
#line 10512 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && store_multiple_sequence (operands, 2, NULL, NULL, NULL))
    : -1 },
#line 8958 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_32BIT || optimize_size || flag_pic",
    __builtin_constant_p 
#line 8958 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT || optimize_size || flag_pic)
    ? (int) 
#line 8958 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT || optimize_size || flag_pic)
    : -1 },
#line 3677 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_THUMB1 && reload_completed",
    __builtin_constant_p 
#line 3677 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_THUMB1 && reload_completed)
    ? (int) 
#line 3677 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_THUMB1 && reload_completed)
    : -1 },
#line 2068 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && (INTVAL (operands[3]) >= 0 && INTVAL (operands[3]) < 32\n\
       && INTVAL (operands[2]) > 0 \n\
       && INTVAL (operands[2]) + (INTVAL (operands[3]) & 1) <= 8\n\
       && INTVAL (operands[2]) + INTVAL (operands[3]) <= 32)",
    __builtin_constant_p 
#line 2068 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (INTVAL (operands[3]) >= 0 && INTVAL (operands[3]) < 32
       && INTVAL (operands[2]) > 0 
       && INTVAL (operands[2]) + (INTVAL (operands[3]) & 1) <= 8
       && INTVAL (operands[2]) + INTVAL (operands[3]) <= 32))
    ? (int) 
#line 2068 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (INTVAL (operands[3]) >= 0 && INTVAL (operands[3]) < 32
       && INTVAL (operands[2]) > 0 
       && INTVAL (operands[2]) + (INTVAL (operands[3]) & 1) <= 8
       && INTVAL (operands[2]) + INTVAL (operands[3]) <= 32))
    : -1 },
#line 1169 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2\n\
   && peep2_regno_dead_p(0, CC_REGNUM)\n\
   && ((rtx_equal_p(operands[0], operands[1])\n\
	&& INTVAL(operands[2]) > -256 && INTVAL(operands[2]) < 256)\n\
       || (INTVAL(operands[2]) > -8 && INTVAL(operands[2]) < 8))",
    __builtin_constant_p 
#line 1169 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && peep2_regno_dead_p(0, CC_REGNUM)
   && ((rtx_equal_p(operands[0], operands[1])
	&& INTVAL(operands[2]) > -256 && INTVAL(operands[2]) < 256)
       || (INTVAL(operands[2]) > -8 && INTVAL(operands[2]) < 8)))
    ? (int) 
#line 1169 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && peep2_regno_dead_p(0, CC_REGNUM)
   && ((rtx_equal_p(operands[0], operands[1])
	&& INTVAL(operands[2]) > -256 && INTVAL(operands[2]) < 256)
       || (INTVAL(operands[2]) > -8 && INTVAL(operands[2]) < 8)))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_ARM\n\
   && arm_arch4\n\
   && (GET_CODE (operands[1]) != CONST_INT\n\
       || const_ok_for_arm (INTVAL (operands[1]))\n\
       || const_ok_for_arm (~INTVAL (operands[1]))))",
    __builtin_constant_p (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 5772 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM
   && arm_arch4
   && (GET_CODE (operands[1]) != CONST_INT
       || const_ok_for_arm (INTVAL (operands[1]))
       || const_ok_for_arm (~INTVAL (operands[1])))))
    ? (int) (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 5772 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM
   && arm_arch4
   && (GET_CODE (operands[1]) != CONST_INT
       || const_ok_for_arm (INTVAL (operands[1]))
       || const_ok_for_arm (~INTVAL (operands[1])))))
    : -1 },
#line 92 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
  { "TARGET_THUMB2 && TARGET_VFP && TARGET_HARD_FLOAT\n\
   && (   s_register_operand (operands[0], SImode)\n\
       || s_register_operand (operands[1], SImode))",
    __builtin_constant_p 
#line 92 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_VFP && TARGET_HARD_FLOAT
   && (   s_register_operand (operands[0], SImode)
       || s_register_operand (operands[1], SImode)))
    ? (int) 
#line 92 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_VFP && TARGET_HARD_FLOAT
   && (   s_register_operand (operands[0], SImode)
       || s_register_operand (operands[1], SImode)))
    : -1 },
#line 5323 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_ARM && peep2_reg_dead_p (2, operands[0])",
    __builtin_constant_p 
#line 5323 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && peep2_reg_dead_p (2, operands[0]))
    ? (int) 
#line 5323 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && peep2_reg_dead_p (2, operands[0]))
    : -1 },
#line 2722 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_32BIT && !TARGET_IWMMXT",
    __builtin_constant_p 
#line 2722 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && !TARGET_IWMMXT)
    ? (int) 
#line 2722 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && !TARGET_IWMMXT)
    : -1 },
#line 8644 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_ARM\n\
   && (GET_CODE (operands[1]) == SYMBOL_REF)\n\
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[1]))",
    __builtin_constant_p 
#line 8644 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM
   && (GET_CODE (operands[1]) == SYMBOL_REF)
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[1])))
    ? (int) 
#line 8644 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM
   && (GET_CODE (operands[1]) == SYMBOL_REF)
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[1])))
    : -1 },
#line 5214 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_THUMB1 && satisfies_constraint_K (operands[1])",
    __builtin_constant_p 
#line 5214 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_THUMB1 && satisfies_constraint_K (operands[1]))
    ? (int) 
#line 5214 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_THUMB1 && satisfies_constraint_K (operands[1]))
    : -1 },
#line 601 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_32BIT &&\n\
   !(const_ok_for_arm (INTVAL (operands[2]))\n\
     || const_ok_for_arm (-INTVAL (operands[2])))\n\
    && const_ok_for_arm (~INTVAL (operands[2]))",
    __builtin_constant_p 
#line 601 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT &&
   !(const_ok_for_arm (INTVAL (operands[2]))
     || const_ok_for_arm (-INTVAL (operands[2])))
    && const_ok_for_arm (~INTVAL (operands[2])))
    ? (int) 
#line 601 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT &&
   !(const_ok_for_arm (INTVAL (operands[2]))
     || const_ok_for_arm (-INTVAL (operands[2])))
    && const_ok_for_arm (~INTVAL (operands[2])))
    : -1 },
#line 55 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
  { "TARGET_ARM && TARGET_VFP && TARGET_HARD_FLOAT\n\
   && (   s_register_operand (operands[0], SImode)\n\
       || s_register_operand (operands[1], SImode))",
    __builtin_constant_p 
#line 55 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_VFP && TARGET_HARD_FLOAT
   && (   s_register_operand (operands[0], SImode)
       || s_register_operand (operands[1], SImode)))
    ? (int) 
#line 55 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_VFP && TARGET_HARD_FLOAT
   && (   s_register_operand (operands[0], SImode)
       || s_register_operand (operands[1], SImode)))
    : -1 },
#line 8673 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_THUMB\n\
   && GET_CODE (operands[1]) == SYMBOL_REF\n\
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[1]))",
    __builtin_constant_p 
#line 8673 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_THUMB
   && GET_CODE (operands[1]) == SYMBOL_REF
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[1])))
    ? (int) 
#line 8673 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_THUMB
   && GET_CODE (operands[1]) == SYMBOL_REF
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[1])))
    : -1 },
#line 1388 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && reload_completed",
    __builtin_constant_p 
#line 1388 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed)
    ? (int) 
#line 1388 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed)
    : -1 },
#line 8007 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_32BIT || TARGET_THUMB1",
    __builtin_constant_p 
#line 8007 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT || TARGET_THUMB1)
    ? (int) 
#line 8007 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT || TARGET_THUMB1)
    : -1 },
#line 620 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE && reload_completed\n\
   && arm_general_register_operand (operands[0], DFmode)",
    __builtin_constant_p 
#line 620 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE && reload_completed
   && arm_general_register_operand (operands[0], DFmode))
    ? (int) 
#line 620 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE && reload_completed
   && arm_general_register_operand (operands[0], DFmode))
    : -1 },
#line 1044 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && flag_pic",
    __builtin_constant_p 
#line 1044 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && flag_pic)
    ? (int) 
#line 1044 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && flag_pic)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_THUMB2 && ! TARGET_IWMMXT\n\
   && !(TARGET_HARD_FLOAT && TARGET_VFP)\n\
   && (   register_operand (operands[0], SImode)\n\
       || register_operand (operands[1], SImode)))",
    __builtin_constant_p (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 229 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && ! TARGET_IWMMXT
   && !(TARGET_HARD_FLOAT && TARGET_VFP)
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode))))
    ? (int) (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 229 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && ! TARGET_IWMMXT
   && !(TARGET_HARD_FLOAT && TARGET_VFP)
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode))))
    : -1 },
#line 7689 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_THUMB1\n\
   && (GET_CODE (operands[4]) == EQ\n\
       || GET_CODE (operands[4]) == NE\n\
       || GET_CODE (operands[4]) == GE\n\
       || GET_CODE (operands[4]) == LT)",
    __builtin_constant_p 
#line 7689 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (GET_CODE (operands[4]) == EQ
       || GET_CODE (operands[4]) == NE
       || GET_CODE (operands[4]) == GE
       || GET_CODE (operands[4]) == LT))
    ? (int) 
#line 7689 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (GET_CODE (operands[4]) == EQ
       || GET_CODE (operands[4]) == NE
       || GET_CODE (operands[4]) == GE
       || GET_CODE (operands[4]) == LT))
    : -1 },
#line 2940 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && GET_CODE (operands[1]) == GET_CODE (operands[9])\n\
   && INTVAL (operands[3]) == 32 - INTVAL (operands[6])",
    __builtin_constant_p 
#line 2940 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT
   && GET_CODE (operands[1]) == GET_CODE (operands[9])
   && INTVAL (operands[3]) == 32 - INTVAL (operands[6]))
    ? (int) 
#line 2940 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT
   && GET_CODE (operands[1]) == GET_CODE (operands[9])
   && INTVAL (operands[3]) == 32 - INTVAL (operands[6]))
    : -1 },
#line 831 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md"
  { "TARGET_ARM && TARGET_HARD_FLOAT && TARGET_FPA",
    __builtin_constant_p 
#line 831 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_FPA)
    ? (int) 
#line 831 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_FPA)
    : -1 },
#line 515 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md"
  { "TARGET_THUMB2\n\
   && TARGET_HARD_FLOAT && TARGET_MAVERICK\n\
   && (GET_CODE (operands[0]) != MEM\n\
       || register_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 515 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md"
(TARGET_THUMB2
   && TARGET_HARD_FLOAT && TARGET_MAVERICK
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], DFmode)))
    ? (int) 
#line 515 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md"
(TARGET_THUMB2
   && TARGET_HARD_FLOAT && TARGET_MAVERICK
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], DFmode)))
    : -1 },
#line 11067 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_32BIT && arm_arch5",
    __builtin_constant_p 
#line 11067 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch5)
    ? (int) 
#line 11067 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch5)
    : -1 },
#line 113 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vec-common.md"
  { "TARGET_NEON\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V8HImode))",
    __builtin_constant_p 
#line 113 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V8HImode)))
    ? (int) 
#line 113 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V8HImode)))
    : -1 },
#line 518 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
  { "TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_VFP",
    __builtin_constant_p 
#line 518 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_VFP)
    ? (int) 
#line 518 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_VFP)
    : -1 },
#line 1413 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_ARM && arm_arch6 && optimize_size",
    __builtin_constant_p 
#line 1413 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch6 && optimize_size)
    ? (int) 
#line 1413 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch6 && optimize_size)
    : -1 },
#line 508 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], V2DImode)\n\
       || register_operand (operands[1], V2DImode))",
    __builtin_constant_p 
#line 508 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V2DImode)
       || register_operand (operands[1], V2DImode)))
    ? (int) 
#line 508 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V2DImode)
       || register_operand (operands[1], V2DImode)))
    : -1 },
#line 508 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], TImode)\n\
       || register_operand (operands[1], TImode))",
    __builtin_constant_p 
#line 508 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], TImode)
       || register_operand (operands[1], TImode)))
    ? (int) 
#line 508 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], TImode)
       || register_operand (operands[1], TImode)))
    : -1 },
#line 3130 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_32BIT && !arm_eliminable_register (operands[1])",
    __builtin_constant_p 
#line 3130 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && !arm_eliminable_register (operands[1]))
    ? (int) 
#line 3130 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && !arm_eliminable_register (operands[1]))
    : -1 },
#line 1144 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2\n\
   && peep2_regno_dead_p(0, CC_REGNUM)\n\
   && (unsigned HOST_WIDE_INT) INTVAL(operands[1]) < 256",
    __builtin_constant_p 
#line 1144 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && peep2_regno_dead_p(0, CC_REGNUM)
   && (unsigned HOST_WIDE_INT) INTVAL(operands[1]) < 256)
    ? (int) 
#line 1144 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && peep2_regno_dead_p(0, CC_REGNUM)
   && (unsigned HOST_WIDE_INT) INTVAL(operands[1]) < 256)
    : -1 },
#line 1716 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_DSP_MULTIPLY",
    __builtin_constant_p 
#line 1716 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_DSP_MULTIPLY)
    ? (int) 
#line 1716 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_DSP_MULTIPLY)
    : -1 },
#line 1065 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE",
    __builtin_constant_p 
#line 1065 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE)
    ? (int) 
#line 1065 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE)
    : -1 },
#line 5937 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_THUMB1\n\
   && (   register_operand (operands[0], QImode)\n\
       || register_operand (operands[1], QImode))",
    __builtin_constant_p 
#line 5937 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (   register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode)))
    ? (int) 
#line 5937 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (   register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode)))
    : -1 },
#line 206 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2\n\
  && !(TARGET_HARD_FLOAT && (TARGET_MAVERICK || TARGET_VFP))\n\
  && !TARGET_IWMMXT",
    __builtin_constant_p 
#line 206 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
  && !(TARGET_HARD_FLOAT && (TARGET_MAVERICK || TARGET_VFP))
  && !TARGET_IWMMXT)
    ? (int) 
#line 206 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
  && !(TARGET_HARD_FLOAT && (TARGET_MAVERICK || TARGET_VFP))
  && !TARGET_IWMMXT)
    : -1 },
#line 113 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vec-common.md"
  { "TARGET_NEON\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2SImode))",
    __builtin_constant_p 
#line 113 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2SImode)))
    ? (int) 
#line 113 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2SImode)))
    : -1 },
#line 78 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vec-common.md"
  { "TARGET_NEON || (V16QImode == V4HImode && TARGET_REALLY_IWMMXT)",
    __builtin_constant_p 
#line 78 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vec-common.md"
(TARGET_NEON || (V16QImode == V4HImode && TARGET_REALLY_IWMMXT))
    ? (int) 
#line 78 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vec-common.md"
(TARGET_NEON || (V16QImode == V4HImode && TARGET_REALLY_IWMMXT))
    : -1 },
#line 575 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], CImode)\n\
       || register_operand (operands[1], CImode))",
    __builtin_constant_p 
#line 575 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], CImode)
       || register_operand (operands[1], CImode)))
    ? (int) 
#line 575 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], CImode)
       || register_operand (operands[1], CImode)))
    : -1 },
#line 8579 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_ARM && !arm_arch5 && (!CONSTANT_ADDRESS_P (XEXP (operands[1], 0)))",
    __builtin_constant_p 
#line 8579 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && !arm_arch5 && (!CONSTANT_ADDRESS_P (XEXP (operands[1], 0))))
    ? (int) 
#line 8579 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && !arm_arch5 && (!CONSTANT_ADDRESS_P (XEXP (operands[1], 0))))
    : -1 },
#line 1117 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && GET_CODE (operands[1]) == CONST_INT\n\
   && !const_ok_for_arm (INTVAL (operands[1]))",
    __builtin_constant_p 
#line 1117 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT
   && GET_CODE (operands[1]) == CONST_INT
   && !const_ok_for_arm (INTVAL (operands[1])))
    ? (int) 
#line 1117 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT
   && GET_CODE (operands[1]) == CONST_INT
   && !const_ok_for_arm (INTVAL (operands[1])))
    : -1 },
#line 594 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md"
  { "TARGET_ARM && TARGET_HARD_FLOAT && TARGET_FPA\n\
   && (register_operand (operands[0], XFmode)\n\
       || register_operand (operands[1], XFmode))",
    __builtin_constant_p 
#line 594 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_FPA
   && (register_operand (operands[0], XFmode)
       || register_operand (operands[1], XFmode)))
    ? (int) 
#line 594 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_FPA
   && (register_operand (operands[0], XFmode)
       || register_operand (operands[1], XFmode)))
    : -1 },
#line 10473 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_ARM && load_multiple_sequence (operands, 2, NULL, NULL, NULL)",
    __builtin_constant_p 
#line 10473 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && load_multiple_sequence (operands, 2, NULL, NULL, NULL))
    ? (int) 
#line 10473 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && load_multiple_sequence (operands, 2, NULL, NULL, NULL))
    : -1 },
#line 11184 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_SOFT_TP",
    __builtin_constant_p 
#line 11184 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_SOFT_TP)
    ? (int) 
#line 11184 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_SOFT_TP)
    : -1 },
#line 322 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
  { "TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP\n\
   && (   s_register_operand (operands[0], SFmode)\n\
       || s_register_operand (operands[1], SFmode))",
    __builtin_constant_p 
#line 322 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP
   && (   s_register_operand (operands[0], SFmode)
       || s_register_operand (operands[1], SFmode)))
    ? (int) 
#line 322 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP
   && (   s_register_operand (operands[0], SFmode)
       || s_register_operand (operands[1], SFmode)))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_ARM && arm_arch6)",
    __builtin_constant_p (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 4605 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch6))
    ? (int) (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 4605 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch6))
    : -1 },
#line 575 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], EImode)\n\
       || register_operand (operands[1], EImode))",
    __builtin_constant_p 
#line 575 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], EImode)
       || register_operand (operands[1], EImode)))
    ? (int) 
#line 575 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], EImode)
       || register_operand (operands[1], EImode)))
    : -1 },
#line 459 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], V2SImode)\n\
       || register_operand (operands[1], V2SImode))",
    __builtin_constant_p 
#line 459 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V2SImode)
       || register_operand (operands[1], V2SImode)))
    ? (int) 
#line 459 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V2SImode)
       || register_operand (operands[1], V2SImode)))
    : -1 },
#line 8659 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_THUMB\n\
   && GET_CODE (operands[0]) == SYMBOL_REF\n\
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[0]))",
    __builtin_constant_p 
#line 8659 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_THUMB
   && GET_CODE (operands[0]) == SYMBOL_REF
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[0])))
    ? (int) 
#line 8659 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_THUMB
   && GET_CODE (operands[0]) == SYMBOL_REF
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[0])))
    : -1 },
#line 1375 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2\n\
   && peep2_regno_dead_p(0, CC_REGNUM)",
    __builtin_constant_p 
#line 1375 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && peep2_regno_dead_p(0, CC_REGNUM))
    ? (int) 
#line 1375 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && peep2_regno_dead_p(0, CC_REGNUM))
    : -1 },
#line 5170 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
  && (!(const_ok_for_arm (INTVAL (operands[1]))\n\
        || const_ok_for_arm (~INTVAL (operands[1]))))",
    __builtin_constant_p 
#line 5170 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT
  && (!(const_ok_for_arm (INTVAL (operands[1]))
        || const_ok_for_arm (~INTVAL (operands[1])))))
    ? (int) 
#line 5170 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT
  && (!(const_ok_for_arm (INTVAL (operands[1]))
        || const_ok_for_arm (~INTVAL (operands[1])))))
    : -1 },
#line 78 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vec-common.md"
  { "TARGET_NEON || (V2SImode == V4HImode && TARGET_REALLY_IWMMXT)",
    __builtin_constant_p 
#line 78 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vec-common.md"
(TARGET_NEON || (V2SImode == V4HImode && TARGET_REALLY_IWMMXT))
    ? (int) 
#line 78 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vec-common.md"
(TARGET_NEON || (V2SImode == V4HImode && TARGET_REALLY_IWMMXT))
    : -1 },
#line 558 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md"
  { "TARGET_ARM\n\
   && TARGET_HARD_FLOAT && TARGET_FPA\n\
   && (GET_CODE (operands[0]) != MEM\n\
       || register_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 558 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md"
(TARGET_ARM
   && TARGET_HARD_FLOAT && TARGET_FPA
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], DFmode)))
    ? (int) 
#line 558 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md"
(TARGET_ARM
   && TARGET_HARD_FLOAT && TARGET_FPA
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], DFmode)))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP\n\
   && (   register_operand (operands[0], DFmode)\n\
       || register_operand (operands[1], DFmode)))",
    __builtin_constant_p (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 397 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP
   && (   register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode))))
    ? (int) (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 397 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP
   && (   register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode))))
    : -1 },
#line 777 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_32BIT && peep2_reg_dead_p (3, operands[2])",
    __builtin_constant_p 
#line 777 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && peep2_reg_dead_p (3, operands[2]))
    ? (int) 
#line 777 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && peep2_reg_dead_p (3, operands[2]))
    : -1 },
#line 2660 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_ARM\n\
   && GET_CODE (operands[2]) == CONST_INT\n\
   && !const_ok_for_arm (INTVAL (operands[2]))",
    __builtin_constant_p 
#line 2660 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM
   && GET_CODE (operands[2]) == CONST_INT
   && !const_ok_for_arm (INTVAL (operands[2])))
    ? (int) 
#line 2660 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM
   && GET_CODE (operands[2]) == CONST_INT
   && !const_ok_for_arm (INTVAL (operands[2])))
    : -1 },
#line 8605 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_THUMB1 && !arm_arch5",
    __builtin_constant_p 
#line 8605 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_THUMB1 && !arm_arch5)
    ? (int) 
#line 8605 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_THUMB1 && !arm_arch5)
    : -1 },
#line 10488 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_ARM && store_multiple_sequence (operands, 4, NULL, NULL, NULL)",
    __builtin_constant_p 
#line 10488 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && store_multiple_sequence (operands, 4, NULL, NULL, NULL))
    ? (int) 
#line 10488 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && store_multiple_sequence (operands, 4, NULL, NULL, NULL))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_HARD_TP)",
    __builtin_constant_p (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 11173 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_HARD_TP))
    ? (int) (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 11173 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_HARD_TP))
    : -1 },
#line 10501 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_ARM && store_multiple_sequence (operands, 3, NULL, NULL, NULL)",
    __builtin_constant_p 
#line 10501 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && store_multiple_sequence (operands, 3, NULL, NULL, NULL))
    ? (int) 
#line 10501 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && store_multiple_sequence (operands, 3, NULL, NULL, NULL))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_ARM && adjacent_mem_locations (operands[2], operands[3]))",
    __builtin_constant_p (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 10326 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && adjacent_mem_locations (operands[2], operands[3])))
    ? (int) (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 10326 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && adjacent_mem_locations (operands[2], operands[3])))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_ARM && arm_arch4 && !arm_arch6)",
    __builtin_constant_p (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 4593 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch4 && !arm_arch6))
    ? (int) (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 4593 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch4 && !arm_arch6))
    : -1 },
#line 1420 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2",
    __builtin_constant_p 
#line 1420 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2)
    ? (int) 
#line 1420 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT && !(TARGET_HARD_FLOAT && TARGET_FP16)\n\
   && (	  s_register_operand (operands[0], HFmode)\n\
       || s_register_operand (operands[1], HFmode)))",
    __builtin_constant_p (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 5977 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && !(TARGET_HARD_FLOAT && TARGET_FP16)
   && (	  s_register_operand (operands[0], HFmode)
       || s_register_operand (operands[1], HFmode))))
    ? (int) (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 5977 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && !(TARGET_HARD_FLOAT && TARGET_FP16)
   && (	  s_register_operand (operands[0], HFmode)
       || s_register_operand (operands[1], HFmode))))
    : -1 },
#line 8779 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_ARM && USE_RETURN_INSN (TRUE)",
    __builtin_constant_p 
#line 8779 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && USE_RETURN_INSN (TRUE))
    ? (int) 
#line 8779 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && USE_RETURN_INSN (TRUE))
    : -1 },
#line 2166 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_ARM && !reg_overlap_mentioned_p (operands[0], operands[3])",
    __builtin_constant_p 
#line 2166 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && !reg_overlap_mentioned_p (operands[0], operands[3]))
    ? (int) 
#line 2166 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && !reg_overlap_mentioned_p (operands[0], operands[3]))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_THUMB2 && arm_arch_hwdiv)",
    __builtin_constant_p (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1220 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && arm_arch_hwdiv))
    ? (int) (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1220 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && arm_arch_hwdiv))
    : -1 },
#line 132 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
  { "TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP\n\
   && (   register_operand (operands[0], DImode)\n\
       || register_operand (operands[1], DImode))",
    __builtin_constant_p 
#line 132 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP
   && (   register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    ? (int) 
#line 132 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP
   && (   register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    : -1 },
#line 6079 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_EITHER\n\
   && reload_completed\n\
   && GET_CODE (operands[1]) == CONST_DOUBLE",
    __builtin_constant_p 
#line 6079 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_EITHER
   && reload_completed
   && GET_CODE (operands[1]) == CONST_DOUBLE)
    ? (int) 
#line 6079 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_EITHER
   && reload_completed
   && GET_CODE (operands[1]) == CONST_DOUBLE)
    : -1 },
#line 2464 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_32BIT && reload_completed && ! IS_IWMMXT_REGNUM (REGNO (operands[0]))",
    __builtin_constant_p 
#line 2464 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && reload_completed && ! IS_IWMMXT_REGNUM (REGNO (operands[0])))
    ? (int) 
#line 2464 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && reload_completed && ! IS_IWMMXT_REGNUM (REGNO (operands[0])))
    : -1 },
#line 5003 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_THUMB1\n\
   && !(TARGET_HARD_FLOAT && TARGET_MAVERICK)\n\
   && (   register_operand (operands[0], DImode)\n\
       || register_operand (operands[1], DImode))",
    __builtin_constant_p 
#line 5003 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && !(TARGET_HARD_FLOAT && TARGET_MAVERICK)
   && (   register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    ? (int) 
#line 5003 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && !(TARGET_HARD_FLOAT && TARGET_MAVERICK)
   && (   register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    : -1 },
#line 78 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vec-common.md"
  { "TARGET_NEON || (V8HImode == V4HImode && TARGET_REALLY_IWMMXT)",
    __builtin_constant_p 
#line 78 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vec-common.md"
(TARGET_NEON || (V8HImode == V4HImode && TARGET_REALLY_IWMMXT))
    ? (int) 
#line 78 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vec-common.md"
(TARGET_NEON || (V8HImode == V4HImode && TARGET_REALLY_IWMMXT))
    : -1 },
#line 6260 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FPA",
    __builtin_constant_p 
#line 6260 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FPA)
    ? (int) 
#line 6260 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FPA)
    : -1 },
#line 11212 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_THUMB1 && arm_arch6",
    __builtin_constant_p 
#line 11212 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_THUMB1 && arm_arch6)
    ? (int) 
#line 11212 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_THUMB1 && arm_arch6)
    : -1 },
#line 415 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && TARGET_SOFT_FLOAT",
    __builtin_constant_p 
#line 415 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && TARGET_SOFT_FLOAT)
    ? (int) 
#line 415 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && TARGET_SOFT_FLOAT)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_ARM && arm_arch4)",
    __builtin_constant_p (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 4550 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch4))
    ? (int) (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 4550 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch4))
    : -1 },
#line 11100 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_32BIT && arm_arch5e",
    __builtin_constant_p 
#line 11100 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch5e)
    ? (int) 
#line 11100 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch5e)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_ARM\n\
   && TARGET_HARD_FLOAT && TARGET_FPA\n\
   && (GET_CODE (operands[0]) != MEM\n\
       || register_operand (operands[1], DFmode)))",
    __builtin_constant_p (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 558 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md"
(TARGET_ARM
   && TARGET_HARD_FLOAT && TARGET_FPA
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], DFmode))))
    ? (int) (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 558 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md"
(TARGET_ARM
   && TARGET_HARD_FLOAT && TARGET_FPA
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], DFmode))))
    : -1 },
#line 8552 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_ARM && arm_arch5",
    __builtin_constant_p 
#line 8552 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch5)
    ? (int) 
#line 8552 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch5)
    : -1 },
#line 2592 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_32BIT && ! TARGET_IWMMXT",
    __builtin_constant_p 
#line 2592 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && ! TARGET_IWMMXT)
    ? (int) 
#line 2592 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && ! TARGET_IWMMXT)
    : -1 },
  { "(TARGET_ARM) && ( reload_completed)",
    __builtin_constant_p (
#line 11141 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM) && 
#line 11143 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
( reload_completed))
    ? (int) (
#line 11141 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM) && 
#line 11143 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
( reload_completed))
    : -1 },
#line 5184 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_THUMB1\n\
   && (   register_operand (operands[0], SImode) \n\
       || register_operand (operands[1], SImode))",
    __builtin_constant_p 
#line 5184 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (   register_operand (operands[0], SImode) 
       || register_operand (operands[1], SImode)))
    ? (int) 
#line 5184 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (   register_operand (operands[0], SImode) 
       || register_operand (operands[1], SImode)))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP\n\
   && (   s_register_operand (operands[0], SFmode)\n\
       || s_register_operand (operands[1], SFmode)))",
    __builtin_constant_p (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 322 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP
   && (   s_register_operand (operands[0], SFmode)
       || s_register_operand (operands[1], SFmode))))
    ? (int) (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 322 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP
   && (   s_register_operand (operands[0], SFmode)
       || s_register_operand (operands[1], SFmode))))
    : -1 },
#line 508 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], V16QImode)\n\
       || register_operand (operands[1], V16QImode))",
    __builtin_constant_p 
#line 508 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V16QImode)
       || register_operand (operands[1], V16QImode)))
    ? (int) 
#line 508 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V16QImode)
       || register_operand (operands[1], V16QImode)))
    : -1 },
#line 5483 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_32BIT && arm_arch4",
    __builtin_constant_p 
#line 5483 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch4)
    ? (int) 
#line 5483 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch4)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_ARM && TARGET_VFP && TARGET_HARD_FLOAT\n\
   && (   s_register_operand (operands[0], SImode)\n\
       || s_register_operand (operands[1], SImode)))",
    __builtin_constant_p (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 55 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_VFP && TARGET_HARD_FLOAT
   && (   s_register_operand (operands[0], SImode)
       || s_register_operand (operands[1], SImode))))
    ? (int) (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 55 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_VFP && TARGET_HARD_FLOAT
   && (   s_register_operand (operands[0], SImode)
       || s_register_operand (operands[1], SImode))))
    : -1 },
#line 11125 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_EITHER",
    __builtin_constant_p 
#line 11125 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_EITHER)
    ? (int) 
#line 11125 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_EITHER)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_ARM && ! TARGET_IWMMXT\n\
   && !(TARGET_HARD_FLOAT && TARGET_VFP)\n\
   && (   register_operand (operands[0], SImode)\n\
       || register_operand (operands[1], SImode)))",
    __builtin_constant_p (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 5150 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && ! TARGET_IWMMXT
   && !(TARGET_HARD_FLOAT && TARGET_VFP)
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode))))
    ? (int) (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 5150 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && ! TARGET_IWMMXT
   && !(TARGET_HARD_FLOAT && TARGET_VFP)
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode))))
    : -1 },
#line 557 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_32BIT && !(TARGET_HARD_FLOAT && TARGET_MAVERICK)",
    __builtin_constant_p 
#line 557 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && !(TARGET_HARD_FLOAT && TARGET_MAVERICK))
    ? (int) 
#line 557 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && !(TARGET_HARD_FLOAT && TARGET_MAVERICK))
    : -1 },
#line 11276 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_EITHER && (arm_arch6 || !optimize_size)",
    __builtin_constant_p 
#line 11276 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_EITHER && (arm_arch6 || !optimize_size))
    ? (int) 
#line 11276 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_EITHER && (arm_arch6 || !optimize_size))
    : -1 },
#line 4953 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_EITHER && reload_completed",
    __builtin_constant_p 
#line 4953 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_EITHER && reload_completed)
    ? (int) 
#line 4953 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_EITHER && reload_completed)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT && arm_arch3m && !arm_arch6)",
    __builtin_constant_p (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1622 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch3m && !arm_arch6))
    ? (int) (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1622 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch3m && !arm_arch6))
    : -1 },
#line 4908 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && reload_completed\n\
   && (arm_const_double_inline_cost (operands[1])\n\
       <= ((optimize_size || arm_ld_sched) ? 3 : 4))",
    __builtin_constant_p 
#line 4908 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT
   && reload_completed
   && (arm_const_double_inline_cost (operands[1])
       <= ((optimize_size || arm_ld_sched) ? 3 : 4)))
    ? (int) 
#line 4908 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT
   && reload_completed
   && (arm_const_double_inline_cost (operands[1])
       <= ((optimize_size || arm_ld_sched) ? 3 : 4)))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_ARM && !arm_arch6)",
    __builtin_constant_p (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 4197 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && !arm_arch6))
    ? (int) (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 4197 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && !arm_arch6))
    : -1 },
#line 541 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
  { "TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE",
    __builtin_constant_p 
#line 541 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE)
    ? (int) 
#line 541 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE)
    : -1 },
#line 1258 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && optimize_size && peep2_regno_dead_p (0, CC_REGNUM)",
    __builtin_constant_p 
#line 1258 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && optimize_size && peep2_regno_dead_p (0, CC_REGNUM))
    ? (int) 
#line 1258 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && optimize_size && peep2_regno_dead_p (0, CC_REGNUM))
    : -1 },
#line 282 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2\n\
   && TARGET_SOFT_FLOAT\n\
   && (GET_CODE (operands[0]) != MEM\n\
       || register_operand (operands[1], SFmode))",
    __builtin_constant_p 
#line 282 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && TARGET_SOFT_FLOAT
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], SFmode)))
    ? (int) 
#line 282 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && TARGET_SOFT_FLOAT
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], SFmode)))
    : -1 },
#line 1336 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md"
  { "TARGET_REALLY_IWMMXT",
    __builtin_constant_p 
#line 1336 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md"
(TARGET_REALLY_IWMMXT)
    ? (int) 
#line 1336 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md"
(TARGET_REALLY_IWMMXT)
    : -1 },
#line 4593 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_ARM && arm_arch4 && !arm_arch6",
    __builtin_constant_p 
#line 4593 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch4 && !arm_arch6)
    ? (int) 
#line 4593 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch4 && !arm_arch6)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_ARM)",
    __builtin_constant_p (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 9189 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM))
    ? (int) (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 9189 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM))
    : -1 },
#line 10747 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_ARM && reload_completed",
    __builtin_constant_p 
#line 10747 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && reload_completed)
    ? (int) 
#line 10747 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && reload_completed)
    : -1 },
#line 4197 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_ARM && !arm_arch6",
    __builtin_constant_p 
#line 4197 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && !arm_arch6)
    ? (int) 
#line 4197 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && !arm_arch6)
    : -1 },
#line 431 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md"
  { "TARGET_ARM\n\
   && TARGET_HARD_FLOAT && TARGET_MAVERICK\n\
   && (GET_CODE (operands[0]) != MEM\n\
       || register_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 431 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md"
(TARGET_ARM
   && TARGET_HARD_FLOAT && TARGET_MAVERICK
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], DFmode)))
    ? (int) 
#line 431 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md"
(TARGET_ARM
   && TARGET_HARD_FLOAT && TARGET_MAVERICK
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], DFmode)))
    : -1 },
#line 1786 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_32BIT && reload_completed\n\
   && ! IS_IWMMXT_REGNUM (REGNO (operands[0]))",
    __builtin_constant_p 
#line 1786 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && reload_completed
   && ! IS_IWMMXT_REGNUM (REGNO (operands[0])))
    ? (int) 
#line 1786 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && reload_completed
   && ! IS_IWMMXT_REGNUM (REGNO (operands[0])))
    : -1 },
#line 6688 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT && !TARGET_VFP_SINGLE",
    __builtin_constant_p 
#line 6688 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && !TARGET_VFP_SINGLE)
    ? (int) 
#line 6688 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && !TARGET_VFP_SINGLE)
    : -1 },
  { "(TARGET_THUMB1) && ( reload_completed && CONST_INT_P (operands[2])\n\
   && operands[1] != stack_pointer_rtx\n\
   && (INTVAL (operands[2]) > 255 || INTVAL (operands[2]) < -255))",
    __builtin_constant_p (
#line 649 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_THUMB1) && 
#line 669 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
( reload_completed && CONST_INT_P (operands[2])
   && operands[1] != stack_pointer_rtx
   && (INTVAL (operands[2]) > 255 || INTVAL (operands[2]) < -255)))
    ? (int) (
#line 649 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_THUMB1) && 
#line 669 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
( reload_completed && CONST_INT_P (operands[2])
   && operands[1] != stack_pointer_rtx
   && (INTVAL (operands[2]) > 255 || INTVAL (operands[2]) < -255)))
    : -1 },
#line 7619 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_THUMB1\n\
   && (GET_CODE (operands[3]) == EQ\n\
       || GET_CODE (operands[3]) == NE\n\
       || GET_CODE (operands[3]) == GE\n\
       || GET_CODE (operands[3]) == LT)",
    __builtin_constant_p 
#line 7619 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (GET_CODE (operands[3]) == EQ
       || GET_CODE (operands[3]) == NE
       || GET_CODE (operands[3]) == GE
       || GET_CODE (operands[3]) == LT))
    ? (int) 
#line 7619 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (GET_CODE (operands[3]) == EQ
       || GET_CODE (operands[3]) == NE
       || GET_CODE (operands[3]) == GE
       || GET_CODE (operands[3]) == LT))
    : -1 },
#line 1094 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && reload_completed\n\
   && GET_CODE(operands[3]) != PLUS\n\
   && GET_CODE(operands[3]) != MINUS",
    __builtin_constant_p 
#line 1094 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed
   && GET_CODE(operands[3]) != PLUS
   && GET_CODE(operands[3]) != MINUS)
    ? (int) 
#line 1094 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed
   && GET_CODE(operands[3]) != PLUS
   && GET_CODE(operands[3]) != MINUS)
    : -1 },
#line 5344 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "flag_pic",
    __builtin_constant_p 
#line 5344 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(flag_pic)
    ? (int) 
#line 5344 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(flag_pic)
    : -1 },
#line 3700 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT && (TARGET_FPA || TARGET_VFP)",
    __builtin_constant_p 
#line 3700 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && (TARGET_FPA || TARGET_VFP))
    ? (int) 
#line 3700 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && (TARGET_FPA || TARGET_VFP))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_INT_SIMD)",
    __builtin_constant_p (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 4619 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_INT_SIMD))
    ? (int) (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 4619 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_INT_SIMD))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT && XVECLEN (operands[0], 0) == 3)",
    __builtin_constant_p (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 6533 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 3))
    ? (int) (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 6533 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 3))
    : -1 },
#line 11083 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_32BIT && arm_arch_thumb2",
    __builtin_constant_p 
#line 11083 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch_thumb2)
    ? (int) 
#line 11083 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch_thumb2)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_ARM\n\
   && TARGET_HARD_FLOAT && TARGET_FPA\n\
   && (GET_CODE (operands[0]) != MEM\n\
       || register_operand (operands[1], SFmode)))",
    __builtin_constant_p (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 531 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md"
(TARGET_ARM
   && TARGET_HARD_FLOAT && TARGET_FPA
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], SFmode))))
    ? (int) (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 531 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md"
(TARGET_ARM
   && TARGET_HARD_FLOAT && TARGET_FPA
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], SFmode))))
    : -1 },
#line 4550 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_ARM && arm_arch4",
    __builtin_constant_p 
#line 4550 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch4)
    ? (int) 
#line 4550 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch4)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT && arm_arch6)",
    __builtin_constant_p (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 11203 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6))
    ? (int) (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 11203 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6))
    : -1 },
#line 6519 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_32BIT && XVECLEN (operands[0], 0) == 4",
    __builtin_constant_p 
#line 6519 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 4)
    ? (int) 
#line 6519 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 4)
    : -1 },
#line 493 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md"
  { "TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_MAVERICK\n\
   && (GET_CODE (operands[0]) != MEM\n\
       || register_operand (operands[1], SFmode))",
    __builtin_constant_p 
#line 493 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_MAVERICK
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], SFmode)))
    ? (int) 
#line 493 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_MAVERICK
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], SFmode)))
    : -1 },
#line 5337 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_VXWORKS_RTP && TARGET_ARM && flag_pic",
    __builtin_constant_p 
#line 5337 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_VXWORKS_RTP && TARGET_ARM && flag_pic)
    ? (int) 
#line 5337 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_VXWORKS_RTP && TARGET_ARM && flag_pic)
    : -1 },
#line 78 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md"
  { "TARGET_REALLY_IWMMXT\n\
   && (   register_operand (operands[0], DImode)\n\
       || register_operand (operands[1], DImode))",
    __builtin_constant_p 
#line 78 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md"
(TARGET_REALLY_IWMMXT
   && (   register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    ? (int) 
#line 78 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md"
(TARGET_REALLY_IWMMXT
   && (   register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT && XVECLEN (operands[0], 0) == 5)",
    __builtin_constant_p (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 6451 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 5))
    ? (int) (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 6451 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 5))
    : -1 },
#line 8628 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_ARM\n\
   && (GET_CODE (operands[0]) == SYMBOL_REF)\n\
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[0]))",
    __builtin_constant_p 
#line 8628 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM
   && (GET_CODE (operands[0]) == SYMBOL_REF)
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[0])))
    ? (int) 
#line 8628 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM
   && (GET_CODE (operands[0]) == SYMBOL_REF)
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[0])))
    : -1 },
#line 5150 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_ARM && ! TARGET_IWMMXT\n\
   && !(TARGET_HARD_FLOAT && TARGET_VFP)\n\
   && (   register_operand (operands[0], SImode)\n\
       || register_operand (operands[1], SImode))",
    __builtin_constant_p 
#line 5150 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && ! TARGET_IWMMXT
   && !(TARGET_HARD_FLOAT && TARGET_VFP)
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode)))
    ? (int) 
#line 5150 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && ! TARGET_IWMMXT
   && !(TARGET_HARD_FLOAT && TARGET_VFP)
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode)))
    : -1 },
#line 1981 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && GET_CODE (operands[2]) == CONST_INT\n\
   && !(const_ok_for_arm (INTVAL (operands[2]))\n\
	|| const_ok_for_arm (~INTVAL (operands[2])))",
    __builtin_constant_p 
#line 1981 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT
   && GET_CODE (operands[2]) == CONST_INT
   && !(const_ok_for_arm (INTVAL (operands[2]))
	|| const_ok_for_arm (~INTVAL (operands[2]))))
    ? (int) 
#line 1981 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT
   && GET_CODE (operands[2]) == CONST_INT
   && !(const_ok_for_arm (INTVAL (operands[2]))
	|| const_ok_for_arm (~INTVAL (operands[2]))))
    : -1 },
#line 1074 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2\n\
   && (rtx_equal_p(operands[0], operands[1])\n\
       || GET_CODE(operands[3]) == PLUS\n\
       || GET_CODE(operands[3]) == MINUS)\n\
   && peep2_regno_dead_p(0, CC_REGNUM)",
    __builtin_constant_p 
#line 1074 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && (rtx_equal_p(operands[0], operands[1])
       || GET_CODE(operands[3]) == PLUS
       || GET_CODE(operands[3]) == MINUS)
   && peep2_regno_dead_p(0, CC_REGNUM))
    ? (int) 
#line 1074 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && (rtx_equal_p(operands[0], operands[1])
       || GET_CODE(operands[3]) == PLUS
       || GET_CODE(operands[3]) == MINUS)
   && peep2_regno_dead_p(0, CC_REGNUM))
    : -1 },
#line 1297 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && optimize_size",
    __builtin_constant_p 
#line 1297 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && optimize_size)
    ? (int) 
#line 1297 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && optimize_size)
    : -1 },
#line 1337 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_32BIT && !arm_arch6",
    __builtin_constant_p 
#line 1337 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && !arm_arch6)
    ? (int) 
#line 1337 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && !arm_arch6)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT && !TARGET_IWMMXT)",
    __builtin_constant_p (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 2722 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && !TARGET_IWMMXT))
    ? (int) (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 2722 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && !TARGET_IWMMXT))
    : -1 },
#line 5684 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_THUMB1\n\
   && (   register_operand (operands[0], HImode)\n\
       || register_operand (operands[1], HImode))",
    __builtin_constant_p 
#line 5684 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (   register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode)))
    ? (int) 
#line 5684 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (   register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode)))
    : -1 },
#line 78 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vec-common.md"
  { "TARGET_NEON || (V4HImode == V4HImode && TARGET_REALLY_IWMMXT)",
    __builtin_constant_p 
#line 78 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vec-common.md"
(TARGET_NEON || (V4HImode == V4HImode && TARGET_REALLY_IWMMXT))
    ? (int) 
#line 78 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vec-common.md"
(TARGET_NEON || (V4HImode == V4HImode && TARGET_REALLY_IWMMXT))
    : -1 },
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_32BIT",
    __builtin_constant_p 
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT)
    ? (int) 
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT)
    : -1 },
#line 11203 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_32BIT && arm_arch6",
    __builtin_constant_p 
#line 11203 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6)
    ? (int) 
#line 11203 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6)
    : -1 },
#line 508 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], V4SFmode)\n\
       || register_operand (operands[1], V4SFmode))",
    __builtin_constant_p 
#line 508 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V4SFmode)
       || register_operand (operands[1], V4SFmode)))
    ? (int) 
#line 508 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V4SFmode)
       || register_operand (operands[1], V4SFmode)))
    : -1 },
#line 531 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md"
  { "TARGET_ARM\n\
   && TARGET_HARD_FLOAT && TARGET_FPA\n\
   && (GET_CODE (operands[0]) != MEM\n\
       || register_operand (operands[1], SFmode))",
    __builtin_constant_p 
#line 531 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md"
(TARGET_ARM
   && TARGET_HARD_FLOAT && TARGET_FPA
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], SFmode)))
    ? (int) 
#line 531 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md"
(TARGET_ARM
   && TARGET_HARD_FLOAT && TARGET_FPA
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], SFmode)))
    : -1 },
#line 686 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md"
  { "TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_FPA && reload_completed",
    __builtin_constant_p 
#line 686 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_FPA && reload_completed)
    ? (int) 
#line 686 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_FPA && reload_completed)
    : -1 },
#line 113 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vec-common.md"
  { "TARGET_NEON\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V16QImode))",
    __builtin_constant_p 
#line 113 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V16QImode)))
    ? (int) 
#line 113 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V16QImode)))
    : -1 },
#line 78 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vec-common.md"
  { "TARGET_NEON || (V4SImode == V4HImode && TARGET_REALLY_IWMMXT)",
    __builtin_constant_p 
#line 78 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vec-common.md"
(TARGET_NEON || (V4SImode == V4HImode && TARGET_REALLY_IWMMXT))
    ? (int) 
#line 78 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vec-common.md"
(TARGET_NEON || (V4SImode == V4HImode && TARGET_REALLY_IWMMXT))
    : -1 },
#line 9521 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_ARM\n\
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_OR_Y)\n\
       != CCmode)",
    __builtin_constant_p 
#line 9521 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_OR_Y)
       != CCmode))
    ? (int) 
#line 9521 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_OR_Y)
       != CCmode))
    : -1 },
#line 459 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], V4HImode)\n\
       || register_operand (operands[1], V4HImode))",
    __builtin_constant_p 
#line 459 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V4HImode)
       || register_operand (operands[1], V4HImode)))
    ? (int) 
#line 459 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V4HImode)
       || register_operand (operands[1], V4HImode)))
    : -1 },
#line 4260 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && ((unsigned HOST_WIDE_INT) INTVAL (operands[3])\n\
       == (GET_MODE_MASK (GET_MODE (operands[5]))\n\
           & (GET_MODE_MASK (GET_MODE (operands[5]))\n\
	      << (INTVAL (operands[2])))))",
    __builtin_constant_p 
#line 4260 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT
   && ((unsigned HOST_WIDE_INT) INTVAL (operands[3])
       == (GET_MODE_MASK (GET_MODE (operands[5]))
           & (GET_MODE_MASK (GET_MODE (operands[5]))
	      << (INTVAL (operands[2]))))))
    ? (int) 
#line 4260 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT
   && ((unsigned HOST_WIDE_INT) INTVAL (operands[3])
       == (GET_MODE_MASK (GET_MODE (operands[5]))
           & (GET_MODE_MASK (GET_MODE (operands[5]))
	      << (INTVAL (operands[2]))))))
    : -1 },
#line 4619 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_INT_SIMD",
    __builtin_constant_p 
#line 4619 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_INT_SIMD)
    ? (int) 
#line 4619 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_INT_SIMD)
    : -1 },
#line 564 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
  { "TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE",
    __builtin_constant_p 
#line 564 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE)
    ? (int) 
#line 564 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE)
    : -1 },
#line 278 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_MAVERICK && 0",
    __builtin_constant_p 
#line 278 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_MAVERICK && 0)
    ? (int) 
#line 278 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_MAVERICK && 0)
    : -1 },
#line 1271 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && optimize_size && reload_completed",
    __builtin_constant_p 
#line 1271 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && optimize_size && reload_completed)
    ? (int) 
#line 1271 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && optimize_size && reload_completed)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT && ! TARGET_IWMMXT)",
    __builtin_constant_p (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 2592 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && ! TARGET_IWMMXT))
    ? (int) (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 2592 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && ! TARGET_IWMMXT))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_THUMB2\n\
   && TARGET_SOFT_FLOAT\n\
   && (GET_CODE (operands[0]) != MEM\n\
       || register_operand (operands[1], SFmode)))",
    __builtin_constant_p (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 282 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && TARGET_SOFT_FLOAT
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], SFmode))))
    ? (int) (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 282 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && TARGET_SOFT_FLOAT
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], SFmode))))
    : -1 },
#line 625 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && GET_CODE (operands[2]) == CONST_INT\n\
   && !(const_ok_for_arm (INTVAL (operands[2]))\n\
        || const_ok_for_arm (-INTVAL (operands[2])))\n\
   && (reload_completed || !arm_eliminable_register (operands[1]))",
    __builtin_constant_p 
#line 625 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT
   && GET_CODE (operands[2]) == CONST_INT
   && !(const_ok_for_arm (INTVAL (operands[2]))
        || const_ok_for_arm (-INTVAL (operands[2])))
   && (reload_completed || !arm_eliminable_register (operands[1])))
    ? (int) 
#line 625 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT
   && GET_CODE (operands[2]) == CONST_INT
   && !(const_ok_for_arm (INTVAL (operands[2]))
        || const_ok_for_arm (-INTVAL (operands[2])))
   && (reload_completed || !arm_eliminable_register (operands[1])))
    : -1 },
  { "(TARGET_THUMB2) && ( reload_completed)",
    __builtin_constant_p (
#line 953 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2) && 
#line 957 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
( reload_completed))
    ? (int) (
#line 953 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2) && 
#line 957 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
( reload_completed))
    : -1 },
#line 5261 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_THUMB1 && flag_pic",
    __builtin_constant_p 
#line 5261 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_THUMB1 && flag_pic)
    ? (int) 
#line 5261 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_THUMB1 && flag_pic)
    : -1 },
#line 2491 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && reload_completed\n\
   && operands[0] != operands[1]",
    __builtin_constant_p 
#line 2491 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT
   && reload_completed
   && operands[0] != operands[1])
    ? (int) 
#line 2491 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT
   && reload_completed
   && operands[0] != operands[1])
    : -1 },
#line 1109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2\n\
   && peep2_regno_dead_p(0, CC_REGNUM)\n\
   && ((GET_CODE(operands[3]) != ROTATE && GET_CODE(operands[3]) != ROTATERT)\n\
       || REG_P(operands[2]))",
    __builtin_constant_p 
#line 1109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && peep2_regno_dead_p(0, CC_REGNUM)
   && ((GET_CODE(operands[3]) != ROTATE && GET_CODE(operands[3]) != ROTATERT)
       || REG_P(operands[2])))
    ? (int) 
#line 1109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && peep2_regno_dead_p(0, CC_REGNUM)
   && ((GET_CODE(operands[3]) != ROTATE && GET_CODE(operands[3]) != ROTATERT)
       || REG_P(operands[2])))
    : -1 },
#line 1425 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2\n\
   && GET_CODE (operands[2]) == CONST_INT\n\
   && !(const_ok_for_arm (INTVAL (operands[2]))\n\
	|| const_ok_for_arm (~INTVAL (operands[2])))",
    __builtin_constant_p 
#line 1425 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && GET_CODE (operands[2]) == CONST_INT
   && !(const_ok_for_arm (INTVAL (operands[2]))
	|| const_ok_for_arm (~INTVAL (operands[2]))))
    ? (int) 
#line 1425 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && GET_CODE (operands[2]) == CONST_INT
   && !(const_ok_for_arm (INTVAL (operands[2]))
	|| const_ok_for_arm (~INTVAL (operands[2]))))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_THUMB2 && optimize_size && reload_completed)",
    __builtin_constant_p (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1271 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && optimize_size && reload_completed))
    ? (int) (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1271 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && optimize_size && reload_completed))
    : -1 },
#line 4983 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_LDRD\n\
  && reg_overlap_mentioned_p (operands[0], operands[1])\n\
  && reg_overlap_mentioned_p (operands[0], operands[2])",
    __builtin_constant_p 
#line 4983 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_LDRD
  && reg_overlap_mentioned_p (operands[0], operands[1])
  && reg_overlap_mentioned_p (operands[0], operands[2]))
    ? (int) 
#line 4983 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_LDRD
  && reg_overlap_mentioned_p (operands[0], operands[1])
  && reg_overlap_mentioned_p (operands[0], operands[2]))
    : -1 },
#line 8727 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_ARM && GET_CODE (operands[1]) == SYMBOL_REF",
    __builtin_constant_p 
#line 8727 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && GET_CODE (operands[1]) == SYMBOL_REF)
    ? (int) 
#line 8727 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && GET_CODE (operands[1]) == SYMBOL_REF)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT && XVECLEN (operands[0], 0) == 4)",
    __builtin_constant_p (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 6519 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 4))
    ? (int) (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 6519 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 4))
    : -1 },
  { "(TARGET_THUMB1) && ( reload_completed)",
    __builtin_constant_p (
#line 11156 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_THUMB1) && 
#line 11158 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
( reload_completed))
    ? (int) (
#line 11156 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_THUMB1) && 
#line 11158 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
( reload_completed))
    : -1 },
#line 5772 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_ARM\n\
   && arm_arch4\n\
   && (GET_CODE (operands[1]) != CONST_INT\n\
       || const_ok_for_arm (INTVAL (operands[1]))\n\
       || const_ok_for_arm (~INTVAL (operands[1])))",
    __builtin_constant_p 
#line 5772 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM
   && arm_arch4
   && (GET_CODE (operands[1]) != CONST_INT
       || const_ok_for_arm (INTVAL (operands[1]))
       || const_ok_for_arm (~INTVAL (operands[1]))))
    ? (int) 
#line 5772 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM
   && arm_arch4
   && (GET_CODE (operands[1]) != CONST_INT
       || const_ok_for_arm (INTVAL (operands[1]))
       || const_ok_for_arm (~INTVAL (operands[1]))))
    : -1 },
#line 649 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md"
  { "TARGET_THUMB2\n\
   && TARGET_HARD_FLOAT && TARGET_FPA\n\
   && (GET_CODE (operands[0]) != MEM\n\
       || register_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 649 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md"
(TARGET_THUMB2
   && TARGET_HARD_FLOAT && TARGET_FPA
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], DFmode)))
    ? (int) 
#line 649 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md"
(TARGET_THUMB2
   && TARGET_HARD_FLOAT && TARGET_FPA
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], DFmode)))
    : -1 },
#line 268 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FP16 && !TARGET_NEON_FP16\n\
   && (   s_register_operand (operands[0], HFmode)\n\
       || s_register_operand (operands[1], HFmode))",
    __builtin_constant_p 
#line 268 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FP16 && !TARGET_NEON_FP16
   && (   s_register_operand (operands[0], HFmode)
       || s_register_operand (operands[1], HFmode)))
    ? (int) 
#line 268 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FP16 && !TARGET_NEON_FP16
   && (   s_register_operand (operands[0], HFmode)
       || s_register_operand (operands[1], HFmode)))
    : -1 },
#line 8344 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_ARM && TARGET_SOFT_FLOAT",
    __builtin_constant_p 
#line 8344 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && TARGET_SOFT_FLOAT)
    ? (int) 
#line 8344 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && TARGET_SOFT_FLOAT)
    : -1 },
#line 78 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vec-common.md"
  { "TARGET_NEON || (V2SFmode == V4HImode && TARGET_REALLY_IWMMXT)",
    __builtin_constant_p 
#line 78 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vec-common.md"
(TARGET_NEON || (V2SFmode == V4HImode && TARGET_REALLY_IWMMXT))
    ? (int) 
#line 78 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vec-common.md"
(TARGET_NEON || (V2SFmode == V4HImode && TARGET_REALLY_IWMMXT))
    : -1 },
#line 4883 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_ARM\n\
   && !(TARGET_HARD_FLOAT && (TARGET_MAVERICK || TARGET_VFP))\n\
   && !TARGET_IWMMXT\n\
   && (   register_operand (operands[0], DImode)\n\
       || register_operand (operands[1], DImode))",
    __builtin_constant_p 
#line 4883 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM
   && !(TARGET_HARD_FLOAT && (TARGET_MAVERICK || TARGET_VFP))
   && !TARGET_IWMMXT
   && (   register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    ? (int) 
#line 4883 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM
   && !(TARGET_HARD_FLOAT && (TARGET_MAVERICK || TARGET_VFP))
   && !TARGET_IWMMXT
   && (   register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    : -1 },
#line 113 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vec-common.md"
  { "TARGET_NEON\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4HImode))",
    __builtin_constant_p 
#line 113 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4HImode)))
    ? (int) 
#line 113 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4HImode)))
    : -1 },
#line 2273 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_ARM || arm_arch_thumb2",
    __builtin_constant_p 
#line 2273 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM || arm_arch_thumb2)
    ? (int) 
#line 2273 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM || arm_arch_thumb2)
    : -1 },
#line 10462 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_ARM && load_multiple_sequence (operands, 3, NULL, NULL, NULL)",
    __builtin_constant_p 
#line 10462 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && load_multiple_sequence (operands, 3, NULL, NULL, NULL))
    ? (int) 
#line 10462 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && load_multiple_sequence (operands, 3, NULL, NULL, NULL))
    : -1 },
#line 10526 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_ARM",
    __builtin_constant_p 
#line 10526 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM)
    ? (int) 
#line 10526 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM)
    : -1 },
#line 10326 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_ARM && adjacent_mem_locations (operands[2], operands[3])",
    __builtin_constant_p 
#line 10326 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && adjacent_mem_locations (operands[2], operands[3]))
    ? (int) 
#line 10326 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && adjacent_mem_locations (operands[2], operands[3]))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_ARM && TARGET_HARD_FLOAT && TARGET_FPA\n\
   && (register_operand (operands[0], XFmode)\n\
       || register_operand (operands[1], XFmode)))",
    __builtin_constant_p (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 594 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_FPA
   && (register_operand (operands[0], XFmode)
       || register_operand (operands[1], XFmode))))
    ? (int) (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 594 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_FPA
   && (register_operand (operands[0], XFmode)
       || register_operand (operands[1], XFmode))))
    : -1 },
#line 620 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md"
  { "TARGET_THUMB2\n\
   && TARGET_HARD_FLOAT && TARGET_FPA\n\
   && (GET_CODE (operands[0]) != MEM\n\
       || register_operand (operands[1], SFmode))",
    __builtin_constant_p 
#line 620 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md"
(TARGET_THUMB2
   && TARGET_HARD_FLOAT && TARGET_FPA
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], SFmode)))
    ? (int) 
#line 620 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md"
(TARGET_THUMB2
   && TARGET_HARD_FLOAT && TARGET_FPA
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], SFmode)))
    : -1 },
#line 7766 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_THUMB1\n\
   && (GET_CODE (operands[0]) == EQ\n\
       || GET_CODE (operands[0]) == NE\n\
       || GET_CODE (operands[0]) == GE\n\
       || GET_CODE (operands[0]) == LT)",
    __builtin_constant_p 
#line 7766 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (GET_CODE (operands[0]) == EQ
       || GET_CODE (operands[0]) == NE
       || GET_CODE (operands[0]) == GE
       || GET_CODE (operands[0]) == LT))
    ? (int) 
#line 7766 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (GET_CODE (operands[0]) == EQ
       || GET_CODE (operands[0]) == NE
       || GET_CODE (operands[0]) == GE
       || GET_CODE (operands[0]) == LT))
    : -1 },
#line 9577 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_ARM\n\
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_AND_Y)\n\
       != CCmode)",
    __builtin_constant_p 
#line 9577 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_AND_Y)
       != CCmode))
    ? (int) 
#line 9577 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_AND_Y)
       != CCmode))
    : -1 },
#line 750 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_32BIT && INTVAL (operands[2]) == -INTVAL (operands[3])",
    __builtin_constant_p 
#line 750 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && INTVAL (operands[2]) == -INTVAL (operands[3]))
    ? (int) 
#line 750 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && INTVAL (operands[2]) == -INTVAL (operands[3]))
    : -1 },
#line 5922 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && (   register_operand (operands[0], QImode)\n\
       || register_operand (operands[1], QImode))",
    __builtin_constant_p 
#line 5922 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (   register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode)))
    ? (int) 
#line 5922 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (   register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode)))
    : -1 },
#line 11173 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_HARD_TP",
    __builtin_constant_p 
#line 11173 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_HARD_TP)
    ? (int) 
#line 11173 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_HARD_TP)
    : -1 },
#line 9581 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_ARM && reload_completed\n\
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_AND_Y)\n\
       != CCmode)",
    __builtin_constant_p 
#line 9581 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && reload_completed
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_AND_Y)
       != CCmode))
    ? (int) 
#line 9581 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && reload_completed
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_AND_Y)
       != CCmode))
    : -1 },
#line 6022 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_THUMB1\n\
   && (	  s_register_operand (operands[0], HFmode) \n\
       || s_register_operand (operands[1], HFmode))",
    __builtin_constant_p 
#line 6022 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (	  s_register_operand (operands[0], HFmode) 
       || s_register_operand (operands[1], HFmode)))
    ? (int) 
#line 6022 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (	  s_register_operand (operands[0], HFmode) 
       || s_register_operand (operands[1], HFmode)))
    : -1 },
#line 508 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], V4SImode)\n\
       || register_operand (operands[1], V4SImode))",
    __builtin_constant_p 
#line 508 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V4SImode)
       || register_operand (operands[1], V4SImode)))
    ? (int) 
#line 508 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V4SImode)
       || register_operand (operands[1], V4SImode)))
    : -1 },
#line 2133 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_ARM\n\
   && (INTVAL (operands[3]) >= 0 && INTVAL (operands[3]) < 32\n\
       && INTVAL (operands[2]) > 0 \n\
       && INTVAL (operands[2]) + (INTVAL (operands[3]) & 1) <= 8\n\
       && INTVAL (operands[2]) + INTVAL (operands[3]) <= 32)\n\
   && !reg_overlap_mentioned_p (operands[0], operands[4])",
    __builtin_constant_p 
#line 2133 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM
   && (INTVAL (operands[3]) >= 0 && INTVAL (operands[3]) < 32
       && INTVAL (operands[2]) > 0 
       && INTVAL (operands[2]) + (INTVAL (operands[3]) & 1) <= 8
       && INTVAL (operands[2]) + INTVAL (operands[3]) <= 32)
   && !reg_overlap_mentioned_p (operands[0], operands[4]))
    ? (int) 
#line 2133 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM
   && (INTVAL (operands[3]) >= 0 && INTVAL (operands[3]) < 32
       && INTVAL (operands[2]) > 0 
       && INTVAL (operands[2]) + (INTVAL (operands[3]) & 1) <= 8
       && INTVAL (operands[2]) + INTVAL (operands[3]) <= 32)
   && !reg_overlap_mentioned_p (operands[0], operands[4]))
    : -1 },
#line 495 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
  { "TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP",
    __builtin_constant_p 
#line 495 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP)
    ? (int) 
#line 495 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP)
    : -1 },
#line 8276 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT",
    __builtin_constant_p 
#line 8276 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && TARGET_HARD_FLOAT)
    ? (int) 
#line 8276 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && TARGET_HARD_FLOAT)
    : -1 },
#line 365 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_MAVERICK",
    __builtin_constant_p 
#line 365 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_MAVERICK)
    ? (int) 
#line 365 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_MAVERICK)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_THUMB2 && reload_completed)",
    __builtin_constant_p (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1388 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed))
    ? (int) (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1388 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed))
    : -1 },
#line 4937 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_ARM && reload_completed\n\
   && arm_const_double_by_parts (operands[1])",
    __builtin_constant_p 
#line 4937 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && reload_completed
   && arm_const_double_by_parts (operands[1]))
    ? (int) 
#line 4937 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && reload_completed
   && arm_const_double_by_parts (operands[1]))
    : -1 },
#line 6224 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_THUMB1\n\
   && (   register_operand (operands[0], DFmode)\n\
       || register_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 6224 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (   register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)))
    ? (int) 
#line 6224 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (   register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_THUMB2 && TARGET_VFP && TARGET_HARD_FLOAT\n\
   && (   s_register_operand (operands[0], SImode)\n\
       || s_register_operand (operands[1], SImode)))",
    __builtin_constant_p (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 92 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_VFP && TARGET_HARD_FLOAT
   && (   s_register_operand (operands[0], SImode)
       || s_register_operand (operands[1], SImode))))
    ? (int) (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 92 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_VFP && TARGET_HARD_FLOAT
   && (   s_register_operand (operands[0], SImode)
       || s_register_operand (operands[1], SImode))))
    : -1 },
#line 6094 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_ARM\n\
   && TARGET_SOFT_FLOAT\n\
   && (GET_CODE (operands[0]) != MEM\n\
       || register_operand (operands[1], SFmode))",
    __builtin_constant_p 
#line 6094 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM
   && TARGET_SOFT_FLOAT
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], SFmode)))
    ? (int) 
#line 6094 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM
   && TARGET_SOFT_FLOAT
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], SFmode)))
    : -1 },
#line 78 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vec-common.md"
  { "TARGET_NEON || (V8QImode == V4HImode && TARGET_REALLY_IWMMXT)",
    __builtin_constant_p 
#line 78 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vec-common.md"
(TARGET_NEON || (V8QImode == V4HImode && TARGET_REALLY_IWMMXT))
    ? (int) 
#line 78 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vec-common.md"
(TARGET_NEON || (V8QImode == V4HImode && TARGET_REALLY_IWMMXT))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE)",
    __builtin_constant_p (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1117 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE))
    ? (int) (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1117 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE))
    : -1 },
#line 8563 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_ARM && !arm_arch5",
    __builtin_constant_p 
#line 8563 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && !arm_arch5)
    ? (int) 
#line 8563 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && !arm_arch5)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT && XVECLEN (operands[0], 0) == 2)",
    __builtin_constant_p (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 6545 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 2))
    ? (int) (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 6545 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 2))
    : -1 },
  { "(TARGET_32BIT) && (arm_arch_thumb2)",
    __builtin_constant_p (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 11194 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(arm_arch_thumb2))
    ? (int) (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 11194 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(arm_arch_thumb2))
    : -1 },
#line 1005 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && arm_arch6",
    __builtin_constant_p 
#line 1005 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && arm_arch6)
    ? (int) 
#line 1005 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && arm_arch6)
    : -1 },
#line 10449 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_ARM && load_multiple_sequence (operands, 4, NULL, NULL, NULL)",
    __builtin_constant_p 
#line 10449 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && load_multiple_sequence (operands, 4, NULL, NULL, NULL))
    ? (int) 
#line 10449 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && load_multiple_sequence (operands, 4, NULL, NULL, NULL))
    : -1 },
#line 1848 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_32BIT && operands[0] != operands[1] && reload_completed",
    __builtin_constant_p 
#line 1848 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && operands[0] != operands[1] && reload_completed)
    ? (int) 
#line 1848 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && operands[0] != operands[1] && reload_completed)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_ARM && USE_RETURN_INSN (FALSE))",
    __builtin_constant_p (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 8737 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && USE_RETURN_INSN (FALSE)))
    ? (int) (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 8737 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && USE_RETURN_INSN (FALSE)))
    : -1 },
#line 3714 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_32BIT && reload_completed",
    __builtin_constant_p 
#line 3714 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && reload_completed)
    ? (int) 
#line 3714 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && reload_completed)
    : -1 },
#line 459 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], V8QImode)\n\
       || register_operand (operands[1], V8QImode))",
    __builtin_constant_p 
#line 459 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V8QImode)
       || register_operand (operands[1], V8QImode)))
    ? (int) 
#line 459 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V8QImode)
       || register_operand (operands[1], V8QImode)))
    : -1 },
#line 5248 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_32BIT && flag_pic",
    __builtin_constant_p 
#line 5248 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && flag_pic)
    ? (int) 
#line 5248 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && flag_pic)
    : -1 },
#line 2687 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_ARM\n\
   && !const_ok_for_arm (INTVAL (operands[2]))\n\
   && const_ok_for_arm (~INTVAL (operands[2]))",
    __builtin_constant_p 
#line 2687 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM
   && !const_ok_for_arm (INTVAL (operands[2]))
   && const_ok_for_arm (~INTVAL (operands[2])))
    ? (int) 
#line 2687 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM
   && !const_ok_for_arm (INTVAL (operands[2]))
   && const_ok_for_arm (~INTVAL (operands[2])))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_NEON)",
    __builtin_constant_p (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 2724 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
(TARGET_NEON))
    ? (int) (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 2724 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
(TARGET_NEON))
    : -1 },
#line 10544 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_ARM\n\
   && (((unsigned HOST_WIDE_INT) INTVAL (operands[1]))\n\
       == (((unsigned HOST_WIDE_INT) INTVAL (operands[1])) >> 24) << 24)",
    __builtin_constant_p 
#line 10544 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM
   && (((unsigned HOST_WIDE_INT) INTVAL (operands[1]))
       == (((unsigned HOST_WIDE_INT) INTVAL (operands[1])) >> 24) << 24))
    ? (int) 
#line 10544 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM
   && (((unsigned HOST_WIDE_INT) INTVAL (operands[1]))
       == (((unsigned HOST_WIDE_INT) INTVAL (operands[1])) >> 24) << 24))
    : -1 },
#line 397 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
  { "TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP\n\
   && (   register_operand (operands[0], DFmode)\n\
       || register_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 397 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP
   && (   register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)))
    ? (int) 
#line 397 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP
   && (   register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_THUMB2\n\
   && TARGET_HARD_FLOAT && TARGET_FPA\n\
   && (GET_CODE (operands[0]) != MEM\n\
       || register_operand (operands[1], SFmode)))",
    __builtin_constant_p (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 620 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md"
(TARGET_THUMB2
   && TARGET_HARD_FLOAT && TARGET_FPA
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], SFmode))))
    ? (int) (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 620 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md"
(TARGET_THUMB2
   && TARGET_HARD_FLOAT && TARGET_FPA
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], SFmode))))
    : -1 },
#line 299 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && TARGET_SOFT_FLOAT\n\
   && (   register_operand (operands[0], DFmode)\n\
       || register_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 299 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && TARGET_SOFT_FLOAT
   && (   register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)))
    ? (int) 
#line 299 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && TARGET_SOFT_FLOAT
   && (   register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)))
    : -1 },
#line 508 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], V8HImode)\n\
       || register_operand (operands[1], V8HImode))",
    __builtin_constant_p 
#line 508 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V8HImode)
       || register_operand (operands[1], V8HImode)))
    ? (int) 
#line 508 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V8HImode)
       || register_operand (operands[1], V8HImode)))
    : -1 },
#line 575 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], XImode)\n\
       || register_operand (operands[1], XImode))",
    __builtin_constant_p 
#line 575 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], XImode)
       || register_operand (operands[1], XImode)))
    ? (int) 
#line 575 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], XImode)
       || register_operand (operands[1], XImode)))
    : -1 },
#line 1622 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_32BIT && arm_arch3m && !arm_arch6",
    __builtin_constant_p 
#line 1622 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch3m && !arm_arch6)
    ? (int) 
#line 1622 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch3m && !arm_arch6)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT && !arm_arch6)",
    __builtin_constant_p (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1337 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && !arm_arch6))
    ? (int) (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1337 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && !arm_arch6))
    : -1 },
#line 151 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md"
  { "0 && TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_MAVERICK",
    __builtin_constant_p 
#line 151 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md"
(0 && TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_MAVERICK)
    ? (int) 
#line 151 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md"
(0 && TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_MAVERICK)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT && arm_arch_thumb2)",
    __builtin_constant_p (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 11075 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch_thumb2))
    ? (int) (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 11075 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch_thumb2))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP)",
    __builtin_constant_p (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1093 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP))
    ? (int) (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1093 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_THUMB2 && reload_completed\n\
   && ((GET_CODE(operands[3]) != ROTATE && GET_CODE(operands[3]) != ROTATERT)\n\
       || REG_P(operands[2])))",
    __builtin_constant_p (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1128 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed
   && ((GET_CODE(operands[3]) != ROTATE && GET_CODE(operands[3]) != ROTATERT)
       || REG_P(operands[2]))))
    ? (int) (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1128 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed
   && ((GET_CODE(operands[3]) != ROTATE && GET_CODE(operands[3]) != ROTATERT)
       || REG_P(operands[2]))))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FP16)",
    __builtin_constant_p (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 900 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FP16))
    ? (int) (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 900 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FP16))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP\n\
   && (   register_operand (operands[0], DImode)\n\
       || register_operand (operands[1], DImode)))",
    __builtin_constant_p (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 132 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP
   && (   register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode))))
    ? (int) (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 132 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP
   && (   register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode))))
    : -1 },
#line 4233 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_32BIT && (GET_CODE (operands[1]) != MEM) && ! BYTES_BIG_ENDIAN",
    __builtin_constant_p 
#line 4233 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && (GET_CODE (operands[1]) != MEM) && ! BYTES_BIG_ENDIAN)
    ? (int) 
#line 4233 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && (GET_CODE (operands[1]) != MEM) && ! BYTES_BIG_ENDIAN)
    : -1 },
#line 6649 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_THUMB1 || TARGET_32BIT",
    __builtin_constant_p 
#line 6649 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_THUMB1 || TARGET_32BIT)
    ? (int) 
#line 6649 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_THUMB1 || TARGET_32BIT)
    : -1 },
#line 104 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vec-common.md"
  { "TARGET_NEON\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2SFmode))",
    __builtin_constant_p 
#line 104 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2SFmode)))
    ? (int) 
#line 104 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2SFmode)))
    : -1 },
#line 1609 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_32BIT && arm_arch3m",
    __builtin_constant_p 
#line 1609 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch3m)
    ? (int) 
#line 1609 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch3m)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FPA)",
    __builtin_constant_p (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 522 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FPA))
    ? (int) (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 522 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FPA))
    : -1 },
#line 213 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_NEON_FP16\n\
   && (   s_register_operand (operands[0], HFmode)\n\
       || s_register_operand (operands[1], HFmode))",
    __builtin_constant_p 
#line 213 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_NEON_FP16
   && (   s_register_operand (operands[0], HFmode)
       || s_register_operand (operands[1], HFmode)))
    ? (int) 
#line 213 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_NEON_FP16
   && (   s_register_operand (operands[0], HFmode)
       || s_register_operand (operands[1], HFmode)))
    : -1 },
#line 4629 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_THUMB1 && !arm_arch6",
    __builtin_constant_p 
#line 4629 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_THUMB1 && !arm_arch6)
    ? (int) 
#line 4629 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_THUMB1 && !arm_arch6)
    : -1 },
#line 9639 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_ARM\n\
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_AND_Y)\n\
       == CCmode)",
    __builtin_constant_p 
#line 9639 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_AND_Y)
       == CCmode))
    ? (int) 
#line 9639 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_AND_Y)
       == CCmode))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_THUMB2)",
    __builtin_constant_p (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1420 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2))
    ? (int) (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1420 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2))
    : -1 },
#line 6451 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_32BIT && XVECLEN (operands[0], 0) == 5",
    __builtin_constant_p 
#line 6451 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 5)
    ? (int) 
#line 6451 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 5)
    : -1 },
#line 5046 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
  { "TARGET_NEON",
    __builtin_constant_p 
#line 5046 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
(TARGET_NEON)
    ? (int) 
#line 5046 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
(TARGET_NEON)
    : -1 },
#line 694 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_THUMB1\n\
   && (unsigned HOST_WIDE_INT) (INTVAL (operands[1])) < 1024\n\
   && (INTVAL (operands[1]) & 3) == 0",
    __builtin_constant_p 
#line 694 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (unsigned HOST_WIDE_INT) (INTVAL (operands[1])) < 1024
   && (INTVAL (operands[1]) & 3) == 0)
    ? (int) 
#line 694 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (unsigned HOST_WIDE_INT) (INTVAL (operands[1])) < 1024
   && (INTVAL (operands[1]) & 3) == 0)
    : -1 },
#line 11039 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_THUMB1",
    __builtin_constant_p 
#line 11039 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_THUMB1)
    ? (int) 
#line 11039 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_THUMB1)
    : -1 },
#line 1035 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP",
    __builtin_constant_p 
#line 1035 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP)
    ? (int) 
#line 1035 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP)
    : -1 },
#line 104 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vec-common.md"
  { "TARGET_NEON\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4SFmode))",
    __builtin_constant_p 
#line 104 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4SFmode)))
    ? (int) 
#line 104 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4SFmode)))
    : -1 },
#line 113 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vec-common.md"
  { "TARGET_NEON\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V8QImode))",
    __builtin_constant_p 
#line 113 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V8QImode)))
    ? (int) 
#line 113 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V8QImode)))
    : -1 },
#line 6113 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_THUMB1\n\
   && (   register_operand (operands[0], SFmode) \n\
       || register_operand (operands[1], SFmode))",
    __builtin_constant_p 
#line 6113 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (   register_operand (operands[0], SFmode) 
       || register_operand (operands[1], SFmode)))
    ? (int) 
#line 6113 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (   register_operand (operands[0], SFmode) 
       || register_operand (operands[1], SFmode)))
    : -1 },
#line 6197 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_ARM && TARGET_SOFT_FLOAT\n\
   && (   register_operand (operands[0], DFmode)\n\
       || register_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 6197 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && TARGET_SOFT_FLOAT
   && (   register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)))
    ? (int) 
#line 6197 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && TARGET_SOFT_FLOAT
   && (   register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)))
    : -1 },
#line 1026 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && !flag_pic",
    __builtin_constant_p 
#line 1026 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && !flag_pic)
    ? (int) 
#line 1026 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && !flag_pic)
    : -1 },
#line 4605 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_ARM && arm_arch6",
    __builtin_constant_p 
#line 4605 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch6)
    ? (int) 
#line 4605 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch6)
    : -1 },
#line 1128 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && reload_completed\n\
   && ((GET_CODE(operands[3]) != ROTATE && GET_CODE(operands[3]) != ROTATERT)\n\
       || REG_P(operands[2]))",
    __builtin_constant_p 
#line 1128 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed
   && ((GET_CODE(operands[3]) != ROTATE && GET_CODE(operands[3]) != ROTATERT)
       || REG_P(operands[2])))
    ? (int) 
#line 1128 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed
   && ((GET_CODE(operands[3]) != ROTATE && GET_CODE(operands[3]) != ROTATERT)
       || REG_P(operands[2])))
    : -1 },
#line 8164 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_ARM && TARGET_HARD_FLOAT && TARGET_MAVERICK",
    __builtin_constant_p 
#line 8164 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_MAVERICK)
    ? (int) 
#line 8164 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_MAVERICK)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_ARM\n\
   && TARGET_SOFT_FLOAT\n\
   && (GET_CODE (operands[0]) != MEM\n\
       || register_operand (operands[1], SFmode)))",
    __builtin_constant_p (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 6094 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM
   && TARGET_SOFT_FLOAT
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], SFmode))))
    ? (int) (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 6094 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_ARM
   && TARGET_SOFT_FLOAT
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], SFmode))))
    : -1 },
#line 575 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], OImode)\n\
       || register_operand (operands[1], OImode))",
    __builtin_constant_p 
#line 575 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], OImode)
       || register_operand (operands[1], OImode)))
    ? (int) 
#line 575 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], OImode)
       || register_operand (operands[1], OImode)))
    : -1 },
#line 8593 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_THUMB1 && arm_arch5",
    __builtin_constant_p 
#line 8593 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_THUMB1 && arm_arch5)
    ? (int) 
#line 8593 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_THUMB1 && arm_arch5)
    : -1 },
#line 78 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vec-common.md"
  { "TARGET_NEON || (V4SFmode == V4HImode && TARGET_REALLY_IWMMXT)",
    __builtin_constant_p 
#line 78 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vec-common.md"
(TARGET_NEON || (V4SFmode == V4HImode && TARGET_REALLY_IWMMXT))
    ? (int) 
#line 78 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vec-common.md"
(TARGET_NEON || (V4SFmode == V4HImode && TARGET_REALLY_IWMMXT))
    : -1 },
#line 461 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md"
  { "TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_MAVERICK",
    __builtin_constant_p 
#line 461 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_MAVERICK)
    ? (int) 
#line 461 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_MAVERICK)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_REALLY_IWMMXT)",
    __builtin_constant_p (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1336 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md"
(TARGET_REALLY_IWMMXT))
    ? (int) (
#line 11109 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1336 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md"
(TARGET_REALLY_IWMMXT))
    : -1 },
#line 11269 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_THUMB",
    __builtin_constant_p 
#line 11269 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_THUMB)
    ? (int) 
#line 11269 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_THUMB)
    : -1 },
#line 69 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vec-common.md"
  { "TARGET_NEON\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2DImode))",
    __builtin_constant_p 
#line 69 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2DImode)))
    ? (int) 
#line 69 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2DImode)))
    : -1 },
#line 409 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md"
  { "TARGET_ARM && TARGET_HARD_FLOAT && TARGET_MAVERICK\n\
   && (GET_CODE (operands[0]) != MEM\n\
       || register_operand (operands[1], SFmode))",
    __builtin_constant_p 
#line 409 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_MAVERICK
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], SFmode)))
    ? (int) 
#line 409 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_MAVERICK
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], SFmode)))
    : -1 },
#line 8302 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT && (TARGET_FPA || TARGET_VFP_DOUBLE)",
    __builtin_constant_p 
#line 8302 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && (TARGET_FPA || TARGET_VFP_DOUBLE))
    ? (int) 
#line 8302 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && (TARGET_FPA || TARGET_VFP_DOUBLE))
    : -1 },

};
#endif /* gcc >= 3.0.1 */

int
main(void)
{
  unsigned int i;
  const char *p;
  puts ("(define_conditions [");
#if GCC_VERSION >= 3001
  for (i = 0; i < ARRAY_SIZE (insn_conditions); i++)
    {
      printf ("  (%d \"", insn_conditions[i].value);
      for (p = insn_conditions[i].expr; *p; p++)
        {
          switch (*p)
	     {
	     case '\\':
	     case '\"': putchar ('\\'); break;
	     default: break;
	     }
          putchar (*p);
        }
      puts ("\")");
    }
#endif /* gcc >= 3.0.1 */
  puts ("])");
  fflush (stdout);
return ferror (stdout) != 0 ? FATAL_EXIT_CODE : SUCCESS_EXIT_CODE;
}
