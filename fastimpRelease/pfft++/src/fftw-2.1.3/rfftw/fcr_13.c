/*
 * Copyright (c) 1997-1999 Massachusetts Institute of Technology
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

/* This file was automatically generated --- DO NOT EDIT */
/* Generated on Sun Nov  7 20:44:23 EST 1999 */

#include <fftw-int.h>
#include <fftw.h>

/* Generated by: ./genfft -magic-alignment-check -magic-twiddle-load-all -magic-variables 4 -magic-loopi -hc2real 13 */

/*
 * This function contains 76 FP additions, 35 FP multiplications,
 * (or, 56 additions, 15 multiplications, 20 fused multiply/add),
 * 36 stack variables, and 26 memory accesses
 */
static const fftw_real K531932498 = FFTW_KONST(+0.531932498429674575175042127684371897596660533);
static const fftw_real K774781170 = FFTW_KONST(+0.774781170935234584261351932853525703557550433);
static const fftw_real K1_007074065 = FFTW_KONST(+1.007074065727533254493747707736933954186697125);
static const fftw_real K227708958 = FFTW_KONST(+0.227708958111581597949308691735310621069285120);
static const fftw_real K265966249 = FFTW_KONST(+0.265966249214837287587521063842185948798330267);
static const fftw_real K516520780 = FFTW_KONST(+0.516520780623489722840901288569017135705033622);
static const fftw_real K151805972 = FFTW_KONST(+0.151805972074387731966205794490207080712856746);
static const fftw_real K503537032 = FFTW_KONST(+0.503537032863766627246873853868466977093348562);
static const fftw_real K166666666 = FFTW_KONST(+0.166666666666666666666666666666666666666666667);
static const fftw_real K600925212 = FFTW_KONST(+0.600925212577331548853203544578415991041882762);
static const fftw_real K500000000 = FFTW_KONST(+0.500000000000000000000000000000000000000000000);
static const fftw_real K348277202 = FFTW_KONST(+0.348277202304271810011321589858529485233929352);
static const fftw_real K1_150281458 = FFTW_KONST(+1.150281458948006242736771094910906776922003215);
static const fftw_real K256247671 = FFTW_KONST(+0.256247671582936600958684654061725059144125175);
static const fftw_real K156891391 = FFTW_KONST(+0.156891391051584611046832726756003269660212636);
static const fftw_real K300238635 = FFTW_KONST(+0.300238635966332641462884626667381504676006424);
static const fftw_real K011599105 = FFTW_KONST(+0.011599105605768290721655456654083252189827041);
static const fftw_real K1_732050807 = FFTW_KONST(+1.732050807568877293527446341505872366942805254);
static const fftw_real K2_000000000 = FFTW_KONST(+2.000000000000000000000000000000000000000000000);

/*
 * Generator Id's : 
 * $Id: fcr_13.c,v 1.1.1.1 2002/03/12 20:08:56 zhzhu Exp $
 * $Id: fcr_13.c,v 1.1.1.1 2002/03/12 20:08:56 zhzhu Exp $
 * $Id: fcr_13.c,v 1.1.1.1 2002/03/12 20:08:56 zhzhu Exp $
 */

