/*
   +----------------------------------------------------------------------+
   | PHP Version 5                                                        |
   +----------------------------------------------------------------------+
   | Copyright (c) 1997-2004 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.0 of the PHP license,       |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_0.txt.                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
   | Authors: Christian Stocker <chregu@php.net>                          |
   |          Rob Richards <rrichards@php.net>                            |
   +----------------------------------------------------------------------+
*/

/* $Id: domimplementationlist.c,v 1.4.2.1 2004/11/18 19:55:00 rrichards Exp $ */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#if HAVE_LIBXML && HAVE_DOM
#include "php_dom.h"


/*
* class domimplementationlist 
*
* URL: http://www.w3.org/TR/2003/WD-DOM-Level-3-Core-20030226/DOM3-Core.html#DOMImplementationList
* Since: DOM Level 3
*/

zend_function_entry php_dom_domimplementationlist_class_functions[] = {
	PHP_FALIAS(item, dom_domimplementationlist_item, NULL)
	{NULL, NULL, NULL}
};

/* {{{ attribute protos, not implemented yet */

/* {{{ length	unsigned long	
readonly=yes 
URL: http://www.w3.org/TR/2003/WD-DOM-Level-3-Core-20030226/DOM3-Core.html#DOMImplementationList-length
Since: 
*/
int dom_domimplementationlist_length_read(dom_object *obj, zval **retval TSRMLS_DC)
{
	ALLOC_ZVAL(*retval);
	ZVAL_STRING(*retval, "TEST", 1);
	return SUCCESS;
}

/* }}} */




/* {{{ proto domdomimplementation dom_domimplementationlist_item(int index);
URL: http://www.w3.org/TR/2003/WD-DOM-Level-3-Core-20030226/DOM3-Core.html#DOMImplementationList-item
Since: 
*/
PHP_FUNCTION(dom_domimplementationlist_item)
{
 DOM_NOT_IMPLEMENTED();
}
/* }}} end dom_domimplementationlist_item */
#endif
