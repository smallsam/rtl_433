INCLUDES = $(all_includes) -I$(top_srcdir)/include
AM_CFLAGS = ${CFLAGS} -fPIC ${SYMBOL_VISIBILITY}

bin_PROGRAMS         = rtl_433

rtl_433_SOURCES      = baseband.c \
                       bitbuffer.c \
                       pulse_demod.c \
                       pulse_detect.c \
                       rtl_433.c \
                       util.c \
                       devices/acurite.c \
                       devices/alecto.c \
                       devices/ambient_weather.c \
                       devices/brennstuhl_rcs_2044.c \
                       devices/calibeur.c \
                       devices/cardin.c \
                       devices/chuango.c \
                       devices/danfoss.c \
                       devices/dsc.c \
                       devices/ec3k.c \
                       devices/elv.c \
                       devices/fineoffset.c \
                       devices/generic_remote.c \
                       devices/gt_wt_02.c \
                       devices/intertechno.c \
                       devices/lacrosse.c \
                       devices/lacrossews.c \
                       devices/mebus.c \
                       devices/newkaku.c \
                       devices/nexus.c \
                       devices/oregon_scientific.c \
                       devices/prologue.c \
                       devices/rubicson.c \
                       devices/silvercrest.c \
                       devices/steffen.c \
                       devices/tfa_twin_plus_30.3049.c \
                       devices/valeo.c \
                       devices/waveman.c \
                       devices/wt450.c \
                       devices/x10_rf.c \
                       devices/esperanza_ews.c \
                       devices/xc0348.c

rtl_433_LDADD        = $(LIBRTLSDR) $(LIBM)
