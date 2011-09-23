# New ports collection makefile for:	py-clevercss
# Date created:		2 September 2011
# Whom:			Oleg Pudeyev <oleg@bsdpower.com>
#
# $FreeBSD$
#

PORTNAME=	clevercss
PORTVERSION=	0.1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	oleg@bsdpower.com
COMMENT=	CSS preprocessor

LICENSE=	BSD

DISTNAME=	${PYDISTUTILS_PKGNAME}-${PORTVERSION}

#WRKSRC=		${WRKDIR}/${PORTNAME}

USE_PYTHON=	yes
USE_PYDISTUTILS=yes
PYDISTUTILS_PKGNAME=	${PORTNAME:C/clevercss/CleverCSS/}
#PYDISTUTILS_PKGVERSION=	${PORTVERSION:C/\.[0-9]{8}$//}

PLIST_FILES=	%%PYTHON_SITELIBDIR%%/${PYDISTUTILS_PKGNAME}-${PYDISTUTILS_PKGVERSION}-py${PYTHON_VER}.egg

.include <bsd.port.mk>
