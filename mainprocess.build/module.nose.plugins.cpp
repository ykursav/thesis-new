// Generated code for Python source for module 'nose.plugins'
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

// The _module_nose$plugins is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_nose$plugins;
PyDictObject *moduledict_nose$plugins;

// The module constants used
extern PyObject *const_tuple_str_plain_Plugin_tuple;
extern PyObject *const_str_digest_bb1f241f2000ed1fe809be4d2e88ea72;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_plugins;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_digest_470ae29740af59b8c5d44ea8444c48d6;
extern PyObject *const_str_chr_42;
extern PyObject *const_str_plain_Plugin;
extern PyObject *const_str_digest_fc219fc54ce9b63d149e960190bf8f43;
static PyObject *const_str_digest_4823976add1367a1e0ca8dd4accaa2a5;
extern PyObject *const_tuple_str_chr_42_tuple;
static PyObject *const_str_digest_7f50a4bd8e9b8407aad195c874c261fa;
extern PyObject *const_str_digest_652962eec258093c82d69e0f6dfe6d44;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_digest_ff5a5eb68b08f12a3a14e050aa6accdd;
extern PyObject *const_str_plain_PluginTester;
static PyObject *const_list_str_digest_ff5a5eb68b08f12a3a14e050aa6accdd_list;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain___path__;
static PyObject *const_tuple_str_plain_PluginTester_tuple;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_4823976add1367a1e0ca8dd4accaa2a5 = UNSTREAM_STRING( &constant_bin[ 67121 ], 6094, 0 );
    const_str_digest_7f50a4bd8e9b8407aad195c874c261fa = UNSTREAM_STRING( &constant_bin[ 73215 ], 55, 0 );
    const_str_digest_ff5a5eb68b08f12a3a14e050aa6accdd = UNSTREAM_STRING( &constant_bin[ 73215 ], 43, 0 );
    const_list_str_digest_ff5a5eb68b08f12a3a14e050aa6accdd_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_ff5a5eb68b08f12a3a14e050aa6accdd_list, 0, const_str_digest_ff5a5eb68b08f12a3a14e050aa6accdd ); Py_INCREF( const_str_digest_ff5a5eb68b08f12a3a14e050aa6accdd );
    const_tuple_str_plain_PluginTester_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_PluginTester_tuple, 0, const_str_plain_PluginTester ); Py_INCREF( const_str_plain_PluginTester );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_nose$plugins( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_db7542b92674dee8492b8dcf95c73d1b;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_7f50a4bd8e9b8407aad195c874c261fa );
    codeobj_db7542b92674dee8492b8dcf95c73d1b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_plugins, 1, const_tuple_empty, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_nose$plugins =
{
    PyModuleDef_HEAD_INIT,
    "nose.plugins",   /* m_name */
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

MOD_INIT_DECL( nose$plugins )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_nose$plugins );
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

    // puts( "in initnose$plugins" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_nose$plugins = Py_InitModule4(
        "nose.plugins",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_nose$plugins = PyModule_Create( &mdef_nose$plugins );
#endif

    moduledict_nose$plugins = (PyDictObject *)((PyModuleObject *)module_nose$plugins)->md_dict;

    CHECK_OBJECT( module_nose$plugins );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_fc219fc54ce9b63d149e960190bf8f43, module_nose$plugins );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_nose$plugins );

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
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    bool tmp_result;
    PyObject *tmp_star_imported_1;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_4823976add1367a1e0ca8dd4accaa2a5;
    UPDATE_STRING_DICT0( moduledict_nose$plugins, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_7f50a4bd8e9b8407aad195c874c261fa;
    UPDATE_STRING_DICT0( moduledict_nose$plugins, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_ff5a5eb68b08f12a3a14e050aa6accdd_list );
    UPDATE_STRING_DICT1( moduledict_nose$plugins, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_db7542b92674dee8492b8dcf95c73d1b, module_nose$plugins );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_nose$plugins)->md_dict;
    frame_module->f_lineno = 184;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_470ae29740af59b8c5d44ea8444c48d6, tmp_import_globals_1, tmp_import_globals_1, const_tuple_str_plain_Plugin_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_Plugin );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$plugins, (Nuitka_StringObject *)const_str_plain_Plugin, tmp_assign_source_4 );
    tmp_import_globals_2 = ((PyModuleObject *)module_nose$plugins)->md_dict;
    frame_module->f_lineno = 185;
    tmp_star_imported_1 = IMPORT_MODULE( const_str_digest_bb1f241f2000ed1fe809be4d2e88ea72, tmp_import_globals_2, tmp_import_globals_2, const_tuple_str_chr_42_tuple, const_int_neg_1 );
    if ( tmp_star_imported_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_nose$plugins, true, tmp_star_imported_1 );
    Py_DECREF( tmp_star_imported_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;
        goto frame_exception_exit_1;
    }
    tmp_import_globals_3 = ((PyModuleObject *)module_nose$plugins)->md_dict;
    frame_module->f_lineno = 186;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_digest_652962eec258093c82d69e0f6dfe6d44, tmp_import_globals_3, tmp_import_globals_3, const_tuple_str_plain_PluginTester_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_PluginTester );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$plugins, (Nuitka_StringObject *)const_str_plain_PluginTester, tmp_assign_source_5 );

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

    return MOD_RETURN_VALUE( module_nose$plugins );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
