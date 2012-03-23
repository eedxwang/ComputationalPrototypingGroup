#const static char cvsid[] = "$Id: share.cc.makefile,v 1.20 2003/07/16 15:32:34 zhzhu Exp $";
#
# These statements are included in several of the 
# makefiles in the src/* directories. 
#
CFLAG = -c $(WARNING_FLAG)
#$(DEBUG_ELEMENT) $(DEBUG_GRID) $(MEMORY_REPORT)\
#	   $(USE_REGIONS)   $(DISABLE_CONSISTENT_STENCIL) \
#	   $(PRINT_ELEMENT) $(PRINT_RUN_TIME) $(PRINT_PROGRESS)
 
IFLAG = -I. -I$(PFFT_INC_DIR) -I$(SRC_INC_DIR) -I$(SUPER_LU_INC_DIR) -I$(ITPP_INC_DIR) -I$(FFTW_INC_DIR) $(CFLAG)

COMPILER = $(C++)
ARCH	:= $(shell $(UTIL_DIR)/config.guess)

all: $(ARCH) $(ARCH)/$(MODULE).o $(DEPEND_FILE)

$(ARCH)/$(MODULE).o: $(OBJS:%=$(ARCH)/%)
	$(RM) $(ARCH)/$(MODULE).o; \
	$(LD) -r $(OBJS:%=$(ARCH)/%) -o $@

$(ARCH)/%.o: %.cc $(DEF_MAKEFILE)
	$(COMPILER) $(CFLAG) $(IFLAG) $< -o $@


#build *.a
lib:: $(ARCH) $(LIB_DIR)/$(MODULE).a $(DEPEND_FILE)
$(LIB_DIR)/$(MODULE).a: $(OBJS:%=$(ARCH)/%)
	ar ru $@ $(OBJS:%=$(ARCH)/%)
	$(RANLIB) $@


$(ARCH): 
	if [ ! -d $(ARCH) ]; then\
	(mkdir $(ARCH); sleep 1;)\
	fi

etags:
	etags *.cc;

DEPEND_FILE = m.depends

$(DEPEND_FILE):
	$(COMPILER) -MM $(IFLAG) $(OBJS:%.o=%.cc) > $(DEPEND_FILE)
	$(SED) -e "s,\(.*\.o\),$(ARCH:%=%/\1)," $(DEPEND_FILE) > $(DEPEND_FILE).foo
	$(MV) $(DEPEND_FILE).foo $(DEPEND_FILE)

depend: $(DEPEND_FILE)
	@echo $(DEPEND_FILE) has been generated;

clean:
	-$(RM) $(BIN_DIR)/core; 
	-$(RM) $(LIB_DIR)/$(MODULE).a
	-$(RMR) $(ARCH);
	-$(RM) *~ ; 
	-$(RM) $(DEPEND_FILE); \

minorclean:
	-$(RM) *~;

-include $(DEPEND_FILE)
