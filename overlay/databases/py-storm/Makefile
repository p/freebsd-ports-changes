# Ports collection makefile for:	py-storm
# Date created:				17 February 2009
# Whom:					Oleg Pudeyev <oleg@bsdpower.com>
#
# $FreeBSD$
#

PORTNAME=	storm
PORTVERSION=	0.16.0
CATEGORIES=	databases python
MASTER_SITES=	http://launchpadlibrarian.net/36214036/

PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
#DISTNAME=	SQLAlchemy-${DISTVERSION}

MAINTAINER=	oleg@bsdpower.com
COMMENT=	Lightweight Object-Relational Mapper for Python

USE_BZIP2=	yes
USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install
PYEASYINSTALL_ARCHDEP=	yes

# bypass infrastructure bug
OPTIONSFILE=	${PORT_DBDIR}/py-${PORTNAME}/options

OPTIONS+=	MYSQL "support MySQL" on
OPTIONS+=	POSTGRES "support PostgreSQL" on
OPTIONS+=	SQLITE "support SQLite" on

.include <bsd.port.pre.mk>

.if !defined(WITHOUT_MYSQL)
RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}MySQLdb>=1.2.2:${PORTSDIR}/databases/py-MySQLdb
.endif

.if !defined(WITHOUT_POSTGRES)
RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}psycopg2>=2.0.8:${PORTSDIR}/databases/py-psycopg2
.endif

.if !defined(WITHOUT_SQLITE)
RUN_DEPENDS+=	${PYTHON_SITELIBDIR}/pysqlite2/__init__.py:${PORTSDIR}/databases/py-pysqlite23
.endif

.include <bsd.port.post.mk>
