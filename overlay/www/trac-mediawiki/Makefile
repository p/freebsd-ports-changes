# New ports collection makefile for: trac-mediawiki
# Date created:                      April 21 2010
# Whom:                              Oleg Pudeyev <oleg@bsdpower.com>
#
# $FreeBSD$
#

PORTNAME=	mediawiki
VERSION=	1.0
REVISION=	2483
PORTVERSION=	${VERSION}.r${REVISION}
CATEGORIES=	www python
MASTER_SITES=	http://trac-hacks.org/changeset/${REVISION}/
PKGNAMEPREFIX=	trac-
# old_path and format are required, rev makes the local filename look reasonable
DISTNAME=	${PORTNAME}pluginmacro?old_path=%2F\&format=zip\&rev=${REVISION}

MAINTAINER=	oleg@bsdpower.com
COMMENT=	MediaWiki markup processor for Trac

BUILD_DEPENDS+=	easy_install:${PORTSDIR}/devel/py-setuptools
RUN_DEPENDS+=	tracd:${PORTSDIR}/www/trac

WRKSRC=		${WRKDIR}/${PORTNAME}pluginmacro
USE_ZIP=	yes
USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install
PYDISTUTILS_PKGNAME=	TracMediaWikiMacro
PYDISTUTILS_PKGVERSION=	${VERSION}

PLIST_FILES=	%%PYTHON_SITELIBDIR%%/%%PYEASYINSTALL_EGG%%

.include <bsd.port.mk>
