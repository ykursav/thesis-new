// Generated code for Python source for module 'numpy.f2py.__version__'
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

// The _module_numpy$f2py$__version__ is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_numpy$f2py$__version__;
PyDictObject *moduledict_numpy$f2py$__version__;

// The module constants used
extern PyObject *const_str_digest_c416be21e290113bfed3698432532ec0;
static PyObject *const_str_digest_957e19bcc40171712c960ce6277e9615;
static PyObject *const_str_plain___svn_version__;
extern PyObject *const_tuple_str_plain_version_tuple;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_version_info;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___version__;
extern PyObject *const_str_plain_major;
extern PyObject *const_str_plain_version;
extern PyObject *const_int_0;
static PyObject *const_str_digest_8882867fa5581ddd08b794060ab4bc09;
extern PyObject *const_str_plain_division;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_tuple_empty;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_957e19bcc40171712c960ce6277e9615 = UNSTREAM_STRING( &constant_bin[ 711806 ], 56, 0 );
    const_str_plain___svn_version__ = UNSTREAM_STRING( &constant_bin[ 658603 ], 15, 1 );
    const_str_digest_8882867fa5581ddd08b794060ab4bc09 = UNSTREAM_STRING( &constant_bin[ 711862 ], 22, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$f2py$__version__( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_cc1d9a2506a57f57f9d118a156d4afa3;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_957e19bcc40171712c960ce6277e9615 );
    codeobj_cc1d9a2506a57f57f9d118a156d4afa3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___version__, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$f2py$__version__ =
{
    PyModuleDef_HEAD_INIT,
    "numpy.f2py.__version__",   /* m_name */
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

MOD_INIT_DECL( numpy$f2py$__version__ )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$f2py$__version__ );
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

    // puts( "in initnumpy$f2py$__version__" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$f2py$__version__ = Py_InitModule4(
        "numpy.f2py.__version__",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$f2py$__version__ = PyModule_Create( &mdef_numpy$f2py$__version__ );
#endif

    moduledict_numpy$f2py$__version__ = (PyDictObject *)((PyModuleObject *)module_numpy$f2py$__version__)->md_dict;

    CHECK_OBJECT( module_numpy$f2py$__version__ );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_8882867fa5581ddd08b794060ab4bc09, module_numpy$f2py$__version__ );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_numpy$f2py$__version__ );

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
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_right_name_1;
    PyObject *tmp_str_arg_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_numpy$f2py$__version__, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_957e19bcc40171712c960ce6277e9615;
    UPDATE_STRING_DICT0( moduledict_numpy$f2py$__version__, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "division");
    UPDATE_STRING_DICT0( moduledict_numpy$f2py$__version__, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_assign_source_4 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "absolute_import");
    UPDATE_STRING_DICT0( moduledict_numpy$f2py$__version__, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    tmp_assign_source_5 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "print_function");
    UPDATE_STRING_DICT0( moduledict_numpy$f2py$__version__, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_5 );
    tmp_assign_source_6 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_numpy$f2py$__version__, (Nuitka_StringObject *)const_str_plain_major, tmp_assign_source_6 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_cc1d9a2506a57f57f9d118a156d4afa3, module_numpy$f2py$__version__ );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    // Tried code:
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$f2py$__version__)->md_dict;
    frame_module->f_lineno = 6;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain___svn_version__, tmp_import_globals_1, tmp_import_globals_1, const_tuple_str_plain_version_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto try_except_handler_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_version );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$__version__, (Nuitka_StringObject *)const_str_plain_version, tmp_assign_source_7 );
    tmp_assign_source_8 = PyTuple_New( 2 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$__version__, (Nuitka_StringObject *)const_str_plain_major );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_major );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_8 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "major" );
        exception_tb = NULL;

        exception_lineno = 7;
        goto try_except_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_8, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$__version__, (Nuitka_StringObject *)const_str_plain_version );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_version );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_8 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "version" );
        exception_tb = NULL;

        exception_lineno = 7;
        goto try_except_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_8, 1, tmp_tuple_element_1 );
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$__version__, (Nuitka_StringObject *)const_str_plain_version_info, tmp_assign_source_8 );
    tmp_left_name_1 = const_str_digest_c416be21e290113bfed3698432532ec0;
    tmp_right_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$__version__, (Nuitka_StringObject *)const_str_plain_version_info );

    if (unlikely( tmp_right_name_1 == NULL ))
    {
        tmp_right_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_version_info );
    }

    if ( tmp_right_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "version_info" );
        exception_tb = NULL;

        exception_lineno = 8;
        goto try_except_handler_1;
    }

    tmp_assign_source_9 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$__version__, (Nuitka_StringObject *)const_str_plain_version, tmp_assign_source_9 );
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_module );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_module, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != -1 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_module, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = PyExc_ImportError;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_compare_right_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = PyExc_ValueError;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_compare_right_1, 1, tmp_tuple_element_2 );
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 9;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_str_arg_1 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$__version__, (Nuitka_StringObject *)const_str_plain_major );

    if (unlikely( tmp_str_arg_1 == NULL ))
    {
        tmp_str_arg_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_major );
    }

    if ( tmp_str_arg_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "major" );
        exception_tb = NULL;

        exception_lineno = 10;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_10 = PyObject_Str( tmp_str_arg_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$__version__, (Nuitka_StringObject *)const_str_plain_version, tmp_assign_source_10 );
    goto branch_end_1;
    branch_no_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_module) frame_module->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_1:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$f2py$__version__ );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_1:;

    // Restore frame exception if necessary.
#if 1
    RESTORE_FRAME_EXCEPTION( frame_module );
#endif
    popFrameStack();

    assertFrameObject( frame_module );
    Py_DECREF( frame_module );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 1
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

    return MOD_RETURN_VALUE( module_numpy$f2py$__version__ );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
