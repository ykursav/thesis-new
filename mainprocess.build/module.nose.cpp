// Generated code for Python source for module 'nose'
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

// The _module_nose is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_nose;
PyDictObject *moduledict_nose;

// The module constants used
extern PyObject *const_str_plain_nose;
static PyObject *const_str_digest_0c21857b12e720afb1b0fc74c90443f8;
extern PyObject *const_str_plain_runmodule;
extern PyObject *const_str_dot;
extern PyObject *const_str_plain_run;
static PyObject *const_str_digest_7d745ce55c08acd33fd7ed2f7e6df073;
static PyObject *const_list_42b6343e5e2efe7b5649e498d3855cab_list;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_SkipTest;
extern PyObject *const_str_plain_with_setup;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_map;
static PyObject *const_tuple_str_plain_with_setup_tuple;
extern PyObject *const_str_plain_collector;
extern PyObject *const_str_plain___doc__;
static PyObject *const_list_str_digest_7d745ce55c08acd33fd7ed2f7e6df073_list;
extern PyObject *const_str_plain___all__;
static PyObject *const_tuple_980758d71ce29fcb444ebdb6bde7f931_tuple;
extern PyObject *const_str_plain_DeprecatedTest;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___version__;
extern PyObject *const_str_plain___path__;
extern PyObject *const_int_pos_7;
extern PyObject *const_str_digest_53c8f736d4ebb4622a98e4feb7e59bcf;
extern PyObject *const_str_plain_main;
extern PyObject *const_str_plain_run_exit;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_str;
extern PyObject *const_str_digest_8020274ef48fb4e2ab6128d6efa8c11d;
extern PyObject *const_str_digest_be7866f977cebad71c07b15b323fa711;
extern PyObject *const_tuple_str_plain_SkipTest_str_plain_DeprecatedTest_tuple;
static PyObject *const_tuple_int_pos_1_int_pos_3_int_pos_7_tuple;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain___author__;
static PyObject *const_str_digest_73f8bdb0b1516fe743524cf6b6ff4ab3;
extern PyObject *const_str_plain___versioninfo__;
extern PyObject *const_int_pos_3;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_0c21857b12e720afb1b0fc74c90443f8 = UNSTREAM_STRING( &constant_bin[ 12941 ], 47, 0 );
    const_str_digest_7d745ce55c08acd33fd7ed2f7e6df073 = UNSTREAM_STRING( &constant_bin[ 12941 ], 35, 0 );
    const_list_42b6343e5e2efe7b5649e498d3855cab_list = PyList_New( 8 );
    PyList_SET_ITEM( const_list_42b6343e5e2efe7b5649e498d3855cab_list, 0, const_str_plain_main ); Py_INCREF( const_str_plain_main );
    PyList_SET_ITEM( const_list_42b6343e5e2efe7b5649e498d3855cab_list, 1, const_str_plain_run ); Py_INCREF( const_str_plain_run );
    PyList_SET_ITEM( const_list_42b6343e5e2efe7b5649e498d3855cab_list, 2, const_str_plain_run_exit ); Py_INCREF( const_str_plain_run_exit );
    PyList_SET_ITEM( const_list_42b6343e5e2efe7b5649e498d3855cab_list, 3, const_str_plain_runmodule ); Py_INCREF( const_str_plain_runmodule );
    PyList_SET_ITEM( const_list_42b6343e5e2efe7b5649e498d3855cab_list, 4, const_str_plain_with_setup ); Py_INCREF( const_str_plain_with_setup );
    PyList_SET_ITEM( const_list_42b6343e5e2efe7b5649e498d3855cab_list, 5, const_str_plain_SkipTest ); Py_INCREF( const_str_plain_SkipTest );
    PyList_SET_ITEM( const_list_42b6343e5e2efe7b5649e498d3855cab_list, 6, const_str_plain_DeprecatedTest ); Py_INCREF( const_str_plain_DeprecatedTest );
    PyList_SET_ITEM( const_list_42b6343e5e2efe7b5649e498d3855cab_list, 7, const_str_plain_collector ); Py_INCREF( const_str_plain_collector );
    const_tuple_str_plain_with_setup_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_with_setup_tuple, 0, const_str_plain_with_setup ); Py_INCREF( const_str_plain_with_setup );
    const_list_str_digest_7d745ce55c08acd33fd7ed2f7e6df073_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_7d745ce55c08acd33fd7ed2f7e6df073_list, 0, const_str_digest_7d745ce55c08acd33fd7ed2f7e6df073 ); Py_INCREF( const_str_digest_7d745ce55c08acd33fd7ed2f7e6df073 );
    const_tuple_980758d71ce29fcb444ebdb6bde7f931_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_980758d71ce29fcb444ebdb6bde7f931_tuple, 0, const_str_plain_collector ); Py_INCREF( const_str_plain_collector );
    PyTuple_SET_ITEM( const_tuple_980758d71ce29fcb444ebdb6bde7f931_tuple, 1, const_str_plain_main ); Py_INCREF( const_str_plain_main );
    PyTuple_SET_ITEM( const_tuple_980758d71ce29fcb444ebdb6bde7f931_tuple, 2, const_str_plain_run ); Py_INCREF( const_str_plain_run );
    PyTuple_SET_ITEM( const_tuple_980758d71ce29fcb444ebdb6bde7f931_tuple, 3, const_str_plain_run_exit ); Py_INCREF( const_str_plain_run_exit );
    PyTuple_SET_ITEM( const_tuple_980758d71ce29fcb444ebdb6bde7f931_tuple, 4, const_str_plain_runmodule ); Py_INCREF( const_str_plain_runmodule );
    const_tuple_int_pos_1_int_pos_3_int_pos_7_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_int_pos_1_int_pos_3_int_pos_7_tuple, 0, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyTuple_SET_ITEM( const_tuple_int_pos_1_int_pos_3_int_pos_7_tuple, 1, const_int_pos_3 ); Py_INCREF( const_int_pos_3 );
    PyTuple_SET_ITEM( const_tuple_int_pos_1_int_pos_3_int_pos_7_tuple, 2, const_int_pos_7 ); Py_INCREF( const_int_pos_7 );
    const_str_digest_73f8bdb0b1516fe743524cf6b6ff4ab3 = UNSTREAM_STRING( &constant_bin[ 12988 ], 14, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_nose( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_32f4d53fb5e122138239d1d5e8642852;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_0c21857b12e720afb1b0fc74c90443f8 );
    codeobj_32f4d53fb5e122138239d1d5e8642852 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_nose, 1, const_tuple_empty, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_nose =
{
    PyModuleDef_HEAD_INIT,
    "nose",   /* m_name */
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

MOD_INIT_DECL( nose )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_nose );
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

    // puts( "in initnose" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_nose = Py_InitModule4(
        "nose",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_nose = PyModule_Create( &mdef_nose );
#endif

    moduledict_nose = (PyDictObject *)((PyModuleObject *)module_nose)->md_dict;

    CHECK_OBJECT( module_nose );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_nose, module_nose );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_nose );

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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
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
    PyObject *tmp_import_name_from_7;
    PyObject *tmp_import_name_from_8;
    PyObject *tmp_source_name_1;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_nose, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_0c21857b12e720afb1b0fc74c90443f8;
    UPDATE_STRING_DICT0( moduledict_nose, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_7d745ce55c08acd33fd7ed2f7e6df073_list );
    UPDATE_STRING_DICT1( moduledict_nose, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_32f4d53fb5e122138239d1d5e8642852, module_nose );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_nose)->md_dict;
    frame_module->f_lineno = 1;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_53c8f736d4ebb4622a98e4feb7e59bcf, tmp_import_globals_1, tmp_import_globals_1, const_tuple_980758d71ce29fcb444ebdb6bde7f931_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_collector );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose, (Nuitka_StringObject *)const_str_plain_collector, tmp_assign_source_4 );
    tmp_import_globals_2 = ((PyModuleObject *)module_nose)->md_dict;
    frame_module->f_lineno = 1;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_digest_53c8f736d4ebb4622a98e4feb7e59bcf, tmp_import_globals_2, tmp_import_globals_2, const_tuple_980758d71ce29fcb444ebdb6bde7f931_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_main );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose, (Nuitka_StringObject *)const_str_plain_main, tmp_assign_source_5 );
    tmp_import_globals_3 = ((PyModuleObject *)module_nose)->md_dict;
    frame_module->f_lineno = 1;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_digest_53c8f736d4ebb4622a98e4feb7e59bcf, tmp_import_globals_3, tmp_import_globals_3, const_tuple_980758d71ce29fcb444ebdb6bde7f931_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_run );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose, (Nuitka_StringObject *)const_str_plain_run, tmp_assign_source_6 );
    tmp_import_globals_4 = ((PyModuleObject *)module_nose)->md_dict;
    frame_module->f_lineno = 1;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_digest_53c8f736d4ebb4622a98e4feb7e59bcf, tmp_import_globals_4, tmp_import_globals_4, const_tuple_980758d71ce29fcb444ebdb6bde7f931_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_run_exit );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose, (Nuitka_StringObject *)const_str_plain_run_exit, tmp_assign_source_7 );
    tmp_import_globals_5 = ((PyModuleObject *)module_nose)->md_dict;
    frame_module->f_lineno = 1;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_digest_53c8f736d4ebb4622a98e4feb7e59bcf, tmp_import_globals_5, tmp_import_globals_5, const_tuple_980758d71ce29fcb444ebdb6bde7f931_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_runmodule );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose, (Nuitka_StringObject *)const_str_plain_runmodule, tmp_assign_source_8 );
    tmp_import_globals_6 = ((PyModuleObject *)module_nose)->md_dict;
    frame_module->f_lineno = 3;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_digest_8020274ef48fb4e2ab6128d6efa8c11d, tmp_import_globals_6, tmp_import_globals_6, const_tuple_str_plain_SkipTest_str_plain_DeprecatedTest_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_SkipTest );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose, (Nuitka_StringObject *)const_str_plain_SkipTest, tmp_assign_source_9 );
    tmp_import_globals_7 = ((PyModuleObject *)module_nose)->md_dict;
    frame_module->f_lineno = 3;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_digest_8020274ef48fb4e2ab6128d6efa8c11d, tmp_import_globals_7, tmp_import_globals_7, const_tuple_str_plain_SkipTest_str_plain_DeprecatedTest_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_DeprecatedTest );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose, (Nuitka_StringObject *)const_str_plain_DeprecatedTest, tmp_assign_source_10 );
    tmp_import_globals_8 = ((PyModuleObject *)module_nose)->md_dict;
    frame_module->f_lineno = 4;
    tmp_import_name_from_8 = IMPORT_MODULE( const_str_digest_be7866f977cebad71c07b15b323fa711, tmp_import_globals_8, tmp_import_globals_8, const_tuple_str_plain_with_setup_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_with_setup );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose, (Nuitka_StringObject *)const_str_plain_with_setup, tmp_assign_source_11 );
    tmp_assign_source_12 = const_str_digest_73f8bdb0b1516fe743524cf6b6ff4ab3;
    UPDATE_STRING_DICT0( moduledict_nose, (Nuitka_StringObject *)const_str_plain___author__, tmp_assign_source_12 );
    tmp_assign_source_13 = const_tuple_int_pos_1_int_pos_3_int_pos_7_tuple;
    UPDATE_STRING_DICT0( moduledict_nose, (Nuitka_StringObject *)const_str_plain___versioninfo__, tmp_assign_source_13 );
    tmp_source_name_1 = const_str_dot;
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_join );
    assert( tmp_called_name_1 != NULL );
    tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_map );
    assert( tmp_called_name_2 != NULL );
    tmp_args_element_name_2 = LOOKUP_BUILTIN( const_str_plain_str );
    assert( tmp_args_element_name_2 != NULL );
    tmp_args_element_name_3 = GET_STRING_DICT_VALUE( moduledict_nose, (Nuitka_StringObject *)const_str_plain___versioninfo__ );

    if (unlikely( tmp_args_element_name_3 == NULL ))
    {
        tmp_args_element_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___versioninfo__ );
    }

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "__versioninfo__" );
        exception_tb = NULL;

        exception_lineno = 8;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 8;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 8;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 8;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_14 );

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
    tmp_assign_source_15 = LIST_COPY( const_list_42b6343e5e2efe7b5649e498d3855cab_list );
    UPDATE_STRING_DICT1( moduledict_nose, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_15 );

    return MOD_RETURN_VALUE( module_nose );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
