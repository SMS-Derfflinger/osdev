#ifndef __GBLIBC_TERMIOS_H_
#define __GBLIBC_TERMIOS_H_

#ifdef __cplusplus
extern "C" {
#endif

#define NCCS 32

typedef unsigned char cc_t;
typedef unsigned int speed_t;
typedef unsigned int tcflag_t;

struct termios {
    tcflag_t c_iflag;
    tcflag_t c_oflag;
    tcflag_t c_cflag;
    tcflag_t c_lflag;

    cc_t c_line;
    cc_t c_cc[NCCS];

    speed_t c_ispeed;
    speed_t c_ospeed;
};

// taken from linux kernel code

/* c_cc characters */
#define VINTR		 0
#define VQUIT		 1
#define VERASE		 2
#define VKILL		 3
#define VEOF		 4
#define VTIME		 5
#define VMIN		 6
#define VSWTC		 7
#define VSTART		 8
#define VSTOP		 9
#define VSUSP		10
#define VEOL		11
#define VREPRINT	12
#define VDISCARD	13
#define VWERASE		14
#define VLNEXT		15
#define VEOL2		16

/* c_iflag bits */
#define IGNBRK	0x0001			/* Ignore break condition */
#define BRKINT	0x0002			/* Signal interrupt on break */
#define IGNPAR	0x0004			/* Ignore characters with parity errors */
#define PARMRK	0x0008			/* Mark parity and framing errors */
#define INPCK	0x0010			/* Enable input parity check */
#define ISTRIP	0x0020			/* Strip 8th bit off characters */
#define INLCR	0x0040			/* Map NL to CR on input */
#define IGNCR	0x0080			/* Ignore CR */
#define ICRNL	0x0100			/* Map CR to NL on input */
#define IUCLC	0x0200
#define IXON	0x0400
#define IXANY	0x0800			/* Any character will restart after stop */
#define IXOFF	0x1000
#define IMAXBEL	0x2000
#define IUTF8	0x4000

/* c_oflag bits */
#define OPOST	0x00001			/* Perform output processing */
#define OLCUC	0x00002
#define ONLCR	0x00004
#define OCRNL	0x00008
#define ONOCR	0x00010
#define ONLRET	0x00020
#define OFILL	0x00040
#define OFDEL	0x00080
#define NLDLY	0x00100
#define   NL0	0x00000
#define   NL1	0x00100
#define CRDLY	0x00600
#define   CR0	0x00000
#define   CR1	0x00200
#define   CR2	0x00400
#define   CR3	0x00600
#define TABDLY	0x01800
#define   TAB0	0x00000
#define   TAB1	0x00800
#define   TAB2	0x01000
#define   TAB3	0x01800
#define   XTABS	0x01800
#define BSDLY	0x02000
#define   BS0	0x00000
#define   BS1	0x02000
#define VTDLY	0x04000
#define   VT0	0x00000
#define   VT1	0x04000
#define FFDLY	0x08000
#define   FF0	0x00000
#define   FF1	0x08000

/* c_cflag bit meaning */
/* Common CBAUD rates */
#define     B0		0x00000000	/* hang up */
#define    B50		0x00000001
#define    B75		0x00000002
#define   B110		0x00000003
#define   B134		0x00000004
#define   B150		0x00000005
#define   B200		0x00000006
#define   B300		0x00000007
#define   B600		0x00000008
#define  B1200		0x00000009
#define  B1800		0x0000000a
#define  B2400		0x0000000b
#define  B4800		0x0000000c
#define  B9600		0x0000000d
#define B19200		0x0000000e
#define B38400		0x0000000f
#define EXTA		B19200
#define EXTB		B38400

#define ADDRB		0x20000000	/* address bit */
#define CMSPAR		0x40000000	/* mark or space (stick) parity */
#define CRTSCTS		0x80000000	/* flow control */

#define IBSHIFT		16		/* Shift from CBAUD to CIBAUD */

#define CBAUD		0x0000100f
#define CSIZE		0x00000030
#define   CS5		0x00000000
#define   CS6		0x00000010
#define   CS7		0x00000020
#define   CS8		0x00000030
#define CSTOPB		0x00000040
#define CREAD		0x00000080
#define PARENB		0x00000100
#define PARODD		0x00000200
#define HUPCL		0x00000400
#define CLOCAL		0x00000800
#define CBAUDEX		0x00001000
#define BOTHER		0x00001000
#define     B57600	0x00001001
#define    B115200	0x00001002
#define    B230400	0x00001003
#define    B460800	0x00001004
#define    B500000	0x00001005
#define    B576000	0x00001006
#define    B921600	0x00001007
#define   B1000000	0x00001008
#define   B1152000	0x00001009
#define   B1500000	0x0000100a
#define   B2000000	0x0000100b
#define   B2500000	0x0000100c
#define   B3000000	0x0000100d
#define   B3500000	0x0000100e
#define   B4000000	0x0000100f
#define CIBAUD		0x100f0000	/* input baud rate */

/* c_lflag bits */
#define ISIG	0x00001
#define ICANON	0x00002
#define XCASE	0x00004
#define ECHO	0x00008
#define ECHOE	0x00010
#define ECHOK	0x00020
#define ECHONL	0x00040
#define NOFLSH	0x00080
#define TOSTOP	0x00100
#define ECHOCTL	0x00200
#define ECHOPRT	0x00400
#define ECHOKE	0x00800
#define FLUSHO	0x01000
#define PENDIN	0x04000
#define IEXTEN	0x08000
#define EXTPROC	0x10000

// line disciplines

#define N_TTY 0

#ifdef __cplusplus
}
#endif

#endif
