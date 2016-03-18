// Generated code for Python source for module 'scipy._lib'
// created by Nuitka version 0.5.19

// This code is in part copyright 2016 Kay Hayen.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "nuitka/prelude.hpp"

#include "__helpers.hpp"

// The _module_scipy$_lib is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_scipy$_lib;
PyDictObject *moduledict_scipy$_lib;

// The module constants used
extern PyObject *const_str_plain_test;
static PyObject *const_str_digest_05262524ff1d0c07e58c52ba8b63fef4;
static PyObject *const_str_digest_d58f9dcbfd7bfe5cf48372dc1e7e72a9;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_a35ad8ee4c75e3611d1cb77c94624769;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_division;
static PyObject *const_str_plain__lib;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_tuple_str_plain_Tester_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_digest_ae994b87bb7a9b24968c74c3269a16aa;
static PyObject *const_str_digest_62a1d126f5f5689a7ed562ab720e3387;
static PyObject *const_list_str_digest_a35ad8ee4c75e3611d1cb77c94624769_list;
extern PyObject *const_str_plain_Tester;
extern PyObject *const_int_0;
extern PyObject *const_str_plain___path__;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_05262524ff1d0c07e58c52ba8b63fef4 = UNSTREAM_STRING( &constant_bin[ 1816244 ], 53, 0 );
    const_str_digest_d58f9dcbfd7bfe5cf48372dc1e7e72a9 = UNSTREAM_STRING( &constant_bin[ 1816297 ], 10, 0 );
    const_str_digest_a35ad8ee4c75e3611d1cb77c94624769 = UNSTREAM_STRING( &constant_bin[ 1816244 ], 41, 0 );
    const_str_plain__lib = UNSTREAM_STRING( &constant_bin[ 600308 ], 4, 1 );
    const_str_digest_62a1d126f5f5689a7ed562ab720e3387 = UNSTREAM_STRING( &constant_bin[ 1816307 ], 253, 0 );
    const_list_str_digest_a35ad8ee4c75e3611d1cb77c94624769_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_a35ad8ee4c75e3611d1cb77c94624769_list, 0, const_str_digest_a35ad8ee4c75e3611d1cb77c94624769 ); Py_INCREF( const_str_digest_a35ad8ee4c75e3611d1cb77c94624769 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$_lib( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_0f9bf07eb298d6907cfc230b1a913aef;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_05262524ff1d0c07e58c52ba8b63fef4 );
    codeobj_0f9bf07eb298d6907cfc230b1a913aef = MAKE_CODEOBJ( module_filename_obj, const_str_plain__lib, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$_lib =
{
    PyModuleDef_HEAD_INIT,
    "scipy._lib",   /* m_name */
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL.

MOD_INIT_DECL( scipy$_lib )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$_lib );
    }
    else
    {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    // Initialize the compiled types of Nuitka.
    PyType_Ready( &Nuitka_Generator_Type );
    PyType_Ready( &Nuitka_Function_Type );
    PyType_Ready( &Nuitka_Method_Type );
    PyType_Ready( &Nuitka_Frame_Type );
#if PYTHON_VERSION >= 350
    PyType_Ready( &Nuitka_Coroutine_Type );
    PyType_Ready( &Nuitka_CoroutineWrapper_Type );
#endif

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

#endif

#if _NUITKA_MODULE
    // Enable meta path based loader if not already done.
    setupMetaPathBasedLoader();
#endif

    createModuleConstants();
    createModuleCodeObjects();

    // puts( "in initscipy$_lib" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$_lib = Py_InitModule4(
        "scipy._lib",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_scipy$_lib = PyModule_Create( &mdef_scipy$_lib );
#endif

    moduledict_scipy$_lib = (PyDictObject *)((PyModuleObject *)module_scipy$_lib)->md_dict;

    CHECK_OBJECT( module_scipy$_lib );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_d58f9dcbfd7bfe5cf48372dc1e7e72a9, module_scipy$_lib );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_scipy$_lib );

    if ( PyDict_GetItem( module_dict, const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

#ifndef __NUITKA_NO_ASSERT__
        int res =
#endif
            PyDict_SetItem( module_dict, const_str_plain___builtins__, value );

        assert( res == 0 );
    }

#if PYTHON_VERSION >= 330
#if _MODULE_LOADER
    PyDict_SetItem( module_dict, const_str_plain___loader__, metapath_based_loader );
#else
    PyDict_SetItem( module_dict, const_str_plain___loader__, Py_None );
#endif
#endif

    // Temp variables if any
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_called_name_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_source_name_1;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_62a1d126f5f5689a7ed562ab720e3387;
    UPDATE_STRING_DICT0( moduledict_scipy$_lib, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_05262524ff1d0c07e58c52ba8b63fef4;
    UPDATE_STRING_DICT0( moduledict_scipy$_lib, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_a35ad8ee4c75e3611d1cb77c94624769_list );
    UPDATE_STRING_DICT1( moduledict_scipy$_lib, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "division");
    UPDATE_STRING_DICT0( moduledict_scipy$_lib, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_4 );
    tmp_assign_source_5 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "print_function");
    UPDATE_STRING_DICT0( moduledict_scipy$_lib, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_5 );
    tmp_assign_source_6 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "absolute_import");
    UPDATE_STRING_DICT0( moduledict_scipy$_lib, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_6 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_0f9bf07eb298d6907cfc230b1a913aef, module_scipy$_lib );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_scipy$_lib)->md_dict;
    frame_module->f_lineno = 14;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_ae994b87bb7a9b24968c74c3269a16aa, tmp_import_globals_1, tmp_import_globals_1, const_tuple_str_plain_Tester_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_Tester );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$_lib, (Nuitka_StringObject *)const_str_plain_Tester, tmp_assign_source_7 );
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_scipy$_lib, (Nuitka_StringObject *)const_str_plain_Tester );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Tester );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "Tester" );
        exception_tb = NULL;

        exception_lineno = 15;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 15;
    tmp_source_name_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_test );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$_lib, (Nuitka_StringObject *)const_str_plain_test, tmp_assign_source_8 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_module );
#endif
    popFrameStack();

    assertFrameObject( frame_module );
    Py_DECREF( frame_module );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_module );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_module, exception_lineno );
    }
    else if ( exception_tb->tb_frame != frame_module )
    {
        PyTracebackObject *traceback_new = MAKE_TRACEBACK( frame_module, exception_lineno );
        traceback_new->tb_next = exception_tb;
        exception_tb = traceback_new;
    }

    // Put the previous frame back on top.
    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_module->f_executing -= 1;
#endif
    Py_DECREF( frame_module );

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_scipy$_lib );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
