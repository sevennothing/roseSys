/* Generated automatically by the program `genextract'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "toplev.h"

/* This variable is used as the "location" of any missing operand
   whose numbers are skipped by a given pattern.  */
static rtx junk ATTRIBUTE_UNUSED;

void
insn_extract (rtx insn)
{
  rtx *ro = recog_data.operand;
  rtx **ro_loc = recog_data.operand_loc;
  rtx pat = PATTERN (insn);
  int i ATTRIBUTE_UNUSED; /* only for peepholes */

#ifdef ENABLE_CHECKING
  memset (ro, 0xab, sizeof (*ro) * MAX_RECOG_OPERANDS);
  memset (ro_loc, 0xab, sizeof (*ro_loc) * MAX_RECOG_OPERANDS);
#endif

  switch (INSN_CODE (insn))
    {
    default:
      /* Control reaches here if insn_extract has been called with an
         unrecognizable insn (code -1), or an insn whose INSN_CODE
         corresponds to a DEFINE_EXPAND in the machine description;
         either way, a bug.  */
      if (INSN_CODE (insn) < 0)
        fatal_insn ("unrecognizable insn:", insn);
      else
        fatal_insn ("insn with invalid code number:", insn);

    case 1874:
    case 1873:
    case 1872:
    case 1871:
    case 1870:
    case 1869:
      for (i = XVECLEN (pat, 0) - 1; i >= 0; i--)
          ro[i] = *(ro_loc[i] = &XVECEXP (pat, 0, i));
      break;

    case 2682:  /* *p vec_setv2di_internal */
    case 2681:  /* *p vec_setv4sf_internal */
    case 2680:  /* *p vec_setv4si_internal */
    case 2679:  /* *p vec_setv8hi_internal */
    case 2678:  /* *p vec_setv16qi_internal */
    case 2677:  /* *p vec_setv2sf_internal */
    case 2676:  /* *p vec_setv2si_internal */
    case 2675:  /* *p vec_setv4hi_internal */
    case 2674:  /* *p vec_setv8qi_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2669:  /* *p *thumb2_negsi2_short */
    case 2668:  /* *p *thumb2_one_cmplsi2_short */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2667:  /* *p *thumb2_mulsi_short */
    case 2666:  /* *p *thumb2_subsi_short */
    case 2663:  /* *p *thumb2_addsi_short */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2662:  /* *p *thumb2_movsi_shortim */
    case 2661:  /* *p *thumb2_movhi_shortim */
    case 2660:  /* *p *thumb2_movqi_shortim */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2659:  /* *p *thumb2_shiftsi3_short */
    case 2658:  /* *p *thumb2_alusi3_short */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2635:  /* *p *cmpdf_trap_vfp */
    case 2634:  /* *p *cmpdf_vfp */
    case 2633:  /* *p *cmpsf_trap_vfp */
    case 2632:  /* *p *cmpsf_vfp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2617:  /* *p *muldf3negdfsubdf_vfp */
    case 2616:  /* *p *mulsf3negsfsubsf_vfp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2615:  /* *p *fmuldf3negdfadddf_vfp */
    case 2614:  /* *p *mulsf3negsfaddsf_vfp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2613:  /* *p *muldf3subdf_vfp */
    case 2612:  /* *p *mulsf3subsf_vfp */
    case 2611:  /* *p *muldf3adddf_vfp */
    case 2610:  /* *p *mulsf3addsf_vfp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2584:  /* *p iwmmxt_tmcr */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2582:  /* *p iwmmxt_walign */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2572:  /* *p iwmmxt_tmiatt */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2571:  /* *p iwmmxt_tmiabt */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2570:  /* *p iwmmxt_tmiatb */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2569:  /* *p iwmmxt_tmiabb */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2568:  /* *p iwmmxt_tmiaph */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 2504:  /* *p gtv2si3 */
    case 2503:  /* *p gtv4hi3 */
    case 2502:  /* *p gtv8qi3 */
    case 2501:  /* *p gtuv2si3 */
    case 2500:  /* *p gtuv4hi3 */
    case 2499:  /* *p gtuv8qi3 */
    case 2498:  /* *p eqv2si3 */
    case 2497:  /* *p eqv4hi3 */
    case 2496:  /* *p eqv8qi3 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2691:  /* *p vec_extractv2di */
    case 2690:  /* *p vec_extractv4sf */
    case 2689:  /* *p vec_extractv4si */
    case 2688:  /* *p vec_extractv8hi */
    case 2687:  /* *p vec_extractv16qi */
    case 2686:  /* *p vec_extractv2sf */
    case 2685:  /* *p vec_extractv2si */
    case 2684:  /* *p vec_extractv4hi */
    case 2683:  /* *p vec_extractv8qi */
    case 2494:  /* *p iwmmxt_textrmw */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2707:  /* *p neon_vget_lanev4sf_zext_internal */
    case 2706:  /* *p neon_vget_lanev4si_zext_internal */
    case 2705:  /* *p neon_vget_lanev8hi_zext_internal */
    case 2704:  /* *p neon_vget_lanev16qi_zext_internal */
    case 2703:  /* *p neon_vget_lanev4sf_sext_internal */
    case 2702:  /* *p neon_vget_lanev4si_sext_internal */
    case 2701:  /* *p neon_vget_lanev8hi_sext_internal */
    case 2700:  /* *p neon_vget_lanev16qi_sext_internal */
    case 2699:  /* *p neon_vget_lanev2sf_zext_internal */
    case 2698:  /* *p neon_vget_lanev2si_zext_internal */
    case 2697:  /* *p neon_vget_lanev4hi_zext_internal */
    case 2696:  /* *p neon_vget_lanev8qi_zext_internal */
    case 2695:  /* *p neon_vget_lanev2sf_sext_internal */
    case 2694:  /* *p neon_vget_lanev2si_sext_internal */
    case 2693:  /* *p neon_vget_lanev4hi_sext_internal */
    case 2692:  /* *p neon_vget_lanev8qi_sext_internal */
    case 2493:  /* *p iwmmxt_textrmsh */
    case 2492:  /* *p iwmmxt_textrmuh */
    case 2491:  /* *p iwmmxt_textrmsb */
    case 2490:  /* *p iwmmxt_textrmub */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2489:  /* *p iwmmxt_tinsrw */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 2));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2488:  /* *p iwmmxt_tinsrh */
    case 2487:  /* *p iwmmxt_tinsrb */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 2));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2486:  /* *p iwmmxt_psadbw */
    case 2485:  /* *p iwmmxt_uavgv4hi3 */
    case 2484:  /* *p iwmmxt_uavgv8qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2483:  /* *p iwmmxt_uavgrndv4hi3 */
    case 2482:  /* *p iwmmxt_uavgrndv8qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2588:  /* *p iwmmxt_wsadhz */
    case 2587:  /* *p iwmmxt_wsadbz */
    case 2586:  /* *p iwmmxt_wsadh */
    case 2585:  /* *p iwmmxt_wsadb */
    case 2566:  /* *p iwmmxt_wmaddu */
    case 2565:  /* *p iwmmxt_wmadds */
    case 2495:  /* *p iwmmxt_wshufh */
    case 2477:  /* *p iwmmxt_wmacuz */
    case 2475:  /* *p iwmmxt_wmacsz */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2719:  /* *p neon_vset_lanev2di */
    case 2718:  /* *p neon_vset_lanev4sf */
    case 2717:  /* *p neon_vset_lanev4si */
    case 2716:  /* *p neon_vset_lanev8hi */
    case 2715:  /* *p neon_vset_lanev16qi */
    case 2714:  /* *p neon_vset_lanedi */
    case 2713:  /* *p neon_vset_lanev2sf */
    case 2712:  /* *p neon_vset_lanev2si */
    case 2711:  /* *p neon_vset_lanev4hi */
    case 2710:  /* *p neon_vset_lanev8qi */
    case 2709:  /* *p neon_vget_lanev2di */
    case 2708:  /* *p neon_vget_lanedi */
    case 2476:  /* *p iwmmxt_wmacu */
    case 2474:  /* *p iwmmxt_wmacs */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2473:  /* *p umulv4hi3_highpart */
    case 2472:  /* *p smulv4hi3_highpart */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2625:  /* *p fixuns_truncdfsi2 */
    case 2624:  /* *p fixuns_truncsfsi2 */
    case 2623:  /* *p *truncsidf2_vfp */
    case 2622:  /* *p *truncsisf2_vfp */
    case 2540:  /* *p iwmmxt_wunpckelsw */
    case 2539:  /* *p iwmmxt_wunpckelsh */
    case 2538:  /* *p iwmmxt_wunpckelsb */
    case 2537:  /* *p iwmmxt_wunpckeluw */
    case 2536:  /* *p iwmmxt_wunpckeluh */
    case 2535:  /* *p iwmmxt_wunpckelub */
    case 2534:  /* *p iwmmxt_wunpckehsw */
    case 2533:  /* *p iwmmxt_wunpckehsh */
    case 2532:  /* *p iwmmxt_wunpckehsb */
    case 2531:  /* *p iwmmxt_wunpckehuw */
    case 2530:  /* *p iwmmxt_wunpckehuh */
    case 2529:  /* *p iwmmxt_wunpckehub */
    case 2439:  /* *p *fix_truncdfsi2_fpa */
    case 2438:  /* *p *fix_truncsfsi2_fpa */
    case 2435:  /* *p *sqrtdf_esfdf_fpa */
    case 2432:  /* *p *absdf_esfdf_fpa */
    case 2429:  /* *p *negdf_esfdf_fpa */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2449:  /* *p iwmmxt_nanddi3 */
    case 2425:  /* *p *moddf_df_esfdf_fpa */
    case 2420:  /* *p *divdf_df_esfdf_fpa */
    case 2415:  /* *p *muldf_df_esfdf_fpa */
    case 2410:  /* *p *subdf_df_esfdf_fpa */
    case 2406:  /* *p *adddf_df_esfdf_fpa */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2401:  /* *p *arm_movtas_ze */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2481:  /* *p *iwmmxt_clrv2si */
    case 2480:  /* *p *iwmmxt_clrv4hi */
    case 2479:  /* *p *iwmmxt_clrv8qi */
    case 2478:  /* *p iwmmxt_clrdi */
    case 2400:  /* *p load_tp_hard */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2729:  /* *p neon_vdup_nv2di */
    case 2728:  /* *p neon_vdup_ndi */
    case 2727:  /* *p neon_vdup_nv4sf */
    case 2726:  /* *p neon_vdup_nv4si */
    case 2725:  /* *p neon_vdup_nv2sf */
    case 2724:  /* *p neon_vdup_nv2si */
    case 2723:  /* *p neon_vdup_nv8hi */
    case 2722:  /* *p neon_vdup_nv16qi */
    case 2721:  /* *p neon_vdup_nv4hi */
    case 2720:  /* *p neon_vdup_nv8qi */
    case 2583:  /* *p iwmmxt_tmrc */
    case 2581:  /* *p iwmmxt_waccw */
    case 2580:  /* *p iwmmxt_wacch */
    case 2579:  /* *p iwmmxt_waccb */
    case 2578:  /* *p iwmmxt_tmovmskw */
    case 2577:  /* *p iwmmxt_tmovmskh */
    case 2576:  /* *p iwmmxt_tmovmskb */
    case 2399:  /* *p rbitsi2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2397:  /* *p *arith_adjacentmem */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2642:  /* *p *thumb2_sub_shiftsi */
    case 2396:  /* *p *sub_shiftsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2641:  /* *p *thumb2_arith_shiftsi */
    case 2395:  /* *p *arith_shiftsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2394:  /* *p *load_indirect_jump */
    case 2393:  /* *p *arm_indirect_jump */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 1));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2392:  /* *p return */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2391:  /* *p *arm_jump */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2390:  /* *p *stmsi2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 2389:  /* *p *stmsi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 2388:  /* *p *stmsi4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 2387:  /* *p *stmsi_postinc2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 2386:  /* *p *stmsi_postinc3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0);
      recog_data.dup_num[2] = 2;
      break;

    case 2385:  /* *p *stmsi_postinc4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 1));
      ro[7] = *(ro_loc[7] = &XEXP (pat, 0));
      ro[8] = *(ro_loc[8] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0), 0), 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0);
      recog_data.dup_num[3] = 2;
      break;

    case 2384:  /* *p *ldmsi2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 2383:  /* *p *ldmsi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 2382:  /* *p *ldmsi4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 2381:  /* *p *ldmsi_postinc2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 2380:  /* *p *ldmsi_postinc3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0);
      recog_data.dup_num[2] = 2;
      break;

    case 2379:  /* *p *ldmsi_postinc4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 0));
      ro[7] = *(ro_loc[7] = &XEXP (pat, 0));
      ro[8] = *(ro_loc[8] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 1), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0);
      recog_data.dup_num[3] = 2;
      break;

    case 2373:  /* *p tls_load_dot_plus_eight */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0, 2));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2372:  /* *p pic_add_dot_plus_eight */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2350:  /* *p extzv_t2 */
    case 2349:  /* *p extv */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 2));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2637:  /* *p *thumb2_notsi_shiftsi */
    case 2348:  /* *p *arm_notsi_shiftsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2347:  /* *p *arm_shiftsi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2657:  /* *p *thumb2_zero_extendqisi2_v6 */
    case 2656:  /* *p *thumb2_zero_extendhisi2_v6 */
    case 2655:  /* *p *thumb2_extendqisi_v6 */
    case 2653:  /* *p *thumb2_extendqidi2 */
    case 2651:  /* *p *thumb2_extendhidi2 */
    case 2649:  /* *p *thumb2_extendsidi2 */
    case 2647:  /* *p *thumb2_zero_extendqidi2 */
    case 2645:  /* *p *thumb2_zero_extendhidi2 */
    case 2643:  /* *p *thumb2_zero_extendsidi2 */
    case 2631:  /* *p *sqrtdf2_vfp */
    case 2630:  /* *p *sqrtsf2_vfp */
    case 2629:  /* *p floatunssidf2 */
    case 2628:  /* *p floatunssisf2 */
    case 2627:  /* *p *floatsidf2_vfp */
    case 2626:  /* *p *floatsisf2_vfp */
    case 2621:  /* *p truncsfhf2 */
    case 2620:  /* *p extendhfsf2 */
    case 2619:  /* *p *truncdfsf2_vfp */
    case 2618:  /* *p *extendsfdf2_vfp */
    case 2598:  /* *p *negdf2_vfp */
    case 2597:  /* *p *negsf2_vfp */
    case 2596:  /* *p *absdf2_vfp */
    case 2595:  /* *p *abssf2_vfp */
    case 2575:  /* *p iwmmxt_tbcstsi */
    case 2574:  /* *p iwmmxt_tbcsthi */
    case 2573:  /* *p iwmmxt_tbcstqi */
    case 2441:  /* *p *extendsfdf2_fpa */
    case 2440:  /* *p *truncdfsf2_fpa */
    case 2437:  /* *p *floatsidf2_fpa */
    case 2436:  /* *p *floatsisf2_fpa */
    case 2434:  /* *p *sqrtdf2_fpa */
    case 2433:  /* *p *sqrtsf2_fpa */
    case 2431:  /* *p *absdf2_fpa */
    case 2430:  /* *p *abssf2_fpa */
    case 2428:  /* *p *negdf2_fpa */
    case 2427:  /* *p *negsf2_fpa */
    case 2402:  /* *p *arm_rev */
    case 2398:  /* *p clzsi2 */
    case 2368:  /* *p *arm_extendqisi_v6 */
    case 2367:  /* *p *arm_extendqisi */
    case 2366:  /* *p *arm_extendqihi_insn */
    case 2365:  /* *p *arm_extendhisi2_v6 */
    case 2364:  /* *p *arm_extendhisi2 */
    case 2362:  /* *p *arm_zero_extendqisi2_v6 */
    case 2361:  /* *p *arm_zero_extendqisi2 */
    case 2359:  /* *p *arm_zero_extendhisi2_v6 */
    case 2358:  /* *p *arm_zero_extendhisi2 */
    case 2357:  /* *p *arm_extendsidi2 */
    case 2356:  /* *p *arm_zero_extendqidi2 */
    case 2355:  /* *p *arm_zero_extendsidi2 */
    case 2354:  /* *p *arm_one_cmplsi2 */
    case 2352:  /* *p one_cmpldi2 */
    case 2351:  /* *p *arm_negsi2 */
    case 2346:  /* *p *smin_0 */
    case 2345:  /* *p *smax_m1 */
    case 2344:  /* *p *smax_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2343:  /* *p *andsi_iorsi3_notsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2671:  /* *p *thumb_orsi_not_shiftsi_si */
    case 2636:  /* *p *thumb_andsi_not_shiftsi_si */
    case 2333:  /* *p andsi_not_shiftsi_si */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2670:  /* *p orsi_notsi_si */
    case 2341:  /* *p *xordi_sesidi_di */
    case 2340:  /* *p *xordi_zesidi_di */
    case 2336:  /* *p *iordi_sesidi_di */
    case 2335:  /* *p *iordi_zesidi_di */
    case 2332:  /* *p andsi_notsi_si */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2330:  /* *p *anddi_notsesidi_di */
    case 2328:  /* *p *anddi_notzesidi_di */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2609:  /* *p *muldf3negdf_vfp */
    case 2608:  /* *p *mulsf3negsf_vfp */
    case 2424:  /* *p *moddf_esfdf_df_fpa */
    case 2419:  /* *p *divdf_esfdf_df_fpa */
    case 2414:  /* *p *muldf_esfdf_df_fpa */
    case 2409:  /* *p *subdf_esfdf_df_fpa */
    case 2405:  /* *p *adddf_esfdf_df_fpa */
    case 2369:  /* *p *arm_extendqisi2addsi */
    case 2363:  /* *p *arm_zero_extendqisi2addsi */
    case 2360:  /* *p *arm_zero_extendhisi2addsi */
    case 2326:  /* *p *anddi_notdi_di */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2325:  /* *p insv_t2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2324:  /* *p insv_zero */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2567:  /* *p iwmmxt_tmia */
    case 2321:  /* *p *mulhidi3adddi */
    case 2320:  /* *p *mulhisi3addsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2315:  /* *p *umulsi3_highpart_v6 */
    case 2314:  /* *p *umulsi3_highpart_nov6 */
    case 2313:  /* *p *smulsi3_highpart_v6 */
    case 2312:  /* *p *smulsi3_highpart_nov6 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2528:  /* *p iwmmxt_wunpckilw */
    case 2527:  /* *p iwmmxt_wunpckilh */
    case 2526:  /* *p iwmmxt_wunpckilb */
    case 2525:  /* *p iwmmxt_wunpckihw */
    case 2524:  /* *p iwmmxt_wunpckihh */
    case 2523:  /* *p iwmmxt_wunpckihb */
    case 2522:  /* *p iwmmxt_wpackdus */
    case 2521:  /* *p iwmmxt_wpackwus */
    case 2520:  /* *p iwmmxt_wpackhus */
    case 2519:  /* *p iwmmxt_wpackdss */
    case 2518:  /* *p iwmmxt_wpackwss */
    case 2517:  /* *p iwmmxt_wpackhss */
    case 2426:  /* *p *moddf_esfdf_esfdf_fpa */
    case 2421:  /* *p *divdf_esfdf_esfdf_fpa */
    case 2416:  /* *p *muldf_esfdf_esfdf_fpa */
    case 2411:  /* *p *subdf_esfdf_esfdf_fpa */
    case 2407:  /* *p *adddf_esfdf_esfdf_fpa */
    case 2319:  /* *p *mulhisi3tt */
    case 2318:  /* *p *mulhisi3bt */
    case 2317:  /* *p *mulhisi3tb */
    case 2316:  /* *p mulhisi3 */
    case 2309:  /* *p *umulsidi3_v6 */
    case 2308:  /* *p *umulsidi3_nov6 */
    case 2307:  /* *p *mulsidi3_v6 */
    case 2306:  /* *p *mulsidi3_nov6 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2311:  /* *p *umulsidi3adddi_v6 */
    case 2310:  /* *p *umulsidi3adddi */
    case 2305:  /* *p *mulsidi3adddi_v6 */
    case 2304:  /* *p *mulsidi3adddi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2303:  /* *p *mulsi3subsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2302:  /* *p *mulsi3addsi_v6 */
    case 2301:  /* *p *mulsi3addsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2299:  /* *p *arm_mulsi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 2672:  /* *p *thumb2_iorsi3 */
    case 2665:  /* *p udivsi3 */
    case 2664:  /* *p divsi3 */
    case 2607:  /* *p *muldf3_vfp */
    case 2606:  /* *p *mulsf3_vfp */
    case 2605:  /* *p *divdf3_vfp */
    case 2604:  /* *p *divsf3_vfp */
    case 2603:  /* *p *subdf3_vfp */
    case 2602:  /* *p *subsf3_vfp */
    case 2601:  /* *p *adddf3_vfp */
    case 2600:  /* *p *addsf3_vfp */
    case 2564:  /* *p ashldi3_di */
    case 2563:  /* *p ashlv2si3_di */
    case 2562:  /* *p ashlv4hi3_di */
    case 2561:  /* *p lshrdi3_di */
    case 2560:  /* *p lshrv2si3_di */
    case 2559:  /* *p lshrv4hi3_di */
    case 2558:  /* *p ashrdi3_di */
    case 2557:  /* *p ashrv2si3_di */
    case 2556:  /* *p ashrv4hi3_di */
    case 2555:  /* *p rordi3_di */
    case 2554:  /* *p rorv2si3_di */
    case 2553:  /* *p rorv4hi3_di */
    case 2552:  /* *p ashldi3_iwmmxt */
    case 2551:  /* *p ashlv2si3_iwmmxt */
    case 2550:  /* *p ashlv4hi3_iwmmxt */
    case 2549:  /* *p lshrdi3_iwmmxt */
    case 2548:  /* *p lshrv2si3_iwmmxt */
    case 2547:  /* *p lshrv4hi3_iwmmxt */
    case 2546:  /* *p ashrdi3_iwmmxt */
    case 2545:  /* *p ashrv2si3_iwmmxt */
    case 2544:  /* *p ashrv4hi3_iwmmxt */
    case 2543:  /* *p rordi3 */
    case 2542:  /* *p rorv2si3 */
    case 2541:  /* *p rorv4hi3 */
    case 2516:  /* *p *uminv8qi3_iwmmxt */
    case 2515:  /* *p *uminv4hi3_iwmmxt */
    case 2514:  /* *p *uminv2si3_iwmmxt */
    case 2513:  /* *p *sminv8qi3_iwmmxt */
    case 2512:  /* *p *sminv4hi3_iwmmxt */
    case 2511:  /* *p *sminv2si3_iwmmxt */
    case 2510:  /* *p *umaxv8qi3_iwmmxt */
    case 2509:  /* *p *umaxv4hi3_iwmmxt */
    case 2508:  /* *p *umaxv2si3_iwmmxt */
    case 2507:  /* *p *smaxv8qi3_iwmmxt */
    case 2506:  /* *p *smaxv4hi3_iwmmxt */
    case 2505:  /* *p *smaxv2si3_iwmmxt */
    case 2471:  /* *p *mulv4hi3_iwmmxt */
    case 2470:  /* *p ussubv2si3 */
    case 2469:  /* *p ussubv4hi3 */
    case 2468:  /* *p ussubv8qi3 */
    case 2467:  /* *p sssubv2si3 */
    case 2466:  /* *p sssubv4hi3 */
    case 2465:  /* *p sssubv8qi3 */
    case 2464:  /* *p *subv8qi3_iwmmxt */
    case 2463:  /* *p *subv4hi3_iwmmxt */
    case 2462:  /* *p *subv2si3_iwmmxt */
    case 2461:  /* *p usaddv2si3 */
    case 2460:  /* *p usaddv4hi3 */
    case 2459:  /* *p usaddv8qi3 */
    case 2458:  /* *p ssaddv2si3 */
    case 2457:  /* *p ssaddv4hi3 */
    case 2456:  /* *p ssaddv8qi3 */
    case 2455:  /* *p *addv8qi3_iwmmxt */
    case 2454:  /* *p *addv4hi3_iwmmxt */
    case 2453:  /* *p *addv2si3_iwmmxt */
    case 2448:  /* *p iwmmxt_anddi3 */
    case 2447:  /* *p iwmmxt_xordi3 */
    case 2446:  /* *p iwmmxt_iordi3 */
    case 2423:  /* *p *moddf3_fpa */
    case 2422:  /* *p *modsf3_fpa */
    case 2418:  /* *p *divdf3_fpa */
    case 2417:  /* *p *divsf3_fpa */
    case 2413:  /* *p *muldf3_fpa */
    case 2412:  /* *p *mulsf3_fpa */
    case 2408:  /* *p *subdf3_fpa */
    case 2404:  /* *p *adddf3_fpa */
    case 2403:  /* *p *addsf3_fpa */
    case 2370:  /* *p *arm_movt */
    case 2342:  /* *p *arm_xorsi3 */
    case 2339:  /* *p xordi3 */
    case 2337:  /* *p *arm_iorsi3 */
    case 2334:  /* *p iordi3 */
    case 2322:  /* *p *arm_andsi3_insn */
    case 2300:  /* *p *arm_mulsi3_v6 */
    case 2297:  /* *p *arm_subsi3_insn */
    case 2295:  /* *p *arm_addsi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 1664:  /* neon_vst4qbv4sf */
    case 1663:  /* neon_vst4qbv4si */
    case 1662:  /* neon_vst4qbv8hi */
    case 1661:  /* neon_vst4qbv16qi */
    case 1660:  /* neon_vst4qav4sf */
    case 1659:  /* neon_vst4qav4si */
    case 1658:  /* neon_vst4qav8hi */
    case 1657:  /* neon_vst4qav16qi */
    case 1619:  /* neon_vst3qbv4sf */
    case 1618:  /* neon_vst3qbv4si */
    case 1617:  /* neon_vst3qbv8hi */
    case 1616:  /* neon_vst3qbv16qi */
    case 1615:  /* neon_vst3qav4sf */
    case 1614:  /* neon_vst3qav4si */
    case 1613:  /* neon_vst3qav8hi */
    case 1612:  /* neon_vst3qav16qi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1639:  /* neon_vld4qbv4sf */
    case 1638:  /* neon_vld4qbv4si */
    case 1637:  /* neon_vld4qbv8hi */
    case 1636:  /* neon_vld4qbv16qi */
    case 1635:  /* neon_vld4qav4sf */
    case 1634:  /* neon_vld4qav4si */
    case 1633:  /* neon_vld4qav8hi */
    case 1632:  /* neon_vld4qav16qi */
    case 1594:  /* neon_vld3qbv4sf */
    case 1593:  /* neon_vld3qbv4si */
    case 1592:  /* neon_vld3qbv8hi */
    case 1591:  /* neon_vld3qbv16qi */
    case 1590:  /* neon_vld3qav4sf */
    case 1589:  /* neon_vld3qav4si */
    case 1588:  /* neon_vld3qav8hi */
    case 1587:  /* neon_vld3qav16qi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 1671:  /* neon_vst4_lanev4sf */
    case 1670:  /* neon_vst4_lanev4si */
    case 1669:  /* neon_vst4_lanev8hi */
    case 1668:  /* neon_vst4_lanev2sf */
    case 1667:  /* neon_vst4_lanev2si */
    case 1666:  /* neon_vst4_lanev4hi */
    case 1665:  /* neon_vst4_lanev8qi */
    case 1626:  /* neon_vst3_lanev4sf */
    case 1625:  /* neon_vst3_lanev4si */
    case 1624:  /* neon_vst3_lanev8hi */
    case 1623:  /* neon_vst3_lanev2sf */
    case 1622:  /* neon_vst3_lanev2si */
    case 1621:  /* neon_vst3_lanev4hi */
    case 1620:  /* neon_vst3_lanev8qi */
    case 1581:  /* neon_vst2_lanev4sf */
    case 1580:  /* neon_vst2_lanev4si */
    case 1579:  /* neon_vst2_lanev8hi */
    case 1578:  /* neon_vst2_lanev2sf */
    case 1577:  /* neon_vst2_lanev2si */
    case 1576:  /* neon_vst2_lanev4hi */
    case 1575:  /* neon_vst2_lanev8qi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1544:  /* neon_vst1_lanev2di */
    case 1543:  /* neon_vst1_lanev4sf */
    case 1542:  /* neon_vst1_lanev4si */
    case 1541:  /* neon_vst1_lanev8hi */
    case 1540:  /* neon_vst1_lanev16qi */
    case 1539:  /* neon_vst1_lanedi */
    case 1538:  /* neon_vst1_lanev2sf */
    case 1537:  /* neon_vst1_lanev2si */
    case 1536:  /* neon_vst1_lanev4hi */
    case 1535:  /* neon_vst1_lanev8qi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 1656:  /* neon_vst4di */
    case 1655:  /* neon_vst4v2sf */
    case 1654:  /* neon_vst4v2si */
    case 1653:  /* neon_vst4v4hi */
    case 1652:  /* neon_vst4v8qi */
    case 1611:  /* neon_vst3di */
    case 1610:  /* neon_vst3v2sf */
    case 1609:  /* neon_vst3v2si */
    case 1608:  /* neon_vst3v4hi */
    case 1607:  /* neon_vst3v8qi */
    case 1574:  /* neon_vst2v4sf */
    case 1573:  /* neon_vst2v4si */
    case 1572:  /* neon_vst2v8hi */
    case 1571:  /* neon_vst2v16qi */
    case 1570:  /* neon_vst2di */
    case 1569:  /* neon_vst2v2sf */
    case 1568:  /* neon_vst2v2si */
    case 1567:  /* neon_vst2v4hi */
    case 1566:  /* neon_vst2v8qi */
    case 1534:  /* neon_vst1v2di */
    case 1533:  /* neon_vst1di */
    case 1532:  /* neon_vst1v4sf */
    case 1531:  /* neon_vst1v2sf */
    case 1530:  /* neon_vst1v4si */
    case 1529:  /* neon_vst1v2si */
    case 1528:  /* neon_vst1v8hi */
    case 1527:  /* neon_vst1v4hi */
    case 1526:  /* neon_vst1v16qi */
    case 1525:  /* neon_vst1v8qi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 1646:  /* neon_vld4_lanev4sf */
    case 1645:  /* neon_vld4_lanev4si */
    case 1644:  /* neon_vld4_lanev8hi */
    case 1643:  /* neon_vld4_lanev2sf */
    case 1642:  /* neon_vld4_lanev2si */
    case 1641:  /* neon_vld4_lanev4hi */
    case 1640:  /* neon_vld4_lanev8qi */
    case 1601:  /* neon_vld3_lanev4sf */
    case 1600:  /* neon_vld3_lanev4si */
    case 1599:  /* neon_vld3_lanev8hi */
    case 1598:  /* neon_vld3_lanev2sf */
    case 1597:  /* neon_vld3_lanev2si */
    case 1596:  /* neon_vld3_lanev4hi */
    case 1595:  /* neon_vld3_lanev8qi */
    case 1560:  /* neon_vld2_lanev4sf */
    case 1559:  /* neon_vld2_lanev4si */
    case 1558:  /* neon_vld2_lanev8hi */
    case 1557:  /* neon_vld2_lanev2sf */
    case 1556:  /* neon_vld2_lanev2si */
    case 1555:  /* neon_vld2_lanev4hi */
    case 1554:  /* neon_vld2_lanev8qi */
    case 1514:  /* neon_vld1_lanev2di */
    case 1513:  /* neon_vld1_lanev4sf */
    case 1512:  /* neon_vld1_lanev4si */
    case 1511:  /* neon_vld1_lanev8hi */
    case 1510:  /* neon_vld1_lanev16qi */
    case 1509:  /* neon_vld1_lanedi */
    case 1508:  /* neon_vld1_lanev2sf */
    case 1507:  /* neon_vld1_lanev2si */
    case 1506:  /* neon_vld1_lanev4hi */
    case 1505:  /* neon_vld1_lanev8qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 1651:  /* neon_vld4_dupdi */
    case 1650:  /* neon_vld4_dupv2sf */
    case 1649:  /* neon_vld4_dupv2si */
    case 1648:  /* neon_vld4_dupv4hi */
    case 1647:  /* neon_vld4_dupv8qi */
    case 1631:  /* neon_vld4di */
    case 1630:  /* neon_vld4v2sf */
    case 1629:  /* neon_vld4v2si */
    case 1628:  /* neon_vld4v4hi */
    case 1627:  /* neon_vld4v8qi */
    case 1606:  /* neon_vld3_dupdi */
    case 1605:  /* neon_vld3_dupv2sf */
    case 1604:  /* neon_vld3_dupv2si */
    case 1603:  /* neon_vld3_dupv4hi */
    case 1602:  /* neon_vld3_dupv8qi */
    case 1586:  /* neon_vld3di */
    case 1585:  /* neon_vld3v2sf */
    case 1584:  /* neon_vld3v2si */
    case 1583:  /* neon_vld3v4hi */
    case 1582:  /* neon_vld3v8qi */
    case 1565:  /* neon_vld2_dupdi */
    case 1564:  /* neon_vld2_dupv2sf */
    case 1563:  /* neon_vld2_dupv2si */
    case 1562:  /* neon_vld2_dupv4hi */
    case 1561:  /* neon_vld2_dupv8qi */
    case 1553:  /* neon_vld2v4sf */
    case 1552:  /* neon_vld2v4si */
    case 1551:  /* neon_vld2v8hi */
    case 1550:  /* neon_vld2v16qi */
    case 1549:  /* neon_vld2di */
    case 1548:  /* neon_vld2v2sf */
    case 1547:  /* neon_vld2v2si */
    case 1546:  /* neon_vld2v4hi */
    case 1545:  /* neon_vld2v8qi */
    case 1524:  /* neon_vld1_dupv2di */
    case 1523:  /* neon_vld1_dupv4sf */
    case 1522:  /* neon_vld1_dupv4si */
    case 1521:  /* neon_vld1_dupv8hi */
    case 1520:  /* neon_vld1_dupv16qi */
    case 1519:  /* neon_vld1_dupdi */
    case 1518:  /* neon_vld1_dupv2sf */
    case 1517:  /* neon_vld1_dupv2si */
    case 1516:  /* neon_vld1_dupv4hi */
    case 1515:  /* neon_vld1_dupv8qi */
    case 1504:  /* neon_vld1v2di */
    case 1503:  /* neon_vld1di */
    case 1502:  /* neon_vld1v4sf */
    case 1501:  /* neon_vld1v2sf */
    case 1500:  /* neon_vld1v4si */
    case 1499:  /* neon_vld1v2si */
    case 1498:  /* neon_vld1v8hi */
    case 1497:  /* neon_vld1v4hi */
    case 1496:  /* neon_vld1v16qi */
    case 1495:  /* neon_vld1v8qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      break;

    case 1494:  /* neon_vuzpv4sf_internal */
    case 1493:  /* neon_vuzpv2sf_internal */
    case 1492:  /* neon_vuzpv4si_internal */
    case 1491:  /* neon_vuzpv2si_internal */
    case 1490:  /* neon_vuzpv8hi_internal */
    case 1489:  /* neon_vuzpv4hi_internal */
    case 1488:  /* neon_vuzpv16qi_internal */
    case 1487:  /* neon_vuzpv8qi_internal */
    case 1486:  /* neon_vzipv4sf_internal */
    case 1485:  /* neon_vzipv2sf_internal */
    case 1484:  /* neon_vzipv4si_internal */
    case 1483:  /* neon_vzipv2si_internal */
    case 1482:  /* neon_vzipv8hi_internal */
    case 1481:  /* neon_vzipv4hi_internal */
    case 1480:  /* neon_vzipv16qi_internal */
    case 1479:  /* neon_vzipv8qi_internal */
    case 1478:  /* neon_vtrnv4sf_internal */
    case 1477:  /* neon_vtrnv2sf_internal */
    case 1476:  /* neon_vtrnv4si_internal */
    case 1475:  /* neon_vtrnv2si_internal */
    case 1474:  /* neon_vtrnv8hi_internal */
    case 1473:  /* neon_vtrnv4hi_internal */
    case 1472:  /* neon_vtrnv16qi_internal */
    case 1471:  /* neon_vtrnv8qi_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      break;

    case 1343:  /* neon_vqdmlsl_lanev2si */
    case 1342:  /* neon_vqdmlsl_lanev4hi */
    case 1341:  /* neon_vmlsl_lanev2si */
    case 1340:  /* neon_vmlsl_lanev4hi */
    case 1339:  /* neon_vmls_lanev4sf */
    case 1338:  /* neon_vmls_lanev4si */
    case 1337:  /* neon_vmls_lanev8hi */
    case 1336:  /* neon_vmls_lanev2sf */
    case 1335:  /* neon_vmls_lanev2si */
    case 1334:  /* neon_vmls_lanev4hi */
    case 1333:  /* neon_vqdmlal_lanev2si */
    case 1332:  /* neon_vqdmlal_lanev4hi */
    case 1331:  /* neon_vmlal_lanev2si */
    case 1330:  /* neon_vmlal_lanev4hi */
    case 1329:  /* neon_vmla_lanev4sf */
    case 1328:  /* neon_vmla_lanev4si */
    case 1327:  /* neon_vmla_lanev8hi */
    case 1326:  /* neon_vmla_lanev2sf */
    case 1325:  /* neon_vmla_lanev2si */
    case 1324:  /* neon_vmla_lanev4hi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 4));
      break;

    case 1446:  /* neon_vsra_nv2di */
    case 1445:  /* neon_vsra_ndi */
    case 1444:  /* neon_vsra_nv4si */
    case 1443:  /* neon_vsra_nv2si */
    case 1442:  /* neon_vsra_nv8hi */
    case 1441:  /* neon_vsra_nv4hi */
    case 1440:  /* neon_vsra_nv16qi */
    case 1439:  /* neon_vsra_nv8qi */
    case 1323:  /* neon_vqdmulh_lanev2si */
    case 1322:  /* neon_vqdmulh_lanev4hi */
    case 1321:  /* neon_vqdmulh_lanev4si */
    case 1320:  /* neon_vqdmulh_lanev8hi */
    case 1319:  /* neon_vqdmull_lanev2si */
    case 1318:  /* neon_vqdmull_lanev4hi */
    case 1317:  /* neon_vmull_lanev2si */
    case 1316:  /* neon_vmull_lanev4hi */
    case 1315:  /* neon_vmul_lanev4sf */
    case 1314:  /* neon_vmul_lanev4si */
    case 1313:  /* neon_vmul_lanev8hi */
    case 1312:  /* neon_vmul_lanev2sf */
    case 1311:  /* neon_vmul_lanev2si */
    case 1310:  /* neon_vmul_lanev4hi */
    case 1145:  /* neon_vabalv2si */
    case 1144:  /* neon_vabalv4hi */
    case 1143:  /* neon_vabalv8qi */
    case 1142:  /* neon_vabav4si */
    case 1141:  /* neon_vabav2si */
    case 1140:  /* neon_vabav8hi */
    case 1139:  /* neon_vabav4hi */
    case 1138:  /* neon_vabav16qi */
    case 1137:  /* neon_vabav8qi */
    case 1053:  /* neon_vqdmlslv2si */
    case 1052:  /* neon_vqdmlslv4hi */
    case 1051:  /* neon_vqdmlalv2si */
    case 1050:  /* neon_vqdmlalv4hi */
    case 1045:  /* neon_vmlslv2si */
    case 1044:  /* neon_vmlslv4hi */
    case 1043:  /* neon_vmlslv8qi */
    case 1042:  /* neon_vmlsv4sf */
    case 1041:  /* neon_vmlsv2sf */
    case 1040:  /* neon_vmlsv4si */
    case 1039:  /* neon_vmlsv2si */
    case 1038:  /* neon_vmlsv8hi */
    case 1037:  /* neon_vmlsv4hi */
    case 1036:  /* neon_vmlsv16qi */
    case 1035:  /* neon_vmlsv8qi */
    case 1034:  /* neon_vmlalv2si */
    case 1033:  /* neon_vmlalv4hi */
    case 1032:  /* neon_vmlalv8qi */
    case 1031:  /* neon_vmlav4sf */
    case 1030:  /* neon_vmlav2sf */
    case 1029:  /* neon_vmlav4si */
    case 1028:  /* neon_vmlav2si */
    case 1027:  /* neon_vmlav8hi */
    case 1026:  /* neon_vmlav4hi */
    case 1025:  /* neon_vmlav16qi */
    case 1024:  /* neon_vmlav8qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 3));
      break;

    case 947:  /* move_lo_quad_v16qi */
    case 946:  /* move_lo_quad_v8hi */
    case 945:  /* move_lo_quad_v4sf */
    case 944:  /* move_lo_quad_v4si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 943:  /* quad_halves_umaxv16qi */
    case 942:  /* quad_halves_uminv16qi */
    case 941:  /* quad_halves_smaxv16qi */
    case 940:  /* quad_halves_sminv16qi */
    case 939:  /* quad_halves_plusv16qi */
    case 938:  /* quad_halves_umaxv8hi */
    case 937:  /* quad_halves_uminv8hi */
    case 936:  /* quad_halves_smaxv8hi */
    case 935:  /* quad_halves_sminv8hi */
    case 934:  /* quad_halves_plusv8hi */
    case 933:  /* quad_halves_smaxv4sf */
    case 932:  /* quad_halves_sminv4sf */
    case 931:  /* quad_halves_plusv4sf */
    case 930:  /* quad_halves_umaxv4si */
    case 929:  /* quad_halves_uminv4si */
    case 928:  /* quad_halves_smaxv4si */
    case 927:  /* quad_halves_sminv4si */
    case 926:  /* quad_halves_plusv4si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 742:  /* vec_setv2di_internal */
    case 741:  /* vec_setv4sf_internal */
    case 740:  /* vec_setv4si_internal */
    case 739:  /* vec_setv8hi_internal */
    case 738:  /* vec_setv16qi_internal */
    case 737:  /* vec_setv2sf_internal */
    case 736:  /* vec_setv2si_internal */
    case 735:  /* vec_setv4hi_internal */
    case 734:  /* vec_setv8qi_internal */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 714:  /* *thumb2_cbnz */
    case 713:  /* *thumb2_cbz */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 705:  /* *thumb2_movsi_shortim */
    case 704:  /* *thumb2_movhi_shortim */
    case 703:  /* *thumb2_movqi_shortim */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 699:  /* thumb2_casesi_internal_pic */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 3), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 4), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 0;
      break;

    case 698:  /* thumb2_casesi_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 0;
      break;

    case 666:  /* *thumb2_cmpsi_neg_shiftsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 660:  /* tls_load_dot_plus_four */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      break;

    case 620:  /* *muldf3negdfsubdf_vfp */
    case 619:  /* *mulsf3negsfsubsf_vfp */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 796:  /* *mulv2di3negv2diaddv2di_neon */
    case 795:  /* *mulv4sf3negv4sfaddv4sf_neon */
    case 794:  /* *mulv2sf3negv2sfaddv2sf_neon */
    case 793:  /* *mulv4si3negv4siaddv4si_neon */
    case 792:  /* *mulv2si3negv2siaddv2si_neon */
    case 791:  /* *mulv8hi3negv8hiaddv8hi_neon */
    case 790:  /* *mulv4hi3negv4hiaddv4hi_neon */
    case 789:  /* *mulv16qi3negv16qiaddv16qi_neon */
    case 788:  /* *mulv8qi3negv8qiaddv8qi_neon */
    case 618:  /* *fmuldf3negdfadddf_vfp */
    case 617:  /* *mulsf3negsfaddsf_vfp */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      break;

    case 787:  /* *mulv2di3addv2di_neon */
    case 786:  /* *mulv4sf3addv4sf_neon */
    case 785:  /* *mulv2sf3addv2sf_neon */
    case 784:  /* *mulv4si3addv4si_neon */
    case 783:  /* *mulv2si3addv2si_neon */
    case 782:  /* *mulv8hi3addv8hi_neon */
    case 781:  /* *mulv4hi3addv4hi_neon */
    case 780:  /* *mulv16qi3addv16qi_neon */
    case 779:  /* *mulv8qi3addv8qi_neon */
    case 616:  /* *muldf3subdf_vfp */
    case 615:  /* *mulsf3subsf_vfp */
    case 614:  /* *muldf3adddf_vfp */
    case 613:  /* *mulsf3addsf_vfp */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 580:  /* iwmmxt_tmcr */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      break;

    case 578:  /* iwmmxt_walign */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      break;

    case 568:  /* iwmmxt_tmiatt */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0));
      break;

    case 567:  /* iwmmxt_tmiabt */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0));
      break;

    case 566:  /* iwmmxt_tmiatb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0));
      break;

    case 565:  /* iwmmxt_tmiabb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0));
      break;

    case 564:  /* iwmmxt_tmiaph */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 500:  /* gtv2si3 */
    case 499:  /* gtv4hi3 */
    case 498:  /* gtv8qi3 */
    case 497:  /* gtuv2si3 */
    case 496:  /* gtuv4hi3 */
    case 495:  /* gtuv8qi3 */
    case 494:  /* eqv2si3 */
    case 493:  /* eqv4hi3 */
    case 492:  /* eqv8qi3 */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (pat, 0, 2));
      break;

    case 751:  /* vec_extractv2di */
    case 750:  /* vec_extractv4sf */
    case 749:  /* vec_extractv4si */
    case 748:  /* vec_extractv8hi */
    case 747:  /* vec_extractv16qi */
    case 746:  /* vec_extractv2sf */
    case 745:  /* vec_extractv2si */
    case 744:  /* vec_extractv4hi */
    case 743:  /* vec_extractv8qi */
    case 490:  /* iwmmxt_textrmw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 1243:  /* neon_vget_lanev4sf_zext_internal */
    case 1242:  /* neon_vget_lanev4si_zext_internal */
    case 1241:  /* neon_vget_lanev8hi_zext_internal */
    case 1240:  /* neon_vget_lanev16qi_zext_internal */
    case 1239:  /* neon_vget_lanev4sf_sext_internal */
    case 1238:  /* neon_vget_lanev4si_sext_internal */
    case 1237:  /* neon_vget_lanev8hi_sext_internal */
    case 1236:  /* neon_vget_lanev16qi_sext_internal */
    case 1235:  /* neon_vget_lanev2sf_zext_internal */
    case 1234:  /* neon_vget_lanev2si_zext_internal */
    case 1233:  /* neon_vget_lanev4hi_zext_internal */
    case 1232:  /* neon_vget_lanev8qi_zext_internal */
    case 1231:  /* neon_vget_lanev2sf_sext_internal */
    case 1230:  /* neon_vget_lanev2si_sext_internal */
    case 1229:  /* neon_vget_lanev4hi_sext_internal */
    case 1228:  /* neon_vget_lanev8qi_sext_internal */
    case 489:  /* iwmmxt_textrmsh */
    case 488:  /* iwmmxt_textrmuh */
    case 487:  /* iwmmxt_textrmsb */
    case 486:  /* iwmmxt_textrmub */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      break;

    case 485:  /* iwmmxt_tinsrw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 484:  /* iwmmxt_tinsrh */
    case 483:  /* iwmmxt_tinsrb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 479:  /* iwmmxt_uavgrndv4hi3 */
    case 478:  /* iwmmxt_uavgrndv8qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 1466:  /* neon_vtbl4v8qi */
    case 1465:  /* neon_vtbl3v8qi */
    case 1464:  /* neon_vtbl2v8qi */
    case 1463:  /* neon_vtbl1v8qi */
    case 1368:  /* neon_vrev16v16qi */
    case 1367:  /* neon_vrev16v8qi */
    case 1366:  /* neon_vrev32v8hi */
    case 1365:  /* neon_vrev32v16qi */
    case 1364:  /* neon_vrev32v4hi */
    case 1363:  /* neon_vrev32v8qi */
    case 1362:  /* neon_vrev64v2di */
    case 1361:  /* neon_vrev64v4sf */
    case 1360:  /* neon_vrev64v2sf */
    case 1359:  /* neon_vrev64v4si */
    case 1358:  /* neon_vrev64v2si */
    case 1357:  /* neon_vrev64v8hi */
    case 1356:  /* neon_vrev64v4hi */
    case 1355:  /* neon_vrev64v16qi */
    case 1354:  /* neon_vrev64v8qi */
    case 1309:  /* neon_vmovlv2si */
    case 1308:  /* neon_vmovlv4hi */
    case 1307:  /* neon_vmovlv8qi */
    case 1306:  /* neon_vqmovunv2di */
    case 1305:  /* neon_vqmovunv4si */
    case 1304:  /* neon_vqmovunv8hi */
    case 1303:  /* neon_vqmovnv2di */
    case 1302:  /* neon_vqmovnv4si */
    case 1301:  /* neon_vqmovnv8hi */
    case 1300:  /* neon_vmovnv2di */
    case 1299:  /* neon_vmovnv4si */
    case 1298:  /* neon_vmovnv8hi */
    case 1293:  /* neon_vcvtv4si */
    case 1292:  /* neon_vcvtv2si */
    case 1291:  /* neon_vcvtv4sf */
    case 1290:  /* neon_vcvtv2sf */
    case 1279:  /* neon_vcombinedi */
    case 1278:  /* neon_vcombinev2sf */
    case 1277:  /* neon_vcombinev2si */
    case 1276:  /* neon_vcombinev4hi */
    case 1275:  /* neon_vcombinev8qi */
    case 1274:  /* neon_vdup_lanev2di */
    case 1273:  /* neon_vdup_lanev4sf */
    case 1272:  /* neon_vdup_lanev4si */
    case 1271:  /* neon_vdup_lanev8hi */
    case 1270:  /* neon_vdup_lanev16qi */
    case 1269:  /* neon_vdup_lanev2sf */
    case 1268:  /* neon_vdup_lanev2si */
    case 1267:  /* neon_vdup_lanev4hi */
    case 1266:  /* neon_vdup_lanev8qi */
    case 1227:  /* neon_vrsqrtev4sf */
    case 1226:  /* neon_vrsqrtev4si */
    case 1225:  /* neon_vrsqrtev2sf */
    case 1224:  /* neon_vrsqrtev2si */
    case 1223:  /* neon_vrecpev4sf */
    case 1222:  /* neon_vrecpev4si */
    case 1221:  /* neon_vrecpev2sf */
    case 1220:  /* neon_vrecpev2si */
    case 1219:  /* neon_vcntv16qi */
    case 1218:  /* neon_vcntv8qi */
    case 1217:  /* neon_vclzv4si */
    case 1216:  /* neon_vclzv2si */
    case 1215:  /* neon_vclzv8hi */
    case 1214:  /* neon_vclzv4hi */
    case 1213:  /* neon_vclzv16qi */
    case 1212:  /* neon_vclzv8qi */
    case 1211:  /* neon_vclsv4si */
    case 1210:  /* neon_vclsv2si */
    case 1209:  /* neon_vclsv8hi */
    case 1208:  /* neon_vclsv4hi */
    case 1207:  /* neon_vclsv16qi */
    case 1206:  /* neon_vclsv8qi */
    case 1205:  /* neon_vqnegv4si */
    case 1204:  /* neon_vqnegv2si */
    case 1203:  /* neon_vqnegv8hi */
    case 1202:  /* neon_vqnegv4hi */
    case 1201:  /* neon_vqnegv16qi */
    case 1200:  /* neon_vqnegv8qi */
    case 1199:  /* neon_vqabsv4si */
    case 1198:  /* neon_vqabsv2si */
    case 1197:  /* neon_vqabsv8hi */
    case 1196:  /* neon_vqabsv4hi */
    case 1195:  /* neon_vqabsv16qi */
    case 1194:  /* neon_vqabsv8qi */
    case 1193:  /* neon_vabsv4sf */
    case 1192:  /* neon_vabsv2sf */
    case 1191:  /* neon_vabsv4si */
    case 1190:  /* neon_vabsv2si */
    case 1189:  /* neon_vabsv8hi */
    case 1188:  /* neon_vabsv4hi */
    case 1187:  /* neon_vabsv16qi */
    case 1186:  /* neon_vabsv8qi */
    case 1167:  /* neon_vpaddlv4si */
    case 1166:  /* neon_vpaddlv2si */
    case 1165:  /* neon_vpaddlv8hi */
    case 1164:  /* neon_vpaddlv4hi */
    case 1163:  /* neon_vpaddlv16qi */
    case 1162:  /* neon_vpaddlv8qi */
    case 966:  /* neon_vpumaxv2si */
    case 965:  /* neon_vpumaxv4hi */
    case 964:  /* neon_vpumaxv8qi */
    case 963:  /* neon_vpuminv2si */
    case 962:  /* neon_vpuminv4hi */
    case 961:  /* neon_vpuminv8qi */
    case 960:  /* neon_vpsmaxv2sf */
    case 959:  /* neon_vpsmaxv2si */
    case 958:  /* neon_vpsmaxv4hi */
    case 957:  /* neon_vpsmaxv8qi */
    case 956:  /* neon_vpsminv2sf */
    case 955:  /* neon_vpsminv2si */
    case 954:  /* neon_vpsminv4hi */
    case 953:  /* neon_vpsminv8qi */
    case 952:  /* neon_vpadd_internalv2sf */
    case 951:  /* neon_vpadd_internalv2si */
    case 950:  /* neon_vpadd_internalv4hi */
    case 949:  /* neon_vpadd_internalv8qi */
    case 919:  /* ashlv2di3_unsigned */
    case 918:  /* ashlv4si3_unsigned */
    case 917:  /* ashlv2si3_unsigned */
    case 916:  /* ashlv8hi3_unsigned */
    case 915:  /* ashlv4hi3_unsigned */
    case 914:  /* ashlv16qi3_unsigned */
    case 913:  /* ashlv8qi3_unsigned */
    case 912:  /* ashlv2di3_signed */
    case 911:  /* ashlv4si3_signed */
    case 910:  /* ashlv2si3_signed */
    case 909:  /* ashlv8hi3_signed */
    case 908:  /* ashlv4hi3_signed */
    case 907:  /* ashlv16qi3_signed */
    case 906:  /* ashlv8qi3_signed */
    case 846:  /* xordi3_neon */
    case 836:  /* bicdi3_neon */
    case 826:  /* orndi3_neon */
    case 816:  /* anddi3_neon */
    case 806:  /* iordi3_neon */
    case 584:  /* iwmmxt_wsadhz */
    case 583:  /* iwmmxt_wsadbz */
    case 582:  /* iwmmxt_wsadh */
    case 581:  /* iwmmxt_wsadb */
    case 562:  /* iwmmxt_wmaddu */
    case 561:  /* iwmmxt_wmadds */
    case 491:  /* iwmmxt_wshufh */
    case 473:  /* iwmmxt_wmacuz */
    case 471:  /* iwmmxt_wmacsz */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1470:  /* neon_vtbx4v8qi */
    case 1469:  /* neon_vtbx3v8qi */
    case 1468:  /* neon_vtbx2v8qi */
    case 1467:  /* neon_vtbx1v8qi */
    case 1462:  /* neon_vsli_nv2di */
    case 1461:  /* neon_vsli_ndi */
    case 1460:  /* neon_vsli_nv4si */
    case 1459:  /* neon_vsli_nv2si */
    case 1458:  /* neon_vsli_nv8hi */
    case 1457:  /* neon_vsli_nv4hi */
    case 1456:  /* neon_vsli_nv16qi */
    case 1455:  /* neon_vsli_nv8qi */
    case 1454:  /* neon_vsri_nv2di */
    case 1453:  /* neon_vsri_ndi */
    case 1452:  /* neon_vsri_nv4si */
    case 1451:  /* neon_vsri_nv2si */
    case 1450:  /* neon_vsri_nv8hi */
    case 1449:  /* neon_vsri_nv4hi */
    case 1448:  /* neon_vsri_nv16qi */
    case 1447:  /* neon_vsri_nv8qi */
    case 1438:  /* neon_vshll_nv2si */
    case 1437:  /* neon_vshll_nv4hi */
    case 1436:  /* neon_vshll_nv8qi */
    case 1435:  /* neon_vqshlu_nv2di */
    case 1434:  /* neon_vqshlu_ndi */
    case 1433:  /* neon_vqshlu_nv4si */
    case 1432:  /* neon_vqshlu_nv2si */
    case 1431:  /* neon_vqshlu_nv8hi */
    case 1430:  /* neon_vqshlu_nv4hi */
    case 1429:  /* neon_vqshlu_nv16qi */
    case 1428:  /* neon_vqshlu_nv8qi */
    case 1427:  /* neon_vqshl_nv2di */
    case 1426:  /* neon_vqshl_ndi */
    case 1425:  /* neon_vqshl_nv4si */
    case 1424:  /* neon_vqshl_nv2si */
    case 1423:  /* neon_vqshl_nv8hi */
    case 1422:  /* neon_vqshl_nv4hi */
    case 1421:  /* neon_vqshl_nv16qi */
    case 1420:  /* neon_vqshl_nv8qi */
    case 1419:  /* neon_vshl_nv2di */
    case 1418:  /* neon_vshl_ndi */
    case 1417:  /* neon_vshl_nv4si */
    case 1416:  /* neon_vshl_nv2si */
    case 1415:  /* neon_vshl_nv8hi */
    case 1414:  /* neon_vshl_nv4hi */
    case 1413:  /* neon_vshl_nv16qi */
    case 1412:  /* neon_vshl_nv8qi */
    case 1411:  /* neon_vqshrun_nv2di */
    case 1410:  /* neon_vqshrun_nv4si */
    case 1409:  /* neon_vqshrun_nv8hi */
    case 1408:  /* neon_vqshrn_nv2di */
    case 1407:  /* neon_vqshrn_nv4si */
    case 1406:  /* neon_vqshrn_nv8hi */
    case 1405:  /* neon_vshrn_nv2di */
    case 1404:  /* neon_vshrn_nv4si */
    case 1403:  /* neon_vshrn_nv8hi */
    case 1402:  /* neon_vshr_nv2di */
    case 1401:  /* neon_vshr_ndi */
    case 1400:  /* neon_vshr_nv4si */
    case 1399:  /* neon_vshr_nv2si */
    case 1398:  /* neon_vshr_nv8hi */
    case 1397:  /* neon_vshr_nv4hi */
    case 1396:  /* neon_vshr_nv16qi */
    case 1395:  /* neon_vshr_nv8qi */
    case 1394:  /* neon_vqshlv2di */
    case 1393:  /* neon_vqshldi */
    case 1392:  /* neon_vqshlv4si */
    case 1391:  /* neon_vqshlv2si */
    case 1390:  /* neon_vqshlv8hi */
    case 1389:  /* neon_vqshlv4hi */
    case 1388:  /* neon_vqshlv16qi */
    case 1387:  /* neon_vqshlv8qi */
    case 1386:  /* neon_vshlv2di */
    case 1385:  /* neon_vshldi */
    case 1384:  /* neon_vshlv4si */
    case 1383:  /* neon_vshlv2si */
    case 1382:  /* neon_vshlv8hi */
    case 1381:  /* neon_vshlv4hi */
    case 1380:  /* neon_vshlv16qi */
    case 1379:  /* neon_vshlv8qi */
    case 1378:  /* neon_vbslv2di_internal */
    case 1377:  /* neon_vbsldi_internal */
    case 1376:  /* neon_vbslv4sf_internal */
    case 1375:  /* neon_vbslv2sf_internal */
    case 1374:  /* neon_vbslv4si_internal */
    case 1373:  /* neon_vbslv2si_internal */
    case 1372:  /* neon_vbslv8hi_internal */
    case 1371:  /* neon_vbslv4hi_internal */
    case 1370:  /* neon_vbslv16qi_internal */
    case 1369:  /* neon_vbslv8qi_internal */
    case 1353:  /* neon_vextv2di */
    case 1352:  /* neon_vextdi */
    case 1351:  /* neon_vextv4sf */
    case 1350:  /* neon_vextv2sf */
    case 1349:  /* neon_vextv4si */
    case 1348:  /* neon_vextv2si */
    case 1347:  /* neon_vextv8hi */
    case 1346:  /* neon_vextv4hi */
    case 1345:  /* neon_vextv16qi */
    case 1344:  /* neon_vextv8qi */
    case 1297:  /* neon_vcvt_nv4si */
    case 1296:  /* neon_vcvt_nv2si */
    case 1295:  /* neon_vcvt_nv4sf */
    case 1294:  /* neon_vcvt_nv2sf */
    case 1255:  /* neon_vset_lanev2di */
    case 1254:  /* neon_vset_lanev4sf */
    case 1253:  /* neon_vset_lanev4si */
    case 1252:  /* neon_vset_lanev8hi */
    case 1251:  /* neon_vset_lanev16qi */
    case 1250:  /* neon_vset_lanedi */
    case 1249:  /* neon_vset_lanev2sf */
    case 1248:  /* neon_vset_lanev2si */
    case 1247:  /* neon_vset_lanev4hi */
    case 1246:  /* neon_vset_lanev8qi */
    case 1245:  /* neon_vget_lanev2di */
    case 1244:  /* neon_vget_lanedi */
    case 1185:  /* neon_vrsqrtsv4sf */
    case 1184:  /* neon_vrsqrtsv2sf */
    case 1183:  /* neon_vrecpsv4sf */
    case 1182:  /* neon_vrecpsv2sf */
    case 1181:  /* neon_vpminv2sf */
    case 1180:  /* neon_vpminv2si */
    case 1179:  /* neon_vpminv4hi */
    case 1178:  /* neon_vpminv8qi */
    case 1177:  /* neon_vpmaxv2sf */
    case 1176:  /* neon_vpmaxv2si */
    case 1175:  /* neon_vpmaxv4hi */
    case 1174:  /* neon_vpmaxv8qi */
    case 1173:  /* neon_vpadalv4si */
    case 1172:  /* neon_vpadalv2si */
    case 1171:  /* neon_vpadalv8hi */
    case 1170:  /* neon_vpadalv4hi */
    case 1169:  /* neon_vpadalv16qi */
    case 1168:  /* neon_vpadalv8qi */
    case 1161:  /* neon_vminv4sf */
    case 1160:  /* neon_vminv2sf */
    case 1159:  /* neon_vminv4si */
    case 1158:  /* neon_vminv2si */
    case 1157:  /* neon_vminv8hi */
    case 1156:  /* neon_vminv4hi */
    case 1155:  /* neon_vminv16qi */
    case 1154:  /* neon_vminv8qi */
    case 1153:  /* neon_vmaxv4sf */
    case 1152:  /* neon_vmaxv2sf */
    case 1151:  /* neon_vmaxv4si */
    case 1150:  /* neon_vmaxv2si */
    case 1149:  /* neon_vmaxv8hi */
    case 1148:  /* neon_vmaxv4hi */
    case 1147:  /* neon_vmaxv16qi */
    case 1146:  /* neon_vmaxv8qi */
    case 1136:  /* neon_vabdlv2si */
    case 1135:  /* neon_vabdlv4hi */
    case 1134:  /* neon_vabdlv8qi */
    case 1133:  /* neon_vabdv4sf */
    case 1132:  /* neon_vabdv2sf */
    case 1131:  /* neon_vabdv4si */
    case 1130:  /* neon_vabdv2si */
    case 1129:  /* neon_vabdv8hi */
    case 1128:  /* neon_vabdv4hi */
    case 1127:  /* neon_vabdv16qi */
    case 1126:  /* neon_vabdv8qi */
    case 1125:  /* neon_vtstv4si */
    case 1124:  /* neon_vtstv2si */
    case 1123:  /* neon_vtstv8hi */
    case 1122:  /* neon_vtstv4hi */
    case 1121:  /* neon_vtstv16qi */
    case 1120:  /* neon_vtstv8qi */
    case 1119:  /* neon_vcagtv4sf */
    case 1118:  /* neon_vcagtv2sf */
    case 1117:  /* neon_vcagev4sf */
    case 1116:  /* neon_vcagev2sf */
    case 1115:  /* neon_vcgtv4sf */
    case 1114:  /* neon_vcgtv2sf */
    case 1113:  /* neon_vcgtv4si */
    case 1112:  /* neon_vcgtv2si */
    case 1111:  /* neon_vcgtv8hi */
    case 1110:  /* neon_vcgtv4hi */
    case 1109:  /* neon_vcgtv16qi */
    case 1108:  /* neon_vcgtv8qi */
    case 1107:  /* neon_vcgev4sf */
    case 1106:  /* neon_vcgev2sf */
    case 1105:  /* neon_vcgev4si */
    case 1104:  /* neon_vcgev2si */
    case 1103:  /* neon_vcgev8hi */
    case 1102:  /* neon_vcgev4hi */
    case 1101:  /* neon_vcgev16qi */
    case 1100:  /* neon_vcgev8qi */
    case 1099:  /* neon_vceqv4sf */
    case 1098:  /* neon_vceqv2sf */
    case 1097:  /* neon_vceqv4si */
    case 1096:  /* neon_vceqv2si */
    case 1095:  /* neon_vceqv8hi */
    case 1094:  /* neon_vceqv4hi */
    case 1093:  /* neon_vceqv16qi */
    case 1092:  /* neon_vceqv8qi */
    case 1091:  /* neon_vsubhnv2di */
    case 1090:  /* neon_vsubhnv4si */
    case 1089:  /* neon_vsubhnv8hi */
    case 1088:  /* neon_vhsubv4si */
    case 1087:  /* neon_vhsubv2si */
    case 1086:  /* neon_vhsubv8hi */
    case 1085:  /* neon_vhsubv4hi */
    case 1084:  /* neon_vhsubv16qi */
    case 1083:  /* neon_vhsubv8qi */
    case 1082:  /* neon_vqsubv2di */
    case 1081:  /* neon_vqsubdi */
    case 1080:  /* neon_vqsubv4si */
    case 1079:  /* neon_vqsubv2si */
    case 1078:  /* neon_vqsubv8hi */
    case 1077:  /* neon_vqsubv4hi */
    case 1076:  /* neon_vqsubv16qi */
    case 1075:  /* neon_vqsubv8qi */
    case 1074:  /* neon_vsubwv2si */
    case 1073:  /* neon_vsubwv4hi */
    case 1072:  /* neon_vsubwv8qi */
    case 1071:  /* neon_vsublv2si */
    case 1070:  /* neon_vsublv4hi */
    case 1069:  /* neon_vsublv8qi */
    case 1068:  /* neon_vsubv2di */
    case 1067:  /* neon_vsubdi */
    case 1066:  /* neon_vsubv4sf */
    case 1065:  /* neon_vsubv2sf */
    case 1064:  /* neon_vsubv4si */
    case 1063:  /* neon_vsubv2si */
    case 1062:  /* neon_vsubv8hi */
    case 1061:  /* neon_vsubv4hi */
    case 1060:  /* neon_vsubv16qi */
    case 1059:  /* neon_vsubv8qi */
    case 1058:  /* neon_vqdmullv2si */
    case 1057:  /* neon_vqdmullv4hi */
    case 1056:  /* neon_vmullv2si */
    case 1055:  /* neon_vmullv4hi */
    case 1054:  /* neon_vmullv8qi */
    case 1049:  /* neon_vqdmulhv4si */
    case 1048:  /* neon_vqdmulhv8hi */
    case 1047:  /* neon_vqdmulhv2si */
    case 1046:  /* neon_vqdmulhv4hi */
    case 1023:  /* neon_vmulv4sf */
    case 1022:  /* neon_vmulv2sf */
    case 1021:  /* neon_vmulv4si */
    case 1020:  /* neon_vmulv2si */
    case 1019:  /* neon_vmulv8hi */
    case 1018:  /* neon_vmulv4hi */
    case 1017:  /* neon_vmulv16qi */
    case 1016:  /* neon_vmulv8qi */
    case 1015:  /* neon_vaddhnv2di */
    case 1014:  /* neon_vaddhnv4si */
    case 1013:  /* neon_vaddhnv8hi */
    case 1012:  /* neon_vqaddv2di */
    case 1011:  /* neon_vqadddi */
    case 1010:  /* neon_vqaddv4si */
    case 1009:  /* neon_vqaddv2si */
    case 1008:  /* neon_vqaddv8hi */
    case 1007:  /* neon_vqaddv4hi */
    case 1006:  /* neon_vqaddv16qi */
    case 1005:  /* neon_vqaddv8qi */
    case 1004:  /* neon_vhaddv4si */
    case 1003:  /* neon_vhaddv2si */
    case 1002:  /* neon_vhaddv8hi */
    case 1001:  /* neon_vhaddv4hi */
    case 1000:  /* neon_vhaddv16qi */
    case 999:  /* neon_vhaddv8qi */
    case 998:  /* neon_vaddwv2si */
    case 997:  /* neon_vaddwv4hi */
    case 996:  /* neon_vaddwv8qi */
    case 995:  /* neon_vaddlv2si */
    case 994:  /* neon_vaddlv4hi */
    case 993:  /* neon_vaddlv8qi */
    case 992:  /* neon_vaddv2di */
    case 991:  /* neon_vadddi */
    case 990:  /* neon_vaddv4sf */
    case 989:  /* neon_vaddv2sf */
    case 988:  /* neon_vaddv4si */
    case 987:  /* neon_vaddv2si */
    case 986:  /* neon_vaddv8hi */
    case 985:  /* neon_vaddv4hi */
    case 984:  /* neon_vaddv16qi */
    case 983:  /* neon_vaddv8qi */
    case 472:  /* iwmmxt_wmacu */
    case 470:  /* iwmmxt_wmacs */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 469:  /* umulv4hi3_highpart */
    case 468:  /* smulv4hi3_highpart */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0));
      break;

    case 2640:  /* *p *thumb2_movsf_soft_insn */
    case 2639:  /* *p *thumb2_movhi_insn */
    case 2638:  /* *p *thumb2_movsi_insn */
    case 2594:  /* *p *movdf_vfp */
    case 2593:  /* *p *thumb2_movsf_vfp */
    case 2592:  /* *p *movsf_vfp */
    case 2591:  /* *p *arm_movdi_vfp */
    case 2590:  /* *p *thumb2_movsi_vfp */
    case 2589:  /* *p *arm_movsi_vfp */
    case 2452:  /* *p movv8qi_internal */
    case 2451:  /* *p movv4hi_internal */
    case 2450:  /* *p movv2si_internal */
    case 2445:  /* *p *thumb2_movsf_fpa */
    case 2444:  /* *p *movxf_fpa */
    case 2443:  /* *p *movdf_fpa */
    case 2442:  /* *p *movsf_fpa */
    case 2378:  /* *p *arm_movsf_soft_insn */
    case 2377:  /* *p *arm32_movhf */
    case 2376:  /* *p *arm_movqi_insn */
    case 2375:  /* *p *movhi_bytes */
    case 2374:  /* *p *movhi_insn_arch4 */
    case 2371:  /* *p *arm_movsi_insn */
    case 445:  /* *cond_iwmmxt_movsi_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 402:  /* *cmp_df_esfdf_trap_fpa */
    case 398:  /* *cmpdf_esfdf_fpa */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 628:  /* fixuns_truncdfsi2 */
    case 627:  /* fixuns_truncsfsi2 */
    case 626:  /* *truncsidf2_vfp */
    case 625:  /* *truncsisf2_vfp */
    case 536:  /* iwmmxt_wunpckelsw */
    case 535:  /* iwmmxt_wunpckelsh */
    case 534:  /* iwmmxt_wunpckelsb */
    case 533:  /* iwmmxt_wunpckeluw */
    case 532:  /* iwmmxt_wunpckeluh */
    case 531:  /* iwmmxt_wunpckelub */
    case 530:  /* iwmmxt_wunpckehsw */
    case 529:  /* iwmmxt_wunpckehsh */
    case 528:  /* iwmmxt_wunpckehsb */
    case 527:  /* iwmmxt_wunpckehuw */
    case 526:  /* iwmmxt_wunpckehuh */
    case 525:  /* iwmmxt_wunpckehub */
    case 386:  /* *fix_truncdfsi2_fpa */
    case 385:  /* *fix_truncsfsi2_fpa */
    case 382:  /* *sqrtdf_esfdf_fpa */
    case 379:  /* *absdf_esfdf_fpa */
    case 376:  /* *negdf_esfdf_fpa */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 835:  /* bicv2di3_neon */
    case 834:  /* bicv4sf3_neon */
    case 833:  /* bicv2sf3_neon */
    case 832:  /* bicv4si3_neon */
    case 831:  /* bicv2si3_neon */
    case 830:  /* bicv8hi3_neon */
    case 829:  /* bicv4hi3_neon */
    case 828:  /* bicv16qi3_neon */
    case 827:  /* bicv8qi3_neon */
    case 825:  /* ornv2di3_neon */
    case 824:  /* ornv4sf3_neon */
    case 823:  /* ornv2sf3_neon */
    case 822:  /* ornv4si3_neon */
    case 821:  /* ornv2si3_neon */
    case 820:  /* ornv8hi3_neon */
    case 819:  /* ornv4hi3_neon */
    case 818:  /* ornv16qi3_neon */
    case 817:  /* ornv8qi3_neon */
    case 442:  /* iwmmxt_nanddi3 */
    case 372:  /* *moddf_df_esfdf_fpa */
    case 367:  /* *divdf_df_esfdf_fpa */
    case 362:  /* *muldf_df_esfdf_fpa */
    case 357:  /* *subdf_df_esfdf_fpa */
    case 352:  /* *adddf_df_esfdf_fpa */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 346:  /* *arm_movtas_ze */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 700:  /* thumb2_eh_return */
    case 343:  /* thumb_eh_return */
    case 342:  /* arm_eh_return */
      ro[0] = *(ro_loc[0] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 340:  /* prefetch */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 2));
      break;

    case 337:  /* *thumb1_tablejump */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      break;

    case 341:  /* prologue_use */
    case 336:  /* consttable_16 */
    case 335:  /* consttable_8 */
    case 334:  /* consttable_4 */
    case 333:  /* consttable_2 */
    case 332:  /* consttable_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      break;

    case 327:  /* stack_tie */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 644:  /* *push_multi_vfp */
    case 328:  /* *push_fp_multi */
    case 326:  /* *push_multi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &PATTERN (insn));
      break;

    case 325:  /* *not_signextract_onebit */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2));
      break;

    case 324:  /* *sign_extract_onebit */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      break;

    case 320:  /* *arith_adjacentmem */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 315:  /* *if_arith_not */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 314:  /* *ifcompare_arith_not */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 313:  /* *if_not_arith */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 312:  /* *ifcompare_not_arith */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      break;

    case 310:  /* *ifcompare_shift_shift */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[8] = *(ro_loc[8] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[9] = *(ro_loc[9] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      break;

    case 309:  /* *if_move_shift */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 307:  /* *if_shift_move */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 306:  /* *ifcompare_shift_move */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 317:  /* *if_neg_move */
    case 305:  /* *if_not_move */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 316:  /* *ifcompare_neg_move */
    case 304:  /* *ifcompare_not_move */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 323:  /* *cond_move_not */
    case 319:  /* *if_move_neg */
    case 303:  /* *if_move_not */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 318:  /* *ifcompare_move_neg */
    case 302:  /* *ifcompare_move_not */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 301:  /* *if_move_arith */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 308:  /* *ifcompare_move_shift */
    case 300:  /* *ifcompare_move_arith */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      break;

    case 299:  /* *if_arith_move */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 298:  /* *ifcompare_arith_move */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 311:  /* *if_shift_shift */
    case 297:  /* *if_arith_arith */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 2), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 1));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 1), 2));
      ro[8] = *(ro_loc[8] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 296:  /* *ifcompare_arith_arith */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[8] = *(ro_loc[8] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[9] = *(ro_loc[9] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 295:  /* *if_move_plus */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 294:  /* *ifcompare_move_plus */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 293:  /* *if_plus_move */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 292:  /* *ifcompare_plus_move */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 688:  /* *thumb2_movcond */
    case 291:  /* movcond */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 687:  /* *thumb2_negscc */
    case 290:  /* *negscc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 288:  /* *and_scc_scc_cmp */
    case 286:  /* *ior_scc_scc_cmp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[7] = *(ro_loc[7] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 6;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 1);
      recog_data.dup_num[4] = 5;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 0);
      recog_data.dup_num[5] = 4;
      break;

    case 289:  /* *and_scc_scc_nodom */
    case 287:  /* *and_scc_scc */
    case 285:  /* *ior_scc_scc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 284:  /* *cmp_ior */
    case 283:  /* *cmp_and */
    case 282:  /* *cmp_ite1 */
    case 281:  /* *cmp_ite0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      break;

    case 686:  /* *thumb2_cond_sub */
    case 280:  /* *cond_sub */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 685:  /* *thumb2_cond_arith */
    case 279:  /* *cond_arith */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 684:  /* *thumb2_cond_move */
    case 278:  /* *cond_move */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 683:  /* *thumb2_compare_scc */
    case 277:  /* *compare_scc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 681:  /* *thumb2_and_scc */
    case 275:  /* *and_scc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 680:  /* *thumb2_sub_shiftsi_compare0_scratch */
    case 274:  /* *sub_shiftsi_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1));
      break;

    case 679:  /* *thumb2_sub_shiftsi_compare0 */
    case 273:  /* *sub_shiftsi_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 1);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 0);
      recog_data.dup_num[3] = 3;
      break;

    case 678:  /* *thumb2_sub_shiftsi */
    case 272:  /* *sub_shiftsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      break;

    case 677:  /* *thumb2_arith_shiftsi_compare0_scratch */
    case 271:  /* *arith_shiftsi_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      break;

    case 676:  /* *thumb2_arith_shiftsi_compare0 */
    case 270:  /* *arith_shiftsi_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[3] = 5;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[4] = 4;
      break;

    case 675:  /* *thumb2_arith_shiftsi */
    case 269:  /* *arith_shiftsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 674:  /* *thumb2_indirect_jump */
    case 267:  /* *thumb1_indirect_jump */
    case 266:  /* *load_indirect_jump */
    case 265:  /* *arm_indirect_jump */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      break;

    case 264:  /* thumb1_casesi_dispatch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0));
      break;

    case 263:  /* arm_casesi_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 0;
      break;

    case 477:  /* *iwmmxt_clrv2si */
    case 476:  /* *iwmmxt_clrv4hi */
    case 475:  /* *iwmmxt_clrv8qi */
    case 474:  /* iwmmxt_clrdi */
    case 344:  /* load_tp_hard */
    case 261:  /* *check_arch2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      break;

    case 260:  /* *cond_return_inverted */
    case 259:  /* *cond_return */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 635:  /* *movcc_vfp */
    case 345:  /* load_tp_soft */
    case 331:  /* consttable_end */
    case 330:  /* align_8 */
    case 329:  /* align_4 */
    case 322:  /* *epilogue_insns */
    case 321:  /* sibcall_epilogue */
    case 268:  /* nop */
    case 262:  /* blockage */
    case 258:  /* return */
      break;

    case 257:  /* *sibcall_value_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 256:  /* *sibcall_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 673:  /* *call_value_reg_thumb2 */
    case 255:  /* *call_value_insn */
    case 253:  /* *call_value_symbol */
    case 251:  /* *call_value_reg_thumb1 */
    case 250:  /* *call_value_reg_thumb1_v5 */
    case 249:  /* *call_value_mem */
    case 248:  /* *call_value_reg_arm */
    case 247:  /* *call_value_reg_armv5 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 672:  /* *call_reg_thumb2 */
    case 254:  /* *call_insn */
    case 252:  /* *call_symbol */
    case 246:  /* *call_reg_thumb1 */
    case 245:  /* *call_reg_thumb1_v5 */
    case 244:  /* *call_mem */
    case 243:  /* *call_reg_arm */
    case 242:  /* *call_reg_armv5 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 671:  /* *thumb2_movsfcc_soft_insn */
    case 670:  /* *thumb2_movsicc_insn */
    case 598:  /* *thumb2_movdfcc_vfp */
    case 597:  /* *movdfcc_vfp */
    case 596:  /* *thumb2_movsfcc_vfp */
    case 595:  /* *movsfcc_vfp */
    case 406:  /* *thumb2_movdfcc_fpa */
    case 405:  /* *thumb2_movsfcc_fpa */
    case 404:  /* *movdfcc_fpa */
    case 403:  /* *movsfcc_fpa */
    case 239:  /* *movsfcc_soft_insn */
    case 238:  /* *movsicc_insn */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 237:  /* thumb1_addsi3_addgeu */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      break;

    case 669:  /* *thumb2_mov_notscc */
    case 668:  /* *thumb2_mov_negscc */
    case 232:  /* *mov_notscc */
    case 231:  /* *mov_negscc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 667:  /* *thumb2_mov_scc */
    case 230:  /* *mov_scc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 229:  /* *arm_cond_branch_reversed */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 228:  /* *arm_cond_branch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 227:  /* *deleted_compare */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      recog_data.dup_loc[0] = &XEXP (pat, 1);
      recog_data.dup_num[0] = 0;
      break;

    case 223:  /* *arm_cmpsi_negshiftsi_si */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 665:  /* *thumb2_cmpsi_shiftsi_swp */
    case 222:  /* *arm_cmpsi_shiftsi_swp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 664:  /* *thumb2_cmpsi_shiftsi */
    case 221:  /* *arm_cmpsi_shiftsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 643:  /* *cmpdf_trap_vfp */
    case 642:  /* *cmpdf_vfp */
    case 641:  /* *cmpsf_trap_vfp */
    case 640:  /* *cmpsf_vfp */
    case 639:  /* *cmpdf_trap_split_vfp */
    case 638:  /* *cmpdf_split_vfp */
    case 637:  /* *cmpsf_trap_split_vfp */
    case 636:  /* *cmpsf_split_vfp */
    case 400:  /* *cmpdf_trap_fpa */
    case 399:  /* *cmpsf_trap_fpa */
    case 396:  /* *cmpdf_fpa */
    case 395:  /* *cmpsf_fpa */
    case 226:  /* *cirrus_cmpdi */
    case 225:  /* *cirrus_cmpdf */
    case 224:  /* *cirrus_cmpsf */
    case 220:  /* *arm_cmpsi_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 219:  /* *subsi3_cbranch_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 217:  /* *addsi3_cbranch_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 218:  /* *subsi3_cbranch */
    case 216:  /* *addsi3_cbranch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 215:  /* *cbranchne_decr1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 214:  /* *bicsi3_cbranch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 213:  /* *bicsi3_cbranch_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 211:  /* *xorsi3_cbranch_scratch */
    case 209:  /* *orrsi3_cbranch_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 212:  /* *xorsi3_cbranch */
    case 210:  /* *orrsi3_cbranch */
    case 208:  /* *andsi3_cbranch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 207:  /* *tstsi3_cbranch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 206:  /* *tlobits_cbranch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 205:  /* *tbit_cbranch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 204:  /* *negated_cbranchsi4 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 203:  /* *movsi_cbranchsi4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 202:  /* cbranchsi4_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 201:  /* *cbranchsi4_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 200:  /* movmem8b */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 5), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[3] = 3;
      break;

    case 199:  /* movmem12b */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 6), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 7), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 4), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[3] = 3;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[5] = 3;
      break;

    case 198:  /* *stmsi2 */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 197:  /* *stmsi3 */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 196:  /* *stmsi4 */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 3), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 195:  /* *stmsi_postinc2 */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 194:  /* *stmsi_postinc3 */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 3), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[2] = 2;
      break;

    case 193:  /* *stmsi_postinc4_thumb1 */
    case 192:  /* *stmsi_postinc4 */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 3), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 4), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 4), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0), 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[3] = 2;
      break;

    case 191:  /* *ldmsi2 */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 190:  /* *ldmsi3 */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 189:  /* *ldmsi4 */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 3), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 188:  /* *ldmsi_postinc2 */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 187:  /* *ldmsi_postinc3 */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 3), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[2] = 2;
      break;

    case 186:  /* *ldmsi_postinc4_thumb1 */
    case 185:  /* *ldmsi_postinc4 */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 4), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 4), 1), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[3] = 2;
      break;

    case 173:  /* *movsi_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 172:  /* tls_load_dot_plus_eight */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      break;

    case 171:  /* pic_add_dot_plus_eight */
    case 170:  /* pic_add_dot_plus_four */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 1289:  /* neon_vget_lowv2di */
    case 1288:  /* neon_vget_lowv4sf */
    case 1287:  /* neon_vget_lowv4si */
    case 1286:  /* neon_vget_lowv8hi */
    case 1285:  /* neon_vget_lowv16qi */
    case 1284:  /* neon_vget_highv2di */
    case 1283:  /* neon_vget_highv4sf */
    case 1282:  /* neon_vget_highv4si */
    case 1281:  /* neon_vget_highv8hi */
    case 1280:  /* neon_vget_highv16qi */
    case 1265:  /* neon_vdup_nv2di */
    case 1264:  /* neon_vdup_ndi */
    case 1263:  /* neon_vdup_nv4sf */
    case 1262:  /* neon_vdup_nv4si */
    case 1261:  /* neon_vdup_nv2sf */
    case 1260:  /* neon_vdup_nv2si */
    case 1259:  /* neon_vdup_nv8hi */
    case 1258:  /* neon_vdup_nv16qi */
    case 1257:  /* neon_vdup_nv4hi */
    case 1256:  /* neon_vdup_nv8qi */
    case 948:  /* reduc_splus_v2di */
    case 579:  /* iwmmxt_tmrc */
    case 577:  /* iwmmxt_waccw */
    case 576:  /* iwmmxt_wacch */
    case 575:  /* iwmmxt_waccb */
    case 574:  /* iwmmxt_tmovmskw */
    case 573:  /* iwmmxt_tmovmskh */
    case 572:  /* iwmmxt_tmovmskb */
    case 339:  /* rbitsi2 */
    case 169:  /* pic_load_addr_thumb1 */
    case 168:  /* pic_load_addr_32bit */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 733:  /* *neon_movxi */
    case 732:  /* *neon_movci */
    case 731:  /* *neon_movoi */
    case 730:  /* *neon_movei */
    case 729:  /* *neon_movti */
    case 728:  /* *neon_movv2di */
    case 727:  /* *neon_movv4sf */
    case 726:  /* *neon_movv4si */
    case 725:  /* *neon_movv8hi */
    case 724:  /* *neon_movv16qi */
    case 723:  /* *neon_movv2sf */
    case 722:  /* *neon_movv2si */
    case 721:  /* *neon_movv4hi */
    case 720:  /* *neon_movv8qi */
    case 663:  /* *thumb2_movdf_soft_insn */
    case 662:  /* *thumb2_movsf_soft_insn */
    case 661:  /* *thumb2_movhi_insn */
    case 659:  /* *thumb2_movsi_insn */
    case 658:  /* *thumb2_movdi */
    case 594:  /* *thumb2_movdf_vfp */
    case 593:  /* *movdf_vfp */
    case 592:  /* *thumb2_movsf_vfp */
    case 591:  /* *movsf_vfp */
    case 590:  /* *movhf_vfp */
    case 589:  /* *movhf_vfp_neon */
    case 588:  /* *thumb2_movdi_vfp */
    case 587:  /* *arm_movdi_vfp */
    case 586:  /* *thumb2_movsi_vfp */
    case 585:  /* *arm_movsi_vfp */
    case 448:  /* movv8qi_internal */
    case 447:  /* movv4hi_internal */
    case 446:  /* movv2si_internal */
    case 444:  /* *iwmmxt_movsi_insn */
    case 443:  /* *iwmmxt_arm_movdi */
    case 438:  /* *thumb2_cirrus_movdf_hard_insn */
    case 437:  /* *thumb2_cirrus_movsf_hard_insn */
    case 436:  /* *cirrus_thumb2_movdi */
    case 435:  /* *cirrus_movdf_hard_insn */
    case 434:  /* *cirrus_movsf_hard_insn */
    case 433:  /* *cirrus_arm_movdi */
    case 394:  /* *thumb2_movxf_fpa */
    case 393:  /* *thumb2_movdf_fpa */
    case 392:  /* *thumb2_movsf_fpa */
    case 391:  /* *movxf_fpa */
    case 390:  /* *movdf_fpa */
    case 389:  /* *movsf_fpa */
    case 184:  /* *thumb_movdf_insn */
    case 183:  /* *movdf_soft_insn */
    case 182:  /* *thumb1_movsf_insn */
    case 181:  /* *arm_movsf_soft_insn */
    case 180:  /* *thumb1_movhf */
    case 179:  /* *arm32_movhf */
    case 178:  /* *thumb1_movqi_insn */
    case 177:  /* *arm_movqi_insn */
    case 176:  /* *movhi_bytes */
    case 175:  /* *movhi_insn_arch4 */
    case 174:  /* *thumb1_movhi_insn */
    case 167:  /* *thumb1_movsi_insn */
    case 166:  /* *arm_movsi_insn */
    case 164:  /* *thumb1_movdi_insn */
    case 163:  /* *arm_movdi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 241:  /* *thumb_jump */
    case 240:  /* *arm_jump */
    case 151:  /* *compareqi_eq0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 137:  /* *notsi_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 136:  /* *notsi_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 430:  /* cirrus_truncdfsi2 */
    case 429:  /* cirrus_truncsfsi2 */
    case 132:  /* *thumb1_neg_abssi2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 657:  /* *thumb2_neg_abssi2 */
    case 131:  /* *arm_neg_abssi2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 426:  /* cirrus_floatsidf2 */
    case 425:  /* cirrus_floatsisf2 */
    case 234:  /* *cstoresi_ne0_thumb1_insn */
    case 233:  /* *cstoresi_eq0_thumb1_insn */
    case 153:  /* *thumb1_extendhisi2_insn_v6 */
    case 152:  /* thumb1_extendhisi2 */
    case 130:  /* *thumb1_abssi2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 124:  /* extzv_t2 */
    case 123:  /* extv */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 654:  /* *thumb2_not_shiftsi_compare0_scratch */
    case 122:  /* *arm_not_shiftsi_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 653:  /* *thumb2_notsi_shiftsi_compare0 */
    case 121:  /* *arm_notsi_shiftsi_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 652:  /* *thumb2_notsi_shiftsi */
    case 120:  /* *arm_notsi_shiftsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 119:  /* *shiftsi3_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 118:  /* *shiftsi3_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 117:  /* *arm_shiftsi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 716:  /* *thumb2_negsi2_short */
    case 715:  /* *thumb2_one_cmplsi2_short */
    case 656:  /* *thumb2_abssi2 */
    case 655:  /* *thumb2_negdi2 */
    case 420:  /* *cirrus_negdi2 */
    case 129:  /* *arm_abssi2 */
    case 126:  /* *thumb1_negdi2 */
    case 125:  /* *arm_negdi2 */
    case 114:  /* arm_lshrdi3_1bit */
    case 112:  /* arm_ashrdi3_1bit */
    case 110:  /* arm_ashldi3_1bit */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 109:  /* *minmax_arithsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 702:  /* *thumb2_shiftsi3_short */
    case 701:  /* *thumb2_alusi3_short */
    case 108:  /* *store_minmaxsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 871:  /* negv4sf2 */
    case 870:  /* negv2sf2 */
    case 869:  /* negv4si2 */
    case 868:  /* negv2si2 */
    case 867:  /* negv8hi2 */
    case 866:  /* negv4hi2 */
    case 865:  /* negv16qi2 */
    case 864:  /* negv8qi2 */
    case 863:  /* absv4sf2 */
    case 862:  /* absv2sf2 */
    case 861:  /* absv4si2 */
    case 860:  /* absv2si2 */
    case 859:  /* absv8hi2 */
    case 858:  /* absv4hi2 */
    case 857:  /* absv16qi2 */
    case 856:  /* absv8qi2 */
    case 855:  /* one_cmplv2di2 */
    case 854:  /* one_cmplv4sf2 */
    case 853:  /* one_cmplv2sf2 */
    case 852:  /* one_cmplv4si2 */
    case 851:  /* one_cmplv2si2 */
    case 850:  /* one_cmplv8hi2 */
    case 849:  /* one_cmplv4hi2 */
    case 848:  /* one_cmplv16qi2 */
    case 847:  /* one_cmplv8qi2 */
    case 697:  /* *thumb2_zero_extendqisi2_v6 */
    case 696:  /* *thumb2_zero_extendhisi2_v6 */
    case 695:  /* *thumb2_extendqisi_v6 */
    case 694:  /* *thumb2_extendqidi2 */
    case 693:  /* *thumb2_extendhidi2 */
    case 692:  /* *thumb2_extendsidi2 */
    case 691:  /* *thumb2_zero_extendqidi2 */
    case 690:  /* *thumb2_zero_extendhidi2 */
    case 689:  /* *thumb2_zero_extendsidi2 */
    case 634:  /* *sqrtdf2_vfp */
    case 633:  /* *sqrtsf2_vfp */
    case 632:  /* floatunssidf2 */
    case 631:  /* floatunssisf2 */
    case 630:  /* *floatsidf2_vfp */
    case 629:  /* *floatsisf2_vfp */
    case 624:  /* truncsfhf2 */
    case 623:  /* extendhfsf2 */
    case 622:  /* *truncdfsf2_vfp */
    case 621:  /* *extendsfdf2_vfp */
    case 602:  /* *negdf2_vfp */
    case 601:  /* *negsf2_vfp */
    case 600:  /* *absdf2_vfp */
    case 599:  /* *abssf2_vfp */
    case 571:  /* iwmmxt_tbcstsi */
    case 570:  /* iwmmxt_tbcsthi */
    case 569:  /* iwmmxt_tbcstqi */
    case 432:  /* *cirrus_extendsfdf2 */
    case 431:  /* *cirrus_truncdfsf2 */
    case 428:  /* floatdidf2 */
    case 427:  /* floatdisf2 */
    case 424:  /* *cirrus_absdf2 */
    case 423:  /* *cirrus_abssf2 */
    case 422:  /* *cirrus_negdf2 */
    case 421:  /* *cirrus_negsf2 */
    case 419:  /* *cirrus_absdi2 */
    case 388:  /* *extendsfdf2_fpa */
    case 387:  /* *truncdfsf2_fpa */
    case 384:  /* *floatsidf2_fpa */
    case 383:  /* *floatsisf2_fpa */
    case 381:  /* *sqrtdf2_fpa */
    case 380:  /* *sqrtsf2_fpa */
    case 378:  /* *absdf2_fpa */
    case 377:  /* *abssf2_fpa */
    case 375:  /* *negdf2_fpa */
    case 374:  /* *negsf2_fpa */
    case 348:  /* *thumb1_rev */
    case 347:  /* *arm_rev */
    case 338:  /* clzsi2 */
    case 162:  /* *thumb1_extendqisi2_v6 */
    case 161:  /* *thumb1_extendqisi2 */
    case 159:  /* *arm_extendqisi_v6 */
    case 158:  /* *arm_extendqisi */
    case 157:  /* *arm_extendqihi_insn */
    case 155:  /* *arm_extendhisi2_v6 */
    case 154:  /* *arm_extendhisi2 */
    case 149:  /* *arm_zero_extendqisi2_v6 */
    case 148:  /* *arm_zero_extendqisi2 */
    case 147:  /* *thumb1_zero_extendqisi2_v6 */
    case 146:  /* *thumb1_zero_extendqisi2 */
    case 144:  /* *arm_zero_extendhisi2_v6 */
    case 143:  /* *arm_zero_extendhisi2 */
    case 142:  /* *thumb1_zero_extendhisi2_v6 */
    case 141:  /* *thumb1_zero_extendhisi2 */
    case 140:  /* *arm_extendsidi2 */
    case 139:  /* *arm_zero_extendqidi2 */
    case 138:  /* *arm_zero_extendsidi2 */
    case 135:  /* *thumb1_one_cmplsi2 */
    case 134:  /* *arm_one_cmplsi2 */
    case 133:  /* one_cmpldi2 */
    case 128:  /* *thumb1_negsi2 */
    case 127:  /* *arm_negsi2 */
    case 104:  /* *smin_0 */
    case 102:  /* *smax_m1 */
    case 101:  /* *smax_0 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 100:  /* *andsi_iorsi3_notsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 712:  /* *thumb2_mulsi_short_compare0_scratch */
    case 92:  /* *iorsi3_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 85:  /* *andsi_notsi_si_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      break;

    case 84:  /* *andsi_notsi_si_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 718:  /* *thumb_orsi_not_shiftsi_si */
    case 647:  /* *thumb_andsi_not_shiftsi_si */
    case 83:  /* andsi_not_shiftsi_si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 80:  /* *anddi_notsesidi_di */
    case 79:  /* *anddi_notzesidi_di */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 925:  /* widen_usumv2si3 */
    case 924:  /* widen_usumv4hi3 */
    case 923:  /* widen_usumv8qi3 */
    case 922:  /* widen_ssumv2si3 */
    case 921:  /* widen_ssumv4hi3 */
    case 920:  /* widen_ssumv8qi3 */
    case 612:  /* *muldf3negdf_vfp */
    case 611:  /* *mulsf3negsf_vfp */
    case 371:  /* *moddf_esfdf_df_fpa */
    case 366:  /* *divdf_esfdf_df_fpa */
    case 361:  /* *muldf_esfdf_df_fpa */
    case 356:  /* *subdf_esfdf_df_fpa */
    case 351:  /* *adddf_esfdf_df_fpa */
    case 160:  /* *arm_extendqisi2addsi */
    case 156:  /* *arm_extendhisi2addsi */
    case 150:  /* *arm_zero_extendqisi2addsi */
    case 145:  /* *arm_zero_extendhisi2addsi */
    case 82:  /* bicsi3 */
    case 78:  /* *anddi_notdi_di */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 77:  /* insv_t2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 76:  /* insv_zero */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 2));
      break;

    case 75:  /* *ite_ne_zeroextractsi_shifted */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 74:  /* *ite_ne_zeroextractsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 73:  /* *ne_zeroextractsi_shifted */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 72:  /* *ne_zeroextractsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2));
      break;

    case 71:  /* *zeroextractsi_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 70:  /* *andsi3_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 717:  /* orsi_notsi_si */
    case 95:  /* *xordi_sesidi_di */
    case 94:  /* *xordi_zesidi_di */
    case 88:  /* *iordi_sesidi_di */
    case 87:  /* *iordi_zesidi_di */
    case 81:  /* andsi_notsi_si */
    case 66:  /* *anddi_sesdi_di */
    case 65:  /* *anddi_zesidi_di */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 563:  /* iwmmxt_tmia */
    case 63:  /* *mulhidi3adddi */
    case 62:  /* *mulhisi3addsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      break;

    case 57:  /* *umulsi3_highpart_v6 */
    case 56:  /* *umulsi3_highpart_nov6 */
    case 55:  /* *smulsi3_highpart_v6 */
    case 54:  /* *smulsi3_highpart_nov6 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 524:  /* iwmmxt_wunpckilw */
    case 523:  /* iwmmxt_wunpckilh */
    case 522:  /* iwmmxt_wunpckilb */
    case 521:  /* iwmmxt_wunpckihw */
    case 520:  /* iwmmxt_wunpckihh */
    case 519:  /* iwmmxt_wunpckihb */
    case 518:  /* iwmmxt_wpackdus */
    case 517:  /* iwmmxt_wpackwus */
    case 516:  /* iwmmxt_wpackhus */
    case 515:  /* iwmmxt_wpackdss */
    case 514:  /* iwmmxt_wpackwss */
    case 513:  /* iwmmxt_wpackhss */
    case 373:  /* *moddf_esfdf_esfdf_fpa */
    case 368:  /* *divdf_esfdf_esfdf_fpa */
    case 363:  /* *muldf_esfdf_esfdf_fpa */
    case 358:  /* *subdf_esfdf_esfdf_fpa */
    case 353:  /* *adddf_esfdf_esfdf_fpa */
    case 61:  /* *mulhisi3tt */
    case 60:  /* *mulhisi3bt */
    case 59:  /* *mulhisi3tb */
    case 58:  /* mulhisi3 */
    case 51:  /* *umulsidi3_v6 */
    case 50:  /* *umulsidi3_nov6 */
    case 49:  /* *mulsidi3_v6 */
    case 48:  /* *mulsidi3_nov6 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 53:  /* *umulsidi3adddi_v6 */
    case 52:  /* *umulsidi3adddi */
    case 47:  /* *mulsidi3adddi_v6 */
    case 46:  /* *mulsidi3adddi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      break;

    case 45:  /* *mulsi3subsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 44:  /* *mulsi3addsi_compare0_scratch_v6 */
    case 43:  /* *mulsi3addsi_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 42:  /* *mulsi3addsi_compare0_v6 */
    case 41:  /* *mulsi3addsi_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 3;
      break;

    case 40:  /* *mulsi3addsi_v6 */
    case 39:  /* *mulsi3addsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 38:  /* *mulsi_compare0_scratch_v6 */
    case 37:  /* *mulsi_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 36:  /* *mulsi3_compare0_v6 */
    case 35:  /* *mulsi3_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 413:  /* muldi3 */
    case 31:  /* *arm_mulsi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 646:  /* *thumb2_decscc */
    case 30:  /* *arm_decscc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 26:  /* *subdi_zesidi_zesidi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 23:  /* *subdi_di_sesidi */
    case 22:  /* *subdi_di_zesidi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 682:  /* *thumb2_ior_scc */
    case 645:  /* *thumb2_incscc */
    case 276:  /* *ior_scc */
    case 19:  /* *arm_incscc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 18:  /* *addsi3_carryin_alt3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 17:  /* *addsi3_carryin_alt2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 482:  /* iwmmxt_psadbw */
    case 481:  /* iwmmxt_uavgv4hi3 */
    case 480:  /* iwmmxt_uavgv8qi3 */
    case 235:  /* cstoresi_nltu_thumb1 */
    case 16:  /* *addsi3_carryin_alt1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 15:  /* *addsi3_carryin_shift */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      break;

    case 14:  /* *addsi3_carryin */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      break;

    case 13:  /* *compare_addsi2_op1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 12:  /* *compare_addsi2_op0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 11:  /* *addsi3_compare_op2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 2;
      break;

    case 10:  /* *addsi3_compare_op1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 9:  /* *cmpsi2_addneg */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 401:  /* *cmp_esfdf_df_trap_fpa */
    case 397:  /* *cmpesfdf_df_fpa */
    case 8:  /* *compare_negsi_si */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 99:  /* *xorsi3_compare0_scratch */
    case 7:  /* *addsi3_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 711:  /* *thumb2_mulsi_short_compare0 */
    case 98:  /* *xorsi3_compare0 */
    case 91:  /* *iorsi3_compare0 */
    case 69:  /* *andsi3_compare0 */
    case 29:  /* *subsi3_compare0 */
    case 6:  /* *addsi3_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 982:  /* *us_subv2sf_neon */
    case 981:  /* *us_subv2si_neon */
    case 980:  /* *us_subv4hi_neon */
    case 979:  /* *us_subv8qi_neon */
    case 978:  /* *ss_subv2sf_neon */
    case 977:  /* *ss_subv2si_neon */
    case 976:  /* *ss_subv4hi_neon */
    case 975:  /* *ss_subv8qi_neon */
    case 974:  /* *us_addv2sf_neon */
    case 973:  /* *us_addv2si_neon */
    case 972:  /* *us_addv4hi_neon */
    case 971:  /* *us_addv8qi_neon */
    case 970:  /* *ss_addv2sf_neon */
    case 969:  /* *ss_addv2si_neon */
    case 968:  /* *ss_addv4hi_neon */
    case 967:  /* *ss_addv8qi_neon */
    case 905:  /* vashlv4si3 */
    case 904:  /* vashlv2si3 */
    case 903:  /* vashlv8hi3 */
    case 902:  /* vashlv4hi3 */
    case 901:  /* vashlv16qi3 */
    case 900:  /* vashlv8qi3 */
    case 899:  /* *smaxv4sf3_neon */
    case 898:  /* *smaxv2sf3_neon */
    case 897:  /* *smaxv4si3_neon */
    case 896:  /* *smaxv2si3_neon */
    case 895:  /* *smaxv8hi3_neon */
    case 894:  /* *smaxv4hi3_neon */
    case 893:  /* *smaxv16qi3_neon */
    case 892:  /* *smaxv8qi3_neon */
    case 891:  /* *sminv4sf3_neon */
    case 890:  /* *sminv2sf3_neon */
    case 889:  /* *sminv4si3_neon */
    case 888:  /* *sminv2si3_neon */
    case 887:  /* *sminv8hi3_neon */
    case 886:  /* *sminv4hi3_neon */
    case 885:  /* *sminv16qi3_neon */
    case 884:  /* *sminv8qi3_neon */
    case 883:  /* *umaxv4si3_neon */
    case 882:  /* *umaxv2si3_neon */
    case 881:  /* *umaxv8hi3_neon */
    case 880:  /* *umaxv4hi3_neon */
    case 879:  /* *umaxv16qi3_neon */
    case 878:  /* *umaxv8qi3_neon */
    case 877:  /* *uminv4si3_neon */
    case 876:  /* *uminv2si3_neon */
    case 875:  /* *uminv8hi3_neon */
    case 874:  /* *uminv4hi3_neon */
    case 873:  /* *uminv16qi3_neon */
    case 872:  /* *uminv8qi3_neon */
    case 845:  /* xorv2di3 */
    case 844:  /* xorv4sf3 */
    case 843:  /* xorv2sf3 */
    case 842:  /* xorv4si3 */
    case 841:  /* xorv2si3 */
    case 840:  /* xorv8hi3 */
    case 839:  /* xorv4hi3 */
    case 838:  /* xorv16qi3 */
    case 837:  /* xorv8qi3 */
    case 815:  /* andv2di3 */
    case 814:  /* andv4sf3 */
    case 813:  /* andv2sf3 */
    case 812:  /* andv4si3 */
    case 811:  /* andv2si3 */
    case 810:  /* andv8hi3 */
    case 809:  /* andv4hi3 */
    case 808:  /* andv16qi3 */
    case 807:  /* andv8qi3 */
    case 805:  /* iorv2di3 */
    case 804:  /* iorv4sf3 */
    case 803:  /* iorv2sf3 */
    case 802:  /* iorv4si3 */
    case 801:  /* iorv2si3 */
    case 800:  /* iorv8hi3 */
    case 799:  /* iorv4hi3 */
    case 798:  /* iorv16qi3 */
    case 797:  /* iorv8qi3 */
    case 778:  /* *mulv2di3_neon */
    case 777:  /* *mulv4sf3_neon */
    case 776:  /* *mulv2sf3_neon */
    case 775:  /* *mulv4si3_neon */
    case 774:  /* *mulv2si3_neon */
    case 773:  /* *mulv8hi3_neon */
    case 772:  /* *mulv4hi3_neon */
    case 771:  /* *mulv16qi3_neon */
    case 770:  /* *mulv8qi3_neon */
    case 769:  /* *subv2di3_neon */
    case 768:  /* *subv4sf3_neon */
    case 767:  /* *subv2sf3_neon */
    case 766:  /* *subv4si3_neon */
    case 765:  /* *subv2si3_neon */
    case 764:  /* *subv8hi3_neon */
    case 763:  /* *subv4hi3_neon */
    case 762:  /* *subv16qi3_neon */
    case 761:  /* *subv8qi3_neon */
    case 760:  /* *addv2di3_neon */
    case 759:  /* *addv4sf3_neon */
    case 758:  /* *addv2sf3_neon */
    case 757:  /* *addv4si3_neon */
    case 756:  /* *addv2si3_neon */
    case 755:  /* *addv8hi3_neon */
    case 754:  /* *addv4hi3_neon */
    case 753:  /* *addv16qi3_neon */
    case 752:  /* *addv8qi3_neon */
    case 719:  /* *thumb2_iorsi3 */
    case 708:  /* udivsi3 */
    case 707:  /* divsi3 */
    case 610:  /* *muldf3_vfp */
    case 609:  /* *mulsf3_vfp */
    case 608:  /* *divdf3_vfp */
    case 607:  /* *divsf3_vfp */
    case 606:  /* *subdf3_vfp */
    case 605:  /* *subsf3_vfp */
    case 604:  /* *adddf3_vfp */
    case 603:  /* *addsf3_vfp */
    case 560:  /* ashldi3_di */
    case 559:  /* ashlv2si3_di */
    case 558:  /* ashlv4hi3_di */
    case 557:  /* lshrdi3_di */
    case 556:  /* lshrv2si3_di */
    case 555:  /* lshrv4hi3_di */
    case 554:  /* ashrdi3_di */
    case 553:  /* ashrv2si3_di */
    case 552:  /* ashrv4hi3_di */
    case 551:  /* rordi3_di */
    case 550:  /* rorv2si3_di */
    case 549:  /* rorv4hi3_di */
    case 548:  /* ashldi3_iwmmxt */
    case 547:  /* ashlv2si3_iwmmxt */
    case 546:  /* ashlv4hi3_iwmmxt */
    case 545:  /* lshrdi3_iwmmxt */
    case 544:  /* lshrv2si3_iwmmxt */
    case 543:  /* lshrv4hi3_iwmmxt */
    case 542:  /* ashrdi3_iwmmxt */
    case 541:  /* ashrv2si3_iwmmxt */
    case 540:  /* ashrv4hi3_iwmmxt */
    case 539:  /* rordi3 */
    case 538:  /* rorv2si3 */
    case 537:  /* rorv4hi3 */
    case 512:  /* *uminv8qi3_iwmmxt */
    case 511:  /* *uminv4hi3_iwmmxt */
    case 510:  /* *uminv2si3_iwmmxt */
    case 509:  /* *sminv8qi3_iwmmxt */
    case 508:  /* *sminv4hi3_iwmmxt */
    case 507:  /* *sminv2si3_iwmmxt */
    case 506:  /* *umaxv8qi3_iwmmxt */
    case 505:  /* *umaxv4hi3_iwmmxt */
    case 504:  /* *umaxv2si3_iwmmxt */
    case 503:  /* *smaxv8qi3_iwmmxt */
    case 502:  /* *smaxv4hi3_iwmmxt */
    case 501:  /* *smaxv2si3_iwmmxt */
    case 467:  /* *mulv4hi3_iwmmxt */
    case 466:  /* ussubv2si3 */
    case 465:  /* ussubv4hi3 */
    case 464:  /* ussubv8qi3 */
    case 463:  /* sssubv2si3 */
    case 462:  /* sssubv4hi3 */
    case 461:  /* sssubv8qi3 */
    case 460:  /* *subv8qi3_iwmmxt */
    case 459:  /* *subv4hi3_iwmmxt */
    case 458:  /* *subv2si3_iwmmxt */
    case 457:  /* usaddv2si3 */
    case 456:  /* usaddv4hi3 */
    case 455:  /* usaddv8qi3 */
    case 454:  /* ssaddv2si3 */
    case 453:  /* ssaddv4hi3 */
    case 452:  /* ssaddv8qi3 */
    case 451:  /* *addv8qi3_iwmmxt */
    case 450:  /* *addv4hi3_iwmmxt */
    case 449:  /* *addv2si3_iwmmxt */
    case 441:  /* iwmmxt_anddi3 */
    case 440:  /* iwmmxt_xordi3 */
    case 439:  /* iwmmxt_iordi3 */
    case 418:  /* cirrus_ashiftrtdi_const */
    case 417:  /* cirrus_ashldi_const */
    case 416:  /* ashldi3_cirrus */
    case 415:  /* *cirrus_muldf3 */
    case 414:  /* *cirrus_mulsf3 */
    case 412:  /* *cirrus_subdf3 */
    case 411:  /* *cirrus_subsf3 */
    case 410:  /* cirrus_subdi3 */
    case 409:  /* *cirrus_adddf3 */
    case 408:  /* *cirrus_addsf3 */
    case 407:  /* cirrus_adddi3 */
    case 370:  /* *moddf3_fpa */
    case 369:  /* *modsf3_fpa */
    case 365:  /* *divdf3_fpa */
    case 364:  /* *divsf3_fpa */
    case 360:  /* *muldf3_fpa */
    case 359:  /* *mulsf3_fpa */
    case 355:  /* *subdf3_fpa */
    case 354:  /* *subsf3_fpa */
    case 350:  /* *adddf3_fpa */
    case 349:  /* *addsf3_fpa */
    case 236:  /* cstoresi_ltu_thumb1 */
    case 165:  /* *arm_movt */
    case 116:  /* *thumb1_rotrsi3 */
    case 115:  /* *thumb1_lshrsi3 */
    case 113:  /* *thumb1_ashrsi3 */
    case 111:  /* *thumb1_ashlsi3 */
    case 97:  /* *thumb1_xorsi3 */
    case 96:  /* *arm_xorsi3 */
    case 93:  /* xordi3 */
    case 90:  /* *thumb1_iorsi3 */
    case 89:  /* *arm_iorsi3 */
    case 86:  /* iordi3 */
    case 68:  /* *thumb1_andsi3_insn */
    case 67:  /* *arm_andsi3_insn */
    case 64:  /* anddi3 */
    case 34:  /* *thumb_mulsi3_v6 */
    case 33:  /* *thumb_mulsi3 */
    case 32:  /* *arm_mulsi3_v6 */
    case 28:  /* *arm_subsi3_insn */
    case 27:  /* *thumb1_subsi3_insn */
    case 5:  /* *thumb1_addsi3 */
    case 4:  /* *arm_addsi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 25:  /* *subdi_sesidi_di */
    case 24:  /* *subdi_zesidi_di */
    case 3:  /* *adddi_zesidi_di */
    case 2:  /* *adddi_sesidi_di */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 710:  /* *thumb2_mulsi_short */
    case 709:  /* *thumb2_subsi_short */
    case 706:  /* *thumb2_addsi_short */
    case 651:  /* *thumb2_uminsi3 */
    case 650:  /* *thumb32_umaxsi3 */
    case 649:  /* *thumb2_sminsi3 */
    case 648:  /* *thumb2_smaxsi3 */
    case 107:  /* *arm_uminsi3 */
    case 106:  /* *arm_umaxsi3 */
    case 105:  /* *arm_smin_insn */
    case 103:  /* *arm_smax_insn */
    case 21:  /* *thumb_subdi3 */
    case 20:  /* *arm_subdi3 */
    case 1:  /* *arm_adddi3 */
    case 0:  /* *thumb1_adddi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    }
}
