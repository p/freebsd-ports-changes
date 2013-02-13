# New ports collection makefile for:	py-frozen-flask
# Date created:				2013-02-13
# Whom:					Oleg Pudeyev <oleg@bsdpower.com>
#
# $FreeBSD$
#

PORTNAME=	Frozen-Flask
PORTVERSION=	0.9
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	oleg@bsdpower.com
COMMENT=	Freezes a Flask application into a set of static files

LICENSE=	BSD

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}Flask>=0.6:${PORTSDIR}/www/py-flask

USE_PYTHON=	2.5+
USE_PYDISTUTILS=	easy_install

.include <bsd.port.mk>
