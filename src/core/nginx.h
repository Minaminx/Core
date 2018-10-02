
/*
 * Copyright (C) Igor Sysoev
 * Copyright (C) Nginx, Inc.
 */


#ifndef _NGINX_H_INCLUDED_
#define _NGINX_H_INCLUDED_


// Version Update.
#define nginx_version      2003006002
#define NGINX_VERSION      "2.3.6.2"
#define NGINX_VER          "Minaminx/" NGINX_VERSION

// Release Update.
#define release_version    1015005
#define RELEASE_VERSION    "1.15.5"
#define RELEASE_VER        "Nginx/" RELEASE_VERSION

#ifdef NGX_BUILD
#define NGINX_VER_BUILD    NGINX_VER " (" NGX_BUILD ")"
#else
#define NGINX_VER_BUILD    NGINX_VER
#endif

#define NGINX_VAR          "Minaminx"
#define NGX_OLDPID_EXT     ".oldbin"


#endif /* _NGINX_H_INCLUDED_ */
