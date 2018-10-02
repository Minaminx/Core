
/*
 * Copyright (C) Igor Sysoev
 * Copyright (C) Nginx, Inc.
 */


#ifndef _NGINX_H_INCLUDED_
#define _NGINX_H_INCLUDED_


// var NAME
#define RELEASE_VAR        "Nginx"
#define DECLARED_VAR       "Minaminx"
#define NGINX_VAR          DECLARED_VAR

// Release Update (official)
#define release_version    1015005
#define RELEASE_VERSION    "1.15.5"
#define RELEASE_VER        RELEASE_VAR "/" RELEASE_VERSION

// Version Update (declared)
#define declared_version   2003006003
#define DECLARED_VERSION   "2.3.6.3"
#define DECLARED_VER       DECLARED_VAR "/" DECLARED_VERSION

// build version ('nginx -V')
#define nginx_version      declared_version " (" release_version ")"
#define NGINX_VERSION      DECLARED_VERSION " (" RELEASE_VERSION ")"
#define NGINX_VER          DECLARED_VER " (" RELEASE_VER ")"

#ifdef NGX_BUILD
#define NGINX_VER_BUILD    NGINX_VER " (" NGX_BUILD ")"
#else
#define NGINX_VER_BUILD    NGINX_VER
#endif

#define NGX_OLDPID_EXT     ".oldbin"


#endif /* _NGINX_H_INCLUDED_ */
