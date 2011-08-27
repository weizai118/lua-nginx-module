#ifndef NGX_HTTP_LUA_REGEX_H
#define NGX_HTTP_LUA_REGEX_H

#include "ngx_http_lua_common.h"
#include "ngx_http_lua_script.h"

#if (NGX_PCRE)


typedef struct {
    ngx_regex_t                  *regex;
    int                           ncaptures;
    int                          *captures;

    ngx_http_lua_complex_value_t    *replace;
} ngx_http_lua_regex_t;


typedef struct {
    ngx_http_request_t      *request;
    ngx_regex_t             *regex;
    int                      ncaptures;
    int                     *captures;
    int                      captures_len;
    unsigned                 compile_once;
} ngx_http_lua_regex_ctx_t;


int ngx_http_lua_ngx_re_match(lua_State *L);
int ngx_http_lua_ngx_re_gmatch(lua_State *L);
int ngx_http_lua_ngx_re_sub(lua_State *L);
int ngx_http_lua_ngx_re_gsub(lua_State *L);


#endif /* NGX_PCRE */


#endif /* NGX_HTTP_LUA_REGEX_H */

