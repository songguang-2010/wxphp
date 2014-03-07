/*
 * @author Mário Soares
 * @contributors Jefferson González
 * 
 * @license 
 * This file is part of wxPHP check the LICENSE file for information.
 * 
 * @note
 * This file was auto-generated by the wxPHP source maker
*/

#ifndef WXPHP_THREADING_H_GUARD
#define WXPHP_THREADING_H_GUARD

#include "references.h"
#include "object_types.h"

ZEND_BEGIN_ARG_INFO_EX(wxphp_threading_get_args, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

extern zend_class_entry* php_wxCondition_entry;
void php_wxCondition_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxCondition_php: public wxCondition{
	public:
	
	wxCondition_php(wxMutex& mutex):wxCondition(mutex){}
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
struct zo_wxCondition 
{
    zend_object zo;
    wxCondition_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
};

void php_wxCondition_free(void *object TSRMLS_DC);
zend_object_value php_wxCondition_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxCondition_functions[] = {
	PHP_ME(php_wxCondition, Broadcast, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxCondition, IsOk, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxCondition, Signal, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxCondition, Wait, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxCondition, WaitTimeout, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxCondition, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif

extern zend_class_entry* php_wxCriticalSectionLocker_entry;
void php_wxCriticalSectionLocker_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxCriticalSectionLocker_php: public wxCriticalSectionLocker{
	public:
	
	wxCriticalSectionLocker_php(wxCriticalSection& criticalsection):wxCriticalSectionLocker(criticalsection){}
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
struct zo_wxCriticalSectionLocker 
{
    zend_object zo;
    wxCriticalSectionLocker_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
};

void php_wxCriticalSectionLocker_free(void *object TSRMLS_DC);
zend_object_value php_wxCriticalSectionLocker_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxCriticalSectionLocker_functions[] = {
	PHP_ME(php_wxCriticalSectionLocker, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif

extern zend_class_entry* php_wxThreadHelper_entry;
void php_wxThreadHelper_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxThreadHelper_php: public wxThreadHelper{
	public:
	
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
struct zo_wxThreadHelper 
{
    zend_object zo;
    wxThreadHelper_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
};

void php_wxThreadHelper_free(void *object TSRMLS_DC);
zend_object_value php_wxThreadHelper_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxThreadHelper_functions[] = {
	PHP_ME(php_wxThreadHelper, GetThread, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxThreadHelper, CreateThread, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxThreadHelper, Create, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
#endif

extern zend_class_entry* php_wxCriticalSection_entry;
void php_wxCriticalSection_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxCriticalSection_php: public wxCriticalSection{
	public:
	
	wxCriticalSection_php(wxCriticalSectionType critSecType=wxCRITSEC_DEFAULT):wxCriticalSection(critSecType){}
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
struct zo_wxCriticalSection 
{
    zend_object zo;
    wxCriticalSection_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
};

void php_wxCriticalSection_free(void *object TSRMLS_DC);
zend_object_value php_wxCriticalSection_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxCriticalSection_functions[] = {
	PHP_ME(php_wxCriticalSection, Enter, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxCriticalSection, Leave, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxCriticalSection, TryEnter, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxCriticalSection, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif

extern zend_class_entry* php_wxThread_entry;
void php_wxThread_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxThread_php: public wxThread{
	public:
	
	wxThread_php(wxThreadKind kind=wxTHREAD_DETACHED):wxThread(kind){}
		
	void* Entry();
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
struct zo_wxThread 
{
    zend_object zo;
    wxThread_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
};

void php_wxThread_free(void *object TSRMLS_DC);
zend_object_value php_wxThread_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxThread_functions[] = {
	PHP_ME(php_wxThread, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(php_wxThread, YieldMethod, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxThread, This, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxThread, TestDestroy, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxThread, SetPriority, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxThread, Sleep, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxThread, SetConcurrency, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxThread, GetCPUCount, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxThread, GetCurrentId, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxThread, GetId, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxThread, GetKind, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxThread, GetMainId, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxThread, GetPriority, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxThread, IsAlive, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxThread, IsDetached, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxThread, IsMain, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxThread, IsPaused, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxThread, IsRunning, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxThread, Kill, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxThread, Pause, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxThread, Resume, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxThread, Run, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxThread, Create, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxThread, Delete, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxThread, Wait, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
#endif

extern zend_class_entry* php_wxSemaphore_entry;
void php_wxSemaphore_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxSemaphore_php: public wxSemaphore{
	public:
	
	wxSemaphore_php(int initialcount=0, int maxcount=0):wxSemaphore(initialcount, maxcount){}
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
struct zo_wxSemaphore 
{
    zend_object zo;
    wxSemaphore_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
};

void php_wxSemaphore_free(void *object TSRMLS_DC);
zend_object_value php_wxSemaphore_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxSemaphore_functions[] = {
	PHP_ME(php_wxSemaphore, Post, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxSemaphore, TryWait, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxSemaphore, Wait, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxSemaphore, WaitTimeout, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxSemaphore, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif

extern zend_class_entry* php_wxMutexLocker_entry;
void php_wxMutexLocker_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxMutexLocker_php: public wxMutexLocker{
	public:
	
	wxMutexLocker_php(wxMutex& mutex):wxMutexLocker(mutex){}
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
struct zo_wxMutexLocker 
{
    zend_object zo;
    wxMutexLocker_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
};

void php_wxMutexLocker_free(void *object TSRMLS_DC);
zend_object_value php_wxMutexLocker_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxMutexLocker_functions[] = {
	PHP_ME(php_wxMutexLocker, IsOk, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxMutexLocker, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif

extern zend_class_entry* php_wxMutex_entry;
void php_wxMutex_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxMutex_php: public wxMutex{
	public:
	
	wxMutex_php(wxMutexType type=wxMUTEX_DEFAULT):wxMutex(type){}
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
struct zo_wxMutex 
{
    zend_object zo;
    wxMutex_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
};

void php_wxMutex_free(void *object TSRMLS_DC);
zend_object_value php_wxMutex_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxMutex_functions[] = {
	PHP_ME(php_wxMutex, Lock, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxMutex, LockTimeout, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxMutex, TryLock, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxMutex, Unlock, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxMutex, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif

#endif //WXPHP_THREADING_H_GUARD
