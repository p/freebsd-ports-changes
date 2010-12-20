# New ports collection makefile for:	py-redis
# Date created:		21 October 2010
# Whom:			Oleg Pudeyev <oleg@bsdpower.com>
#
# $FreeBSD$
#

PORTNAME=	redis
PORTVERSION=	2.0.0
CATEGORIES=	databases python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	oleg@bsdpower.com
COMMENT=	Python interface to the Redis key-value store

LICENSE=	MIT

USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install

PLIST_FILES=	%%PYTHON_SITELIBDIR%%/%%PYEASYINSTALL_EGG%%

.include <bsd.port.mk>
