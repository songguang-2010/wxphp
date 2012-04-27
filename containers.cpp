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

#include "php_wxwidgets.h"
#include "appmanagement.h"
#include "cfg.h"
#include "bookctrl.h"
#include "dnd.h"
#include "cmndlg.h"
#include "containers.h"
#include "ctrl.h"
#include "data.h"
#include "dc.h"
#include "docview.h"
#include "events.h"
#include "file.h"
#include "gdi.h"
#include "grid.h"
#include "html.h"
#include "help.h"
#include "logging.h"
#include "managedwnd.h"
#include "menus.h"
#include "misc.h"
#include "miscwnd.h"
#include "media.h"
#include "pickers.h"
#include "printing.h"
#include "ribbon.h"
#include "richtext.h"
#include "rtti.h"
#include "stc.h"
#include "streams.h"
#include "threading.h"
#include "validator.h"
#include "vfs.h"
#include "aui.h"
#include "winlayout.h"
#include "xml.h"
#include "xrc.h"
#include "dvc.h"
#include "others.h"


void php_wxClientData_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Calling php_wxClientData_destruction_handler on %s at line %i\n", zend_get_executed_filename(TSRMLS_C), zend_get_executed_lineno(TSRMLS_C));
	php_printf("===========================================\n");
	#endif
	
	
	wxClientData_php* object = static_cast<wxClientData_php*>(rsrc->ptr);
	
	if(rsrc->ptr != NULL)
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Pointer not null\n");
		php_printf("Pointer address %x\n", (unsigned int)(size_t)rsrc->ptr);
		#endif
		
		if(object->references.IsUserInitialized())
		{	
			#ifdef USE_WXPHP_DEBUG
			php_printf("Deleting pointer with delete\n");
			#endif
			
			delete object;
			
			rsrc->ptr = NULL;
		}
		
		#ifdef USE_WXPHP_DEBUG
		php_printf("Deletion of wxClientData done\n");
		php_printf("===========================================\n\n");
		#endif
	}
	else
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Not user space initialized\n");
		#endif
	}
}
PHP_METHOD(php_wxClientData, __construct)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking wxClientData::__construct\n");
	php_printf("===========================================\n");
	#endif
	
	//In case the constructor uses objects
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	
	//Other variables used thru the code
	int arguments_received = ZEND_NUM_ARGS();
	void *_this;
	zval* dummy;
	bool already_called = false;
	
	//Parameters for overload 0
	bool overload0_called = false;
		
	//Overload 0
	overload0:
	if(!already_called && arguments_received == 0)
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Parameters received %d\n", arguments_received);
		php_printf("Parsing parameters with '' ()\n");
		#endif
		overload0_called = true;
		already_called = true;
	}

		
	if(overload0_called)
	{
		switch(arguments_received)
		{
			case 0:
			{
				#ifdef USE_WXPHP_DEBUG
				php_printf("Executing __construct()\n");
				#endif
				_this = new wxClientData_php();

				((wxClientData_php*) _this)->references.Initialize();
				break;
			}
		}
	}

		
	if(already_called)
	{
		long id_to_find = zend_list_insert(_this, le_wxClientData);
		
		add_property_resource(getThis(), _wxResource, id_to_find);
		
		MAKE_STD_ZVAL(((wxClientData_php*) _this)->evnArray);
		
		array_init(((wxClientData_php*) _this)->evnArray);
		
		((wxClientData_php*) _this)->phpObj = getThis();
		
		((wxClientData_php*) _this)->InitProperties();
		
		#ifdef ZTS 
		((wxClientData_php*) _this)->TSRMLS_C = TSRMLS_C;
		#endif
	}
	else
	{
		zend_error(E_ERROR, "Abstract type: failed to call a proper constructor");
	}
	
	#ifdef USE_WXPHP_DEBUG
		php_printf("===========================================\n\n");
	#endif
}
void php_wxTreeItemData_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Calling php_wxTreeItemData_destruction_handler on %s at line %i\n", zend_get_executed_filename(TSRMLS_C), zend_get_executed_lineno(TSRMLS_C));
	php_printf("===========================================\n");
	#endif
	
	
	wxTreeItemData_php* object = static_cast<wxTreeItemData_php*>(rsrc->ptr);
	
	if(rsrc->ptr != NULL)
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Pointer not null\n");
		php_printf("Pointer address %x\n", (unsigned int)(size_t)rsrc->ptr);
		#endif
		
		if(object->references.IsUserInitialized())
		{	
			#ifdef USE_WXPHP_DEBUG
			php_printf("Deleting pointer with delete\n");
			#endif
			
			delete object;
			
			rsrc->ptr = NULL;
		}
		
		#ifdef USE_WXPHP_DEBUG
		php_printf("Deletion of wxTreeItemData done\n");
		php_printf("===========================================\n\n");
		#endif
	}
	else
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Not user space initialized\n");
		#endif
	}
}
PHP_METHOD(php_wxTreeItemData, GetId)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking wxTreeItemData::GetId\n");
	php_printf("===========================================\n");
	#endif
	
	//In case the constructor uses objects
	zval **tmp;
	int rsrc_type;
	int parent_rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	
	//Other variables used thru the code
	int arguments_received = ZEND_NUM_ARGS();
	void *_this;
	zval* dummy;
	bool already_called = false;
	wxPHPObjectReferences* references;
	bool return_is_user_initialized = false;
	
	//Get pointer of object that called this method if not a static method
	if (getThis() != NULL) 
	{
		if(zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE)
		{
			zend_error(E_ERROR, "Failed to get the parent object that called wxTreeItemData::GetId\n");
			
			return;
		}
		else
		{
			id_to_find = Z_RESVAL_P(*tmp);
			_this = zend_list_find(id_to_find, &parent_rsrc_type);
			
			bool reference_type_found = false;

			if(parent_rsrc_type == le_wxTreeItemData){
				references = &((wxTreeItemData_php*)_this)->references;
				reference_type_found = true;
			}
		}
	}
	else
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Processing the method call as static\n");
		#endif
	}
	
	//Parameters for overload 0
	bool overload0_called = false;
		
	//Overload 0
	overload0:
	if(!already_called && arguments_received == 0)
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Parameters received %d\n", arguments_received);
		php_printf("Parsing parameters with '' ()\n");
		#endif
		overload0_called = true;
		already_called = true;
	}

		
	if(overload0_called)
	{
		switch(arguments_received)
		{
			case 0:
			{
				#ifdef USE_WXPHP_DEBUG
				php_printf("Executing wxTreeItemData::GetId() to return object reference\n\n");
				#endif
				wxTreeItemId_php* value_to_return0;
				value_to_return0 = (wxTreeItemId_php*) &((wxTreeItemData_php*)_this)->GetId();

				if(value_to_return0->references.IsUserInitialized()){
					if(value_to_return0->phpObj != NULL){
						*return_value = *value_to_return0->phpObj;
						zval_add_ref(&value_to_return0->phpObj);
						return_is_user_initialized = true;
					}
					else{
						zend_error(E_ERROR, "Could not retreive original zval.");
					}
				}
				else{
					object_init_ex(return_value,php_wxTreeItemId_entry);
					add_property_resource(return_value, "wxResource", zend_list_insert(value_to_return0, le_wxTreeItemId));
				}

				if(value_to_return0 != _this && return_is_user_initialized){ //Prevent adding references to it self
					references->AddReference(return_value);
				}


				return;
				break;
			}
		}
	}

		
}
PHP_METHOD(php_wxTreeItemData, SetId)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking wxTreeItemData::SetId\n");
	php_printf("===========================================\n");
	#endif
	
	//In case the constructor uses objects
	zval **tmp;
	int rsrc_type;
	int parent_rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	
	//Other variables used thru the code
	int arguments_received = ZEND_NUM_ARGS();
	void *_this;
	zval* dummy;
	bool already_called = false;
	wxPHPObjectReferences* references;
	bool return_is_user_initialized = false;
	
	//Get pointer of object that called this method if not a static method
	if (getThis() != NULL) 
	{
		if(zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE)
		{
			zend_error(E_ERROR, "Failed to get the parent object that called wxTreeItemData::SetId\n");
			
			return;
		}
		else
		{
			id_to_find = Z_RESVAL_P(*tmp);
			_this = zend_list_find(id_to_find, &parent_rsrc_type);
			
			bool reference_type_found = false;

			if(parent_rsrc_type == le_wxTreeItemData){
				references = &((wxTreeItemData_php*)_this)->references;
				reference_type_found = true;
			}
		}
	}
	else
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Processing the method call as static\n");
		#endif
	}
	
	//Parameters for overload 0
	zval* id0 = 0;
	void* object_pointer0_0 = 0;
	bool overload0_called = false;
		
	//Overload 0
	overload0:
	if(!already_called && arguments_received == 1)
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Parameters received %d\n", arguments_received);
		php_printf("Parsing parameters with 'O' (&id0, php_wxTreeItemId_entry)\n");
		#endif
		char parse_parameters_string[] = "O";
		if(zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, arguments_received TSRMLS_CC, parse_parameters_string, &id0, php_wxTreeItemId_entry ) == SUCCESS)
		{
			if(arguments_received >= 1){
				if(Z_TYPE_P(id0) == IS_OBJECT && zend_hash_find(Z_OBJPROP_P(id0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
				{
					id_to_find = Z_RESVAL_P(*tmp);
					object_pointer0_0 = zend_list_find(id_to_find, &rsrc_type);
					if (!object_pointer0_0 )
					{
						zend_error(E_ERROR, "Parameter  could not be retreived correctly.");
					}
				}
				else if(Z_TYPE_P(id0) != IS_NULL)
				{
						zend_error(E_ERROR, "Parameter  could not be retreived correctly.");
				}
			}

			overload0_called = true;
			already_called = true;
		}
	}

		
	if(overload0_called)
	{
		switch(arguments_received)
		{
			case 1:
			{
				#ifdef USE_WXPHP_DEBUG
				php_printf("Executing wxTreeItemData::SetId(*(wxTreeItemId*) object_pointer0_0)\n\n");
				#endif
				((wxTreeItemData_php*)_this)->SetId(*(wxTreeItemId*) object_pointer0_0);

				references->AddReference(id0);

				return;
				break;
			}
		}
	}

		
}
PHP_METHOD(php_wxTreeItemData, __construct)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking wxTreeItemData::__construct\n");
	php_printf("===========================================\n");
	#endif
	
	//In case the constructor uses objects
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	
	//Other variables used thru the code
	int arguments_received = ZEND_NUM_ARGS();
	void *_this;
	zval* dummy;
	bool already_called = false;
	
	//Parameters for overload 0
	bool overload0_called = false;
		
	//Overload 0
	overload0:
	if(!already_called && arguments_received == 0)
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Parameters received %d\n", arguments_received);
		php_printf("Parsing parameters with '' ()\n");
		#endif
		overload0_called = true;
		already_called = true;
	}

		
	if(overload0_called)
	{
		switch(arguments_received)
		{
			case 0:
			{
				#ifdef USE_WXPHP_DEBUG
				php_printf("Executing __construct()\n");
				#endif
				_this = new wxTreeItemData_php();

				((wxTreeItemData_php*) _this)->references.Initialize();
				break;
			}
		}
	}

		
	if(already_called)
	{
		long id_to_find = zend_list_insert(_this, le_wxTreeItemData);
		
		add_property_resource(getThis(), _wxResource, id_to_find);
		
		MAKE_STD_ZVAL(((wxTreeItemData_php*) _this)->evnArray);
		
		array_init(((wxTreeItemData_php*) _this)->evnArray);
		
		((wxTreeItemData_php*) _this)->phpObj = getThis();
		
		((wxTreeItemData_php*) _this)->InitProperties();
		
		#ifdef ZTS 
		((wxTreeItemData_php*) _this)->TSRMLS_C = TSRMLS_C;
		#endif
	}
	else
	{
		zend_error(E_ERROR, "Abstract type: failed to call a proper constructor");
	}
	
	#ifdef USE_WXPHP_DEBUG
		php_printf("===========================================\n\n");
	#endif
}
