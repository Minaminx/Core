        if (NGX_BORINGSSL_TLSVERSION_MAX == "TLS1_3_VERSION") {
            ngx_conf_merge_bitmask_value(conf->protocols, prev->protocols,
                                        (NGX_CONF_BITMASK_SET
                                        |NGX_SSL_TLSv1_3
                                        |NGX_SSL_TLSv1_2));
        } else {
            #ifndef NGX_BORINGSSL_TLSVERSION_MAX
                ngx_conf_merge_bitmask_value(conf->protocols, prev->protocols,
                                            (NGX_CONF_BITMASK_SET
                                            |NGX_SSL_TLSv1_3
                                            |NGX_SSL_TLSv1_2));
            #else
                /// to make an error.
                ngx_conf_merge_bitmask_value(conf->protocols, prev->protocols,
                                            (NGX_CONF_BITMASK_SET
                                            |NGX_SSL_TLSv1_4));
            #endif
        }



/// means the default ssl_protocols :
/// ssl_protocols TLSv1.2 TLSv1.3;
#ifdef NGX_HTTP_SSL_BITMASK
    if (NGX_HTTP_SSL_BITMASK == "TLSALL") {
        #ifdef TLS1_3_VERSION
            if (NGX_BORINGSSL_TLSVERSION_MAX == "TLS1_3_VERSION") {
                ngx_conf_merge_bitmask_value(conf->protocols, prev->protocols,
                                            (NGX_CONF_BITMASK_SET
                                            |NGX_SSL_TLSv1_3
                                            |NGX_SSL_TLSv1_2
                                            |NGX_SSL_TLSv1_1
                                            |NGX_SSL_TLSv1));
            } else {
                #ifndef NGX_BORINGSSL_TLSVERSION_MAX
                    ngx_conf_merge_bitmask_value(conf->protocols, prev->protocols,
                                                (NGX_CONF_BITMASK_SET
                                                |NGX_SSL_TLSv1_3
                                                |NGX_SSL_TLSv1_2
                                                |NGX_SSL_TLSv1_1
                                                |NGX_SSL_TLSv1));
                #else
                    /// to make an error.
                    ngx_conf_merge_bitmask_value(conf->protocols, prev->protocols,
                                                (NGX_CONF_BITMASK_SET
                                                |NGX_SSL_TLSv1_4));
                #endif
            }
        #else
            /// to make an error.
            ngx_conf_merge_bitmask_value(conf->protocols, prev->protocols,
                                        (NGX_CONF_BITMASK_SET
                                        |NGX_SSL_TLSv1_4));
        #endif
    } else if (NGX_HTTP_SSL_BITMASK == "TLS13") {
        #ifdef TLS1_3_VERSION
            if (NGX_BORINGSSL_TLSVERSION_MAX == "TLS1_3_VERSION") {
                ngx_conf_merge_bitmask_value(conf->protocols, prev->protocols,
                                            (NGX_CONF_BITMASK_SET
                                            |NGX_SSL_TLSv1_3
                                            |NGX_SSL_TLSv1_2));
            } else {
                #ifndef NGX_BORINGSSL_TLSVERSION_MAX
                    ngx_conf_merge_bitmask_value(conf->protocols, prev->protocols,
                                                (NGX_CONF_BITMASK_SET
                                                |NGX_SSL_TLSv1_3
                                                |NGX_SSL_TLSv1_2));
                #else
                    /// to make an error.
                    ngx_conf_merge_bitmask_value(conf->protocols, prev->protocols,
                                                (NGX_CONF_BITMASK_SET
                                                |NGX_SSL_TLSv1_4));
                #endif
            }
        #else
            /// to make an error.
            ngx_conf_merge_bitmask_value(conf->protocols, prev->protocols,
                                        (NGX_CONF_BITMASK_SET
                                        |NGX_SSL_TLSv1_4));
        #endif
    } else if (NGX_HTTP_SSL_BITMASK == "TLS12") {
        if (NGX_BORINGSSL_TLSVERSION_MAX == "TLS1_2_VERSION") {
            ngx_conf_merge_bitmask_value(conf->protocols, prev->protocols,
                                        (NGX_CONF_BITMASK_SET
                                        |NGX_SSL_TLSv1_2));
        } else {
            #ifndef NGX_BORINGSSL_TLSVERSION_MAX
                ngx_conf_merge_bitmask_value(conf->protocols, prev->protocols,
                                            (NGX_CONF_BITMASK_SET
                                            |NGX_SSL_TLSv1_2));
            #else
                /// to make an error.
                ngx_conf_merge_bitmask_value(conf->protocols, prev->protocols,
                                            (NGX_CONF_BITMASK_SET
                                            |NGX_SSL_TLSv1_4));
            #endif
        }
    } else if (NGX_HTTP_SSL_BITMASK == 'TLS11') {
        if (NGX_BORINGSSL_TLSVERSION_MAX == 'TLS1_1_VERSION') {
            ngx_conf_merge_bitmask_value(conf->protocols, prev->protocols,
                                        (NGX_CONF_BITMASK_SET
                                        |NGX_SSL_TLSv1_1
                                        |NGX_SSL_TLSv1));
        } else {
            #ifndef NGX_BORINGSSL_TLSVERSION_MAX
                ngx_conf_merge_bitmask_value(conf->protocols, prev->protocols,
                                            (NGX_CONF_BITMASK_SET
                                            |NGX_SSL_TLSv1_1
                                            |NGX_SSL_TLSv1));
            #else
                /// to make an error.
                ngx_conf_merge_bitmask_value(conf->protocols, prev->protocols,
                                            (NGX_CONF_BITMASK_SET
                                            |NGX_SSL_TLSv1_4));
            #endif
        }
    } else if (NGX_HTTP_SSL_BITMASK == 'TLS10') {
        if (NGX_BORINGSSL_TLSVERSION_MAX == 'TLS1_VERSION') {
            ngx_conf_merge_bitmask_value(conf->protocols, prev->protocols,
                                        (NGX_CONF_BITMASK_SET
                                        |NGX_SSL_TLSv1));
        } else {
            #ifndef NGX_BORINGSSL_TLSVERSION_MAX
                ngx_conf_merge_bitmask_value(conf->protocols, prev->protocols,
                                            (NGX_CONF_BITMASK_SET
                                            |NGX_SSL_TLSv1));
            #else
                /// to make an error.
                ngx_conf_merge_bitmask_value(conf->protocols, prev->protocols,
                                            (NGX_CONF_BITMASK_SET
                                            |NGX_SSL_TLSv1_4));
            #endif
        }
    } else {
        /// to make an error.
        ngx_conf_merge_bitmask_value(conf->protocols, prev->protocols,
                                    (NGX_CONF_BITMASK_SET
                                    |NGX_SSL_TLSv1_4));
    }
#else
    /// default when no parameter to specify.
    ngx_conf_merge_bitmask_value(conf->protocols, prev->protocols,
                                (NGX_CONF_BITMASK_SET
                                |NGX_SSL_TLSv1_2
                                |NGX_SSL_TLSv1_1
                                |NGX_SSL_TLSv1));
#endif