backenddir = $(CPDB_BACKEND_DIR)
backend_PROGRAMS = cups
cups_SOURCES = print_backend_cups.c backend_helper.c
cups_CPPFLAGS  = $(CPDBBACKEND_CFLAGS)
cups_CPPFLAGS += $(GLIB_CFLAGS)
cups_CPPFLAGS += $(GIO_CFLAGS)
cups_CPPFLAGS += $(GIOUNIX_CFLAGS)

cups_LDADD  =  $(CPDBBACKEND_LIBS)
cups_LDADD += -lcups -lpthread -lm -lcrypt
cups_LDADD += $(GLIB_LIBS)
cups_LDADD += $(GIO_LIBS)
cups_LDADD += $(GIOUNIX_LIBS)
