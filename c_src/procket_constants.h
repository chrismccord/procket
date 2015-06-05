struct procket_define {
    const char *key;
    int val;
};

const struct procket_define procket_socket_level[] = {
    {"SOL_SOCKET", SOL_SOCKET},
    {"IPPROTO_IP", IPPROTO_IP},
#ifdef IPPROTO_TP
    {"IPPROTO_TP", IPPROTO_TP},
#endif
    {"IPPROTO_AH", IPPROTO_AH},
    {"IPPROTO_TCP", IPPROTO_TCP},
    {"IPPROTO_EGP", IPPROTO_EGP},
    {"IPPROTO_PUP", IPPROTO_PUP},
    {"IPPROTO_UDP", IPPROTO_UDP},
    {"IPPROTO_IDP", IPPROTO_IDP},
#ifdef IPPROTO_GRE
    {"IPPROTO_GRE", IPPROTO_GRE},
#endif
    {"IPPROTO_ESP", IPPROTO_ESP},
#ifdef IPPROTO_MTP
    {"IPPROTO_MTP", IPPROTO_MTP},
#endif
    {"IPPROTO_PIM", IPPROTO_PIM},
    {"IPPROTO_RAW", IPPROTO_RAW},
    {"IPPROTO_IPV6", IPPROTO_IPV6},
    {"IPPROTO_ICMP", IPPROTO_ICMP},
    {"IPPROTO_IGMP", IPPROTO_IGMP},
#ifdef IPPROTO_IPIP
    {"IPPROTO_IPIP", IPPROTO_IPIP},
#endif
#ifdef IPPROTO_DCCP
    {"IPPROTO_DCCP", IPPROTO_DCCP},
#endif
    {"IPPROTO_RSVP", IPPROTO_RSVP},
#ifdef IPPROTO_COMP
    {"IPPROTO_COMP", IPPROTO_COMP},
#endif
    {"IPPROTO_SCTP", IPPROTO_SCTP},
    {"IPPROTO_ENCAP", IPPROTO_ENCAP},
#ifdef IPPROTO_BEETPH
    {"IPPROTO_BEETPH", IPPROTO_BEETPH},
#endif
#ifdef IPPROTO_UDPLITE
    {"IPPROTO_UDPLITE", IPPROTO_UDPLITE},
#endif
    {NULL, -1}
};

const struct procket_define procket_socket_optname[] = {
    {"SO_TYPE", SO_TYPE},
    {"SO_DEBUG", SO_DEBUG},
    {"SO_ERROR", SO_ERROR},
    {"SO_SNDBUF", SO_SNDBUF},
    {"SO_RCVBUF", SO_RCVBUF},
    {"SO_LINGER", SO_LINGER},
    {"SO_SNDTIMEO", SO_SNDTIMEO},
#ifdef SO_PASSCRED
    {"SO_PASSCRED", SO_PASSCRED},
#endif
#ifdef SO_PEERCRED
    {"SO_PEERCRED", SO_PEERCRED},
#endif
#ifdef SO_RCVLOAWAT
    {"SO_RCVLOWAT", SO_RCVLOWAT},
#endif
#ifdef SO_SNDLOWAT
    {"SO_SNDLOWAT", SO_SNDLOWAT},
#endif
    {"SO_RCVTIMEO", SO_RCVTIMEO},
#ifdef SO_NO_CHECK
    {"SO_NO_CHECK", SO_NO_CHECK},
#endif
#ifdef SO_PRIORITY
    {"SO_PRIORITY", SO_PRIORITY},
#endif
    {"SO_REUSEADDR", SO_REUSEADDR},
    {"SO_DONTROUTE", SO_DONTROUTE},
    {"SO_BROADCAST", SO_BROADCAST},
    {"SO_KEEPALIVE", SO_KEEPALIVE},
    {"SO_OOBINLINE", SO_OOBINLINE},
#ifdef SO_BSDCOMPAT
    {"SO_BSDCOMPAT", SO_BSDCOMPAT},
#endif
#ifdef SO_REUSEPORT
    {"SO_REUSEPORT", SO_REUSEPORT},
#endif
#ifdef SO_SNDBUFFORCE
    {"SO_SNDBUFFORCE", SO_SNDBUFFORCE},
#endif
#ifdef SO_RCVBUFFORCE
    {"SO_RCVBUFFORCE", SO_RCVBUFFORCE},
#endif
    {"IPV6_RECVPKTINFO", IPV6_RECVPKTINFO},

    {NULL, -1}
};