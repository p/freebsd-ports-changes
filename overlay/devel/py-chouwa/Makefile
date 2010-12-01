# New ports collection makefile for:	py-chouwa
# Date created:		16 September 2010
# Whom:			Oleg Pudeyev <oleg@bsdpower.com>
#
# $FreeBSD$
#

PORTNAME=	chouwa
PORTVERSION=	0.2.0.20090611
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	oleg@bsdpower.com
COMMENT=	Django and Jinja2 integration

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/django/bin/django-admin.py:${PORTSDIR}/www/py-django \
		${PYTHON_PKGNAMEPREFIX}Jinja2>=0:${PORTSDIR}/devel/py-Jinja2
BUILD_DEPENDS=	${RUN_DEPENDS}

LICENSE=	MIT

USE_BZIP2=	yes
WRKSRC=		${WRKDIR}/${PORTNAME}

USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install
PYDISTUTILS_PKGVERSION=	${PORTVERSION:C/\.[0-9]{8}$//}

PLIST_FILES=	%%PYTHON_SITELIBDIR%%/%%PYEASYINSTALL_EGG%%

.include <bsd.port.mk>