void fftw_hc2real_13(const fftw_real *real_input, const fftw_real *imag_input, fftw_real *output, int real_istride, int imag_istride, int ostride)
{
     fftw_real tmp42;
     fftw_real tmp52;
     fftw_real tmp45;
     fftw_real tmp51;
     fftw_real tmp56;
     fftw_real tmp67;
     fftw_real tmp1;
     fftw_real tmp22;
     fftw_real tmp12;
     fftw_real tmp13;
     fftw_real tmp16;
     fftw_real tmp19;
     fftw_real tmp20;
     fftw_real tmp23;
     fftw_real tmp24;
     fftw_real tmp25;
     ASSERT_ALIGNED_DOUBLE;
     {
	  fftw_real tmp28;
	  fftw_real tmp31;
	  fftw_real tmp32;
	  fftw_real tmp37;
	  fftw_real tmp39;
	  fftw_real tmp38;
	  fftw_real tmp35;
	  fftw_real tmp40;
	  fftw_real tmp36;
	  fftw_real tmp41;
	  ASSERT_ALIGNED_DOUBLE;
	  {
	       fftw_real tmp29;
	       fftw_real tmp30;
	       fftw_real tmp33;
	       fftw_real tmp34;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp28 = imag_input[imag_istride];
	       tmp29 = imag_input[3 * imag_istride];
	       tmp30 = imag_input[4 * imag_istride];
	       tmp31 = tmp29 - tmp30;
	       tmp32 = (K2_000000000 * tmp28) - tmp31;
	       tmp37 = K1_732050807 * (tmp29 + tmp30);
	       tmp39 = imag_input[5 * imag_istride];
	       tmp33 = imag_input[6 * imag_istride];
	       tmp34 = imag_input[2 * imag_istride];
	       tmp38 = tmp33 + tmp34;
	       tmp35 = K1_732050807 * (tmp33 - tmp34);
	       tmp40 = tmp38 - (K2_000000000 * tmp39);
	  }
	  tmp36 = tmp32 + tmp35;
	  tmp41 = tmp37 - tmp40;
	  tmp42 = (K011599105 * tmp36) - (K300238635 * tmp41);
	  tmp52 = (K300238635 * tmp36) + (K011599105 * tmp41);
	  {
	       fftw_real tmp43;
	       fftw_real tmp44;
	       fftw_real tmp54;
	       fftw_real tmp55;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp43 = tmp32 - tmp35;
	       tmp44 = tmp37 + tmp40;
	       tmp45 = (K156891391 * tmp43) + (K256247671 * tmp44);
	       tmp51 = (K256247671 * tmp43) - (K156891391 * tmp44);
	       tmp54 = tmp28 + tmp31;
	       tmp55 = tmp38 + tmp39;
	       tmp56 = (K1_150281458 * tmp54) - (K348277202 * tmp55);
	       tmp67 = (K348277202 * tmp54) + (K1_150281458 * tmp55);
	  }
     }
     {
	  fftw_real tmp11;
	  fftw_real tmp18;
	  fftw_real tmp15;
	  fftw_real tmp6;
	  fftw_real tmp17;
	  fftw_real tmp14;
	  ASSERT_ALIGNED_DOUBLE;
	  tmp1 = real_input[0];
	  {
	       fftw_real tmp7;
	       fftw_real tmp8;
	       fftw_real tmp9;
	       fftw_real tmp10;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp7 = real_input[5 * real_istride];
	       tmp8 = real_input[6 * real_istride];
	       tmp9 = real_input[2 * real_istride];
	       tmp10 = tmp8 + tmp9;
	       tmp11 = tmp7 + tmp10;
	       tmp18 = tmp7 - (K500000000 * tmp10);
	       tmp15 = tmp8 - tmp9;
	  }
	  {
	       fftw_real tmp2;
	       fftw_real tmp3;
	       fftw_real tmp4;
	       fftw_real tmp5;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp2 = real_input[real_istride];
	       tmp3 = real_input[3 * real_istride];
	       tmp4 = real_input[4 * real_istride];
	       tmp5 = tmp3 + tmp4;
	       tmp6 = tmp2 + tmp5;
	       tmp17 = tmp2 - (K500000000 * tmp5);
	       tmp14 = tmp3 - tmp4;
	  }
	  tmp22 = K600925212 * (tmp6 - tmp11);
	  tmp12 = tmp6 + tmp11;
	  tmp13 = tmp1 - (K166666666 * tmp12);
	  tmp16 = tmp14 - tmp15;
	  tmp19 = tmp17 + tmp18;
	  tmp20 = (K503537032 * tmp16) + (K151805972 * tmp19);
	  tmp23 = tmp17 - tmp18;
	  tmp24 = tmp14 + tmp15;
	  tmp25 = (K516520780 * tmp23) - (K265966249 * tmp24);
     }
     output[0] = tmp1 + (K2_000000000 * tmp12);
     {
	  fftw_real tmp46;
	  fftw_real tmp68;
	  fftw_real tmp70;
	  fftw_real tmp27;
	  fftw_real tmp69;
	  fftw_real tmp73;
	  fftw_real tmp57;
	  fftw_real tmp64;
	  fftw_real tmp63;
	  fftw_real tmp65;
	  fftw_real tmp50;
	  fftw_real tmp72;
	  ASSERT_ALIGNED_DOUBLE;
	  {
	       fftw_real tmp66;
	       fftw_real tmp21;
	       fftw_real tmp26;
	       fftw_real tmp53;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp46 = K1_732050807 * (tmp42 + tmp45);
	       tmp66 = tmp42 - tmp45;
	       tmp68 = (K2_000000000 * tmp66) - tmp67;
	       tmp70 = tmp66 + tmp67;
	       tmp21 = tmp13 - tmp20;
	       tmp26 = tmp22 - tmp25;
	       tmp27 = tmp21 - tmp26;
	       tmp69 = tmp26 + tmp21;
	       tmp73 = K1_732050807 * (tmp52 + tmp51);
	       tmp53 = tmp51 - tmp52;
	       tmp57 = tmp53 + tmp56;
	       tmp64 = tmp56 - (K2_000000000 * tmp53);
	       {
		    fftw_real tmp61;
		    fftw_real tmp62;
		    fftw_real tmp48;
		    fftw_real tmp49;
		    ASSERT_ALIGNED_DOUBLE;
		    tmp61 = (K2_000000000 * tmp20) + tmp13;
		    tmp62 = (K2_000000000 * tmp25) + tmp22;
		    tmp63 = tmp61 - tmp62;
		    tmp65 = tmp62 + tmp61;
		    tmp48 = (K227708958 * tmp16) - (K1_007074065 * tmp19);
		    tmp49 = (K774781170 * tmp24) + (K531932498 * tmp23);
		    tmp50 = tmp48 - tmp49;
		    tmp72 = tmp49 + tmp48;
	       }
	  }
	  output[5 * ostride] = tmp63 - tmp64;
	  output[8 * ostride] = tmp63 + tmp64;
	  {
	       fftw_real tmp47;
	       fftw_real tmp58;
	       fftw_real tmp59;
	       fftw_real tmp60;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp47 = tmp27 - tmp46;
	       tmp58 = tmp50 + tmp57;
	       output[2 * ostride] = tmp47 - tmp58;
	       output[7 * ostride] = tmp47 + tmp58;
	       tmp59 = tmp27 + tmp46;
	       tmp60 = tmp57 - tmp50;
	       output[6 * ostride] = tmp59 - tmp60;
	       output[11 * ostride] = tmp59 + tmp60;
	  }
	  output[12 * ostride] = tmp65 - tmp68;
	  output[ostride] = tmp65 + tmp68;
	  {
	       fftw_real tmp71;
	       fftw_real tmp74;
	       fftw_real tmp75;
	       fftw_real tmp76;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp71 = tmp69 - tmp70;
	       tmp74 = tmp72 + tmp73;
	       output[3 * ostride] = tmp71 - tmp74;
	       output[9 * ostride] = tmp74 + tmp71;
	       tmp75 = tmp69 + tmp70;
	       tmp76 = tmp73 - tmp72;
	       output[4 * ostride] = tmp75 - tmp76;
	       output[10 * ostride] = tmp76 + tmp75;
	  }
     }
}

fftw_codelet_desc fftw_hc2real_13_desc =
{
     "fftw_hc2real_13",
     (void (*)()) fftw_hc2real_13,
     13,
     FFTW_BACKWARD,
     FFTW_HC2REAL,
     301,
     0,
     (const int *) 0,
};
