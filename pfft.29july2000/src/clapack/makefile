include ../../def.makefile

CFLAGS = $(COPTIM_FLAGS) $(CDEBUG_FLAGS) -c

# No include directory except pwd neccessary:
#IFLAG = -I$(CLAPACK_INC_DIR) 
IFLAG = -I.

$(ARCH)/%.o: %.c 
	$(CC) $(CFLAGS) $(IFLAG) $< -o $@

###############################
# clapack double precision files
LIST1 = dgesvd.o                                                                       \
        dbdsqr.o  dgeqr2.o  dlamch.o  dlarfg.o  dlaset.o  dlasr.o   dorgbr.o  dormbr.o \
        dgebd2.o  dgeqrf.o  dlange.o  dlarft.o  dlasq1.o  dlasrt.o  dorgl2.o  dorml2.o \
        dgebrd.o  dlapy2.o  dlartg.o  dlasq2.o  dlassq.o  dorglq.o  dormlq.o           \
        dgelq2.o  dlabrd.o  dlarf.o   dlas2.o   dlasq3.o  dlasv2.o  dorgqr.o  dormqr.o \
        dgelqf.o  dlacpy.o  dlarfb.o  dlascl.o  dlasq4.o  dorg2r.o  dorm2r.o

# cblas files:
LIST2 = dcopy.o  dgemv.o  dnrm2.o  dscal.o  dtrmm.o  lsame.o  \
        dgemm.o  dger.o   drot.o   dswap.o  dtrmv.o  xerbla.o 

# clapack util files:
LIST3 = ilaenv.o

# f2clibs files:
LIST4 = d_sign.o  i_dnnt.o  pow_dd.o  pow_di.o  s_cat.o  s_cmp.o  s_copy.o

OBJS = $(LIST1) $(LIST2) $(LIST3) $(LIST4) 

HLIST = f2c.h

OTHERS =  makefile


all: $(ARCH) $(OBJS:%=$(ARCH)/%)

$(ARCH)/%.o: %.c
	$(CC) $(IFLAGS) $(CFLAGS) $< -o $@


# Commonly used stuff, same across multiple makefiles.
include $(PFFT_ROOT)/srcmake.incl


include depends

