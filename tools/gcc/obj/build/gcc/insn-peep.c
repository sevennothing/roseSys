/* Generated automatically by the program `genpeep'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "insn-config.h"
#include "rtl.h"
#include "tm_p.h"
#include "regs.h"
#include "output.h"
#include "real.h"
#include "recog.h"
#include "except.h"
#include "function.h"
#include "toplev.h"
#include "flags.h"
#include "tm-constrs.h"

#ifdef HAVE_peephole
extern rtx peep_operand[];

#define operands peep_operand

rtx
peephole (rtx ins1)
{
  rtx insn ATTRIBUTE_UNUSED, x ATTRIBUTE_UNUSED, pat ATTRIBUTE_UNUSED;

  if (NEXT_INSN (ins1)
      && BARRIER_P (NEXT_INSN (ins1)))
    return 0;

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L1869;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! s_register_operand (x, SImode)) goto L1869;
  x = XEXP (pat, 1);
  operands[4] = x;
  if (! memory_operand (x, SImode)) goto L1869;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L1869; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L1869;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L1869;
  x = XEXP (pat, 0);
  operands[1] = x;
  if (! s_register_operand (x, SImode)) goto L1869;
  x = XEXP (pat, 1);
  operands[5] = x;
  if (! memory_operand (x, SImode)) goto L1869;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L1869; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L1869;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L1869;
  x = XEXP (pat, 0);
  operands[2] = x;
  if (! s_register_operand (x, SImode)) goto L1869;
  x = XEXP (pat, 1);
  operands[6] = x;
  if (! memory_operand (x, SImode)) goto L1869;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L1869; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L1869;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L1869;
  x = XEXP (pat, 0);
  operands[3] = x;
  if (! s_register_operand (x, SImode)) goto L1869;
  x = XEXP (pat, 1);
  operands[7] = x;
  if (! memory_operand (x, SImode)) goto L1869;
  if (! (TARGET_ARM && load_multiple_sequence (operands, 4, NULL, NULL, NULL))) goto L1869;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (8, operands));
  INSN_CODE (ins1) = 1869;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L1869:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L1870;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! s_register_operand (x, SImode)) goto L1870;
  x = XEXP (pat, 1);
  operands[3] = x;
  if (! memory_operand (x, SImode)) goto L1870;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L1870; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L1870;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L1870;
  x = XEXP (pat, 0);
  operands[1] = x;
  if (! s_register_operand (x, SImode)) goto L1870;
  x = XEXP (pat, 1);
  operands[4] = x;
  if (! memory_operand (x, SImode)) goto L1870;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L1870; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L1870;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L1870;
  x = XEXP (pat, 0);
  operands[2] = x;
  if (! s_register_operand (x, SImode)) goto L1870;
  x = XEXP (pat, 1);
  operands[5] = x;
  if (! memory_operand (x, SImode)) goto L1870;
  if (! (TARGET_ARM && load_multiple_sequence (operands, 3, NULL, NULL, NULL))) goto L1870;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (6, operands));
  INSN_CODE (ins1) = 1870;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L1870:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L1871;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! s_register_operand (x, SImode)) goto L1871;
  x = XEXP (pat, 1);
  operands[2] = x;
  if (! memory_operand (x, SImode)) goto L1871;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L1871; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L1871;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L1871;
  x = XEXP (pat, 0);
  operands[1] = x;
  if (! s_register_operand (x, SImode)) goto L1871;
  x = XEXP (pat, 1);
  operands[3] = x;
  if (! memory_operand (x, SImode)) goto L1871;
  if (! (TARGET_ARM && load_multiple_sequence (operands, 2, NULL, NULL, NULL))) goto L1871;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (4, operands));
  INSN_CODE (ins1) = 1871;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L1871:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L1872;
  x = XEXP (pat, 0);
  operands[4] = x;
  if (! memory_operand (x, SImode)) goto L1872;
  x = XEXP (pat, 1);
  operands[0] = x;
  if (! s_register_operand (x, SImode)) goto L1872;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L1872; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L1872;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L1872;
  x = XEXP (pat, 0);
  operands[5] = x;
  if (! memory_operand (x, SImode)) goto L1872;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! s_register_operand (x, SImode)) goto L1872;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L1872; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L1872;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L1872;
  x = XEXP (pat, 0);
  operands[6] = x;
  if (! memory_operand (x, SImode)) goto L1872;
  x = XEXP (pat, 1);
  operands[2] = x;
  if (! s_register_operand (x, SImode)) goto L1872;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L1872; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L1872;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L1872;
  x = XEXP (pat, 0);
  operands[7] = x;
  if (! memory_operand (x, SImode)) goto L1872;
  x = XEXP (pat, 1);
  operands[3] = x;
  if (! s_register_operand (x, SImode)) goto L1872;
  if (! (TARGET_ARM && store_multiple_sequence (operands, 4, NULL, NULL, NULL))) goto L1872;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (8, operands));
  INSN_CODE (ins1) = 1872;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L1872:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L1873;
  x = XEXP (pat, 0);
  operands[3] = x;
  if (! memory_operand (x, SImode)) goto L1873;
  x = XEXP (pat, 1);
  operands[0] = x;
  if (! s_register_operand (x, SImode)) goto L1873;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L1873; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L1873;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L1873;
  x = XEXP (pat, 0);
  operands[4] = x;
  if (! memory_operand (x, SImode)) goto L1873;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! s_register_operand (x, SImode)) goto L1873;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L1873; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L1873;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L1873;
  x = XEXP (pat, 0);
  operands[5] = x;
  if (! memory_operand (x, SImode)) goto L1873;
  x = XEXP (pat, 1);
  operands[2] = x;
  if (! s_register_operand (x, SImode)) goto L1873;
  if (! (TARGET_ARM && store_multiple_sequence (operands, 3, NULL, NULL, NULL))) goto L1873;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (6, operands));
  INSN_CODE (ins1) = 1873;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L1873:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L1874;
  x = XEXP (pat, 0);
  operands[2] = x;
  if (! memory_operand (x, SImode)) goto L1874;
  x = XEXP (pat, 1);
  operands[0] = x;
  if (! s_register_operand (x, SImode)) goto L1874;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L1874; }
  while (NOTE_P (insn)
	 || (NONJUMP_INSN_P (insn)
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (LABEL_P (insn)
      || BARRIER_P (insn))
    goto L1874;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L1874;
  x = XEXP (pat, 0);
  operands[3] = x;
  if (! memory_operand (x, SImode)) goto L1874;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! s_register_operand (x, SImode)) goto L1874;
  if (! (TARGET_ARM && store_multiple_sequence (operands, 2, NULL, NULL, NULL))) goto L1874;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (4, operands));
  INSN_CODE (ins1) = 1874;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L1874:

  return 0;
}

rtx peep_operand[8];
#endif
