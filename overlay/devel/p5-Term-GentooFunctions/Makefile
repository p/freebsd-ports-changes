# New ports collection makefile for:	devel/p5-Term-GentooFunctions
# Date created:				Mar 13 2010
# Whom:					Oleg Pudeyev <oleg@bsdpower.com>
#
# $FreeBSD$
#

PORTNAME=	Term-GentooFunctions
PORTVERSION=	1.3505
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	../../authors/id/J/JE/JETTERO
PKGNAMEPREFIX=	p5-

MAINTAINER=	oleg@bsdpower.com
COMMENT=	Provides gentoo's einfo, ewarn, eerror, ebegin and eend

RUN_DEPENDS=	p5-Term-ANSIColor>=0:${PORTSDIR}/devel/p5-Term-ANSIColor \
		p5-Term-ANSIScreen>=0:${PORTSDIR}/devel/p5-Term-ANSIScreen \
		p5-Term-Size>=0:${PORTSDIR}/devel/p5-Term-Size
BUILD_DEPENDS=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Term::GentooFunctions.3

.include <bsd.port.mk>
