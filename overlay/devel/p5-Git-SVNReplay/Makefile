# New ports collection makefile for:	devel/p5-Git-SVNReplay
# Date created:				Mar 13 2010
# Whom:					Oleg Pudeyev <oleg@bsdpower.com>
#
# $FreeBSD$
#

PORTNAME=	Git-SVNReplay
PORTVERSION=	1.0214
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	../../authors/id/J/JE/JETTERO
PKGNAMEPREFIX=	p5-

MAINTAINER=	oleg@bsdpower.com
COMMENT=	Replay git commits into a throwaway svn repo

BUILD_DEPENDS=	p5-DBM-Deep>=0:${PORTSDIR}/databases/p5-DBM-Deep \
		p5-File-Slurp>=0:${PORTSDIR}/devel/p5-File-Slurp \
		p5-IPC-System-Simple>=0:${PORTSDIR}/devel/p5-IPC-System-Simple \
		p5-Term-GentooFunctions>=0:${PORTSDIR}/devel/p5-Term-GentooFunctions \
		p5-TimeDate>=0:${PORTSDIR}/devel/p5-TimeDate
RUN_DEPENDS=	${BUILD_DEPENDS} \
		git>=0:${PORTSDIR}/devel/git \
		${LOCALBASE}/bin/svn:${PORTSDIR}/devel/subversion

PERL_CONFIGURE=	yes

MAN1=		git-svn-replay.1
MAN3=		Git::SVNReplay.3

.include <bsd.port.mk>
