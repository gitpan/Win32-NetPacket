#define PERL_constant_NOTFOUND	1
#define PERL_constant_NOTDEF	2
#define PERL_constant_ISIV	3
#define PERL_constant_ISNO	4
#define PERL_constant_ISNV	5
#define PERL_constant_ISPV	6
#define PERL_constant_ISPVN	7
#define PERL_constant_ISSV	8
#define PERL_constant_ISUNDEF	9
#define PERL_constant_ISUV	10
#define PERL_constant_ISYES	11

#ifndef NVTYPE
typedef double NV; /* 5.6 and later define NVTYPE, and typedef NV to it.  */
#endif
#ifndef aTHX_
#define aTHX_ /* 5.6 or later define this for threading support.  */
#endif
#ifndef pTHX_
#define pTHX_ /* 5.6 or later define this for threading support.  */
#endif

static int
constant_13 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     OID_TAPI_DIAL OID_TAPI_DROP OID_TAPI_OPEN */
  /* Offset 12 gives the best switch position.  */
  switch (name[12]) {
  case 'L':
    if (memEQ(name, "OID_TAPI_DIAL", 13)) {
    /*                           ^       */
#ifdef OID_TAPI_DIAL
      *iv_return = OID_TAPI_DIAL;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "OID_TAPI_OPEN", 13)) {
    /*                           ^       */
#ifdef OID_TAPI_OPEN
      *iv_return = OID_TAPI_OPEN;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "OID_TAPI_DROP", 13)) {
    /*                           ^       */
#ifdef OID_TAPI_DROP
      *iv_return = OID_TAPI_DROP;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_14 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     OID_CO_ADD_PVC OID_GEN_RCV_OK OID_TAPI_CLOSE */
  /* Offset 12 gives the best switch position.  */
  switch (name[12]) {
  case 'O':
    if (memEQ(name, "OID_GEN_RCV_OK", 14)) {
    /*                           ^        */
#ifdef OID_GEN_RCV_OK
      *iv_return = OID_GEN_RCV_OK;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "OID_TAPI_CLOSE", 14)) {
    /*                           ^        */
#ifdef OID_TAPI_CLOSE
      *iv_return = OID_TAPI_CLOSE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'V':
    if (memEQ(name, "OID_CO_ADD_PVC", 14)) {
    /*                           ^        */
#ifdef OID_CO_ADD_PVC
      *iv_return = OID_CO_ADD_PVC;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_15 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     OID_FDDI_IF_MTU OID_GEN_XMIT_OK OID_TAPI_ACCEPT OID_TAPI_ANSWER
     OID_TAPI_GET_ID OID_WW_CDPD_EID OID_WW_CDPD_NEI OID_WW_CDPD_TEI */
  /* Offset 14 gives the best switch position.  */
  switch (name[14]) {
  case 'D':
    if (memEQ(name, "OID_TAPI_GET_ID", 15)) {
    /*                             ^       */
#ifdef OID_TAPI_GET_ID
      *iv_return = OID_TAPI_GET_ID;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_WW_CDPD_EID", 15)) {
    /*                             ^       */
#ifdef OID_WW_CDPD_EID
      *iv_return = OID_WW_CDPD_EID;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'I':
    if (memEQ(name, "OID_WW_CDPD_NEI", 15)) {
    /*                             ^       */
#ifdef OID_WW_CDPD_NEI
      *iv_return = OID_WW_CDPD_NEI;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_WW_CDPD_TEI", 15)) {
    /*                             ^       */
#ifdef OID_WW_CDPD_TEI
      *iv_return = OID_WW_CDPD_TEI;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'K':
    if (memEQ(name, "OID_GEN_XMIT_OK", 15)) {
    /*                             ^       */
#ifdef OID_GEN_XMIT_OK
      *iv_return = OID_GEN_XMIT_OK;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "OID_TAPI_ANSWER", 15)) {
    /*                             ^       */
#ifdef OID_TAPI_ANSWER
      *iv_return = OID_TAPI_ANSWER;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "OID_TAPI_ACCEPT", 15)) {
    /*                             ^       */
#ifdef OID_TAPI_ACCEPT
      *iv_return = OID_TAPI_ACCEPT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'U':
    if (memEQ(name, "OID_FDDI_IF_MTU", 15)) {
    /*                             ^       */
#ifdef OID_FDDI_IF_MTU
      *iv_return = OID_FDDI_IF_MTU;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_16 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     OID_FDDI_IF_TYPE OID_LTALK_DEFERS OID_WAN_GET_INFO OID_WW_ARD_SNDCP
     OID_WW_CDPD_RSSI OID_WW_CDPD_SPNI OID_WW_CDPD_WASI */
  /* Offset 12 gives the best switch position.  */
  switch (name[12]) {
  case 'F':
    if (memEQ(name, "OID_LTALK_DEFERS", 16)) {
    /*                           ^          */
#ifdef OID_LTALK_DEFERS
      *iv_return = OID_LTALK_DEFERS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'I':
    if (memEQ(name, "OID_WAN_GET_INFO", 16)) {
    /*                           ^          */
#ifdef OID_WAN_GET_INFO
      *iv_return = OID_WAN_GET_INFO;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "OID_WW_ARD_SNDCP", 16)) {
    /*                           ^          */
#ifdef OID_WW_ARD_SNDCP
      *iv_return = OID_WW_ARD_SNDCP;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "OID_WW_CDPD_RSSI", 16)) {
    /*                           ^          */
#ifdef OID_WW_CDPD_RSSI
      *iv_return = OID_WW_CDPD_RSSI;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "OID_WW_CDPD_SPNI", 16)) {
    /*                           ^          */
#ifdef OID_WW_CDPD_SPNI
      *iv_return = OID_WW_CDPD_SPNI;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "OID_FDDI_IF_TYPE", 16)) {
    /*                           ^          */
#ifdef OID_FDDI_IF_TYPE
      *iv_return = OID_FDDI_IF_TYPE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'W':
    if (memEQ(name, "OID_WW_CDPD_WASI", 16)) {
    /*                           ^          */
#ifdef OID_WW_CDPD_WASI
      *iv_return = OID_WW_CDPD_WASI;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_17 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     OID_CO_DELETE_PVC OID_FDDI_IF_DESCR OID_FDDI_IF_SPEED OID_GEN_RCV_ERROR
     OID_GEN_VENDOR_ID */
  /* Offset 15 gives the best switch position.  */
  switch (name[15]) {
  case 'C':
    if (memEQ(name, "OID_FDDI_IF_DESCR", 17)) {
    /*                              ^        */
#ifdef OID_FDDI_IF_DESCR
      *iv_return = OID_FDDI_IF_DESCR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "OID_FDDI_IF_SPEED", 17)) {
    /*                              ^        */
#ifdef OID_FDDI_IF_SPEED
      *iv_return = OID_FDDI_IF_SPEED;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'I':
    if (memEQ(name, "OID_GEN_VENDOR_ID", 17)) {
    /*                              ^        */
#ifdef OID_GEN_VENDOR_ID
      *iv_return = OID_GEN_VENDOR_ID;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "OID_GEN_RCV_ERROR", 17)) {
    /*                              ^        */
#ifdef OID_GEN_RCV_ERROR
      *iv_return = OID_GEN_RCV_ERROR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'V':
    if (memEQ(name, "OID_CO_DELETE_PVC", 17)) {
    /*                              ^        */
#ifdef OID_CO_DELETE_PVC
      *iv_return = OID_CO_DELETE_PVC;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_18 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     OID_CO_ADD_ADDRESS OID_FDDI_MAC_INDEX OID_FDDI_MAC_T_MAX
     OID_FDDI_MAC_T_NEG OID_FDDI_MAC_T_REQ OID_GEN_LINK_SPEED
     OID_GEN_XMIT_ERROR OID_IRDA_RECEIVING OID_TAPI_MAKE_CALL
     OID_WAN_LINE_COUNT OID_WW_GEN_LATENCY OID_WW_MBX_SUBADDR
     OID_WW_PIN_LOC_FIX */
  /* Offset 15 gives the best switch position.  */
  switch (name[15]) {
  case 'A':
    if (memEQ(name, "OID_TAPI_MAKE_CALL", 18)) {
    /*                              ^         */
#ifdef OID_TAPI_MAKE_CALL
      *iv_return = OID_TAPI_MAKE_CALL;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'D':
    if (memEQ(name, "OID_FDDI_MAC_INDEX", 18)) {
    /*                              ^         */
#ifdef OID_FDDI_MAC_INDEX
      *iv_return = OID_FDDI_MAC_INDEX;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_WW_MBX_SUBADDR", 18)) {
    /*                              ^         */
#ifdef OID_WW_MBX_SUBADDR
      *iv_return = OID_WW_MBX_SUBADDR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "OID_CO_ADD_ADDRESS", 18)) {
    /*                              ^         */
#ifdef OID_CO_ADD_ADDRESS
      *iv_return = OID_CO_ADD_ADDRESS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_GEN_LINK_SPEED", 18)) {
    /*                              ^         */
#ifdef OID_GEN_LINK_SPEED
      *iv_return = OID_GEN_LINK_SPEED;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'F':
    if (memEQ(name, "OID_WW_PIN_LOC_FIX", 18)) {
    /*                              ^         */
#ifdef OID_WW_PIN_LOC_FIX
      *iv_return = OID_WW_PIN_LOC_FIX;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'I':
    if (memEQ(name, "OID_IRDA_RECEIVING", 18)) {
    /*                              ^         */
#ifdef OID_IRDA_RECEIVING
      *iv_return = OID_IRDA_RECEIVING;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'M':
    if (memEQ(name, "OID_FDDI_MAC_T_MAX", 18)) {
    /*                              ^         */
#ifdef OID_FDDI_MAC_T_MAX
      *iv_return = OID_FDDI_MAC_T_MAX;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "OID_FDDI_MAC_T_NEG", 18)) {
    /*                              ^         */
#ifdef OID_FDDI_MAC_T_NEG
      *iv_return = OID_FDDI_MAC_T_NEG;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_WW_GEN_LATENCY", 18)) {
    /*                              ^         */
#ifdef OID_WW_GEN_LATENCY
      *iv_return = OID_WW_GEN_LATENCY;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "OID_FDDI_MAC_T_REQ", 18)) {
    /*                              ^         */
#ifdef OID_FDDI_MAC_T_REQ
      *iv_return = OID_FDDI_MAC_T_REQ;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_GEN_XMIT_ERROR", 18)) {
    /*                              ^         */
#ifdef OID_GEN_XMIT_ERROR
      *iv_return = OID_GEN_XMIT_ERROR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'U':
    if (memEQ(name, "OID_WAN_LINE_COUNT", 18)) {
    /*                              ^         */
#ifdef OID_WAN_LINE_COUNT
      *iv_return = OID_WAN_LINE_COUNT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_19 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     OID_802_5_AC_ERRORS OID_ATM_ILMI_VPIVCI OID_FDDI_MAC_T_PRI0
     OID_FDDI_MAC_T_PRI1 OID_FDDI_MAC_T_PRI2 OID_FDDI_MAC_T_PRI3
     OID_FDDI_MAC_T_PRI4 OID_FDDI_MAC_T_PRI5 OID_FDDI_MAC_T_PRI6
     OID_FDDI_PATH_INDEX OID_FDDI_PORT_INDEX OID_FDDI_PORT_PC_LS
     OID_FDDI_SMT_MAC_CT OID_GEN_MAC_OPTIONS OID_IRDA_LINK_SPEED
     OID_IRDA_MEDIA_BUSY OID_IRDA_RATE_SNIFF OID_TAPI_CLOSE_CALL
     OID_WW_ARD_DATAGRAM OID_WW_ARD_TMLY_MSG OID_WW_MBX_FLEXLIST
     OID_WW_MBX_LIVE_DIE OID_WW_MET_FUNCTION */
  /* Offset 18 gives the best switch position.  */
  switch (name[18]) {
  case '0':
    if (memEQ(name, "OID_FDDI_MAC_T_PRI0", 19)) {
    /*                                 ^       */
#ifdef OID_FDDI_MAC_T_PRI0
      *iv_return = OID_FDDI_MAC_T_PRI0;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '1':
    if (memEQ(name, "OID_FDDI_MAC_T_PRI1", 19)) {
    /*                                 ^       */
#ifdef OID_FDDI_MAC_T_PRI1
      *iv_return = OID_FDDI_MAC_T_PRI1;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '2':
    if (memEQ(name, "OID_FDDI_MAC_T_PRI2", 19)) {
    /*                                 ^       */
#ifdef OID_FDDI_MAC_T_PRI2
      *iv_return = OID_FDDI_MAC_T_PRI2;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '3':
    if (memEQ(name, "OID_FDDI_MAC_T_PRI3", 19)) {
    /*                                 ^       */
#ifdef OID_FDDI_MAC_T_PRI3
      *iv_return = OID_FDDI_MAC_T_PRI3;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '4':
    if (memEQ(name, "OID_FDDI_MAC_T_PRI4", 19)) {
    /*                                 ^       */
#ifdef OID_FDDI_MAC_T_PRI4
      *iv_return = OID_FDDI_MAC_T_PRI4;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '5':
    if (memEQ(name, "OID_FDDI_MAC_T_PRI5", 19)) {
    /*                                 ^       */
#ifdef OID_FDDI_MAC_T_PRI5
      *iv_return = OID_FDDI_MAC_T_PRI5;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '6':
    if (memEQ(name, "OID_FDDI_MAC_T_PRI6", 19)) {
    /*                                 ^       */
#ifdef OID_FDDI_MAC_T_PRI6
      *iv_return = OID_FDDI_MAC_T_PRI6;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'D':
    if (memEQ(name, "OID_IRDA_LINK_SPEED", 19)) {
    /*                                 ^       */
#ifdef OID_IRDA_LINK_SPEED
      *iv_return = OID_IRDA_LINK_SPEED;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "OID_WW_MBX_LIVE_DIE", 19)) {
    /*                                 ^       */
#ifdef OID_WW_MBX_LIVE_DIE
      *iv_return = OID_WW_MBX_LIVE_DIE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'F':
    if (memEQ(name, "OID_IRDA_RATE_SNIFF", 19)) {
    /*                                 ^       */
#ifdef OID_IRDA_RATE_SNIFF
      *iv_return = OID_IRDA_RATE_SNIFF;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'G':
    if (memEQ(name, "OID_WW_ARD_TMLY_MSG", 19)) {
    /*                                 ^       */
#ifdef OID_WW_ARD_TMLY_MSG
      *iv_return = OID_WW_ARD_TMLY_MSG;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'I':
    if (memEQ(name, "OID_ATM_ILMI_VPIVCI", 19)) {
    /*                                 ^       */
#ifdef OID_ATM_ILMI_VPIVCI
      *iv_return = OID_ATM_ILMI_VPIVCI;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "OID_TAPI_CLOSE_CALL", 19)) {
    /*                                 ^       */
#ifdef OID_TAPI_CLOSE_CALL
      *iv_return = OID_TAPI_CLOSE_CALL;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'M':
    if (memEQ(name, "OID_WW_ARD_DATAGRAM", 19)) {
    /*                                 ^       */
#ifdef OID_WW_ARD_DATAGRAM
      *iv_return = OID_WW_ARD_DATAGRAM;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "OID_WW_MET_FUNCTION", 19)) {
    /*                                 ^       */
#ifdef OID_WW_MET_FUNCTION
      *iv_return = OID_WW_MET_FUNCTION;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "OID_802_5_AC_ERRORS", 19)) {
    /*                                 ^       */
#ifdef OID_802_5_AC_ERRORS
      *iv_return = OID_802_5_AC_ERRORS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_FDDI_PORT_PC_LS", 19)) {
    /*                                 ^       */
#ifdef OID_FDDI_PORT_PC_LS
      *iv_return = OID_FDDI_PORT_PC_LS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_GEN_MAC_OPTIONS", 19)) {
    /*                                 ^       */
#ifdef OID_GEN_MAC_OPTIONS
      *iv_return = OID_GEN_MAC_OPTIONS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "OID_FDDI_SMT_MAC_CT", 19)) {
    /*                                 ^       */
#ifdef OID_FDDI_SMT_MAC_CT
      *iv_return = OID_FDDI_SMT_MAC_CT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_WW_MBX_FLEXLIST", 19)) {
    /*                                 ^       */
#ifdef OID_WW_MBX_FLEXLIST
      *iv_return = OID_WW_MBX_FLEXLIST;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'X':
    if (memEQ(name, "OID_FDDI_PATH_INDEX", 19)) {
    /*                                 ^       */
#ifdef OID_FDDI_PATH_INDEX
      *iv_return = OID_FDDI_PATH_INDEX;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_FDDI_PORT_INDEX", 19)) {
    /*                                 ^       */
#ifdef OID_FDDI_PORT_INDEX
      *iv_return = OID_FDDI_PORT_INDEX;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'Y':
    if (memEQ(name, "OID_IRDA_MEDIA_BUSY", 19)) {
    /*                                 ^       */
#ifdef OID_IRDA_MEDIA_BUSY
      *iv_return = OID_IRDA_MEDIA_BUSY;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_20 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     NDIS_PACKET_TYPE_SMT NDIS_RING_HARD_ERROR NDIS_RING_SOFT_ERROR
     OID_ATM_ASSIGNED_VPI OID_ATM_RCV_CELLS_OK OID_CO_GET_ADDRESSES
     OID_FDDI_FRAMES_LOST OID_FDDI_IF_OUT_QLEN OID_FDDI_IF_SPECIFIC
     OID_FDDI_LEM_REJECTS OID_FDDI_MAC_DA_FLAG OID_FDDI_MAC_LATE_CT
     OID_FDDI_MAC_LOST_CT OID_FDDI_PORT_ACTION OID_FDDI_PORT_LEM_CT
     OID_GEN_CO_BYTES_RCV OID_GEN_CO_VENDOR_ID OID_GEN_MEDIA_IN_USE
     OID_LTALK_COLLISIONS OID_LTALK_FCS_ERRORS OID_TAPI_SECURE_CALL
     OID_WW_MBX_GROUPLIST */
  /* Offset 12 gives the best switch position.  */
  switch (name[12]) {
  case 'A':
    if (memEQ(name, "OID_GEN_MEDIA_IN_USE", 20)) {
    /*                           ^              */
#ifdef OID_GEN_MEDIA_IN_USE
      *iv_return = OID_GEN_MEDIA_IN_USE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'C':
    if (memEQ(name, "OID_ATM_RCV_CELLS_OK", 20)) {
    /*                           ^              */
#ifdef OID_ATM_RCV_CELLS_OK
      *iv_return = OID_ATM_RCV_CELLS_OK;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'D':
    if (memEQ(name, "OID_CO_GET_ADDRESSES", 20)) {
    /*                           ^              */
#ifdef OID_CO_GET_ADDRESSES
      *iv_return = OID_CO_GET_ADDRESSES;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "OID_GEN_CO_VENDOR_ID", 20)) {
    /*                           ^              */
#ifdef OID_GEN_CO_VENDOR_ID
      *iv_return = OID_GEN_CO_VENDOR_ID;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'F':
    if (memEQ(name, "NDIS_RING_SOFT_ERROR", 20)) {
    /*                           ^              */
#ifdef NDIS_RING_SOFT_ERROR
      *iv_return = NDIS_RING_SOFT_ERROR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'G':
    if (memEQ(name, "OID_ATM_ASSIGNED_VPI", 20)) {
    /*                           ^              */
#ifdef OID_ATM_ASSIGNED_VPI
      *iv_return = OID_ATM_ASSIGNED_VPI;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "OID_LTALK_COLLISIONS", 20)) {
    /*                           ^              */
#ifdef OID_LTALK_COLLISIONS
      *iv_return = OID_LTALK_COLLISIONS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'M':
    if (memEQ(name, "OID_FDDI_FRAMES_LOST", 20)) {
    /*                           ^              */
#ifdef OID_FDDI_FRAMES_LOST
      *iv_return = OID_FDDI_FRAMES_LOST;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "OID_FDDI_IF_OUT_QLEN", 20)) {
    /*                           ^              */
#ifdef OID_FDDI_IF_OUT_QLEN
      *iv_return = OID_FDDI_IF_OUT_QLEN;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "NDIS_RING_HARD_ERROR", 20)) {
    /*                           ^              */
#ifdef NDIS_RING_HARD_ERROR
      *iv_return = NDIS_RING_HARD_ERROR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_WW_MBX_GROUPLIST", 20)) {
    /*                           ^              */
#ifdef OID_WW_MBX_GROUPLIST
      *iv_return = OID_WW_MBX_GROUPLIST;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "OID_FDDI_IF_SPECIFIC", 20)) {
    /*                           ^              */
#ifdef OID_FDDI_IF_SPECIFIC
      *iv_return = OID_FDDI_IF_SPECIFIC;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_LTALK_FCS_ERRORS", 20)) {
    /*                           ^              */
#ifdef OID_LTALK_FCS_ERRORS
      *iv_return = OID_LTALK_FCS_ERRORS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "NDIS_PACKET_TYPE_SMT", 20)) {
    /*                           ^              */
#ifdef NDIS_PACKET_TYPE_SMT
      *iv_return = NDIS_PACKET_TYPE_SMT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_FDDI_PORT_ACTION", 20)) {
    /*                           ^              */
#ifdef OID_FDDI_PORT_ACTION
      *iv_return = OID_FDDI_PORT_ACTION;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_FDDI_PORT_LEM_CT", 20)) {
    /*                           ^              */
#ifdef OID_FDDI_PORT_LEM_CT
      *iv_return = OID_FDDI_PORT_LEM_CT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'U':
    if (memEQ(name, "OID_TAPI_SECURE_CALL", 20)) {
    /*                           ^              */
#ifdef OID_TAPI_SECURE_CALL
      *iv_return = OID_TAPI_SECURE_CALL;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'Y':
    if (memEQ(name, "OID_GEN_CO_BYTES_RCV", 20)) {
    /*                           ^              */
#ifdef OID_GEN_CO_BYTES_RCV
      *iv_return = OID_GEN_CO_BYTES_RCV;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '_':
    if (memEQ(name, "OID_FDDI_LEM_REJECTS", 20)) {
    /*                           ^              */
#ifdef OID_FDDI_LEM_REJECTS
      *iv_return = OID_FDDI_LEM_REJECTS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_FDDI_MAC_DA_FLAG", 20)) {
    /*                           ^              */
#ifdef OID_FDDI_MAC_DA_FLAG
      *iv_return = OID_FDDI_MAC_DA_FLAG;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_FDDI_MAC_LATE_CT", 20)) {
    /*                           ^              */
#ifdef OID_FDDI_MAC_LATE_CT
      *iv_return = OID_FDDI_MAC_LATE_CT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_FDDI_MAC_LOST_CT", 20)) {
    /*                           ^              */
#ifdef OID_FDDI_MAC_LOST_CT
      *iv_return = OID_FDDI_MAC_LOST_CT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_21 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     NDIS_RING_SIGNAL_LOSS OID_802_3_MAC_OPTIONS OID_802_3_RCV_OVERRUN
     OID_802_5_LINE_ERRORS OID_802_5_LOST_FRAMES OID_ATM_XMIT_CELLS_OK
     OID_CO_ADDRESS_CHANGE OID_CO_DELETE_ADDRESS OID_FDDI_FRAME_ERRORS
     OID_FDDI_IF_IN_ERRORS OID_FDDI_IF_IN_OCTETS OID_FDDI_LCT_FAILURES
     OID_FDDI_MAC_ERROR_CT OID_FDDI_MAC_FRAME_CT OID_FDDI_MAC_TOKEN_CT
     OID_FDDI_PORT_BS_FLAG OID_FDDI_PORT_MY_TYPE OID_FDDI_SMT_CF_STATE
     OID_FDDI_SMT_T_NOTIFY OID_GEN_CO_BYTES_XMIT OID_GEN_CO_LINK_SPEED
     OID_GEN_GET_TIME_CAPS OID_GEN_RCV_CRC_ERROR OID_GEN_RCV_NO_BUFFER
     OID_IRDA_UNICAST_LIST OID_TAPI_DEV_SPECIFIC OID_TAPI_GET_DEV_CAPS
     OID_WAN_GET_COMP_INFO OID_WAN_GET_LINK_INFO OID_WAN_HEADER_FORMAT
     OID_WAN_PROTOCOL_TYPE OID_WAN_SET_COMP_INFO OID_WAN_SET_LINK_INFO
     OID_WW_CDPD_NEI_STATE OID_WW_GEN_CHANNEL_ID OID_WW_GEN_NETWORK_ID
     OID_WW_TAC_GET_STATUS OID_WW_TAC_SET_CONFIG */
  /* Offset 15 gives the best switch position.  */
  switch (name[15]) {
  case 'A':
    if (memEQ(name, "OID_FDDI_MAC_FRAME_CT", 21)) {
    /*                              ^            */
#ifdef OID_FDDI_MAC_FRAME_CT
      *iv_return = OID_FDDI_MAC_FRAME_CT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'B':
    if (memEQ(name, "OID_GEN_RCV_NO_BUFFER", 21)) {
    /*                              ^            */
#ifdef OID_GEN_RCV_NO_BUFFER
      *iv_return = OID_GEN_RCV_NO_BUFFER;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'C':
    if (memEQ(name, "OID_CO_ADDRESS_CHANGE", 21)) {
    /*                              ^            */
#ifdef OID_CO_ADDRESS_CHANGE
      *iv_return = OID_CO_ADDRESS_CHANGE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_WW_TAC_SET_CONFIG", 21)) {
    /*                              ^            */
#ifdef OID_WW_TAC_SET_CONFIG
      *iv_return = OID_WW_TAC_SET_CONFIG;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'D':
    if (memEQ(name, "OID_CO_DELETE_ADDRESS", 21)) {
    /*                              ^            */
#ifdef OID_CO_DELETE_ADDRESS
      *iv_return = OID_CO_DELETE_ADDRESS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "OID_802_5_LINE_ERRORS", 21)) {
    /*                              ^            */
#ifdef OID_802_5_LINE_ERRORS
      *iv_return = OID_802_5_LINE_ERRORS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_FDDI_FRAME_ERRORS", 21)) {
    /*                              ^            */
#ifdef OID_FDDI_FRAME_ERRORS
      *iv_return = OID_FDDI_FRAME_ERRORS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_FDDI_IF_IN_ERRORS", 21)) {
    /*                              ^            */
#ifdef OID_FDDI_IF_IN_ERRORS
      *iv_return = OID_FDDI_IF_IN_ERRORS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_GEN_GET_TIME_CAPS", 21)) {
    /*                              ^            */
#ifdef OID_GEN_GET_TIME_CAPS
      *iv_return = OID_GEN_GET_TIME_CAPS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_TAPI_DEV_SPECIFIC", 21)) {
    /*                              ^            */
#ifdef OID_TAPI_DEV_SPECIFIC
      *iv_return = OID_TAPI_DEV_SPECIFIC;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'F':
    if (memEQ(name, "OID_802_5_LOST_FRAMES", 21)) {
    /*                              ^            */
#ifdef OID_802_5_LOST_FRAMES
      *iv_return = OID_802_5_LOST_FRAMES;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_WAN_HEADER_FORMAT", 21)) {
    /*                              ^            */
#ifdef OID_WAN_HEADER_FORMAT
      *iv_return = OID_WAN_HEADER_FORMAT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'I':
    if (memEQ(name, "OID_FDDI_LCT_FAILURES", 21)) {
    /*                              ^            */
#ifdef OID_FDDI_LCT_FAILURES
      *iv_return = OID_FDDI_LCT_FAILURES;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'K':
    if (memEQ(name, "OID_FDDI_MAC_TOKEN_CT", 21)) {
    /*                              ^            */
#ifdef OID_FDDI_MAC_TOKEN_CT
      *iv_return = OID_FDDI_MAC_TOKEN_CT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_WAN_GET_LINK_INFO", 21)) {
    /*                              ^            */
#ifdef OID_WAN_GET_LINK_INFO
      *iv_return = OID_WAN_GET_LINK_INFO;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_WAN_SET_LINK_INFO", 21)) {
    /*                              ^            */
#ifdef OID_WAN_SET_LINK_INFO
      *iv_return = OID_WAN_SET_LINK_INFO;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "NDIS_RING_SIGNAL_LOSS", 21)) {
    /*                              ^            */
#ifdef NDIS_RING_SIGNAL_LOSS
      *iv_return = NDIS_RING_SIGNAL_LOSS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_ATM_XMIT_CELLS_OK", 21)) {
    /*                              ^            */
#ifdef OID_ATM_XMIT_CELLS_OK
      *iv_return = OID_ATM_XMIT_CELLS_OK;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_WAN_PROTOCOL_TYPE", 21)) {
    /*                              ^            */
#ifdef OID_WAN_PROTOCOL_TYPE
      *iv_return = OID_WAN_PROTOCOL_TYPE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "OID_FDDI_SMT_T_NOTIFY", 21)) {
    /*                              ^            */
#ifdef OID_FDDI_SMT_T_NOTIFY
      *iv_return = OID_FDDI_SMT_T_NOTIFY;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_WW_GEN_CHANNEL_ID", 21)) {
    /*                              ^            */
#ifdef OID_WW_GEN_CHANNEL_ID
      *iv_return = OID_WW_GEN_CHANNEL_ID;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "OID_FDDI_IF_IN_OCTETS", 21)) {
    /*                              ^            */
#ifdef OID_FDDI_IF_IN_OCTETS
      *iv_return = OID_FDDI_IF_IN_OCTETS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_WW_GEN_NETWORK_ID", 21)) {
    /*                              ^            */
#ifdef OID_WW_GEN_NETWORK_ID
      *iv_return = OID_WW_GEN_NETWORK_ID;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "OID_802_3_MAC_OPTIONS", 21)) {
    /*                              ^            */
#ifdef OID_802_3_MAC_OPTIONS
      *iv_return = OID_802_3_MAC_OPTIONS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_WAN_GET_COMP_INFO", 21)) {
    /*                              ^            */
#ifdef OID_WAN_GET_COMP_INFO
      *iv_return = OID_WAN_GET_COMP_INFO;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_WAN_SET_COMP_INFO", 21)) {
    /*                              ^            */
#ifdef OID_WAN_SET_COMP_INFO
      *iv_return = OID_WAN_SET_COMP_INFO;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "OID_FDDI_MAC_ERROR_CT", 21)) {
    /*                              ^            */
#ifdef OID_FDDI_MAC_ERROR_CT
      *iv_return = OID_FDDI_MAC_ERROR_CT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "OID_FDDI_PORT_BS_FLAG", 21)) {
    /*                              ^            */
#ifdef OID_FDDI_PORT_BS_FLAG
      *iv_return = OID_FDDI_PORT_BS_FLAG;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_GEN_CO_BYTES_XMIT", 21)) {
    /*                              ^            */
#ifdef OID_GEN_CO_BYTES_XMIT
      *iv_return = OID_GEN_CO_BYTES_XMIT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_WW_TAC_GET_STATUS", 21)) {
    /*                              ^            */
#ifdef OID_WW_TAC_GET_STATUS
      *iv_return = OID_WW_TAC_GET_STATUS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "OID_IRDA_UNICAST_LIST", 21)) {
    /*                              ^            */
#ifdef OID_IRDA_UNICAST_LIST
      *iv_return = OID_IRDA_UNICAST_LIST;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'V':
    if (memEQ(name, "OID_802_3_RCV_OVERRUN", 21)) {
    /*                              ^            */
#ifdef OID_802_3_RCV_OVERRUN
      *iv_return = OID_802_3_RCV_OVERRUN;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_TAPI_GET_DEV_CAPS", 21)) {
    /*                              ^            */
#ifdef OID_TAPI_GET_DEV_CAPS
      *iv_return = OID_TAPI_GET_DEV_CAPS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'Y':
    if (memEQ(name, "OID_FDDI_PORT_MY_TYPE", 21)) {
    /*                              ^            */
#ifdef OID_FDDI_PORT_MY_TYPE
      *iv_return = OID_FDDI_PORT_MY_TYPE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '_':
    if (memEQ(name, "OID_FDDI_SMT_CF_STATE", 21)) {
    /*                              ^            */
#ifdef OID_FDDI_SMT_CF_STATE
      *iv_return = OID_FDDI_SMT_CF_STATE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_GEN_CO_LINK_SPEED", 21)) {
    /*                              ^            */
#ifdef OID_GEN_CO_LINK_SPEED
      *iv_return = OID_GEN_CO_LINK_SPEED;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_GEN_RCV_CRC_ERROR", 21)) {
    /*                              ^            */
#ifdef OID_GEN_RCV_CRC_ERROR
      *iv_return = OID_GEN_RCV_CRC_ERROR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_WW_CDPD_NEI_STATE", 21)) {
    /*                              ^            */
#ifdef OID_WW_CDPD_NEI_STATE
      *iv_return = OID_WW_CDPD_NEI_STATE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_22 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     NDIS_PACKET_TYPE_GROUP OID_802_5_BURST_ERRORS OID_802_5_TOKEN_ERRORS
     OID_ATM_MAX_ACTIVE_VCS OID_FDDI_IF_OUT_ERRORS OID_FDDI_IF_OUT_OCTETS
     OID_FDDI_MAC_COPIED_CT OID_FDDI_MAC_RMT_STATE OID_FDDI_MAC_TVX_VALUE
     OID_FDDI_MAC_UNDA_FLAG OID_FDDI_PATH_T_R_MODE OID_FDDI_PORT_LER_FLAG
     OID_FDDI_PORT_MAINT_LS OID_FDDI_SMT_ECM_STATE OID_FDDI_SMT_MASTER_CT
     OID_FDDI_SMT_SET_COUNT OID_FDDI_SMT_USER_DATA OID_GEN_CO_MAC_OPTIONS
     OID_GEN_CO_RCV_PDUS_OK OID_GEN_DRIVER_VERSION OID_GEN_SUPPORTED_LIST
     OID_TAPI_CONFIG_DIALOG OID_TAPI_GET_CALL_INFO OID_WAN_GET_STATS_INFO
     OID_WAN_MEDIUM_SUBTYPE OID_WW_CDPD_AREA_COLOR OID_WW_CDPD_SLEEP_MODE
     OID_WW_GEN_DEVICE_INFO OID_WW_GEN_LOCK_STATUS OID_WW_TAC_COMPRESSION
     OID_WW_TAC_USER_HEADER */
  /* Offset 14 gives the best switch position.  */
  switch (name[14]) {
  case 'A':
    if (memEQ(name, "OID_FDDI_SMT_MASTER_CT", 22)) {
    /*                             ^              */
#ifdef OID_FDDI_SMT_MASTER_CT
      *iv_return = OID_FDDI_SMT_MASTER_CT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_TAPI_GET_CALL_INFO", 22)) {
    /*                             ^              */
#ifdef OID_TAPI_GET_CALL_INFO
      *iv_return = OID_TAPI_GET_CALL_INFO;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_WAN_GET_STATS_INFO", 22)) {
    /*                             ^              */
#ifdef OID_WAN_GET_STATS_INFO
      *iv_return = OID_WAN_GET_STATS_INFO;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'C':
    if (memEQ(name, "OID_FDDI_SMT_ECM_STATE", 22)) {
    /*                             ^              */
#ifdef OID_FDDI_SMT_ECM_STATE
      *iv_return = OID_FDDI_SMT_ECM_STATE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "OID_FDDI_SMT_SET_COUNT", 22)) {
    /*                             ^              */
#ifdef OID_FDDI_SMT_SET_COUNT
      *iv_return = OID_FDDI_SMT_SET_COUNT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_WW_CDPD_AREA_COLOR", 22)) {
    /*                             ^              */
#ifdef OID_WW_CDPD_AREA_COLOR
      *iv_return = OID_WW_CDPD_AREA_COLOR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_WW_CDPD_SLEEP_MODE", 22)) {
    /*                             ^              */
#ifdef OID_WW_CDPD_SLEEP_MODE
      *iv_return = OID_WW_CDPD_SLEEP_MODE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'G':
    if (memEQ(name, "OID_TAPI_CONFIG_DIALOG", 22)) {
    /*                             ^              */
#ifdef OID_TAPI_CONFIG_DIALOG
      *iv_return = OID_TAPI_CONFIG_DIALOG;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'I':
    if (memEQ(name, "OID_WW_GEN_DEVICE_INFO", 22)) {
    /*                             ^              */
#ifdef OID_WW_GEN_DEVICE_INFO
      *iv_return = OID_WW_GEN_DEVICE_INFO;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'K':
    if (memEQ(name, "OID_WW_GEN_LOCK_STATUS", 22)) {
    /*                             ^              */
#ifdef OID_WW_GEN_LOCK_STATUS
      *iv_return = OID_WW_GEN_LOCK_STATUS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "OID_FDDI_PORT_LER_FLAG", 22)) {
    /*                             ^              */
#ifdef OID_FDDI_PORT_LER_FLAG
      *iv_return = OID_FDDI_PORT_LER_FLAG;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'M':
    if (memEQ(name, "OID_FDDI_MAC_RMT_STATE", 22)) {
    /*                             ^              */
#ifdef OID_FDDI_MAC_RMT_STATE
      *iv_return = OID_FDDI_MAC_RMT_STATE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_FDDI_PORT_MAINT_LS", 22)) {
    /*                             ^              */
#ifdef OID_FDDI_PORT_MAINT_LS
      *iv_return = OID_FDDI_PORT_MAINT_LS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "OID_802_5_TOKEN_ERRORS", 22)) {
    /*                             ^              */
#ifdef OID_802_5_TOKEN_ERRORS
      *iv_return = OID_802_5_TOKEN_ERRORS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_FDDI_MAC_UNDA_FLAG", 22)) {
    /*                             ^              */
#ifdef OID_FDDI_MAC_UNDA_FLAG
      *iv_return = OID_FDDI_MAC_UNDA_FLAG;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "OID_FDDI_MAC_COPIED_CT", 22)) {
    /*                             ^              */
#ifdef OID_FDDI_MAC_COPIED_CT
      *iv_return = OID_FDDI_MAC_COPIED_CT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "NDIS_PACKET_TYPE_GROUP", 22)) {
    /*                             ^              */
#ifdef NDIS_PACKET_TYPE_GROUP
      *iv_return = NDIS_PACKET_TYPE_GROUP;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_WW_TAC_COMPRESSION", 22)) {
    /*                             ^              */
#ifdef OID_WW_TAC_COMPRESSION
      *iv_return = OID_WW_TAC_COMPRESSION;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "OID_WW_TAC_USER_HEADER", 22)) {
    /*                             ^              */
#ifdef OID_WW_TAC_USER_HEADER
      *iv_return = OID_WW_TAC_USER_HEADER;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "OID_FDDI_SMT_USER_DATA", 22)) {
    /*                             ^              */
#ifdef OID_FDDI_SMT_USER_DATA
      *iv_return = OID_FDDI_SMT_USER_DATA;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "OID_802_5_BURST_ERRORS", 22)) {
    /*                             ^              */
#ifdef OID_802_5_BURST_ERRORS
      *iv_return = OID_802_5_BURST_ERRORS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_ATM_MAX_ACTIVE_VCS", 22)) {
    /*                             ^              */
#ifdef OID_ATM_MAX_ACTIVE_VCS
      *iv_return = OID_ATM_MAX_ACTIVE_VCS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_FDDI_IF_OUT_ERRORS", 22)) {
    /*                             ^              */
#ifdef OID_FDDI_IF_OUT_ERRORS
      *iv_return = OID_FDDI_IF_OUT_ERRORS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_FDDI_IF_OUT_OCTETS", 22)) {
    /*                             ^              */
#ifdef OID_FDDI_IF_OUT_OCTETS
      *iv_return = OID_FDDI_IF_OUT_OCTETS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_FDDI_PATH_T_R_MODE", 22)) {
    /*                             ^              */
#ifdef OID_FDDI_PATH_T_R_MODE
      *iv_return = OID_FDDI_PATH_T_R_MODE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_GEN_SUPPORTED_LIST", 22)) {
    /*                             ^              */
#ifdef OID_GEN_SUPPORTED_LIST
      *iv_return = OID_GEN_SUPPORTED_LIST;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'V':
    if (memEQ(name, "OID_FDDI_MAC_TVX_VALUE", 22)) {
    /*                             ^              */
#ifdef OID_FDDI_MAC_TVX_VALUE
      *iv_return = OID_FDDI_MAC_TVX_VALUE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '_':
    if (memEQ(name, "OID_GEN_CO_MAC_OPTIONS", 22)) {
    /*                             ^              */
#ifdef OID_GEN_CO_MAC_OPTIONS
      *iv_return = OID_GEN_CO_MAC_OPTIONS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_GEN_CO_RCV_PDUS_OK", 22)) {
    /*                             ^              */
#ifdef OID_GEN_CO_RCV_PDUS_OK
      *iv_return = OID_GEN_CO_RCV_PDUS_OK;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_GEN_DRIVER_VERSION", 22)) {
    /*                             ^              */
#ifdef OID_GEN_DRIVER_VERSION
      *iv_return = OID_GEN_DRIVER_VERSION;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_WAN_MEDIUM_SUBTYPE", 22)) {
    /*                             ^              */
#ifdef OID_WAN_MEDIUM_SUBTYPE
      *iv_return = OID_WAN_MEDIUM_SUBTYPE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_23 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     NDIS_RING_RING_RECOVERY OID_802_3_XMIT_DEFERRED OID_802_3_XMIT_UNDERRUN
     OID_802_5_CURRENT_GROUP OID_ATM_CELLS_HEC_ERROR OID_FDDI_IF_IN_DISCARDS
     OID_FDDI_IF_LAST_CHANGE OID_FDDI_IF_OPER_STATUS OID_FDDI_MAC_RING_OP_CT
     OID_FDDI_PATH_MAX_T_REQ OID_FDDI_PORT_LER_ALARM OID_FDDI_PORT_PCM_STATE
     OID_FDDI_PORT_PMD_CLASS OID_FDDI_RING_MGT_STATE OID_FDDI_SMT_HOLD_STATE
     OID_FDDI_SMT_STATION_ID OID_GEN_CO_MEDIA_IN_USE OID_GEN_CO_NETCARD_LOAD
     OID_GEN_CO_XMIT_PDUS_OK OID_GEN_HARDWARE_STATUS OID_GEN_MEDIA_SUPPORTED
     OID_IRDA_EXTRA_RCV_BOFS OID_LTALK_IN_BROADCASTS OID_TAPI_GET_ADDRESS_ID
     OID_TAPI_GET_DEV_CONFIG OID_TAPI_SET_DEV_CONFIG OID_TAPI_SET_MEDIA_MODE
     OID_WAN_CURRENT_ADDRESS OID_WAN_GET_BRIDGE_INFO OID_WAN_SET_BRIDGE_INFO
     OID_WW_MBX_TRAFFIC_AREA */
  /* Offset 15 gives the best switch position.  */
  switch (name[15]) {
  case 'A':
    if (memEQ(name, "OID_FDDI_PATH_MAX_T_REQ", 23)) {
    /*                              ^              */
#ifdef OID_FDDI_PATH_MAX_T_REQ
      *iv_return = OID_FDDI_PATH_MAX_T_REQ;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_FDDI_SMT_STATION_ID", 23)) {
    /*                              ^              */
#ifdef OID_FDDI_SMT_STATION_ID
      *iv_return = OID_FDDI_SMT_STATION_ID;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_GEN_CO_MEDIA_IN_USE", 23)) {
    /*                              ^              */
#ifdef OID_GEN_CO_MEDIA_IN_USE
      *iv_return = OID_GEN_CO_MEDIA_IN_USE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_GEN_CO_NETCARD_LOAD", 23)) {
    /*                              ^              */
#ifdef OID_GEN_CO_NETCARD_LOAD
      *iv_return = OID_GEN_CO_NETCARD_LOAD;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'C':
    if (memEQ(name, "OID_FDDI_PORT_PCM_STATE", 23)) {
    /*                              ^              */
#ifdef OID_FDDI_PORT_PCM_STATE
      *iv_return = OID_FDDI_PORT_PCM_STATE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'D':
    if (memEQ(name, "OID_802_3_XMIT_DEFERRED", 23)) {
    /*                              ^              */
#ifdef OID_802_3_XMIT_DEFERRED
      *iv_return = OID_802_3_XMIT_DEFERRED;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_FDDI_IF_IN_DISCARDS", 23)) {
    /*                              ^              */
#ifdef OID_FDDI_IF_IN_DISCARDS
      *iv_return = OID_FDDI_IF_IN_DISCARDS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_TAPI_GET_ADDRESS_ID", 23)) {
    /*                              ^              */
#ifdef OID_TAPI_GET_ADDRESS_ID
      *iv_return = OID_TAPI_GET_ADDRESS_ID;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_TAPI_SET_MEDIA_MODE", 23)) {
    /*                              ^              */
#ifdef OID_TAPI_SET_MEDIA_MODE
      *iv_return = OID_TAPI_SET_MEDIA_MODE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_WAN_GET_BRIDGE_INFO", 23)) {
    /*                              ^              */
#ifdef OID_WAN_GET_BRIDGE_INFO
      *iv_return = OID_WAN_GET_BRIDGE_INFO;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_WAN_SET_BRIDGE_INFO", 23)) {
    /*                              ^              */
#ifdef OID_WAN_SET_BRIDGE_INFO
      *iv_return = OID_WAN_SET_BRIDGE_INFO;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "OID_ATM_CELLS_HEC_ERROR", 23)) {
    /*                              ^              */
#ifdef OID_ATM_CELLS_HEC_ERROR
      *iv_return = OID_ATM_CELLS_HEC_ERROR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_FDDI_PORT_LER_ALARM", 23)) {
    /*                              ^              */
#ifdef OID_FDDI_PORT_LER_ALARM
      *iv_return = OID_FDDI_PORT_LER_ALARM;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_GEN_HARDWARE_STATUS", 23)) {
    /*                              ^              */
#ifdef OID_GEN_HARDWARE_STATUS
      *iv_return = OID_GEN_HARDWARE_STATUS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'F':
    if (memEQ(name, "OID_WW_MBX_TRAFFIC_AREA", 23)) {
    /*                              ^              */
#ifdef OID_WW_MBX_TRAFFIC_AREA
      *iv_return = OID_WW_MBX_TRAFFIC_AREA;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'G':
    if (memEQ(name, "OID_FDDI_RING_MGT_STATE", 23)) {
    /*                              ^              */
#ifdef OID_FDDI_RING_MGT_STATE
      *iv_return = OID_FDDI_RING_MGT_STATE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "OID_FDDI_SMT_HOLD_STATE", 23)) {
    /*                              ^              */
#ifdef OID_FDDI_SMT_HOLD_STATE
      *iv_return = OID_FDDI_SMT_HOLD_STATE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'M':
    if (memEQ(name, "OID_FDDI_PORT_PMD_CLASS", 23)) {
    /*                              ^              */
#ifdef OID_FDDI_PORT_PMD_CLASS
      *iv_return = OID_FDDI_PORT_PMD_CLASS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "OID_802_5_CURRENT_GROUP", 23)) {
    /*                              ^              */
#ifdef OID_802_5_CURRENT_GROUP
      *iv_return = OID_802_5_CURRENT_GROUP;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_FDDI_MAC_RING_OP_CT", 23)) {
    /*                              ^              */
#ifdef OID_FDDI_MAC_RING_OP_CT
      *iv_return = OID_FDDI_MAC_RING_OP_CT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "OID_LTALK_IN_BROADCASTS", 23)) {
    /*                              ^              */
#ifdef OID_LTALK_IN_BROADCASTS
      *iv_return = OID_LTALK_IN_BROADCASTS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "NDIS_RING_RING_RECOVERY", 23)) {
    /*                              ^              */
#ifdef NDIS_RING_RING_RECOVERY
      *iv_return = NDIS_RING_RING_RECOVERY;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_FDDI_IF_OPER_STATUS", 23)) {
    /*                              ^              */
#ifdef OID_FDDI_IF_OPER_STATUS
      *iv_return = OID_FDDI_IF_OPER_STATUS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_IRDA_EXTRA_RCV_BOFS", 23)) {
    /*                              ^              */
#ifdef OID_IRDA_EXTRA_RCV_BOFS
      *iv_return = OID_IRDA_EXTRA_RCV_BOFS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "OID_FDDI_IF_LAST_CHANGE", 23)) {
    /*                              ^              */
#ifdef OID_FDDI_IF_LAST_CHANGE
      *iv_return = OID_FDDI_IF_LAST_CHANGE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'U':
    if (memEQ(name, "OID_802_3_XMIT_UNDERRUN", 23)) {
    /*                              ^              */
#ifdef OID_802_3_XMIT_UNDERRUN
      *iv_return = OID_802_3_XMIT_UNDERRUN;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_GEN_MEDIA_SUPPORTED", 23)) {
    /*                              ^              */
#ifdef OID_GEN_MEDIA_SUPPORTED
      *iv_return = OID_GEN_MEDIA_SUPPORTED;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'V':
    if (memEQ(name, "OID_TAPI_GET_DEV_CONFIG", 23)) {
    /*                              ^              */
#ifdef OID_TAPI_GET_DEV_CONFIG
      *iv_return = OID_TAPI_GET_DEV_CONFIG;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_TAPI_SET_DEV_CONFIG", 23)) {
    /*                              ^              */
#ifdef OID_TAPI_SET_DEV_CONFIG
      *iv_return = OID_TAPI_SET_DEV_CONFIG;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '_':
    if (memEQ(name, "OID_GEN_CO_XMIT_PDUS_OK", 23)) {
    /*                              ^              */
#ifdef OID_GEN_CO_XMIT_PDUS_OK
      *iv_return = OID_GEN_CO_XMIT_PDUS_OK;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_WAN_CURRENT_ADDRESS", 23)) {
    /*                              ^              */
#ifdef OID_WAN_CURRENT_ADDRESS
      *iv_return = OID_WAN_CURRENT_ADDRESS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_24 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     NDIS_MAC_OPTION_RESERVED NDIS_RING_SINGLE_STATION OID_802_3_MULTICAST_LIST
     OID_ATM_GET_NEAREST_FLOW OID_ATM_SIGNALING_VPIVCI OID_CO_SIGNALING_ENABLED
     OID_FDDI_ATTACHMENT_TYPE OID_FDDI_IF_ADMIN_STATUS OID_FDDI_IF_OUT_DISCARDS
     OID_FDDI_IF_PHYS_ADDRESS OID_FDDI_MAC_SMT_ADDRESS OID_FDDI_MAC_TRANSMIT_CT
     OID_FDDI_PORT_LER_CUTOFF OID_FDDI_SMT_MAC_INDEXES OID_GEN_CO_GET_TIME_CAPS
     OID_GEN_CO_RCV_CRC_ERROR OID_GEN_GET_NETCARD_TIME OID_GEN_PROTOCOL_OPTIONS
     OID_IRDA_TURNAROUND_TIME OID_LTALK_NO_DATA_ERRORS OID_TAPI_GET_CALL_STATUS
     OID_TAPI_SET_CALL_PARAMS OID_WW_GEN_BATTERY_LEVEL OID_WW_PIN_LAST_LOCATION
     OID_WW_PIN_LOC_AUTHORIZE */
  /* Offset 13 gives the best switch position.  */
  switch (name[13]) {
  case 'A':
    if (memEQ(name, "OID_IRDA_TURNAROUND_TIME", 24)) {
    /*                            ^                 */
#ifdef OID_IRDA_TURNAROUND_TIME
      *iv_return = OID_IRDA_TURNAROUND_TIME;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'C':
    if (memEQ(name, "OID_FDDI_ATTACHMENT_TYPE", 24)) {
    /*                            ^                 */
#ifdef OID_FDDI_ATTACHMENT_TYPE
      *iv_return = OID_FDDI_ATTACHMENT_TYPE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_GEN_PROTOCOL_OPTIONS", 24)) {
    /*                            ^                 */
#ifdef OID_GEN_PROTOCOL_OPTIONS
      *iv_return = OID_GEN_PROTOCOL_OPTIONS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_TAPI_GET_CALL_STATUS", 24)) {
    /*                            ^                 */
#ifdef OID_TAPI_GET_CALL_STATUS
      *iv_return = OID_TAPI_GET_CALL_STATUS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_TAPI_SET_CALL_PARAMS", 24)) {
    /*                            ^                 */
#ifdef OID_TAPI_SET_CALL_PARAMS
      *iv_return = OID_TAPI_SET_CALL_PARAMS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_WW_PIN_LOC_AUTHORIZE", 24)) {
    /*                            ^                 */
#ifdef OID_WW_PIN_LOC_AUTHORIZE
      *iv_return = OID_WW_PIN_LOC_AUTHORIZE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'D':
    if (memEQ(name, "OID_FDDI_IF_ADMIN_STATUS", 24)) {
    /*                            ^                 */
#ifdef OID_FDDI_IF_ADMIN_STATUS
      *iv_return = OID_FDDI_IF_ADMIN_STATUS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_LTALK_NO_DATA_ERRORS", 24)) {
    /*                            ^                 */
#ifdef OID_LTALK_NO_DATA_ERRORS
      *iv_return = OID_LTALK_NO_DATA_ERRORS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "OID_ATM_GET_NEAREST_FLOW", 24)) {
    /*                            ^                 */
#ifdef OID_ATM_GET_NEAREST_FLOW
      *iv_return = OID_ATM_GET_NEAREST_FLOW;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_GEN_GET_NETCARD_TIME", 24)) {
    /*                            ^                 */
#ifdef OID_GEN_GET_NETCARD_TIME
      *iv_return = OID_GEN_GET_NETCARD_TIME;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'G':
    if (memEQ(name, "NDIS_RING_SINGLE_STATION", 24)) {
    /*                            ^                 */
#ifdef NDIS_RING_SINGLE_STATION
      *iv_return = NDIS_RING_SINGLE_STATION;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'H':
    if (memEQ(name, "OID_FDDI_IF_PHYS_ADDRESS", 24)) {
    /*                            ^                 */
#ifdef OID_FDDI_IF_PHYS_ADDRESS
      *iv_return = OID_FDDI_IF_PHYS_ADDRESS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'I':
    if (memEQ(name, "OID_CO_SIGNALING_ENABLED", 24)) {
    /*                            ^                 */
#ifdef OID_CO_SIGNALING_ENABLED
      *iv_return = OID_CO_SIGNALING_ENABLED;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "OID_ATM_SIGNALING_VPIVCI", 24)) {
    /*                            ^                 */
#ifdef OID_ATM_SIGNALING_VPIVCI
      *iv_return = OID_ATM_SIGNALING_VPIVCI;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'M':
    if (memEQ(name, "OID_FDDI_SMT_MAC_INDEXES", 24)) {
    /*                            ^                 */
#ifdef OID_FDDI_SMT_MAC_INDEXES
      *iv_return = OID_FDDI_SMT_MAC_INDEXES;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "NDIS_MAC_OPTION_RESERVED", 24)) {
    /*                            ^                 */
#ifdef NDIS_MAC_OPTION_RESERVED
      *iv_return = NDIS_MAC_OPTION_RESERVED;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "OID_FDDI_MAC_SMT_ADDRESS", 24)) {
    /*                            ^                 */
#ifdef OID_FDDI_MAC_SMT_ADDRESS
      *iv_return = OID_FDDI_MAC_SMT_ADDRESS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_WW_PIN_LAST_LOCATION", 24)) {
    /*                            ^                 */
#ifdef OID_WW_PIN_LAST_LOCATION
      *iv_return = OID_WW_PIN_LAST_LOCATION;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "OID_802_3_MULTICAST_LIST", 24)) {
    /*                            ^                 */
#ifdef OID_802_3_MULTICAST_LIST
      *iv_return = OID_802_3_MULTICAST_LIST;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_FDDI_MAC_TRANSMIT_CT", 24)) {
    /*                            ^                 */
#ifdef OID_FDDI_MAC_TRANSMIT_CT
      *iv_return = OID_FDDI_MAC_TRANSMIT_CT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_GEN_CO_GET_TIME_CAPS", 24)) {
    /*                            ^                 */
#ifdef OID_GEN_CO_GET_TIME_CAPS
      *iv_return = OID_GEN_CO_GET_TIME_CAPS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_WW_GEN_BATTERY_LEVEL", 24)) {
    /*                            ^                 */
#ifdef OID_WW_GEN_BATTERY_LEVEL
      *iv_return = OID_WW_GEN_BATTERY_LEVEL;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'U':
    if (memEQ(name, "OID_FDDI_IF_OUT_DISCARDS", 24)) {
    /*                            ^                 */
#ifdef OID_FDDI_IF_OUT_DISCARDS
      *iv_return = OID_FDDI_IF_OUT_DISCARDS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'V':
    if (memEQ(name, "OID_GEN_CO_RCV_CRC_ERROR", 24)) {
    /*                            ^                 */
#ifdef OID_GEN_CO_RCV_CRC_ERROR
      *iv_return = OID_GEN_CO_RCV_CRC_ERROR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '_':
    if (memEQ(name, "OID_FDDI_PORT_LER_CUTOFF", 24)) {
    /*                            ^                 */
#ifdef OID_FDDI_PORT_LER_CUTOFF
      *iv_return = OID_FDDI_PORT_LER_CUTOFF;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_25 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     NDIS_PACKET_TYPE_DIRECTED NDIS_RING_LOBE_WIRE_FAULT
     NDIS_RING_REMOVE_RECEIVED NDIS_RING_TRANSMIT_BEACON
     OID_802_3_CURRENT_ADDRESS OID_802_5_CURRENT_ADDRESS
     OID_802_5_INTERNAL_ERRORS OID_ATM_RCV_CELLS_DROPPED
     OID_CO_SIGNALING_DISABLED OID_FDDI_IF_IN_UCAST_PKTS
     OID_FDDI_MAC_CURRENT_PATH OID_FDDI_MAC_UPSTREAM_NBR
     OID_FDDI_PATH_SBA_PAYLOAD OID_FDDI_PORT_EB_ERROR_CT
     OID_FDDI_PORT_LCT_FAIL_CT OID_FDDI_PORT_PC_WITHHOLD
     OID_FDDI_SMT_PORT_INDEXES OID_GEN_CO_DRIVER_VERSION
     OID_GEN_CO_RCV_PDUS_ERROR OID_GEN_CO_SUPPORTED_LIST
     OID_GEN_CURRENT_LOOKAHEAD OID_GEN_MAXIMUM_LOOKAHEAD
     OID_IRDA_SUPPORTED_SPEEDS OID_LTALK_CURRENT_NODE_ID
     OID_LTALK_OUT_NO_HANDLERS OID_TAPI_GET_ADDRESS_CAPS
     OID_TAPI_GET_EXTENSION_ID OID_TAPI_SET_APP_SPECIFIC
     OID_WAN_PERMANENT_ADDRESS OID_WW_CDPD_CHANNEL_STATE
     OID_WW_GEN_BASESTATION_ID OID_WW_GEN_EXTERNAL_POWER
     OID_WW_GEN_OPERATION_MODE OID_WW_GEN_SUSPEND_DRIVER */
  /* Offset 15 gives the best switch position.  */
  switch (name[15]) {
  case 'A':
    if (memEQ(name, "OID_WW_GEN_OPERATION_MODE", 25)) {
    /*                              ^                */
#ifdef OID_WW_GEN_OPERATION_MODE
      *iv_return = OID_WW_GEN_OPERATION_MODE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'B':
    if (memEQ(name, "OID_FDDI_PATH_SBA_PAYLOAD", 25)) {
    /*                              ^                */
#ifdef OID_FDDI_PATH_SBA_PAYLOAD
      *iv_return = OID_FDDI_PATH_SBA_PAYLOAD;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_FDDI_PORT_EB_ERROR_CT", 25)) {
    /*                              ^                */
#ifdef OID_FDDI_PORT_EB_ERROR_CT
      *iv_return = OID_FDDI_PORT_EB_ERROR_CT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'C':
    if (memEQ(name, "OID_FDDI_PORT_LCT_FAIL_CT", 25)) {
    /*                              ^                */
#ifdef OID_FDDI_PORT_LCT_FAIL_CT
      *iv_return = OID_FDDI_PORT_LCT_FAIL_CT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_FDDI_PORT_PC_WITHHOLD", 25)) {
    /*                              ^                */
#ifdef OID_FDDI_PORT_PC_WITHHOLD
      *iv_return = OID_FDDI_PORT_PC_WITHHOLD;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'D':
    if (memEQ(name, "OID_TAPI_GET_ADDRESS_CAPS", 25)) {
    /*                              ^                */
#ifdef OID_TAPI_GET_ADDRESS_CAPS
      *iv_return = OID_TAPI_GET_ADDRESS_CAPS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "NDIS_PACKET_TYPE_DIRECTED", 25)) {
    /*                              ^                */
#ifdef NDIS_PACKET_TYPE_DIRECTED
      *iv_return = NDIS_PACKET_TYPE_DIRECTED;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "NDIS_RING_REMOVE_RECEIVED", 25)) {
    /*                              ^                */
#ifdef NDIS_RING_REMOVE_RECEIVED
      *iv_return = NDIS_RING_REMOVE_RECEIVED;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_GEN_CO_DRIVER_VERSION", 25)) {
    /*                              ^                */
#ifdef OID_GEN_CO_DRIVER_VERSION
      *iv_return = OID_GEN_CO_DRIVER_VERSION;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_WW_GEN_SUSPEND_DRIVER", 25)) {
    /*                              ^                */
#ifdef OID_WW_GEN_SUSPEND_DRIVER
      *iv_return = OID_WW_GEN_SUSPEND_DRIVER;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'G':
    if (memEQ(name, "OID_CO_SIGNALING_DISABLED", 25)) {
    /*                              ^                */
#ifdef OID_CO_SIGNALING_DISABLED
      *iv_return = OID_CO_SIGNALING_DISABLED;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "OID_ATM_RCV_CELLS_DROPPED", 25)) {
    /*                              ^                */
#ifdef OID_ATM_RCV_CELLS_DROPPED
      *iv_return = OID_ATM_RCV_CELLS_DROPPED;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'M':
    if (memEQ(name, "NDIS_RING_TRANSMIT_BEACON", 25)) {
    /*                              ^                */
#ifdef NDIS_RING_TRANSMIT_BEACON
      *iv_return = NDIS_RING_TRANSMIT_BEACON;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "OID_802_3_CURRENT_ADDRESS", 25)) {
    /*                              ^                */
#ifdef OID_802_3_CURRENT_ADDRESS
      *iv_return = OID_802_3_CURRENT_ADDRESS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_802_5_CURRENT_ADDRESS", 25)) {
    /*                              ^                */
#ifdef OID_802_5_CURRENT_ADDRESS
      *iv_return = OID_802_5_CURRENT_ADDRESS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_802_5_INTERNAL_ERRORS", 25)) {
    /*                              ^                */
#ifdef OID_802_5_INTERNAL_ERRORS
      *iv_return = OID_802_5_INTERNAL_ERRORS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_LTALK_CURRENT_NODE_ID", 25)) {
    /*                              ^                */
#ifdef OID_LTALK_CURRENT_NODE_ID
      *iv_return = OID_LTALK_CURRENT_NODE_ID;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_WAN_PERMANENT_ADDRESS", 25)) {
    /*                              ^                */
#ifdef OID_WAN_PERMANENT_ADDRESS
      *iv_return = OID_WAN_PERMANENT_ADDRESS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_WW_CDPD_CHANNEL_STATE", 25)) {
    /*                              ^                */
#ifdef OID_WW_CDPD_CHANNEL_STATE
      *iv_return = OID_WW_CDPD_CHANNEL_STATE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "OID_GEN_CO_SUPPORTED_LIST", 25)) {
    /*                              ^                */
#ifdef OID_GEN_CO_SUPPORTED_LIST
      *iv_return = OID_GEN_CO_SUPPORTED_LIST;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_LTALK_OUT_NO_HANDLERS", 25)) {
    /*                              ^                */
#ifdef OID_LTALK_OUT_NO_HANDLERS
      *iv_return = OID_LTALK_OUT_NO_HANDLERS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "OID_GEN_CO_RCV_PDUS_ERROR", 25)) {
    /*                              ^                */
#ifdef OID_GEN_CO_RCV_PDUS_ERROR
      *iv_return = OID_GEN_CO_RCV_PDUS_ERROR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_TAPI_SET_APP_SPECIFIC", 25)) {
    /*                              ^                */
#ifdef OID_TAPI_SET_APP_SPECIFIC
      *iv_return = OID_TAPI_SET_APP_SPECIFIC;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "OID_FDDI_MAC_CURRENT_PATH", 25)) {
    /*                              ^                */
#ifdef OID_FDDI_MAC_CURRENT_PATH
      *iv_return = OID_FDDI_MAC_CURRENT_PATH;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_FDDI_SMT_PORT_INDEXES", 25)) {
    /*                              ^                */
#ifdef OID_FDDI_SMT_PORT_INDEXES
      *iv_return = OID_FDDI_SMT_PORT_INDEXES;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_WW_GEN_EXTERNAL_POWER", 25)) {
    /*                              ^                */
#ifdef OID_WW_GEN_EXTERNAL_POWER
      *iv_return = OID_WW_GEN_EXTERNAL_POWER;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "OID_FDDI_MAC_UPSTREAM_NBR", 25)) {
    /*                              ^                */
#ifdef OID_FDDI_MAC_UPSTREAM_NBR
      *iv_return = OID_FDDI_MAC_UPSTREAM_NBR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_WW_GEN_BASESTATION_ID", 25)) {
    /*                              ^                */
#ifdef OID_WW_GEN_BASESTATION_ID
      *iv_return = OID_WW_GEN_BASESTATION_ID;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "OID_IRDA_SUPPORTED_SPEEDS", 25)) {
    /*                              ^                */
#ifdef OID_IRDA_SUPPORTED_SPEEDS
      *iv_return = OID_IRDA_SUPPORTED_SPEEDS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_TAPI_GET_EXTENSION_ID", 25)) {
    /*                              ^                */
#ifdef OID_TAPI_GET_EXTENSION_ID
      *iv_return = OID_TAPI_GET_EXTENSION_ID;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'U':
    if (memEQ(name, "OID_FDDI_IF_IN_UCAST_PKTS", 25)) {
    /*                              ^                */
#ifdef OID_FDDI_IF_IN_UCAST_PKTS
      *iv_return = OID_FDDI_IF_IN_UCAST_PKTS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'W':
    if (memEQ(name, "NDIS_RING_LOBE_WIRE_FAULT", 25)) {
    /*                              ^                */
#ifdef NDIS_RING_LOBE_WIRE_FAULT
      *iv_return = NDIS_RING_LOBE_WIRE_FAULT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '_':
    if (memEQ(name, "OID_GEN_CURRENT_LOOKAHEAD", 25)) {
    /*                              ^                */
#ifdef OID_GEN_CURRENT_LOOKAHEAD
      *iv_return = OID_GEN_CURRENT_LOOKAHEAD;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_GEN_MAXIMUM_LOOKAHEAD", 25)) {
    /*                              ^                */
#ifdef OID_GEN_MAXIMUM_LOOKAHEAD
      *iv_return = OID_GEN_MAXIMUM_LOOKAHEAD;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_26 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     NDIS_PACKET_TYPE_ALL_LOCAL NDIS_PACKET_TYPE_BROADCAST
     NDIS_PACKET_TYPE_MAC_FRAME NDIS_PACKET_TYPE_MULTICAST
     NDIS_RING_COUNTER_OVERFLOW OID_802_5_ABORT_DELIMETERS
     OID_802_5_FREQUENCY_ERRORS OID_802_5_LAST_OPEN_STATUS
     OID_ARCNET_CURRENT_ADDRESS OID_ATM_ALIGNMENT_REQUIRED
     OID_ATM_HW_CURRENT_ADDRESS OID_ATM_SUPPORTED_VC_RATES
     OID_FDDI_IF_IN_NUCAST_PKTS OID_FDDI_IF_OUT_UCAST_PKTS
     OID_FDDI_LCONNECTION_STATE OID_FDDI_LONG_CURRENT_ADDR
     OID_FDDI_MAC_NOT_COPIED_CT OID_FDDI_PATH_RING_LATENCY
     OID_FDDI_PATH_SBA_OVERHEAD OID_FDDI_PATH_TRACE_STATUS
     OID_FDDI_PORT_CURRENT_PATH OID_FDDI_PORT_LER_ESTIMATE
     OID_FDDI_SMT_CONFIG_POLICY OID_FDDI_SMT_HI_VERSION_ID
     OID_FDDI_SMT_LO_VERSION_ID OID_FDDI_SMT_NON_MASTER_CT
     OID_FDDI_SMT_OP_VERSION_ID OID_GEN_CO_HARDWARE_STATUS
     OID_GEN_CO_MEDIA_SUPPORTED OID_GEN_CO_XMIT_PDUS_ERROR
     OID_GEN_DIRECTED_BYTES_RCV OID_GEN_MAXIMUM_FRAME_SIZE
     OID_GEN_MAXIMUM_TOTAL_SIZE OID_GEN_RECEIVE_BLOCK_SIZE
     OID_GEN_VENDOR_DESCRIPTION OID_LTALK_IN_LENGTH_ERRORS
     OID_TAPI_PROVIDER_SHUTDOWN OID_WAN_QUALITY_OF_SERVICE
     OID_WW_CDPD_CHANNEL_SELECT OID_WW_CDPD_TX_POWER_LEVEL
     OID_WW_GEN_CHANNEL_QUALITY OID_WW_GEN_CURRENT_ADDRESS */
  /* Offset 13 gives the best switch position.  */
  switch (name[13]) {
  case 'A':
    if (memEQ(name, "OID_WW_GEN_CHANNEL_QUALITY", 26)) {
    /*                            ^                   */
#ifdef OID_WW_GEN_CHANNEL_QUALITY
      *iv_return = OID_WW_GEN_CHANNEL_QUALITY;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'C':
    if (memEQ(name, "OID_FDDI_SMT_CONFIG_POLICY", 26)) {
    /*                            ^                   */
#ifdef OID_FDDI_SMT_CONFIG_POLICY
      *iv_return = OID_FDDI_SMT_CONFIG_POLICY;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'D':
    if (memEQ(name, "OID_GEN_CO_MEDIA_SUPPORTED", 26)) {
    /*                            ^                   */
#ifdef OID_GEN_CO_MEDIA_SUPPORTED
      *iv_return = OID_GEN_CO_MEDIA_SUPPORTED;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'H':
    if (memEQ(name, "OID_FDDI_SMT_HI_VERSION_ID", 26)) {
    /*                            ^                   */
#ifdef OID_FDDI_SMT_HI_VERSION_ID
      *iv_return = OID_FDDI_SMT_HI_VERSION_ID;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_WW_CDPD_CHANNEL_SELECT", 26)) {
    /*                            ^                   */
#ifdef OID_WW_CDPD_CHANNEL_SELECT
      *iv_return = OID_WW_CDPD_CHANNEL_SELECT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'I':
    if (memEQ(name, "OID_GEN_CO_XMIT_PDUS_ERROR", 26)) {
    /*                            ^                   */
#ifdef OID_GEN_CO_XMIT_PDUS_ERROR
      *iv_return = OID_GEN_CO_XMIT_PDUS_ERROR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_TAPI_PROVIDER_SHUTDOWN", 26)) {
    /*                            ^                   */
#ifdef OID_TAPI_PROVIDER_SHUTDOWN
      *iv_return = OID_TAPI_PROVIDER_SHUTDOWN;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "OID_FDDI_SMT_LO_VERSION_ID", 26)) {
    /*                            ^                   */
#ifdef OID_FDDI_SMT_LO_VERSION_ID
      *iv_return = OID_FDDI_SMT_LO_VERSION_ID;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_LTALK_IN_LENGTH_ERRORS", 26)) {
    /*                            ^                   */
#ifdef OID_LTALK_IN_LENGTH_ERRORS
      *iv_return = OID_LTALK_IN_LENGTH_ERRORS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'M':
    if (memEQ(name, "OID_ATM_ALIGNMENT_REQUIRED", 26)) {
    /*                            ^                   */
#ifdef OID_ATM_ALIGNMENT_REQUIRED
      *iv_return = OID_ATM_ALIGNMENT_REQUIRED;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "NDIS_RING_COUNTER_OVERFLOW", 26)) {
    /*                            ^                   */
#ifdef NDIS_RING_COUNTER_OVERFLOW
      *iv_return = NDIS_RING_COUNTER_OVERFLOW;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_FDDI_IF_IN_NUCAST_PKTS", 26)) {
    /*                            ^                   */
#ifdef OID_FDDI_IF_IN_NUCAST_PKTS
      *iv_return = OID_FDDI_IF_IN_NUCAST_PKTS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_FDDI_LCONNECTION_STATE", 26)) {
    /*                            ^                   */
#ifdef OID_FDDI_LCONNECTION_STATE
      *iv_return = OID_FDDI_LCONNECTION_STATE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_FDDI_MAC_NOT_COPIED_CT", 26)) {
    /*                            ^                   */
#ifdef OID_FDDI_MAC_NOT_COPIED_CT
      *iv_return = OID_FDDI_MAC_NOT_COPIED_CT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_FDDI_SMT_NON_MASTER_CT", 26)) {
    /*                            ^                   */
#ifdef OID_FDDI_SMT_NON_MASTER_CT
      *iv_return = OID_FDDI_SMT_NON_MASTER_CT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "OID_FDDI_SMT_OP_VERSION_ID", 26)) {
    /*                            ^                   */
#ifdef OID_FDDI_SMT_OP_VERSION_ID
      *iv_return = OID_FDDI_SMT_OP_VERSION_ID;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'Q':
    if (memEQ(name, "OID_802_5_FREQUENCY_ERRORS", 26)) {
    /*                            ^                   */
#ifdef OID_802_5_FREQUENCY_ERRORS
      *iv_return = OID_802_5_FREQUENCY_ERRORS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "OID_802_5_ABORT_DELIMETERS", 26)) {
    /*                            ^                   */
#ifdef OID_802_5_ABORT_DELIMETERS
      *iv_return = OID_802_5_ABORT_DELIMETERS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_ARCNET_CURRENT_ADDRESS", 26)) {
    /*                            ^                   */
#ifdef OID_ARCNET_CURRENT_ADDRESS
      *iv_return = OID_ARCNET_CURRENT_ADDRESS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_ATM_HW_CURRENT_ADDRESS", 26)) {
    /*                            ^                   */
#ifdef OID_ATM_HW_CURRENT_ADDRESS
      *iv_return = OID_ATM_HW_CURRENT_ADDRESS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_ATM_SUPPORTED_VC_RATES", 26)) {
    /*                            ^                   */
#ifdef OID_ATM_SUPPORTED_VC_RATES
      *iv_return = OID_ATM_SUPPORTED_VC_RATES;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_GEN_CO_HARDWARE_STATUS", 26)) {
    /*                            ^                   */
#ifdef OID_GEN_CO_HARDWARE_STATUS
      *iv_return = OID_GEN_CO_HARDWARE_STATUS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_GEN_VENDOR_DESCRIPTION", 26)) {
    /*                            ^                   */
#ifdef OID_GEN_VENDOR_DESCRIPTION
      *iv_return = OID_GEN_VENDOR_DESCRIPTION;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_WW_GEN_CURRENT_ADDRESS", 26)) {
    /*                            ^                   */
#ifdef OID_WW_GEN_CURRENT_ADDRESS
      *iv_return = OID_WW_GEN_CURRENT_ADDRESS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "OID_802_5_LAST_OPEN_STATUS", 26)) {
    /*                            ^                   */
#ifdef OID_802_5_LAST_OPEN_STATUS
      *iv_return = OID_802_5_LAST_OPEN_STATUS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_GEN_DIRECTED_BYTES_RCV", 26)) {
    /*                            ^                   */
#ifdef OID_GEN_DIRECTED_BYTES_RCV
      *iv_return = OID_GEN_DIRECTED_BYTES_RCV;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_WAN_QUALITY_OF_SERVICE", 26)) {
    /*                            ^                   */
#ifdef OID_WAN_QUALITY_OF_SERVICE
      *iv_return = OID_WAN_QUALITY_OF_SERVICE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'U':
    if (memEQ(name, "OID_FDDI_IF_OUT_UCAST_PKTS", 26)) {
    /*                            ^                   */
#ifdef OID_FDDI_IF_OUT_UCAST_PKTS
      *iv_return = OID_FDDI_IF_OUT_UCAST_PKTS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_GEN_MAXIMUM_FRAME_SIZE", 26)) {
    /*                            ^                   */
#ifdef OID_GEN_MAXIMUM_FRAME_SIZE
      *iv_return = OID_GEN_MAXIMUM_FRAME_SIZE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_GEN_MAXIMUM_TOTAL_SIZE", 26)) {
    /*                            ^                   */
#ifdef OID_GEN_MAXIMUM_TOTAL_SIZE
      *iv_return = OID_GEN_MAXIMUM_TOTAL_SIZE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'V':
    if (memEQ(name, "OID_GEN_RECEIVE_BLOCK_SIZE", 26)) {
    /*                            ^                   */
#ifdef OID_GEN_RECEIVE_BLOCK_SIZE
      *iv_return = OID_GEN_RECEIVE_BLOCK_SIZE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'X':
    if (memEQ(name, "OID_WW_CDPD_TX_POWER_LEVEL", 26)) {
    /*                            ^                   */
#ifdef OID_WW_CDPD_TX_POWER_LEVEL
      *iv_return = OID_WW_CDPD_TX_POWER_LEVEL;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'Y':
    if (memEQ(name, "NDIS_PACKET_TYPE_ALL_LOCAL", 26)) {
    /*                            ^                   */
#ifdef NDIS_PACKET_TYPE_ALL_LOCAL
      *iv_return = NDIS_PACKET_TYPE_ALL_LOCAL;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "NDIS_PACKET_TYPE_BROADCAST", 26)) {
    /*                            ^                   */
#ifdef NDIS_PACKET_TYPE_BROADCAST
      *iv_return = NDIS_PACKET_TYPE_BROADCAST;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "NDIS_PACKET_TYPE_MAC_FRAME", 26)) {
    /*                            ^                   */
#ifdef NDIS_PACKET_TYPE_MAC_FRAME
      *iv_return = NDIS_PACKET_TYPE_MAC_FRAME;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "NDIS_PACKET_TYPE_MULTICAST", 26)) {
    /*                            ^                   */
#ifdef NDIS_PACKET_TYPE_MULTICAST
      *iv_return = NDIS_PACKET_TYPE_MULTICAST;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '_':
    if (memEQ(name, "OID_FDDI_LONG_CURRENT_ADDR", 26)) {
    /*                            ^                   */
#ifdef OID_FDDI_LONG_CURRENT_ADDR
      *iv_return = OID_FDDI_LONG_CURRENT_ADDR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_FDDI_PATH_RING_LATENCY", 26)) {
    /*                            ^                   */
#ifdef OID_FDDI_PATH_RING_LATENCY
      *iv_return = OID_FDDI_PATH_RING_LATENCY;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_FDDI_PATH_SBA_OVERHEAD", 26)) {
    /*                            ^                   */
#ifdef OID_FDDI_PATH_SBA_OVERHEAD
      *iv_return = OID_FDDI_PATH_SBA_OVERHEAD;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_FDDI_PATH_TRACE_STATUS", 26)) {
    /*                            ^                   */
#ifdef OID_FDDI_PATH_TRACE_STATUS
      *iv_return = OID_FDDI_PATH_TRACE_STATUS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_FDDI_PORT_CURRENT_PATH", 26)) {
    /*                            ^                   */
#ifdef OID_FDDI_PORT_CURRENT_PATH
      *iv_return = OID_FDDI_PORT_CURRENT_PATH;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_FDDI_PORT_LER_ESTIMATE", 26)) {
    /*                            ^                   */
#ifdef OID_FDDI_PORT_LER_ESTIMATE
      *iv_return = OID_FDDI_PORT_LER_ESTIMATE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_27 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     NDIS_MAC_OPTION_FULL_DUPLEX NDIS_MAC_OPTION_NO_LOOPBACK
     NDIS_PACKET_TYPE_FUNCTIONAL OID_802_3_MAXIMUM_LIST_SIZE
     OID_802_3_PERMANENT_ADDRESS OID_802_5_PERMANENT_ADDRESS
     OID_ARCNET_RECONFIGURATIONS OID_ATM_MAX_ACTIVE_VCI_BITS
     OID_ATM_MAX_ACTIVE_VPI_BITS OID_ATM_RCV_INVALID_VPI_VCI
     OID_ATM_SUPPORTED_AAL_TYPES OID_CO_GET_CALL_INFORMATION
     OID_FDDI_IF_OUT_NUCAST_PKTS OID_FDDI_LONG_MAX_LIST_SIZE
     OID_FDDI_MAC_DOWNSTREAM_NBR OID_FDDI_MAC_TVX_CAPABILITY
     OID_FDDI_MAC_TVX_EXPIRED_CT OID_FDDI_PATH_CONFIGURATION
     OID_FDDI_PATH_SBA_AVAILABLE OID_FDDI_PORT_LEM_REJECT_CT
     OID_FDDI_PORT_MAC_INDICATED OID_FDDI_PORT_MAC_LOOP_TIME
     OID_FDDI_PORT_MAC_PLACEMENT OID_FDDI_PORT_NEIGHBOR_TYPE
     OID_FDDI_SHORT_CURRENT_ADDR OID_FDDI_SMT_BYPASS_PRESENT
     OID_FDDI_SMT_MIB_VERSION_ID OID_FDDI_SMT_MSG_TIME_STAMP
     OID_FDDI_SMT_PEER_WRAP_FLAG OID_FDDI_SMT_STATION_ACTION
     OID_FDDI_SMT_STATION_STATUS OID_FDDI_UPSTREAM_NODE_LONG
     OID_GEN_BROADCAST_BYTES_RCV OID_GEN_CO_GET_NETCARD_TIME
     OID_GEN_CO_PROTOCOL_OPTIONS OID_GEN_DIRECTED_BYTES_XMIT
     OID_GEN_DIRECTED_FRAMES_RCV OID_GEN_MULTICAST_BYTES_RCV
     OID_GEN_TRANSMIT_BLOCK_SIZE OID_LTALK_RANDOM_CTS_ERRORS
     OID_TAPI_GET_ADDRESS_STATUS OID_TAPI_SELECT_EXT_VERSION
     OID_WW_GEN_ENCRYPTION_STATE OID_WW_GEN_RADIO_LINK_SPEED
     OID_WW_MBX_TEMP_DEFAULTLIST */
  /* Offset 18 gives the best switch position.  */
  switch (name[18]) {
  case 'A':
    if (memEQ(name, "OID_ATM_SUPPORTED_AAL_TYPES", 27)) {
    /*                                 ^               */
#ifdef OID_ATM_SUPPORTED_AAL_TYPES
      *iv_return = OID_ATM_SUPPORTED_AAL_TYPES;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_FDDI_MAC_TVX_CAPABILITY", 27)) {
    /*                                 ^               */
#ifdef OID_FDDI_MAC_TVX_CAPABILITY
      *iv_return = OID_FDDI_MAC_TVX_CAPABILITY;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_FDDI_PATH_SBA_AVAILABLE", 27)) {
    /*                                 ^               */
#ifdef OID_FDDI_PATH_SBA_AVAILABLE
      *iv_return = OID_FDDI_PATH_SBA_AVAILABLE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'B':
    if (memEQ(name, "OID_GEN_BROADCAST_BYTES_RCV", 27)) {
    /*                                 ^               */
#ifdef OID_GEN_BROADCAST_BYTES_RCV
      *iv_return = OID_GEN_BROADCAST_BYTES_RCV;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_GEN_MULTICAST_BYTES_RCV", 27)) {
    /*                                 ^               */
#ifdef OID_GEN_MULTICAST_BYTES_RCV
      *iv_return = OID_GEN_MULTICAST_BYTES_RCV;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'C':
    if (memEQ(name, "OID_FDDI_IF_OUT_NUCAST_PKTS", 27)) {
    /*                                 ^               */
#ifdef OID_FDDI_IF_OUT_NUCAST_PKTS
      *iv_return = OID_FDDI_IF_OUT_NUCAST_PKTS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_GEN_CO_GET_NETCARD_TIME", 27)) {
    /*                                 ^               */
#ifdef OID_GEN_CO_GET_NETCARD_TIME
      *iv_return = OID_GEN_CO_GET_NETCARD_TIME;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'D':
    if (memEQ(name, "OID_ATM_RCV_INVALID_VPI_VCI", 27)) {
    /*                                 ^               */
#ifdef OID_ATM_RCV_INVALID_VPI_VCI
      *iv_return = OID_ATM_RCV_INVALID_VPI_VCI;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "OID_FDDI_SMT_MIB_VERSION_ID", 27)) {
    /*                                 ^               */
#ifdef OID_FDDI_SMT_MIB_VERSION_ID
      *iv_return = OID_FDDI_SMT_MIB_VERSION_ID;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'F':
    if (memEQ(name, "OID_CO_GET_CALL_INFORMATION", 27)) {
    /*                                 ^               */
#ifdef OID_CO_GET_CALL_INFORMATION
      *iv_return = OID_CO_GET_CALL_INFORMATION;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_WW_MBX_TEMP_DEFAULTLIST", 27)) {
    /*                                 ^               */
#ifdef OID_WW_MBX_TEMP_DEFAULTLIST
      *iv_return = OID_WW_MBX_TEMP_DEFAULTLIST;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'G':
    if (memEQ(name, "OID_ARCNET_RECONFIGURATIONS", 27)) {
    /*                                 ^               */
#ifdef OID_ARCNET_RECONFIGURATIONS
      *iv_return = OID_ARCNET_RECONFIGURATIONS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'H':
    if (memEQ(name, "OID_FDDI_PORT_NEIGHBOR_TYPE", 27)) {
    /*                                 ^               */
#ifdef OID_FDDI_PORT_NEIGHBOR_TYPE
      *iv_return = OID_FDDI_PORT_NEIGHBOR_TYPE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'I':
    if (memEQ(name, "OID_FDDI_PATH_CONFIGURATION", 27)) {
    /*                                 ^               */
#ifdef OID_FDDI_PATH_CONFIGURATION
      *iv_return = OID_FDDI_PATH_CONFIGURATION;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_FDDI_PORT_MAC_INDICATED", 27)) {
    /*                                 ^               */
#ifdef OID_FDDI_PORT_MAC_INDICATED
      *iv_return = OID_FDDI_PORT_MAC_INDICATED;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_FDDI_SMT_MSG_TIME_STAMP", 27)) {
    /*                                 ^               */
#ifdef OID_FDDI_SMT_MSG_TIME_STAMP
      *iv_return = OID_FDDI_SMT_MSG_TIME_STAMP;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_WW_GEN_ENCRYPTION_STATE", 27)) {
    /*                                 ^               */
#ifdef OID_WW_GEN_ENCRYPTION_STATE
      *iv_return = OID_WW_GEN_ENCRYPTION_STATE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_WW_GEN_RADIO_LINK_SPEED", 27)) {
    /*                                 ^               */
#ifdef OID_WW_GEN_RADIO_LINK_SPEED
      *iv_return = OID_WW_GEN_RADIO_LINK_SPEED;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "NDIS_MAC_OPTION_FULL_DUPLEX", 27)) {
    /*                                 ^               */
#ifdef NDIS_MAC_OPTION_FULL_DUPLEX
      *iv_return = NDIS_MAC_OPTION_FULL_DUPLEX;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_802_3_MAXIMUM_LIST_SIZE", 27)) {
    /*                                 ^               */
#ifdef OID_802_3_MAXIMUM_LIST_SIZE
      *iv_return = OID_802_3_MAXIMUM_LIST_SIZE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_FDDI_LONG_MAX_LIST_SIZE", 27)) {
    /*                                 ^               */
#ifdef OID_FDDI_LONG_MAX_LIST_SIZE
      *iv_return = OID_FDDI_LONG_MAX_LIST_SIZE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_FDDI_PORT_MAC_LOOP_TIME", 27)) {
    /*                                 ^               */
#ifdef OID_FDDI_PORT_MAC_LOOP_TIME
      *iv_return = OID_FDDI_PORT_MAC_LOOP_TIME;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_GEN_CO_PROTOCOL_OPTIONS", 27)) {
    /*                                 ^               */
#ifdef OID_GEN_CO_PROTOCOL_OPTIONS
      *iv_return = OID_GEN_CO_PROTOCOL_OPTIONS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_GEN_TRANSMIT_BLOCK_SIZE", 27)) {
    /*                                 ^               */
#ifdef OID_GEN_TRANSMIT_BLOCK_SIZE
      *iv_return = OID_GEN_TRANSMIT_BLOCK_SIZE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "OID_FDDI_UPSTREAM_NODE_LONG", 27)) {
    /*                                 ^               */
#ifdef OID_FDDI_UPSTREAM_NODE_LONG
      *iv_return = OID_FDDI_UPSTREAM_NODE_LONG;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "OID_FDDI_SMT_STATION_ACTION", 27)) {
    /*                                 ^               */
#ifdef OID_FDDI_SMT_STATION_ACTION
      *iv_return = OID_FDDI_SMT_STATION_ACTION;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_FDDI_SMT_STATION_STATUS", 27)) {
    /*                                 ^               */
#ifdef OID_FDDI_SMT_STATION_STATUS
      *iv_return = OID_FDDI_SMT_STATION_STATUS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "OID_FDDI_PORT_MAC_PLACEMENT", 27)) {
    /*                                 ^               */
#ifdef OID_FDDI_PORT_MAC_PLACEMENT
      *iv_return = OID_FDDI_PORT_MAC_PLACEMENT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "OID_FDDI_PORT_LEM_REJECT_CT", 27)) {
    /*                                 ^               */
#ifdef OID_FDDI_PORT_LEM_REJECT_CT
      *iv_return = OID_FDDI_PORT_LEM_REJECT_CT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_FDDI_SHORT_CURRENT_ADDR", 27)) {
    /*                                 ^               */
#ifdef OID_FDDI_SHORT_CURRENT_ADDR
      *iv_return = OID_FDDI_SHORT_CURRENT_ADDR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_GEN_DIRECTED_FRAMES_RCV", 27)) {
    /*                                 ^               */
#ifdef OID_GEN_DIRECTED_FRAMES_RCV
      *iv_return = OID_GEN_DIRECTED_FRAMES_RCV;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "OID_FDDI_SMT_BYPASS_PRESENT", 27)) {
    /*                                 ^               */
#ifdef OID_FDDI_SMT_BYPASS_PRESENT
      *iv_return = OID_FDDI_SMT_BYPASS_PRESENT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_TAPI_GET_ADDRESS_STATUS", 27)) {
    /*                                 ^               */
#ifdef OID_TAPI_GET_ADDRESS_STATUS
      *iv_return = OID_TAPI_GET_ADDRESS_STATUS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "OID_802_3_PERMANENT_ADDRESS", 27)) {
    /*                                 ^               */
#ifdef OID_802_3_PERMANENT_ADDRESS
      *iv_return = OID_802_3_PERMANENT_ADDRESS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_802_5_PERMANENT_ADDRESS", 27)) {
    /*                                 ^               */
#ifdef OID_802_5_PERMANENT_ADDRESS
      *iv_return = OID_802_5_PERMANENT_ADDRESS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_FDDI_MAC_DOWNSTREAM_NBR", 27)) {
    /*                                 ^               */
#ifdef OID_FDDI_MAC_DOWNSTREAM_NBR
      *iv_return = OID_FDDI_MAC_DOWNSTREAM_NBR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_LTALK_RANDOM_CTS_ERRORS", 27)) {
    /*                                 ^               */
#ifdef OID_LTALK_RANDOM_CTS_ERRORS
      *iv_return = OID_LTALK_RANDOM_CTS_ERRORS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_TAPI_SELECT_EXT_VERSION", 27)) {
    /*                                 ^               */
#ifdef OID_TAPI_SELECT_EXT_VERSION
      *iv_return = OID_TAPI_SELECT_EXT_VERSION;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'U':
    if (memEQ(name, "NDIS_PACKET_TYPE_FUNCTIONAL", 27)) {
    /*                                 ^               */
#ifdef NDIS_PACKET_TYPE_FUNCTIONAL
      *iv_return = NDIS_PACKET_TYPE_FUNCTIONAL;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'W':
    if (memEQ(name, "OID_FDDI_SMT_PEER_WRAP_FLAG", 27)) {
    /*                                 ^               */
#ifdef OID_FDDI_SMT_PEER_WRAP_FLAG
      *iv_return = OID_FDDI_SMT_PEER_WRAP_FLAG;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'X':
    if (memEQ(name, "OID_FDDI_MAC_TVX_EXPIRED_CT", 27)) {
    /*                                 ^               */
#ifdef OID_FDDI_MAC_TVX_EXPIRED_CT
      *iv_return = OID_FDDI_MAC_TVX_EXPIRED_CT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'Y':
    if (memEQ(name, "OID_GEN_DIRECTED_BYTES_XMIT", 27)) {
    /*                                 ^               */
#ifdef OID_GEN_DIRECTED_BYTES_XMIT
      *iv_return = OID_GEN_DIRECTED_BYTES_XMIT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '_':
    if (memEQ(name, "NDIS_MAC_OPTION_NO_LOOPBACK", 27)) {
    /*                                 ^               */
#ifdef NDIS_MAC_OPTION_NO_LOOPBACK
      *iv_return = NDIS_MAC_OPTION_NO_LOOPBACK;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_ATM_MAX_ACTIVE_VCI_BITS", 27)) {
    /*                                 ^               */
#ifdef OID_ATM_MAX_ACTIVE_VCI_BITS
      *iv_return = OID_ATM_MAX_ACTIVE_VCI_BITS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_ATM_MAX_ACTIVE_VPI_BITS", 27)) {
    /*                                 ^               */
#ifdef OID_ATM_MAX_ACTIVE_VPI_BITS
      *iv_return = OID_ATM_MAX_ACTIVE_VPI_BITS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_28 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     NDIS_PACKET_TYPE_PROMISCUOUS NDIS_PROT_OPTION_NO_LOOPBACK
     NDIS_RING_AUTO_REMOVAL_ERROR OID_802_3_XMIT_ONE_COLLISION
     OID_802_5_CURRENT_FUNCTIONAL OID_802_5_CURRENT_RING_STATE
     OID_ARCNET_PERMANENT_ADDRESS OID_ATM_MAX_AAL0_PACKET_SIZE
     OID_ATM_MAX_AAL1_PACKET_SIZE OID_ATM_MAX_AAL5_PACKET_SIZE
     OID_ATM_RCV_REASSEMBLY_ERROR OID_FDDI_LONG_MULTICAST_LIST
     OID_FDDI_LONG_PERMANENT_ADDR OID_FDDI_MAC_AVAILABLE_PATHS
     OID_FDDI_MAC_NOT_COPIED_FLAG OID_FDDI_MAC_REQUESTED_PATHS
     OID_FDDI_PORT_CONNNECT_STATE OID_FDDI_SHORT_MAX_LIST_SIZE
     OID_FDDI_SMT_AVAILABLE_PATHS OID_FDDI_SMT_STAT_RPT_POLICY
     OID_GEN_BROADCAST_BYTES_XMIT OID_GEN_BROADCAST_FRAMES_RCV
     OID_GEN_DIRECTED_FRAMES_XMIT OID_GEN_MAXIMUM_SEND_PACKETS
     OID_GEN_MEDIA_CONNECT_STATUS OID_GEN_MULTICAST_BYTES_XMIT
     OID_GEN_MULTICAST_FRAMES_RCV OID_GEN_RECEIVE_BUFFER_SPACE
     OID_TAPI_GET_CALL_ADDRESS_ID OID_TAPI_GET_LINE_DEV_STATUS
     OID_TAPI_PROVIDER_INITIALIZE OID_TAPI_SEND_USER_USER_INFO
     OID_TAPI_SET_STATUS_MESSAGES OID_WW_CDPD_CIRCUIT_SWITCHED
     OID_WW_CDPD_DATA_COMPRESSION OID_WW_GEN_ENCRYPTION_IN_USE
     OID_WW_GEN_PERMANENT_ADDRESS */
  /* Offset 19 gives the best switch position.  */
  switch (name[19]) {
  case 'A':
    if (memEQ(name, "OID_GEN_DIRECTED_FRAMES_XMIT", 28)) {
    /*                                  ^               */
#ifdef OID_GEN_DIRECTED_FRAMES_XMIT
      *iv_return = OID_GEN_DIRECTED_FRAMES_XMIT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'B':
    if (memEQ(name, "OID_ATM_RCV_REASSEMBLY_ERROR", 28)) {
    /*                                  ^               */
#ifdef OID_ATM_RCV_REASSEMBLY_ERROR
      *iv_return = OID_ATM_RCV_REASSEMBLY_ERROR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_FDDI_MAC_AVAILABLE_PATHS", 28)) {
    /*                                  ^               */
#ifdef OID_FDDI_MAC_AVAILABLE_PATHS
      *iv_return = OID_FDDI_MAC_AVAILABLE_PATHS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_FDDI_SMT_AVAILABLE_PATHS", 28)) {
    /*                                  ^               */
#ifdef OID_FDDI_SMT_AVAILABLE_PATHS
      *iv_return = OID_FDDI_SMT_AVAILABLE_PATHS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'C':
    if (memEQ(name, "OID_802_3_XMIT_ONE_COLLISION", 28)) {
    /*                                  ^               */
#ifdef OID_802_3_XMIT_ONE_COLLISION
      *iv_return = OID_802_3_XMIT_ONE_COLLISION;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_ATM_MAX_AAL0_PACKET_SIZE", 28)) {
    /*                                  ^               */
#ifdef OID_ATM_MAX_AAL0_PACKET_SIZE
      *iv_return = OID_ATM_MAX_AAL0_PACKET_SIZE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_ATM_MAX_AAL1_PACKET_SIZE", 28)) {
    /*                                  ^               */
#ifdef OID_ATM_MAX_AAL1_PACKET_SIZE
      *iv_return = OID_ATM_MAX_AAL1_PACKET_SIZE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_ATM_MAX_AAL5_PACKET_SIZE", 28)) {
    /*                                  ^               */
#ifdef OID_ATM_MAX_AAL5_PACKET_SIZE
      *iv_return = OID_ATM_MAX_AAL5_PACKET_SIZE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_FDDI_LONG_MULTICAST_LIST", 28)) {
    /*                                  ^               */
#ifdef OID_FDDI_LONG_MULTICAST_LIST
      *iv_return = OID_FDDI_LONG_MULTICAST_LIST;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_GEN_MEDIA_CONNECT_STATUS", 28)) {
    /*                                  ^               */
#ifdef OID_GEN_MEDIA_CONNECT_STATUS
      *iv_return = OID_GEN_MEDIA_CONNECT_STATUS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'D':
    if (memEQ(name, "OID_GEN_MAXIMUM_SEND_PACKETS", 28)) {
    /*                                  ^               */
#ifdef OID_GEN_MAXIMUM_SEND_PACKETS
      *iv_return = OID_GEN_MAXIMUM_SEND_PACKETS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_TAPI_GET_CALL_ADDRESS_ID", 28)) {
    /*                                  ^               */
#ifdef OID_TAPI_GET_CALL_ADDRESS_ID
      *iv_return = OID_TAPI_GET_CALL_ADDRESS_ID;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "OID_FDDI_PORT_CONNNECT_STATE", 28)) {
    /*                                  ^               */
#ifdef OID_FDDI_PORT_CONNNECT_STATE
      *iv_return = OID_FDDI_PORT_CONNNECT_STATE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_TAPI_GET_LINE_DEV_STATUS", 28)) {
    /*                                  ^               */
#ifdef OID_TAPI_GET_LINE_DEV_STATUS
      *iv_return = OID_TAPI_GET_LINE_DEV_STATUS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'F':
    if (memEQ(name, "OID_GEN_RECEIVE_BUFFER_SPACE", 28)) {
    /*                                  ^               */
#ifdef OID_GEN_RECEIVE_BUFFER_SPACE
      *iv_return = OID_GEN_RECEIVE_BUFFER_SPACE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'I':
    if (memEQ(name, "OID_802_5_CURRENT_RING_STATE", 28)) {
    /*                                  ^               */
#ifdef OID_802_5_CURRENT_RING_STATE
      *iv_return = OID_802_5_CURRENT_RING_STATE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "OID_FDDI_SHORT_MAX_LIST_SIZE", 28)) {
    /*                                  ^               */
#ifdef OID_FDDI_SHORT_MAX_LIST_SIZE
      *iv_return = OID_FDDI_SHORT_MAX_LIST_SIZE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'M':
    if (memEQ(name, "OID_WW_CDPD_DATA_COMPRESSION", 28)) {
    /*                                  ^               */
#ifdef OID_WW_CDPD_DATA_COMPRESSION
      *iv_return = OID_WW_CDPD_DATA_COMPRESSION;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "OID_FDDI_LONG_PERMANENT_ADDR", 28)) {
    /*                                  ^               */
#ifdef OID_FDDI_LONG_PERMANENT_ADDR
      *iv_return = OID_FDDI_LONG_PERMANENT_ADDR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_TAPI_PROVIDER_INITIALIZE", 28)) {
    /*                                  ^               */
#ifdef OID_TAPI_PROVIDER_INITIALIZE
      *iv_return = OID_TAPI_PROVIDER_INITIALIZE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "NDIS_PACKET_TYPE_PROMISCUOUS", 28)) {
    /*                                  ^               */
#ifdef NDIS_PACKET_TYPE_PROMISCUOUS
      *iv_return = NDIS_PACKET_TYPE_PROMISCUOUS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_WW_GEN_ENCRYPTION_IN_USE", 28)) {
    /*                                  ^               */
#ifdef OID_WW_GEN_ENCRYPTION_IN_USE
      *iv_return = OID_WW_GEN_ENCRYPTION_IN_USE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "OID_FDDI_MAC_NOT_COPIED_FLAG", 28)) {
    /*                                  ^               */
#ifdef OID_FDDI_MAC_NOT_COPIED_FLAG
      *iv_return = OID_FDDI_MAC_NOT_COPIED_FLAG;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_FDDI_SMT_STAT_RPT_POLICY", 28)) {
    /*                                  ^               */
#ifdef OID_FDDI_SMT_STAT_RPT_POLICY
      *iv_return = OID_FDDI_SMT_STAT_RPT_POLICY;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "OID_GEN_BROADCAST_FRAMES_RCV", 28)) {
    /*                                  ^               */
#ifdef OID_GEN_BROADCAST_FRAMES_RCV
      *iv_return = OID_GEN_BROADCAST_FRAMES_RCV;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_GEN_MULTICAST_FRAMES_RCV", 28)) {
    /*                                  ^               */
#ifdef OID_GEN_MULTICAST_FRAMES_RCV
      *iv_return = OID_GEN_MULTICAST_FRAMES_RCV;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "OID_ARCNET_PERMANENT_ADDRESS", 28)) {
    /*                                  ^               */
#ifdef OID_ARCNET_PERMANENT_ADDRESS
      *iv_return = OID_ARCNET_PERMANENT_ADDRESS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_FDDI_MAC_REQUESTED_PATHS", 28)) {
    /*                                  ^               */
#ifdef OID_FDDI_MAC_REQUESTED_PATHS
      *iv_return = OID_FDDI_MAC_REQUESTED_PATHS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_WW_GEN_PERMANENT_ADDRESS", 28)) {
    /*                                  ^               */
#ifdef OID_WW_GEN_PERMANENT_ADDRESS
      *iv_return = OID_WW_GEN_PERMANENT_ADDRESS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'U':
    if (memEQ(name, "OID_802_5_CURRENT_FUNCTIONAL", 28)) {
    /*                                  ^               */
#ifdef OID_802_5_CURRENT_FUNCTIONAL
      *iv_return = OID_802_5_CURRENT_FUNCTIONAL;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_TAPI_SEND_USER_USER_INFO", 28)) {
    /*                                  ^               */
#ifdef OID_TAPI_SEND_USER_USER_INFO
      *iv_return = OID_TAPI_SEND_USER_USER_INFO;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'V':
    if (memEQ(name, "NDIS_RING_AUTO_REMOVAL_ERROR", 28)) {
    /*                                  ^               */
#ifdef NDIS_RING_AUTO_REMOVAL_ERROR
      *iv_return = NDIS_RING_AUTO_REMOVAL_ERROR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'Y':
    if (memEQ(name, "OID_GEN_BROADCAST_BYTES_XMIT", 28)) {
    /*                                  ^               */
#ifdef OID_GEN_BROADCAST_BYTES_XMIT
      *iv_return = OID_GEN_BROADCAST_BYTES_XMIT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_GEN_MULTICAST_BYTES_XMIT", 28)) {
    /*                                  ^               */
#ifdef OID_GEN_MULTICAST_BYTES_XMIT
      *iv_return = OID_GEN_MULTICAST_BYTES_XMIT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '_':
    if (memEQ(name, "NDIS_PROT_OPTION_NO_LOOPBACK", 28)) {
    /*                                  ^               */
#ifdef NDIS_PROT_OPTION_NO_LOOPBACK
      *iv_return = NDIS_PROT_OPTION_NO_LOOPBACK;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_TAPI_SET_STATUS_MESSAGES", 28)) {
    /*                                  ^               */
#ifdef OID_TAPI_SET_STATUS_MESSAGES
      *iv_return = OID_TAPI_SET_STATUS_MESSAGES;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_WW_CDPD_CIRCUIT_SWITCHED", 28)) {
    /*                                  ^               */
#ifdef OID_WW_CDPD_CIRCUIT_SWITCHED
      *iv_return = OID_WW_CDPD_CIRCUIT_SWITCHED;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_29 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     OID_802_3_RCV_ERROR_ALIGNMENT OID_802_3_XMIT_MAX_COLLISIONS
     OID_802_3_XMIT_TIMES_CRS_LOST OID_802_5_CURRENT_RING_STATUS
     OID_802_5_FRAME_COPIED_ERRORS OID_ATM_MAX_AAL34_PACKET_SIZE
     OID_FDDI_DOWNSTREAM_NODE_LONG OID_FDDI_IF_IN_UNKNOWN_PROTOS
     OID_FDDI_MAC_BRIDGE_FUNCTIONS OID_FDDI_MAC_DUP_ADDRESS_TEST
     OID_FDDI_MAC_FRAME_ERROR_FLAG OID_FDDI_MAC_HARDWARE_PRESENT
     OID_FDDI_MAC_LONG_GRP_ADDRESS OID_FDDI_MAC_NOT_COPIED_RATIO
     OID_FDDI_MAC_OLD_UPSTREAM_NBR OID_FDDI_MAC_T_MAX_CAPABILITY
     OID_FDDI_PATH_TVX_LOWER_BOUND OID_FDDI_PORT_AVAILABLE_PATHS
     OID_FDDI_PORT_REQUESTED_PATHS OID_FDDI_SHORT_MULTICAST_LIST
     OID_FDDI_SHORT_PERMANENT_ADDR OID_GEN_BROADCAST_FRAMES_XMIT
     OID_GEN_CO_MINIMUM_LINK_SPEED OID_GEN_CO_RCV_PDUS_NO_BUFFER
     OID_GEN_CO_VENDOR_DESCRIPTION OID_GEN_CURRENT_PACKET_FILTER
     OID_GEN_MULTICAST_FRAMES_XMIT OID_GEN_TRANSMIT_BUFFER_SPACE
     OID_GEN_TRANSMIT_QUEUE_LENGTH OID_GEN_VENDOR_DRIVER_VERSION
     OID_INDICATION_REQUEST_CANCEL OID_INDICATION_REQUEST_ENABLE
     OID_IRDA_MAX_SEND_WINDOW_SIZE OID_WW_GEN_INDICATION_REQUEST */
  /* Offset 18 gives the best switch position.  */
  switch (name[18]) {
  case 'A':
    if (memEQ(name, "OID_FDDI_MAC_HARDWARE_PRESENT", 29)) {
    /*                                 ^                 */
#ifdef OID_FDDI_MAC_HARDWARE_PRESENT
      *iv_return = OID_FDDI_MAC_HARDWARE_PRESENT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'C':
    if (memEQ(name, "OID_GEN_CURRENT_PACKET_FILTER", 29)) {
    /*                                 ^                 */
#ifdef OID_GEN_CURRENT_PACKET_FILTER
      *iv_return = OID_GEN_CURRENT_PACKET_FILTER;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'D':
    if (memEQ(name, "OID_FDDI_MAC_DUP_ADDRESS_TEST", 29)) {
    /*                                 ^                 */
#ifdef OID_FDDI_MAC_DUP_ADDRESS_TEST
      *iv_return = OID_FDDI_MAC_DUP_ADDRESS_TEST;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_GEN_CO_VENDOR_DESCRIPTION", 29)) {
    /*                                 ^                 */
#ifdef OID_GEN_CO_VENDOR_DESCRIPTION
      *iv_return = OID_GEN_CO_VENDOR_DESCRIPTION;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "OID_802_3_XMIT_TIMES_CRS_LOST", 29)) {
    /*                                 ^                 */
#ifdef OID_802_3_XMIT_TIMES_CRS_LOST
      *iv_return = OID_802_3_XMIT_TIMES_CRS_LOST;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_FDDI_MAC_BRIDGE_FUNCTIONS", 29)) {
    /*                                 ^                 */
#ifdef OID_FDDI_MAC_BRIDGE_FUNCTIONS
      *iv_return = OID_FDDI_MAC_BRIDGE_FUNCTIONS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_FDDI_PORT_REQUESTED_PATHS", 29)) {
    /*                                 ^                 */
#ifdef OID_FDDI_PORT_REQUESTED_PATHS
      *iv_return = OID_FDDI_PORT_REQUESTED_PATHS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'F':
    if (memEQ(name, "OID_GEN_BROADCAST_FRAMES_XMIT", 29)) {
    /*                                 ^                 */
#ifdef OID_GEN_BROADCAST_FRAMES_XMIT
      *iv_return = OID_GEN_BROADCAST_FRAMES_XMIT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_GEN_MULTICAST_FRAMES_XMIT", 29)) {
    /*                                 ^                 */
#ifdef OID_GEN_MULTICAST_FRAMES_XMIT
      *iv_return = OID_GEN_MULTICAST_FRAMES_XMIT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'G':
    if (memEQ(name, "OID_FDDI_MAC_LONG_GRP_ADDRESS", 29)) {
    /*                                 ^                 */
#ifdef OID_FDDI_MAC_LONG_GRP_ADDRESS
      *iv_return = OID_FDDI_MAC_LONG_GRP_ADDRESS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'I':
    if (memEQ(name, "OID_WW_GEN_INDICATION_REQUEST", 29)) {
    /*                                 ^                 */
#ifdef OID_WW_GEN_INDICATION_REQUEST
      *iv_return = OID_WW_GEN_INDICATION_REQUEST;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "OID_FDDI_PATH_TVX_LOWER_BOUND", 29)) {
    /*                                 ^                 */
#ifdef OID_FDDI_PATH_TVX_LOWER_BOUND
      *iv_return = OID_FDDI_PATH_TVX_LOWER_BOUND;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_FDDI_PORT_AVAILABLE_PATHS", 29)) {
    /*                                 ^                 */
#ifdef OID_FDDI_PORT_AVAILABLE_PATHS
      *iv_return = OID_FDDI_PORT_AVAILABLE_PATHS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'M':
    if (memEQ(name, "OID_FDDI_DOWNSTREAM_NODE_LONG", 29)) {
    /*                                 ^                 */
#ifdef OID_FDDI_DOWNSTREAM_NODE_LONG
      *iv_return = OID_FDDI_DOWNSTREAM_NODE_LONG;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_FDDI_SHORT_PERMANENT_ADDR", 29)) {
    /*                                 ^                 */
#ifdef OID_FDDI_SHORT_PERMANENT_ADDR
      *iv_return = OID_FDDI_SHORT_PERMANENT_ADDR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "OID_FDDI_IF_IN_UNKNOWN_PROTOS", 29)) {
    /*                                 ^                 */
#ifdef OID_FDDI_IF_IN_UNKNOWN_PROTOS
      *iv_return = OID_FDDI_IF_IN_UNKNOWN_PROTOS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "OID_FDDI_MAC_NOT_COPIED_RATIO", 29)) {
    /*                                 ^                 */
#ifdef OID_FDDI_MAC_NOT_COPIED_RATIO
      *iv_return = OID_FDDI_MAC_NOT_COPIED_RATIO;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "OID_802_5_FRAME_COPIED_ERRORS", 29)) {
    /*                                 ^                 */
#ifdef OID_802_5_FRAME_COPIED_ERRORS
      *iv_return = OID_802_5_FRAME_COPIED_ERRORS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_ATM_MAX_AAL34_PACKET_SIZE", 29)) {
    /*                                 ^                 */
#ifdef OID_ATM_MAX_AAL34_PACKET_SIZE
      *iv_return = OID_ATM_MAX_AAL34_PACKET_SIZE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_FDDI_MAC_OLD_UPSTREAM_NBR", 29)) {
    /*                                 ^                 */
#ifdef OID_FDDI_MAC_OLD_UPSTREAM_NBR
      *iv_return = OID_FDDI_MAC_OLD_UPSTREAM_NBR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "OID_802_3_RCV_ERROR_ALIGNMENT", 29)) {
    /*                                 ^                 */
#ifdef OID_802_3_RCV_ERROR_ALIGNMENT
      *iv_return = OID_802_3_RCV_ERROR_ALIGNMENT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_802_5_CURRENT_RING_STATUS", 29)) {
    /*                                 ^                 */
#ifdef OID_802_5_CURRENT_RING_STATUS
      *iv_return = OID_802_5_CURRENT_RING_STATUS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "OID_GEN_CO_RCV_PDUS_NO_BUFFER", 29)) {
    /*                                 ^                 */
#ifdef OID_GEN_CO_RCV_PDUS_NO_BUFFER
      *iv_return = OID_GEN_CO_RCV_PDUS_NO_BUFFER;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "OID_FDDI_SHORT_MULTICAST_LIST", 29)) {
    /*                                 ^                 */
#ifdef OID_FDDI_SHORT_MULTICAST_LIST
      *iv_return = OID_FDDI_SHORT_MULTICAST_LIST;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'U':
    if (memEQ(name, "OID_GEN_TRANSMIT_BUFFER_SPACE", 29)) {
    /*                                 ^                 */
#ifdef OID_GEN_TRANSMIT_BUFFER_SPACE
      *iv_return = OID_GEN_TRANSMIT_BUFFER_SPACE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_GEN_TRANSMIT_QUEUE_LENGTH", 29)) {
    /*                                 ^                 */
#ifdef OID_GEN_TRANSMIT_QUEUE_LENGTH
      *iv_return = OID_GEN_TRANSMIT_QUEUE_LENGTH;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_INDICATION_REQUEST_CANCEL", 29)) {
    /*                                 ^                 */
#ifdef OID_INDICATION_REQUEST_CANCEL
      *iv_return = OID_INDICATION_REQUEST_CANCEL;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_INDICATION_REQUEST_ENABLE", 29)) {
    /*                                 ^                 */
#ifdef OID_INDICATION_REQUEST_ENABLE
      *iv_return = OID_INDICATION_REQUEST_ENABLE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'V':
    if (memEQ(name, "OID_GEN_VENDOR_DRIVER_VERSION", 29)) {
    /*                                 ^                 */
#ifdef OID_GEN_VENDOR_DRIVER_VERSION
      *iv_return = OID_GEN_VENDOR_DRIVER_VERSION;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'W':
    if (memEQ(name, "OID_IRDA_MAX_SEND_WINDOW_SIZE", 29)) {
    /*                                 ^                 */
#ifdef OID_IRDA_MAX_SEND_WINDOW_SIZE
      *iv_return = OID_IRDA_MAX_SEND_WINDOW_SIZE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '_':
    if (memEQ(name, "OID_802_3_XMIT_MAX_COLLISIONS", 29)) {
    /*                                 ^                 */
#ifdef OID_802_3_XMIT_MAX_COLLISIONS
      *iv_return = OID_802_3_XMIT_MAX_COLLISIONS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_FDDI_MAC_FRAME_ERROR_FLAG", 29)) {
    /*                                 ^                 */
#ifdef OID_FDDI_MAC_FRAME_ERROR_FLAG
      *iv_return = OID_FDDI_MAC_FRAME_ERROR_FLAG;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_FDDI_MAC_T_MAX_CAPABILITY", 29)) {
    /*                                 ^                 */
#ifdef OID_FDDI_MAC_T_MAX_CAPABILITY
      *iv_return = OID_FDDI_MAC_T_MAX_CAPABILITY;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_GEN_CO_MINIMUM_LINK_SPEED", 29)) {
    /*                                 ^                 */
#ifdef OID_GEN_CO_MINIMUM_LINK_SPEED
      *iv_return = OID_GEN_CO_MINIMUM_LINK_SPEED;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_30 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     NDIS_802_3_MAC_OPTION_PRIORITY NDIS_PACKET_TYPE_ALL_MULTICAST
     OID_802_3_XMIT_LATE_COLLISIONS OID_802_3_XMIT_MORE_COLLISIONS
     OID_FDDI_MAC_FRAME_ERROR_RATIO OID_FDDI_MAC_SHORT_GRP_ADDRESS
     OID_FDDI_PORT_HARDWARE_PRESENT OID_FDDI_SMT_CONNECTION_POLICY
     OID_FDDI_SMT_MANUFACTURER_DATA OID_IRDA_MAX_UNICAST_LIST_SIZE
     OID_TAPI_NEGOTIATE_EXT_VERSION OID_WW_CDPD_HEADER_COMPRESSION
     OID_WW_GEN_DISABLE_TRANSMITTER OID_WW_GEN_NETWORK_TYPE_IN_USE
     OID_WW_GEN_REGISTRATION_STATUS */
  /* Offset 16 gives the best switch position.  */
  switch (name[16]) {
  case 'A':
    if (memEQ(name, "OID_802_3_XMIT_LATE_COLLISIONS", 30)) {
    /*                               ^                    */
#ifdef OID_802_3_XMIT_LATE_COLLISIONS
      *iv_return = OID_802_3_XMIT_LATE_COLLISIONS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'C':
    if (memEQ(name, "OID_IRDA_MAX_UNICAST_LIST_SIZE", 30)) {
    /*                               ^                    */
#ifdef OID_IRDA_MAX_UNICAST_LIST_SIZE
      *iv_return = OID_IRDA_MAX_UNICAST_LIST_SIZE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "OID_WW_CDPD_HEADER_COMPRESSION", 30)) {
    /*                               ^                    */
#ifdef OID_WW_CDPD_HEADER_COMPRESSION
      *iv_return = OID_WW_CDPD_HEADER_COMPRESSION;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "OID_WW_GEN_DISABLE_TRANSMITTER", 30)) {
    /*                               ^                    */
#ifdef OID_WW_GEN_DISABLE_TRANSMITTER
      *iv_return = OID_WW_GEN_DISABLE_TRANSMITTER;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'M':
    if (memEQ(name, "OID_FDDI_MAC_FRAME_ERROR_RATIO", 30)) {
    /*                               ^                    */
#ifdef OID_FDDI_MAC_FRAME_ERROR_RATIO
      *iv_return = OID_FDDI_MAC_FRAME_ERROR_RATIO;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "OID_FDDI_SMT_CONNECTION_POLICY", 30)) {
    /*                               ^                    */
#ifdef OID_FDDI_SMT_CONNECTION_POLICY
      *iv_return = OID_FDDI_SMT_CONNECTION_POLICY;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "OID_802_3_XMIT_MORE_COLLISIONS", 30)) {
    /*                               ^                    */
#ifdef OID_802_3_XMIT_MORE_COLLISIONS
      *iv_return = OID_802_3_XMIT_MORE_COLLISIONS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "NDIS_802_3_MAC_OPTION_PRIORITY", 30)) {
    /*                               ^                    */
#ifdef NDIS_802_3_MAC_OPTION_PRIORITY
      *iv_return = NDIS_802_3_MAC_OPTION_PRIORITY;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "OID_FDDI_MAC_SHORT_GRP_ADDRESS", 30)) {
    /*                               ^                    */
#ifdef OID_FDDI_MAC_SHORT_GRP_ADDRESS
      *iv_return = OID_FDDI_MAC_SHORT_GRP_ADDRESS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_FDDI_PORT_HARDWARE_PRESENT", 30)) {
    /*                               ^                    */
#ifdef OID_FDDI_PORT_HARDWARE_PRESENT
      *iv_return = OID_FDDI_PORT_HARDWARE_PRESENT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_WW_GEN_NETWORK_TYPE_IN_USE", 30)) {
    /*                               ^                    */
#ifdef OID_WW_GEN_NETWORK_TYPE_IN_USE
      *iv_return = OID_WW_GEN_NETWORK_TYPE_IN_USE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "OID_TAPI_NEGOTIATE_EXT_VERSION", 30)) {
    /*                               ^                    */
#ifdef OID_TAPI_NEGOTIATE_EXT_VERSION
      *iv_return = OID_TAPI_NEGOTIATE_EXT_VERSION;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OID_WW_GEN_REGISTRATION_STATUS", 30)) {
    /*                               ^                    */
#ifdef OID_WW_GEN_REGISTRATION_STATUS
      *iv_return = OID_WW_GEN_REGISTRATION_STATUS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'U':
    if (memEQ(name, "OID_FDDI_SMT_MANUFACTURER_DATA", 30)) {
    /*                               ^                    */
#ifdef OID_FDDI_SMT_MANUFACTURER_DATA
      *iv_return = OID_FDDI_SMT_MANUFACTURER_DATA;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '_':
    if (memEQ(name, "NDIS_PACKET_TYPE_ALL_MULTICAST", 30)) {
    /*                               ^                    */
#ifdef NDIS_PACKET_TYPE_ALL_MULTICAST
      *iv_return = NDIS_PACKET_TYPE_ALL_MULTICAST;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_31 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     NDIS_MAC_OPTION_EOTX_INDICATION NDIS_PACKET_TYPE_ALL_FUNCTIONAL
     NDIS_PACKET_TYPE_SOURCE_ROUTING OID_FDDI_MAC_MA_UNITDATA_ENABLE
     OID_FDDI_MAC_OLD_DOWNSTREAM_NBR OID_FDDI_PATH_T_MAX_LOWER_BOUND
     OID_GEN_CO_MEDIA_CONNECT_STATUS OID_WW_GEN_ENCRYPTION_SUPPORTED
     OID_WW_GEN_HEADER_FORMAT_IN_USE */
  /* Offset 21 gives the best switch position.  */
  switch (name[21]) {
  case 'A':
    if (memEQ(name, "OID_FDDI_MAC_MA_UNITDATA_ENABLE", 31)) {
    /*                                    ^                */
#ifdef OID_FDDI_MAC_MA_UNITDATA_ENABLE
      *iv_return = OID_FDDI_MAC_MA_UNITDATA_ENABLE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'C':
    if (memEQ(name, "NDIS_PACKET_TYPE_SOURCE_ROUTING", 31)) {
    /*                                    ^                */
#ifdef NDIS_PACKET_TYPE_SOURCE_ROUTING
      *iv_return = NDIS_PACKET_TYPE_SOURCE_ROUTING;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "OID_GEN_CO_MEDIA_CONNECT_STATUS", 31)) {
    /*                                    ^                */
#ifdef OID_GEN_CO_MEDIA_CONNECT_STATUS
      *iv_return = OID_GEN_CO_MEDIA_CONNECT_STATUS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'F':
    if (memEQ(name, "NDIS_PACKET_TYPE_ALL_FUNCTIONAL", 31)) {
    /*                                    ^                */
#ifdef NDIS_PACKET_TYPE_ALL_FUNCTIONAL
      *iv_return = NDIS_PACKET_TYPE_ALL_FUNCTIONAL;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'I':
    if (memEQ(name, "NDIS_MAC_OPTION_EOTX_INDICATION", 31)) {
    /*                                    ^                */
#ifdef NDIS_MAC_OPTION_EOTX_INDICATION
      *iv_return = NDIS_MAC_OPTION_EOTX_INDICATION;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'M':
    if (memEQ(name, "OID_WW_GEN_HEADER_FORMAT_IN_USE", 31)) {
    /*                                    ^                */
#ifdef OID_WW_GEN_HEADER_FORMAT_IN_USE
      *iv_return = OID_WW_GEN_HEADER_FORMAT_IN_USE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "OID_FDDI_PATH_T_MAX_LOWER_BOUND", 31)) {
    /*                                    ^                */
#ifdef OID_FDDI_PATH_T_MAX_LOWER_BOUND
      *iv_return = OID_FDDI_PATH_T_MAX_LOWER_BOUND;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "OID_FDDI_MAC_OLD_DOWNSTREAM_NBR", 31)) {
    /*                                    ^                */
#ifdef OID_FDDI_MAC_OLD_DOWNSTREAM_NBR
      *iv_return = OID_FDDI_MAC_OLD_DOWNSTREAM_NBR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '_':
    if (memEQ(name, "OID_WW_GEN_ENCRYPTION_SUPPORTED", 31)) {
    /*                                    ^                */
#ifdef OID_WW_GEN_ENCRYPTION_SUPPORTED
      *iv_return = OID_WW_GEN_ENCRYPTION_SUPPORTED;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_32 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     OID_802_3_XMIT_HEARTBEAT_FAILURE OID_ATM_DIGITAL_BROADCAST_VPIVCI
     OID_FDDI_SMT_CONFIG_CAPABILITIES OID_FDDI_SMT_LAST_SET_STATION_ID
     OID_GEN_CO_TRANSMIT_QUEUE_LENGTH OID_GEN_CO_VENDOR_DRIVER_VERSION
     OID_IRDA_MAX_RECEIVE_WINDOW_SIZE */
  /* Offset 18 gives the best switch position.  */
  switch (name[18]) {
  case 'D':
    if (memEQ(name, "OID_GEN_CO_VENDOR_DRIVER_VERSION", 32)) {
    /*                                 ^                    */
#ifdef OID_GEN_CO_VENDOR_DRIVER_VERSION
      *iv_return = OID_GEN_CO_VENDOR_DRIVER_VERSION;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'G':
    if (memEQ(name, "OID_FDDI_SMT_CONFIG_CAPABILITIES", 32)) {
    /*                                 ^                    */
#ifdef OID_FDDI_SMT_CONFIG_CAPABILITIES
      *iv_return = OID_FDDI_SMT_CONFIG_CAPABILITIES;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "OID_ATM_DIGITAL_BROADCAST_VPIVCI", 32)) {
    /*                                 ^                    */
#ifdef OID_ATM_DIGITAL_BROADCAST_VPIVCI
      *iv_return = OID_ATM_DIGITAL_BROADCAST_VPIVCI;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "OID_802_3_XMIT_HEARTBEAT_FAILURE", 32)) {
    /*                                 ^                    */
#ifdef OID_802_3_XMIT_HEARTBEAT_FAILURE
      *iv_return = OID_802_3_XMIT_HEARTBEAT_FAILURE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "OID_FDDI_SMT_LAST_SET_STATION_ID", 32)) {
    /*                                 ^                    */
#ifdef OID_FDDI_SMT_LAST_SET_STATION_ID
      *iv_return = OID_FDDI_SMT_LAST_SET_STATION_ID;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "OID_GEN_CO_TRANSMIT_QUEUE_LENGTH", 32)) {
    /*                                 ^                    */
#ifdef OID_GEN_CO_TRANSMIT_QUEUE_LENGTH
      *iv_return = OID_GEN_CO_TRANSMIT_QUEUE_LENGTH;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'V':
    if (memEQ(name, "OID_IRDA_MAX_RECEIVE_WINDOW_SIZE", 32)) {
    /*                                 ^                    */
#ifdef OID_IRDA_MAX_RECEIVE_WINDOW_SIZE
      *iv_return = OID_IRDA_MAX_RECEIVE_WINDOW_SIZE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_33 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     NDIS_PROT_OPTION_ESTIMATED_LENGTH OID_FDDI_MAC_DOWNSTREAM_PORT_TYPE
     OID_FDDI_MAC_NOT_COPIED_THRESHOLD OID_FDDI_PORT_CONNECTION_POLICIES
     OID_FDDI_SMT_TRACE_MAX_EXPIRATION OID_GEN_CO_BYTES_XMIT_OUTSTANDING */
  /* Offset 31 gives the best switch position.  */
  switch (name[31]) {
  case 'E':
    if (memEQ(name, "OID_FDDI_PORT_CONNECTION_POLICIES", 33)) {
    /*                                              ^        */
#ifdef OID_FDDI_PORT_CONNECTION_POLICIES
      *iv_return = OID_FDDI_PORT_CONNECTION_POLICIES;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "OID_FDDI_MAC_NOT_COPIED_THRESHOLD", 33)) {
    /*                                              ^        */
#ifdef OID_FDDI_MAC_NOT_COPIED_THRESHOLD
      *iv_return = OID_FDDI_MAC_NOT_COPIED_THRESHOLD;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "OID_GEN_CO_BYTES_XMIT_OUTSTANDING", 33)) {
    /*                                              ^        */
#ifdef OID_GEN_CO_BYTES_XMIT_OUTSTANDING
      *iv_return = OID_GEN_CO_BYTES_XMIT_OUTSTANDING;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "OID_FDDI_SMT_TRACE_MAX_EXPIRATION", 33)) {
    /*                                              ^        */
#ifdef OID_FDDI_SMT_TRACE_MAX_EXPIRATION
      *iv_return = OID_FDDI_SMT_TRACE_MAX_EXPIRATION;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "OID_FDDI_MAC_DOWNSTREAM_PORT_TYPE", 33)) {
    /*                                              ^        */
#ifdef OID_FDDI_MAC_DOWNSTREAM_PORT_TYPE
      *iv_return = OID_FDDI_MAC_DOWNSTREAM_PORT_TYPE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "NDIS_PROT_OPTION_ESTIMATED_LENGTH", 33)) {
    /*                                              ^        */
#ifdef NDIS_PROT_OPTION_ESTIMATED_LENGTH
      *iv_return = NDIS_PROT_OPTION_ESTIMATED_LENGTH;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_34 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     NDIS_MAC_OPTION_RECEIVE_SERIALIZED NDIS_MAC_OPTION_TRANSFERS_NOT_PEND
     NDIS_PROT_OPTION_NO_RSVD_ON_RCVPKT OID_ATM_SUPPORTED_SERVICE_CATEGORY
     OID_FDDI_MAC_FRAME_ERROR_THRESHOLD OID_FDDI_MAC_MA_UNITDATA_AVAILABLE
     OID_FDDI_SMT_TRANSITION_TIME_STAMP OID_WW_GEN_NETWORK_TYPES_SUPPORTED */
  /* Offset 30 gives the best switch position.  */
  switch (name[30]) {
  case 'A':
    if (memEQ(name, "OID_FDDI_MAC_MA_UNITDATA_AVAILABLE", 34)) {
    /*                                             ^          */
#ifdef OID_FDDI_MAC_MA_UNITDATA_AVAILABLE
      *iv_return = OID_FDDI_MAC_MA_UNITDATA_AVAILABLE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'G':
    if (memEQ(name, "OID_ATM_SUPPORTED_SERVICE_CATEGORY", 34)) {
    /*                                             ^          */
#ifdef OID_ATM_SUPPORTED_SERVICE_CATEGORY
      *iv_return = OID_ATM_SUPPORTED_SERVICE_CATEGORY;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'H':
    if (memEQ(name, "OID_FDDI_MAC_FRAME_ERROR_THRESHOLD", 34)) {
    /*                                             ^          */
#ifdef OID_FDDI_MAC_FRAME_ERROR_THRESHOLD
      *iv_return = OID_FDDI_MAC_FRAME_ERROR_THRESHOLD;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'I':
    if (memEQ(name, "NDIS_MAC_OPTION_RECEIVE_SERIALIZED", 34)) {
    /*                                             ^          */
#ifdef NDIS_MAC_OPTION_RECEIVE_SERIALIZED
      *iv_return = NDIS_MAC_OPTION_RECEIVE_SERIALIZED;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "NDIS_MAC_OPTION_TRANSFERS_NOT_PEND", 34)) {
    /*                                             ^          */
#ifdef NDIS_MAC_OPTION_TRANSFERS_NOT_PEND
      *iv_return = NDIS_MAC_OPTION_TRANSFERS_NOT_PEND;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "OID_WW_GEN_NETWORK_TYPES_SUPPORTED", 34)) {
    /*                                             ^          */
#ifdef OID_WW_GEN_NETWORK_TYPES_SUPPORTED
      *iv_return = OID_WW_GEN_NETWORK_TYPES_SUPPORTED;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "OID_FDDI_SMT_TRANSITION_TIME_STAMP", 34)) {
    /*                                             ^          */
#ifdef OID_FDDI_SMT_TRANSITION_TIME_STAMP
      *iv_return = OID_FDDI_SMT_TRANSITION_TIME_STAMP;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'V':
    if (memEQ(name, "NDIS_PROT_OPTION_NO_RSVD_ON_RCVPKT", 34)) {
    /*                                             ^          */
#ifdef NDIS_PROT_OPTION_NO_RSVD_ON_RCVPKT
      *iv_return = NDIS_PROT_OPTION_NO_RSVD_ON_RCVPKT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_35 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     NDIS_MAC_OPTION_COPY_LOOKAHEAD_DATA OID_FDDI_MAC_FRAME_STATUS_FUNCTIONS
     OID_FDDI_SMT_REMOTE_DISCONNECT_FLAG OID_WW_GEN_HEADER_FORMATS_SUPPORTED */
  /* Offset 9 gives the best switch position.  */
  switch (name[9]) {
  case 'M':
    if (memEQ(name, "OID_FDDI_MAC_FRAME_STATUS_FUNCTIONS", 35)) {
    /*                        ^                                */
#ifdef OID_FDDI_MAC_FRAME_STATUS_FUNCTIONS
      *iv_return = OID_FDDI_MAC_FRAME_STATUS_FUNCTIONS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "OID_WW_GEN_HEADER_FORMATS_SUPPORTED", 35)) {
    /*                        ^                                */
#ifdef OID_WW_GEN_HEADER_FORMATS_SUPPORTED
      *iv_return = OID_WW_GEN_HEADER_FORMATS_SUPPORTED;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "NDIS_MAC_OPTION_COPY_LOOKAHEAD_DATA", 35)) {
    /*                        ^                                */
#ifdef NDIS_MAC_OPTION_COPY_LOOKAHEAD_DATA
      *iv_return = NDIS_MAC_OPTION_COPY_LOOKAHEAD_DATA;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "OID_FDDI_SMT_REMOTE_DISCONNECT_FLAG", 35)) {
    /*                        ^                                */
#ifdef OID_FDDI_SMT_REMOTE_DISCONNECT_FLAG
      *iv_return = OID_FDDI_SMT_REMOTE_DISCONNECT_FLAG;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_36 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     OID_ATM_ACQUIRE_ACCESS_NET_RESOURCES OID_ATM_RELEASE_ACCESS_NET_RESOURCES
     OID_TAPI_CONDITIONAL_MEDIA_DETECTION OID_TAPI_SET_DEFAULT_MEDIA_DETECTION
     */
  /* Offset 10 gives the best switch position.  */
  switch (name[10]) {
  case 'E':
    if (memEQ(name, "OID_TAPI_SET_DEFAULT_MEDIA_DETECTION", 36)) {
    /*                         ^                                */
#ifdef OID_TAPI_SET_DEFAULT_MEDIA_DETECTION
      *iv_return = OID_TAPI_SET_DEFAULT_MEDIA_DETECTION;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "OID_ATM_RELEASE_ACCESS_NET_RESOURCES", 36)) {
    /*                         ^                                */
#ifdef OID_ATM_RELEASE_ACCESS_NET_RESOURCES
      *iv_return = OID_ATM_RELEASE_ACCESS_NET_RESOURCES;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "OID_TAPI_CONDITIONAL_MEDIA_DETECTION", 36)) {
    /*                         ^                                */
#ifdef OID_TAPI_CONDITIONAL_MEDIA_DETECTION
      *iv_return = OID_TAPI_CONDITIONAL_MEDIA_DETECTION;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'Q':
    if (memEQ(name, "OID_ATM_ACQUIRE_ACCESS_NET_RESOURCES", 36)) {
    /*                         ^                                */
#ifdef OID_ATM_ACQUIRE_ACCESS_NET_RESOURCES
      *iv_return = OID_ATM_ACQUIRE_ACCESS_NET_RESOURCES;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant (pTHX_ const char *name, STRLEN len, IV *iv_return) {
  /* Initially switch on the length of the name.  */
  /* When generated this function returned values for the list of names given
     in this section of perl code.  Rather than manually editing these functions
     to add or remove constants, which would result in this comment and section
     of code becoming inaccurate, we recommend that you edit this section of
     code, and use it to regenerate a new set of constant functions which you
     then use to replace the originals.

     Regenerate these constant functions by feeding this entire source file to
     perl -x

#!C:\aperl58\bin\perl.exe -w
use ExtUtils::Constant qw (constant_types C_constant XS_constant);

my $types = {map {($_, 1)} qw(IV)};
my @names = (qw(NDIS_802_3_MAC_OPTION_PRIORITY
	       NDIS_CO_MAC_OPTION_DYNAMIC_LINK_SPEED
	       NDIS_MAC_OPTION_COPY_LOOKAHEAD_DATA
	       NDIS_MAC_OPTION_EOTX_INDICATION NDIS_MAC_OPTION_FULL_DUPLEX
	       NDIS_MAC_OPTION_NO_LOOPBACK NDIS_MAC_OPTION_RECEIVE_SERIALIZED
	       NDIS_MAC_OPTION_RESERVED NDIS_MAC_OPTION_TRANSFERS_NOT_PEND
	       NDIS_PACKET_TYPE_ALL_FUNCTIONAL NDIS_PACKET_TYPE_ALL_LOCAL
	       NDIS_PACKET_TYPE_ALL_MULTICAST NDIS_PACKET_TYPE_BROADCAST
	       NDIS_PACKET_TYPE_DIRECTED NDIS_PACKET_TYPE_FUNCTIONAL
	       NDIS_PACKET_TYPE_GROUP NDIS_PACKET_TYPE_MAC_FRAME
	       NDIS_PACKET_TYPE_MULTICAST NDIS_PACKET_TYPE_PROMISCUOUS
	       NDIS_PACKET_TYPE_SMT NDIS_PACKET_TYPE_SOURCE_ROUTING
	       NDIS_PROT_OPTION_ESTIMATED_LENGTH NDIS_PROT_OPTION_NO_LOOPBACK
	       NDIS_PROT_OPTION_NO_RSVD_ON_RCVPKT NDIS_RING_AUTO_REMOVAL_ERROR
	       NDIS_RING_COUNTER_OVERFLOW NDIS_RING_HARD_ERROR
	       NDIS_RING_LOBE_WIRE_FAULT NDIS_RING_REMOVE_RECEIVED
	       NDIS_RING_RING_RECOVERY NDIS_RING_SIGNAL_LOSS
	       NDIS_RING_SINGLE_STATION NDIS_RING_SOFT_ERROR
	       NDIS_RING_TRANSMIT_BEACON OID_802_3_CURRENT_ADDRESS
	       OID_802_3_MAC_OPTIONS OID_802_3_MAXIMUM_LIST_SIZE
	       OID_802_3_MULTICAST_LIST OID_802_3_PERMANENT_ADDRESS
	       OID_802_3_RCV_ERROR_ALIGNMENT OID_802_3_RCV_OVERRUN
	       OID_802_3_XMIT_DEFERRED OID_802_3_XMIT_HEARTBEAT_FAILURE
	       OID_802_3_XMIT_LATE_COLLISIONS OID_802_3_XMIT_MAX_COLLISIONS
	       OID_802_3_XMIT_MORE_COLLISIONS OID_802_3_XMIT_ONE_COLLISION
	       OID_802_3_XMIT_TIMES_CRS_LOST OID_802_3_XMIT_UNDERRUN
	       OID_802_5_ABORT_DELIMETERS OID_802_5_AC_ERRORS
	       OID_802_5_BURST_ERRORS OID_802_5_CURRENT_ADDRESS
	       OID_802_5_CURRENT_FUNCTIONAL OID_802_5_CURRENT_GROUP
	       OID_802_5_CURRENT_RING_STATE OID_802_5_CURRENT_RING_STATUS
	       OID_802_5_FRAME_COPIED_ERRORS OID_802_5_FREQUENCY_ERRORS
	       OID_802_5_INTERNAL_ERRORS OID_802_5_LAST_OPEN_STATUS
	       OID_802_5_LINE_ERRORS OID_802_5_LOST_FRAMES
	       OID_802_5_PERMANENT_ADDRESS OID_802_5_TOKEN_ERRORS
	       OID_ARCNET_CURRENT_ADDRESS OID_ARCNET_PERMANENT_ADDRESS
	       OID_ARCNET_RECONFIGURATIONS OID_ATM_ACQUIRE_ACCESS_NET_RESOURCES
	       OID_ATM_ALIGNMENT_REQUIRED OID_ATM_ASSIGNED_VPI
	       OID_ATM_CELLS_HEC_ERROR OID_ATM_DIGITAL_BROADCAST_VPIVCI
	       OID_ATM_GET_NEAREST_FLOW OID_ATM_HW_CURRENT_ADDRESS
	       OID_ATM_ILMI_VPIVCI OID_ATM_MAX_AAL0_PACKET_SIZE
	       OID_ATM_MAX_AAL1_PACKET_SIZE OID_ATM_MAX_AAL34_PACKET_SIZE
	       OID_ATM_MAX_AAL5_PACKET_SIZE OID_ATM_MAX_ACTIVE_VCI_BITS
	       OID_ATM_MAX_ACTIVE_VCS OID_ATM_MAX_ACTIVE_VPI_BITS
	       OID_ATM_RCV_CELLS_DROPPED OID_ATM_RCV_CELLS_OK
	       OID_ATM_RCV_INVALID_VPI_VCI OID_ATM_RCV_REASSEMBLY_ERROR
	       OID_ATM_RELEASE_ACCESS_NET_RESOURCES OID_ATM_SIGNALING_VPIVCI
	       OID_ATM_SUPPORTED_AAL_TYPES OID_ATM_SUPPORTED_SERVICE_CATEGORY
	       OID_ATM_SUPPORTED_VC_RATES OID_ATM_XMIT_CELLS_OK
	       OID_CO_ADDRESS_CHANGE OID_CO_ADD_ADDRESS OID_CO_ADD_PVC
	       OID_CO_DELETE_ADDRESS OID_CO_DELETE_PVC OID_CO_GET_ADDRESSES
	       OID_CO_GET_CALL_INFORMATION OID_CO_SIGNALING_DISABLED
	       OID_CO_SIGNALING_ENABLED OID_FDDI_ATTACHMENT_TYPE
	       OID_FDDI_DOWNSTREAM_NODE_LONG OID_FDDI_FRAMES_LOST
	       OID_FDDI_FRAME_ERRORS OID_FDDI_IF_ADMIN_STATUS OID_FDDI_IF_DESCR
	       OID_FDDI_IF_IN_DISCARDS OID_FDDI_IF_IN_ERRORS
	       OID_FDDI_IF_IN_NUCAST_PKTS OID_FDDI_IF_IN_OCTETS
	       OID_FDDI_IF_IN_UCAST_PKTS OID_FDDI_IF_IN_UNKNOWN_PROTOS
	       OID_FDDI_IF_LAST_CHANGE OID_FDDI_IF_MTU OID_FDDI_IF_OPER_STATUS
	       OID_FDDI_IF_OUT_DISCARDS OID_FDDI_IF_OUT_ERRORS
	       OID_FDDI_IF_OUT_NUCAST_PKTS OID_FDDI_IF_OUT_OCTETS
	       OID_FDDI_IF_OUT_QLEN OID_FDDI_IF_OUT_UCAST_PKTS
	       OID_FDDI_IF_PHYS_ADDRESS OID_FDDI_IF_SPECIFIC OID_FDDI_IF_SPEED
	       OID_FDDI_IF_TYPE OID_FDDI_LCONNECTION_STATE
	       OID_FDDI_LCT_FAILURES OID_FDDI_LEM_REJECTS
	       OID_FDDI_LONG_CURRENT_ADDR OID_FDDI_LONG_MAX_LIST_SIZE
	       OID_FDDI_LONG_MULTICAST_LIST OID_FDDI_LONG_PERMANENT_ADDR
	       OID_FDDI_MAC_AVAILABLE_PATHS OID_FDDI_MAC_BRIDGE_FUNCTIONS
	       OID_FDDI_MAC_COPIED_CT OID_FDDI_MAC_CURRENT_PATH
	       OID_FDDI_MAC_DA_FLAG OID_FDDI_MAC_DOWNSTREAM_NBR
	       OID_FDDI_MAC_DOWNSTREAM_PORT_TYPE OID_FDDI_MAC_DUP_ADDRESS_TEST
	       OID_FDDI_MAC_ERROR_CT OID_FDDI_MAC_FRAME_CT
	       OID_FDDI_MAC_FRAME_ERROR_FLAG OID_FDDI_MAC_FRAME_ERROR_RATIO
	       OID_FDDI_MAC_FRAME_ERROR_THRESHOLD
	       OID_FDDI_MAC_FRAME_STATUS_FUNCTIONS
	       OID_FDDI_MAC_HARDWARE_PRESENT OID_FDDI_MAC_INDEX
	       OID_FDDI_MAC_LATE_CT OID_FDDI_MAC_LONG_GRP_ADDRESS
	       OID_FDDI_MAC_LOST_CT OID_FDDI_MAC_MA_UNITDATA_AVAILABLE
	       OID_FDDI_MAC_MA_UNITDATA_ENABLE OID_FDDI_MAC_NOT_COPIED_CT
	       OID_FDDI_MAC_NOT_COPIED_FLAG OID_FDDI_MAC_NOT_COPIED_RATIO
	       OID_FDDI_MAC_NOT_COPIED_THRESHOLD
	       OID_FDDI_MAC_OLD_DOWNSTREAM_NBR OID_FDDI_MAC_OLD_UPSTREAM_NBR
	       OID_FDDI_MAC_REQUESTED_PATHS OID_FDDI_MAC_RING_OP_CT
	       OID_FDDI_MAC_RMT_STATE OID_FDDI_MAC_SHORT_GRP_ADDRESS
	       OID_FDDI_MAC_SMT_ADDRESS OID_FDDI_MAC_TOKEN_CT
	       OID_FDDI_MAC_TRANSMIT_CT OID_FDDI_MAC_TVX_CAPABILITY
	       OID_FDDI_MAC_TVX_EXPIRED_CT OID_FDDI_MAC_TVX_VALUE
	       OID_FDDI_MAC_T_MAX OID_FDDI_MAC_T_MAX_CAPABILITY
	       OID_FDDI_MAC_T_NEG OID_FDDI_MAC_T_PRI0 OID_FDDI_MAC_T_PRI1
	       OID_FDDI_MAC_T_PRI2 OID_FDDI_MAC_T_PRI3 OID_FDDI_MAC_T_PRI4
	       OID_FDDI_MAC_T_PRI5 OID_FDDI_MAC_T_PRI6 OID_FDDI_MAC_T_REQ
	       OID_FDDI_MAC_UNDA_FLAG OID_FDDI_MAC_UPSTREAM_NBR
	       OID_FDDI_PATH_CONFIGURATION OID_FDDI_PATH_INDEX
	       OID_FDDI_PATH_MAX_T_REQ OID_FDDI_PATH_RING_LATENCY
	       OID_FDDI_PATH_SBA_AVAILABLE OID_FDDI_PATH_SBA_OVERHEAD
	       OID_FDDI_PATH_SBA_PAYLOAD OID_FDDI_PATH_TRACE_STATUS
	       OID_FDDI_PATH_TVX_LOWER_BOUND OID_FDDI_PATH_T_MAX_LOWER_BOUND
	       OID_FDDI_PATH_T_R_MODE OID_FDDI_PORT_ACTION
	       OID_FDDI_PORT_AVAILABLE_PATHS OID_FDDI_PORT_BS_FLAG
	       OID_FDDI_PORT_CONNECTION_CAPABILITIES
	       OID_FDDI_PORT_CONNECTION_POLICIES OID_FDDI_PORT_CONNNECT_STATE
	       OID_FDDI_PORT_CURRENT_PATH OID_FDDI_PORT_EB_ERROR_CT
	       OID_FDDI_PORT_HARDWARE_PRESENT OID_FDDI_PORT_INDEX
	       OID_FDDI_PORT_LCT_FAIL_CT OID_FDDI_PORT_LEM_CT
	       OID_FDDI_PORT_LEM_REJECT_CT OID_FDDI_PORT_LER_ALARM
	       OID_FDDI_PORT_LER_CUTOFF OID_FDDI_PORT_LER_ESTIMATE
	       OID_FDDI_PORT_LER_FLAG OID_FDDI_PORT_MAC_INDICATED
	       OID_FDDI_PORT_MAC_LOOP_TIME OID_FDDI_PORT_MAC_PLACEMENT
	       OID_FDDI_PORT_MAINT_LS OID_FDDI_PORT_MY_TYPE
	       OID_FDDI_PORT_NEIGHBOR_TYPE OID_FDDI_PORT_PCM_STATE
	       OID_FDDI_PORT_PC_LS OID_FDDI_PORT_PC_WITHHOLD
	       OID_FDDI_PORT_PMD_CLASS OID_FDDI_PORT_REQUESTED_PATHS
	       OID_FDDI_RING_MGT_STATE OID_FDDI_SHORT_CURRENT_ADDR
	       OID_FDDI_SHORT_MAX_LIST_SIZE OID_FDDI_SHORT_MULTICAST_LIST
	       OID_FDDI_SHORT_PERMANENT_ADDR OID_FDDI_SMT_AVAILABLE_PATHS
	       OID_FDDI_SMT_BYPASS_PRESENT OID_FDDI_SMT_CF_STATE
	       OID_FDDI_SMT_CONFIG_CAPABILITIES OID_FDDI_SMT_CONFIG_POLICY
	       OID_FDDI_SMT_CONNECTION_POLICY OID_FDDI_SMT_ECM_STATE
	       OID_FDDI_SMT_HI_VERSION_ID OID_FDDI_SMT_HOLD_STATE
	       OID_FDDI_SMT_LAST_SET_STATION_ID OID_FDDI_SMT_LO_VERSION_ID
	       OID_FDDI_SMT_MAC_CT OID_FDDI_SMT_MAC_INDEXES
	       OID_FDDI_SMT_MANUFACTURER_DATA OID_FDDI_SMT_MASTER_CT
	       OID_FDDI_SMT_MIB_VERSION_ID OID_FDDI_SMT_MSG_TIME_STAMP
	       OID_FDDI_SMT_NON_MASTER_CT OID_FDDI_SMT_OP_VERSION_ID
	       OID_FDDI_SMT_PEER_WRAP_FLAG OID_FDDI_SMT_PORT_INDEXES
	       OID_FDDI_SMT_REMOTE_DISCONNECT_FLAG OID_FDDI_SMT_SET_COUNT
	       OID_FDDI_SMT_STATION_ACTION OID_FDDI_SMT_STATION_ID
	       OID_FDDI_SMT_STATION_STATUS OID_FDDI_SMT_STAT_RPT_POLICY
	       OID_FDDI_SMT_TRACE_MAX_EXPIRATION
	       OID_FDDI_SMT_TRANSITION_TIME_STAMP OID_FDDI_SMT_T_NOTIFY
	       OID_FDDI_SMT_USER_DATA OID_FDDI_UPSTREAM_NODE_LONG
	       OID_GEN_BROADCAST_BYTES_RCV OID_GEN_BROADCAST_BYTES_XMIT
	       OID_GEN_BROADCAST_FRAMES_RCV OID_GEN_BROADCAST_FRAMES_XMIT
	       OID_GEN_CO_BYTES_RCV OID_GEN_CO_BYTES_XMIT
	       OID_GEN_CO_BYTES_XMIT_OUTSTANDING OID_GEN_CO_DRIVER_VERSION
	       OID_GEN_CO_GET_NETCARD_TIME OID_GEN_CO_GET_TIME_CAPS
	       OID_GEN_CO_HARDWARE_STATUS OID_GEN_CO_LINK_SPEED
	       OID_GEN_CO_MAC_OPTIONS OID_GEN_CO_MEDIA_CONNECT_STATUS
	       OID_GEN_CO_MEDIA_IN_USE OID_GEN_CO_MEDIA_SUPPORTED
	       OID_GEN_CO_MINIMUM_LINK_SPEED OID_GEN_CO_NETCARD_LOAD
	       OID_GEN_CO_PROTOCOL_OPTIONS OID_GEN_CO_RCV_CRC_ERROR
	       OID_GEN_CO_RCV_PDUS_ERROR OID_GEN_CO_RCV_PDUS_NO_BUFFER
	       OID_GEN_CO_RCV_PDUS_OK OID_GEN_CO_SUPPORTED_LIST
	       OID_GEN_CO_TRANSMIT_QUEUE_LENGTH OID_GEN_CO_VENDOR_DESCRIPTION
	       OID_GEN_CO_VENDOR_DRIVER_VERSION OID_GEN_CO_VENDOR_ID
	       OID_GEN_CO_XMIT_PDUS_ERROR OID_GEN_CO_XMIT_PDUS_OK
	       OID_GEN_CURRENT_LOOKAHEAD OID_GEN_CURRENT_PACKET_FILTER
	       OID_GEN_DIRECTED_BYTES_RCV OID_GEN_DIRECTED_BYTES_XMIT
	       OID_GEN_DIRECTED_FRAMES_RCV OID_GEN_DIRECTED_FRAMES_XMIT
	       OID_GEN_DRIVER_VERSION OID_GEN_GET_NETCARD_TIME
	       OID_GEN_GET_TIME_CAPS OID_GEN_HARDWARE_STATUS OID_GEN_LINK_SPEED
	       OID_GEN_MAC_OPTIONS OID_GEN_MAXIMUM_FRAME_SIZE
	       OID_GEN_MAXIMUM_LOOKAHEAD OID_GEN_MAXIMUM_SEND_PACKETS
	       OID_GEN_MAXIMUM_TOTAL_SIZE OID_GEN_MEDIA_CONNECT_STATUS
	       OID_GEN_MEDIA_IN_USE OID_GEN_MEDIA_SUPPORTED
	       OID_GEN_MULTICAST_BYTES_RCV OID_GEN_MULTICAST_BYTES_XMIT
	       OID_GEN_MULTICAST_FRAMES_RCV OID_GEN_MULTICAST_FRAMES_XMIT
	       OID_GEN_PROTOCOL_OPTIONS OID_GEN_RCV_CRC_ERROR OID_GEN_RCV_ERROR
	       OID_GEN_RCV_NO_BUFFER OID_GEN_RCV_OK OID_GEN_RECEIVE_BLOCK_SIZE
	       OID_GEN_RECEIVE_BUFFER_SPACE OID_GEN_SUPPORTED_LIST
	       OID_GEN_TRANSMIT_BLOCK_SIZE OID_GEN_TRANSMIT_BUFFER_SPACE
	       OID_GEN_TRANSMIT_QUEUE_LENGTH OID_GEN_VENDOR_DESCRIPTION
	       OID_GEN_VENDOR_DRIVER_VERSION OID_GEN_VENDOR_ID
	       OID_GEN_XMIT_ERROR OID_GEN_XMIT_OK OID_INDICATION_REQUEST_CANCEL
	       OID_INDICATION_REQUEST_ENABLE OID_IRDA_EXTRA_RCV_BOFS
	       OID_IRDA_LINK_SPEED OID_IRDA_MAX_RECEIVE_WINDOW_SIZE
	       OID_IRDA_MAX_SEND_WINDOW_SIZE OID_IRDA_MAX_UNICAST_LIST_SIZE
	       OID_IRDA_MEDIA_BUSY OID_IRDA_RATE_SNIFF OID_IRDA_RECEIVING
	       OID_IRDA_SUPPORTED_SPEEDS OID_IRDA_TURNAROUND_TIME
	       OID_IRDA_UNICAST_LIST OID_LTALK_COLLISIONS
	       OID_LTALK_CURRENT_NODE_ID OID_LTALK_DEFERS OID_LTALK_FCS_ERRORS
	       OID_LTALK_IN_BROADCASTS OID_LTALK_IN_LENGTH_ERRORS
	       OID_LTALK_NO_DATA_ERRORS OID_LTALK_OUT_NO_HANDLERS
	       OID_LTALK_RANDOM_CTS_ERRORS OID_TAPI_ACCEPT OID_TAPI_ANSWER
	       OID_TAPI_CLOSE OID_TAPI_CLOSE_CALL
	       OID_TAPI_CONDITIONAL_MEDIA_DETECTION OID_TAPI_CONFIG_DIALOG
	       OID_TAPI_DEV_SPECIFIC OID_TAPI_DIAL OID_TAPI_DROP
	       OID_TAPI_GET_ADDRESS_CAPS OID_TAPI_GET_ADDRESS_ID
	       OID_TAPI_GET_ADDRESS_STATUS OID_TAPI_GET_CALL_ADDRESS_ID
	       OID_TAPI_GET_CALL_INFO OID_TAPI_GET_CALL_STATUS
	       OID_TAPI_GET_DEV_CAPS OID_TAPI_GET_DEV_CONFIG
	       OID_TAPI_GET_EXTENSION_ID OID_TAPI_GET_ID
	       OID_TAPI_GET_LINE_DEV_STATUS OID_TAPI_MAKE_CALL
	       OID_TAPI_NEGOTIATE_EXT_VERSION OID_TAPI_OPEN
	       OID_TAPI_PROVIDER_INITIALIZE OID_TAPI_PROVIDER_SHUTDOWN
	       OID_TAPI_SECURE_CALL OID_TAPI_SELECT_EXT_VERSION
	       OID_TAPI_SEND_USER_USER_INFO OID_TAPI_SET_APP_SPECIFIC
	       OID_TAPI_SET_CALL_PARAMS OID_TAPI_SET_DEFAULT_MEDIA_DETECTION
	       OID_TAPI_SET_DEV_CONFIG OID_TAPI_SET_MEDIA_MODE
	       OID_TAPI_SET_STATUS_MESSAGES OID_WAN_CURRENT_ADDRESS
	       OID_WAN_GET_BRIDGE_INFO OID_WAN_GET_COMP_INFO OID_WAN_GET_INFO
	       OID_WAN_GET_LINK_INFO OID_WAN_GET_STATS_INFO
	       OID_WAN_HEADER_FORMAT OID_WAN_LINE_COUNT OID_WAN_MEDIUM_SUBTYPE
	       OID_WAN_PERMANENT_ADDRESS OID_WAN_PROTOCOL_TYPE
	       OID_WAN_QUALITY_OF_SERVICE OID_WAN_SET_BRIDGE_INFO
	       OID_WAN_SET_COMP_INFO OID_WAN_SET_LINK_INFO OID_WW_ARD_DATAGRAM
	       OID_WW_ARD_SNDCP OID_WW_ARD_TMLY_MSG OID_WW_CDPD_AREA_COLOR
	       OID_WW_CDPD_CHANNEL_SELECT OID_WW_CDPD_CHANNEL_STATE
	       OID_WW_CDPD_CIRCUIT_SWITCHED OID_WW_CDPD_DATA_COMPRESSION
	       OID_WW_CDPD_EID OID_WW_CDPD_HEADER_COMPRESSION OID_WW_CDPD_NEI
	       OID_WW_CDPD_NEI_STATE OID_WW_CDPD_RSSI
	       OID_WW_CDPD_SERVICE_PROVIDER_IDENTIFIER OID_WW_CDPD_SLEEP_MODE
	       OID_WW_CDPD_SPNI OID_WW_CDPD_TEI OID_WW_CDPD_TX_POWER_LEVEL
	       OID_WW_CDPD_WASI OID_WW_GEN_BASESTATION_ID
	       OID_WW_GEN_BATTERY_LEVEL OID_WW_GEN_CHANNEL_ID
	       OID_WW_GEN_CHANNEL_QUALITY OID_WW_GEN_CURRENT_ADDRESS
	       OID_WW_GEN_DEVICE_INFO OID_WW_GEN_DISABLE_TRANSMITTER
	       OID_WW_GEN_ENCRYPTION_IN_USE OID_WW_GEN_ENCRYPTION_STATE
	       OID_WW_GEN_ENCRYPTION_SUPPORTED OID_WW_GEN_EXTERNAL_POWER
	       OID_WW_GEN_HEADER_FORMATS_SUPPORTED
	       OID_WW_GEN_HEADER_FORMAT_IN_USE OID_WW_GEN_INDICATION_REQUEST
	       OID_WW_GEN_LATENCY OID_WW_GEN_LOCK_STATUS OID_WW_GEN_NETWORK_ID
	       OID_WW_GEN_NETWORK_TYPES_SUPPORTED
	       OID_WW_GEN_NETWORK_TYPE_IN_USE OID_WW_GEN_OPERATION_MODE
	       OID_WW_GEN_PERMANENT_ADDRESS OID_WW_GEN_RADIO_LINK_SPEED
	       OID_WW_GEN_REGISTRATION_STATUS OID_WW_GEN_SUSPEND_DRIVER
	       OID_WW_MBX_FLEXLIST OID_WW_MBX_GROUPLIST OID_WW_MBX_LIVE_DIE
	       OID_WW_MBX_SUBADDR OID_WW_MBX_TEMP_DEFAULTLIST
	       OID_WW_MBX_TRAFFIC_AREA OID_WW_MET_FUNCTION
	       OID_WW_PIN_LAST_LOCATION OID_WW_PIN_LOC_AUTHORIZE
	       OID_WW_PIN_LOC_FIX OID_WW_TAC_COMPRESSION OID_WW_TAC_GET_STATUS
	       OID_WW_TAC_SET_CONFIG OID_WW_TAC_USER_HEADER));

print constant_types(); # macro defs
foreach (C_constant ("Win32::NetPacket", 'constant', 'IV', $types, undef, 3, @names) ) {
    print $_, "\n"; # C constant subs
}
print "#### XS Section:\n";
print XS_constant ("Win32::NetPacket", $types);
__END__
   */

  switch (len) {
  case 13:
    return constant_13 (aTHX_ name, iv_return);
    break;
  case 14:
    return constant_14 (aTHX_ name, iv_return);
    break;
  case 15:
    return constant_15 (aTHX_ name, iv_return);
    break;
  case 16:
    return constant_16 (aTHX_ name, iv_return);
    break;
  case 17:
    return constant_17 (aTHX_ name, iv_return);
    break;
  case 18:
    return constant_18 (aTHX_ name, iv_return);
    break;
  case 19:
    return constant_19 (aTHX_ name, iv_return);
    break;
  case 20:
    return constant_20 (aTHX_ name, iv_return);
    break;
  case 21:
    return constant_21 (aTHX_ name, iv_return);
    break;
  case 22:
    return constant_22 (aTHX_ name, iv_return);
    break;
  case 23:
    return constant_23 (aTHX_ name, iv_return);
    break;
  case 24:
    return constant_24 (aTHX_ name, iv_return);
    break;
  case 25:
    return constant_25 (aTHX_ name, iv_return);
    break;
  case 26:
    return constant_26 (aTHX_ name, iv_return);
    break;
  case 27:
    return constant_27 (aTHX_ name, iv_return);
    break;
  case 28:
    return constant_28 (aTHX_ name, iv_return);
    break;
  case 29:
    return constant_29 (aTHX_ name, iv_return);
    break;
  case 30:
    return constant_30 (aTHX_ name, iv_return);
    break;
  case 31:
    return constant_31 (aTHX_ name, iv_return);
    break;
  case 32:
    return constant_32 (aTHX_ name, iv_return);
    break;
  case 33:
    return constant_33 (aTHX_ name, iv_return);
    break;
  case 34:
    return constant_34 (aTHX_ name, iv_return);
    break;
  case 35:
    return constant_35 (aTHX_ name, iv_return);
    break;
  case 36:
    return constant_36 (aTHX_ name, iv_return);
    break;
  case 37:
    /* Names all of length 37.  */
    /* NDIS_CO_MAC_OPTION_DYNAMIC_LINK_SPEED
       OID_FDDI_PORT_CONNECTION_CAPABILITIES */
    /* Offset 0 gives the best switch position.  */
    switch (name[0]) {
    case 'N':
      if (memEQ(name, "NDIS_CO_MAC_OPTION_DYNAMIC_LINK_SPEED", 37)) {
      /*               ^                                           */
#ifdef NDIS_CO_MAC_OPTION_DYNAMIC_LINK_SPEED
        *iv_return = NDIS_CO_MAC_OPTION_DYNAMIC_LINK_SPEED;
        return PERL_constant_ISIV;
#else
        return PERL_constant_NOTDEF;
#endif
      }
      break;
    case 'O':
      if (memEQ(name, "OID_FDDI_PORT_CONNECTION_CAPABILITIES", 37)) {
      /*               ^                                           */
#ifdef OID_FDDI_PORT_CONNECTION_CAPABILITIES
        *iv_return = OID_FDDI_PORT_CONNECTION_CAPABILITIES;
        return PERL_constant_ISIV;
#else
        return PERL_constant_NOTDEF;
#endif
      }
      break;
    }
    break;
  case 39:
    if (memEQ(name, "OID_WW_CDPD_SERVICE_PROVIDER_IDENTIFIER", 39)) {
#ifdef OID_WW_CDPD_SERVICE_PROVIDER_IDENTIFIER
      *iv_return = OID_WW_CDPD_SERVICE_PROVIDER_IDENTIFIER;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

