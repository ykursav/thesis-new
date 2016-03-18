// Generated code for Python source for module 'numpy.distutils'
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

// The _module_numpy$distutils is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_numpy$distutils;
PyDictObject *moduledict_numpy$distutils;

// The module constants used
extern PyObject *const_str_digest_ae994b87bb7a9b24968c74c3269a16aa;
extern PyObject *const_str_chr_42;
extern PyObject *const_str_empty;
extern PyObject *const_str_digest_0e6cce5d2f21199bd98b4fd22ff45e74;
extern PyObject *const_tuple_str_chr_42_tuple;
extern PyObject *const_tuple_str_plain_Tester_tuple;
extern PyObject *const_str_plain___config__;
extern PyObject *const_str_plain_Tester;
extern PyObject *const_str_plain_npy_pkg_config;
static PyObject *const_str_digest_f51e01346777191cec57fd0e05313491;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_info;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_version;
extern PyObject *const_str_plain_distutils;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_sys;
extern PyObject *const_int_0;
extern PyObject *const_tuple_str_plain___doc___tuple;
extern PyObject *const_tuple_str_plain_version_tuple;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___version__;
extern PyObject *const_tuple_str_plain___config___tuple;
extern PyObject *const_str_plain_bench;
static PyObject *const_list_str_digest_f51e01346777191cec57fd0e05313491_list;
extern PyObject *const_str_plain_division;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_ccompiler;
extern PyObject *const_str_plain_test;
extern PyObject *const_str_plain___path__;
extern PyObject *const_str_plain_unixccompiler;
static PyObject *const_str_plain__INSTALLED;
static PyObject *const_tuple_str_plain_unixccompiler_tuple;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_tuple_str_plain_ccompiler_tuple;
static PyObject *const_str_digest_5099220bb3f8c0cbdae76fbfa5b75c18;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_f51e01346777191cec57fd0e05313491 = UNSTREAM_STRING( &constant_bin[ 603131 ], 46, 0 );
    const_list_str_digest_f51e01346777191cec57fd0e05313491_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_f51e01346777191cec57fd0e05313491_list, 0, const_str_digest_f51e01346777191cec57fd0e05313491 ); Py_INCREF( const_str_digest_f51e01346777191cec57fd0e05313491 );
    const_str_plain__INSTALLED = UNSTREAM_STRING( &constant_bin[ 603177 ], 10, 1 );
    const_tuple_str_plain_unixccompiler_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_unixccompiler_tuple, 0, const_str_plain_unixccompiler ); Py_INCREF( const_str_plain_unixccompiler );
    const_str_digest_5099220bb3f8c0cbdae76fbfa5b75c18 = UNSTREAM_STRING( &constant_bin[ 603187 ], 58, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$distutils( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_def69026da990c957a213aa23d547ec6;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_5099220bb3f8c0cbdae76fbfa5b75c18 );
    codeobj_def69026da990c957a213aa23d547ec6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_distutils, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$distutils =
{
    PyModuleDef_HEAD_INIT,
    "numpy.distutils",   /* m_name */
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

MOD_INIT_DECL( numpy$distutils )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$distutils );
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

    // puts( "in initnumpy$distutils" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$distutils = Py_InitModule4(
        "numpy.distutils",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$distutils = PyModule_Create( &mdef_numpy$distutils );
#endif

    moduledict_numpy$distutils = (PyDictObject *)((PyModuleObject *)module_numpy$distutils)->md_dict;

    CHECK_OBJECT( module_numpy$distutils );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_0e6cce5d2f21199bd98b4fd22ff45e74, module_numpy$distutils );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_numpy$distutils );

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
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_assign_source_16;
    PyObject *tmp_assign_source_17;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_globals_5;
    PyObject *tmp_import_globals_6;
    PyObject *tmp_import_globals_7;
    PyObject *tmp_import_globals_8;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    bool tmp_result;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_star_imported_1;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_numpy$distutils, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_5099220bb3f8c0cbdae76fbfa5b75c18;
    UPDATE_STRING_DICT0( moduledict_numpy$distutils, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_f51e01346777191cec57fd0e05313491_list );
    UPDATE_STRING_DICT1( moduledict_numpy$distutils, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "division");
    UPDATE_STRING_DICT0( moduledict_numpy$distutils, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_4 );
    tmp_assign_source_5 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "absolute_import");
    UPDATE_STRING_DICT0( moduledict_numpy$distutils, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
    tmp_assign_source_6 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "print_function");
    UPDATE_STRING_DICT0( moduledict_numpy$distutils, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_def69026da990c957a213aa23d547ec6, module_numpy$distutils );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$distutils)->md_dict;
    frame_module->f_lineno = 3;
    tmp_assign_source_7 = IMPORT_MODULE( const_str_plain_sys, tmp_import_globals_1, tmp_import_globals_1, Py_None, const_int_0 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_7 );
    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$distutils)->md_dict;
    frame_module->f_lineno = 5;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain___version__, tmp_import_globals_2, tmp_import_globals_2, const_tuple_str_plain_version_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_version );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_8 );
    tmp_import_globals_3 = ((PyModuleObject *)module_numpy$distutils)->md_dict;
    frame_module->f_lineno = 8;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_empty, tmp_import_globals_3, tmp_import_globals_3, const_tuple_str_plain_ccompiler_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_ccompiler );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils, (Nuitka_StringObject *)const_str_plain_ccompiler, tmp_assign_source_9 );
    tmp_import_globals_4 = ((PyModuleObject *)module_numpy$distutils)->md_dict;
    frame_module->f_lineno = 9;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_empty, tmp_import_globals_4, tmp_import_globals_4, const_tuple_str_plain_unixccompiler_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_unixccompiler );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils, (Nuitka_StringObject *)const_str_plain_unixccompiler, tmp_assign_source_10 );
    tmp_import_globals_5 = ((PyModuleObject *)module_numpy$distutils)->md_dict;
    frame_module->f_lineno = 11;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_plain_info, tmp_import_globals_5, tmp_import_globals_5, const_tuple_str_plain___doc___tuple, const_int_pos_1 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain___doc__ );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_11 );
    tmp_import_globals_6 = ((PyModuleObject *)module_numpy$distutils)->md_dict;
    frame_module->f_lineno = 12;
    tmp_star_imported_1 = IMPORT_MODULE( const_str_plain_npy_pkg_config, tmp_import_globals_6, tmp_import_globals_6, const_tuple_str_chr_42_tuple, const_int_pos_1 );
    if ( tmp_star_imported_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_numpy$distutils, true, tmp_star_imported_1 );
    Py_DECREF( tmp_star_imported_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto frame_exception_exit_1;
    }
    // Tried code:
    tmp_import_globals_7 = ((PyModuleObject *)module_numpy$distutils)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_empty, tmp_import_globals_7, tmp_import_globals_7, const_tuple_str_plain___config___tuple, const_int_pos_1 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto try_except_handler_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain___config__ );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils, (Nuitka_StringObject *)const_str_plain___config__, tmp_assign_source_12 );
    tmp_assign_source_13 = Py_True;
    UPDATE_STRING_DICT0( moduledict_numpy$distutils, (Nuitka_StringObject *)const_str_plain__INSTALLED, tmp_assign_source_13 );
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
    tmp_compare_right_1 = PyExc_ImportError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_assign_source_14 = Py_False;
    UPDATE_STRING_DICT0( moduledict_numpy$distutils, (Nuitka_StringObject *)const_str_plain__INSTALLED, tmp_assign_source_14 );
    goto branch_end_1;
    branch_no_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_module) frame_module->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_1:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$distutils );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_1:;
    tmp_cond_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils, (Nuitka_StringObject *)const_str_plain__INSTALLED );

    if (unlikely( tmp_cond_value_1 == NULL ))
    {
        tmp_cond_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__INSTALLED );
    }

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_INSTALLED" );
        exception_tb = NULL;

        exception_lineno = 20;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_import_globals_8 = ((PyModuleObject *)module_numpy$distutils)->md_dict;
    frame_module->f_lineno = 21;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_digest_ae994b87bb7a9b24968c74c3269a16aa, tmp_import_globals_8, tmp_import_globals_8, const_tuple_str_plain_Tester_tuple, const_int_0 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_Tester );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils, (Nuitka_StringObject *)const_str_plain_Tester, tmp_assign_source_15 );
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils, (Nuitka_StringObject *)const_str_plain_Tester );

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

        exception_lineno = 22;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 22;
    tmp_source_name_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_16 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_test );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils, (Nuitka_StringObject *)const_str_plain_test, tmp_assign_source_16 );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils, (Nuitka_StringObject *)const_str_plain_Tester );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Tester );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "Tester" );
        exception_tb = NULL;

        exception_lineno = 23;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 23;
    tmp_source_name_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_17 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_bench );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils, (Nuitka_StringObject *)const_str_plain_bench, tmp_assign_source_17 );
    branch_no_2:;

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

    return MOD_RETURN_VALUE( module_numpy$distutils );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
