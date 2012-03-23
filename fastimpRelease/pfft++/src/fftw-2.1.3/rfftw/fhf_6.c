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
/* Generated on Sun Nov  7 20:44:45 EST 1999 */

#include <fftw-int.h>
#include <fftw.h>

/* Generated by: ./genfft -magic-alignment-check -magic-twiddle-load-all -magic-variables 4 -magic-loopi -hc2hc-forward 6 */

/*
 * This function contains 72 FP additions, 36 FP multiplications,
 * (or, 54 additions, 18 multiplications, 18 fused multiply/add),
 * 23 stack variables, and 48 memory accesses
 */
static const fftw_real K500000000 = FFTW_KONST(+0.500000000000000000000000000000000000000000000);
static const fftw_real K866025403 = FFTW_KONST(+0.866025403784438646763723170752936183471402627);

/*
 * Generator Id's : 
 * $Id: fhf_6.c,v 1.1.1.1 2002/03/12 20:08:56 zhzhu Exp $
 * $Id: fhf_6.c,v 1.1.1.1 2002/03/12 20:08:56 zhzhu Exp $
 * $Id: fhf_6.c,v 1.1.1.1 2002/03/12 20:08:56 zhzhu Exp $
 */

void fftw_hc2hc_forward_6(fftw_real *A, const fftw_complex *W, int iostride, int m, int dist)
{
     int i;
     fftw_real *X;
     fftw_real *Y;
     X = A;
     Y = A + (6 * iostride);
     {
	  fftw_real tmp71;
	  fftw_real tmp81;
	  fftw_real tmp77;
	  fftw_real tmp79;
	  fftw_real tmp74;
	  fftw_real tmp80;
	  fftw_real tmp69;
	  fftw_real tmp70;
	  fftw_real tmp78;
	  fftw_real tmp82;
	  ASSERT_ALIGNED_DOUBLE;
	  tmp69 = X[0];
	  tmp70 = X[3 * iostride];
	  tmp71 = tmp69 - tmp70;
	  tmp81 = tmp69 + tmp70;
	  {
	       fftw_real tmp75;
	       fftw_real tmp76;
	       fftw_real tmp72;
	       fftw_real tmp73;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp75 = X[4 * iostride];
	       tmp76 = X[iostride];
	       tmp77 = tmp75 - tmp76;
	       tmp79 = tmp75 + tmp76;
	       tmp72 = X[2 * iostride];
	       tmp73 = X[5 * iostride];
	       tmp74 = tmp72 - tmp73;
	       tmp80 = tmp72 + tmp73;
	  }
	  Y[-iostride] = K866025403 * (tmp77 - tmp74);
	  tmp78 = tmp74 + tmp77;
	  X[iostride] = tmp71 - (K500000000 * tmp78);
	  X[3 * iostride] = tmp71 + tmp78;
	  Y[-2 * iostride] = -(K866025403 * (tmp79 - tmp80));
	  tmp82 = tmp80 + tmp79;
	  X[2 * iostride] = tmp81 - (K500000000 * tmp82);
	  X[0] = tmp81 + tmp82;
     }
     X = X + dist;
     Y = Y - dist;
     for (i = 2; i < m; i = i + 2, X = X + dist, Y = Y - dist, W = W + 5) {
	  fftw_real tmp19;
	  fftw_real tmp43;
	  fftw_real tmp62;
	  fftw_real tmp66;
	  fftw_real tmp41;
	  fftw_real tmp45;
	  fftw_real tmp53;
	  fftw_real tmp57;
	  fftw_real tmp30;
	  fftw_real tmp44;
	  fftw_real tmp50;
	  fftw_real tmp56;
	  ASSERT_ALIGNED_DOUBLE;
	  {
	       fftw_real tmp13;
	       fftw_real tmp61;
	       fftw_real tmp18;
	       fftw_real tmp60;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp13 = X[0];
	       tmp61 = Y[-5 * iostride];
	       {
		    fftw_real tmp15;
		    fftw_real tmp17;
		    fftw_real tmp14;
		    fftw_real tmp16;
		    ASSERT_ALIGNED_DOUBLE;
		    tmp15 = X[3 * iostride];
		    tmp17 = Y[-2 * iostride];
		    tmp14 = c_re(W[2]);
		    tmp16 = c_im(W[2]);
		    tmp18 = (tmp14 * tmp15) - (tmp16 * tmp17);
		    tmp60 = (tmp16 * tmp15) + (tmp14 * tmp17);
	       }
	       tmp19 = tmp13 - tmp18;
	       tmp43 = tmp13 + tmp18;
	       tmp62 = tmp60 + tmp61;
	       tmp66 = tmp61 - tmp60;
	  }
	  {
	       fftw_real tmp35;
	       fftw_real tmp51;
	       fftw_real tmp40;
	       fftw_real tmp52;
	       ASSERT_ALIGNED_DOUBLE;
	       {
		    fftw_real tmp32;
		    fftw_real tmp34;
		    fftw_real tmp31;
		    fftw_real tmp33;
		    ASSERT_ALIGNED_DOUBLE;
		    tmp32 = X[4 * iostride];
		    tmp34 = Y[-iostride];
		    tmp31 = c_re(W[3]);
		    tmp33 = c_im(W[3]);
		    tmp35 = (tmp31 * tmp32) - (tmp33 * tmp34);
		    tmp51 = (tmp33 * tmp32) + (tmp31 * tmp34);
	       }
	       {
		    fftw_real tmp37;
		    fftw_real tmp39;
		    fftw_real tmp36;
		    fftw_real tmp38;
		    ASSERT_ALIGNED_DOUBLE;
		    tmp37 = X[iostride];
		    tmp39 = Y[-4 * iostride];
		    tmp36 = c_re(W[0]);
		    tmp38 = c_im(W[0]);
		    tmp40 = (tmp36 * tmp37) - (tmp38 * tmp39);
		    tmp52 = (tmp38 * tmp37) + (tmp36 * tmp39);
	       }
	       tmp41 = tmp35 - tmp40;
	       tmp45 = tmp35 + tmp40;
	       tmp53 = tmp51 + tmp52;
	       tmp57 = tmp51 - tmp52;
	  }
	  {
	       fftw_real tmp24;
	       fftw_real tmp48;
	       fftw_real tmp29;
	       fftw_real tmp49;
	       ASSERT_ALIGNED_DOUBLE;
	       {
		    fftw_real tmp21;
		    fftw_real tmp23;
		    fftw_real tmp20;
		    fftw_real tmp22;
		    ASSERT_ALIGNED_DOUBLE;
		    tmp21 = X[2 * iostride];
		    tmp23 = Y[-3 * iostride];
		    tmp20 = c_re(W[1]);
		    tmp22 = c_im(W[1]);
		    tmp24 = (tmp20 * tmp21) - (tmp22 * tmp23);
		    tmp48 = (tmp22 * tmp21) + (tmp20 * tmp23);
	       }
	       {
		    fftw_real tmp26;
		    fftw_real tmp28;
		    fftw_real tmp25;
		    fftw_real tmp27;
		    ASSERT_ALIGNED_DOUBLE;
		    tmp26 = X[5 * iostride];
		    tmp28 = Y[0];
		    tmp25 = c_re(W[4]);
		    tmp27 = c_im(W[4]);
		    tmp29 = (tmp25 * tmp26) - (tmp27 * tmp28);
		    tmp49 = (tmp27 * tmp26) + (tmp25 * tmp28);
	       }
	       tmp30 = tmp24 - tmp29;
	       tmp44 = tmp24 + tmp29;
	       tmp50 = tmp48 + tmp49;
	       tmp56 = tmp48 - tmp49;
	  }
	  {
	       fftw_real tmp58;
	       fftw_real tmp42;
	       fftw_real tmp55;
	       fftw_real tmp68;
	       fftw_real tmp65;
	       fftw_real tmp67;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp58 = K866025403 * (tmp56 - tmp57);
	       tmp42 = tmp30 + tmp41;
	       tmp55 = tmp19 - (K500000000 * tmp42);
	       Y[-3 * iostride] = tmp19 + tmp42;
	       X[iostride] = tmp55 + tmp58;
	       Y[-5 * iostride] = tmp55 - tmp58;
	       tmp68 = K866025403 * (tmp41 - tmp30);
	       tmp65 = tmp56 + tmp57;
	       tmp67 = tmp66 - (K500000000 * tmp65);
	       X[3 * iostride] = -(tmp65 + tmp66);
	       Y[-iostride] = tmp68 + tmp67;
	       X[5 * iostride] = -(tmp67 - tmp68);
	  }
	  {
	       fftw_real tmp54;
	       fftw_real tmp46;
	       fftw_real tmp47;
	       fftw_real tmp63;
	       fftw_real tmp59;
	       fftw_real tmp64;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp54 = K866025403 * (tmp50 - tmp53);
	       tmp46 = tmp44 + tmp45;
	       tmp47 = tmp43 - (K500000000 * tmp46);
	       X[0] = tmp43 + tmp46;
	       Y[-4 * iostride] = tmp47 + tmp54;
	       X[2 * iostride] = tmp47 - tmp54;
	       tmp63 = K866025403 * (tmp45 - tmp44);
	       tmp59 = tmp50 + tmp53;
	       tmp64 = tmp62 - (K500000000 * tmp59);
	       Y[0] = tmp59 + tmp62;
	       Y[-2 * iostride] = tmp64 - tmp63;
	       X[4 * iostride] = -(tmp63 + tmp64);
	  }
     }
     if (i == m) {
	  fftw_real tmp1;
	  fftw_real tmp11;
	  fftw_real tmp4;
	  fftw_real tmp9;
	  fftw_real tmp8;
	  fftw_real tmp10;
	  fftw_real tmp5;
	  fftw_real tmp12;
	  ASSERT_ALIGNED_DOUBLE;
	  tmp1 = X[0];
	  tmp11 = X[3 * iostride];
	  {
	       fftw_real tmp2;
	       fftw_real tmp3;
	       fftw_real tmp6;
	       fftw_real tmp7;
	       ASSERT_ALIGNED_DOUBLE;
	       tmp2 = X[2 * iostride];
	       tmp3 = X[4 * iostride];
	       tmp4 = tmp2 - tmp3;
	       tmp9 = K866025403 * (tmp2 + tmp3);
	       tmp6 = X[iostride];
	       tmp7 = X[5 * iostride];
	       tmp8 = K866025403 * (tmp6 - tmp7);
	       tmp10 = tmp6 + tmp7;
	  }
	  X[iostride] = tmp1 - tmp4;
	  tmp5 = tmp1 + (K500000000 * tmp4);
	  X[2 * iostride] = tmp5 - tmp8;
	  X[0] = tmp5 + tmp8;
	  Y[-iostride] = tmp11 - tmp10;
	  tmp12 = (K500000000 * tmp10) + tmp11;
	  Y[0] = -(tmp9 + tmp12);
	  Y[-2 * iostride] = tmp9 - tmp12;
     }
}

static const int twiddle_order[] =
{1, 2, 3, 4, 5};
fftw_codelet_desc fftw_hc2hc_forward_6_desc =
{
     "fftw_hc2hc_forward_6",
     (void (*)()) fftw_hc2hc_forward_6,
     6,
     FFTW_FORWARD,
     FFTW_HC2HC,
     135,
     5,
     twiddle_order,
};
