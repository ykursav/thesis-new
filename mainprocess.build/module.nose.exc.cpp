// Generated code for Python source for module 'nose.exc'
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

// The _module_nose$exc is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_nose$exc;
PyDictObject *moduledict_nose$exc;

// The module constants used
extern PyObject *const_str_plain_exc;
static PyObject *const_str_digest_b706a583984015fcb896b54033354c62;
extern PyObject *const_str_plain_DeprecatedTest;
extern PyObject *const_str_plain_SkipTest;
extern PyObject *const_str_digest_d17334bf6d09840ab7166ddd4b04c38a;
extern PyObject *const_tuple_str_plain_SkipTest_tuple;
extern PyObject *const_int_neg_1;
static PyObject *const_str_digest_a95f2dffb55d8c5df3f0b463732b4ce4;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_digest_8020274ef48fb4e2ab6128d6efa8c11d;
static PyObject *const_tuple_str_plain_DeprecatedTest_tuple;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_digest_94effb661443a66f4170afa6a391a805;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_b706a583984015fcb896b54033354c62 = UNSTREAM_STRING( &constant_bin[ 29392 ], 42, 0 );
    const_str_digest_a95f2dffb55d8c5df3f0b463732b4ce4 = UNSTREAM_STRING( &constant_bin[ 29434 ], 279, 0 );
    const_tuple_str_plain_DeprecatedTest_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_DeprecatedTest_tuple, 0, const_str_plain_DeprecatedTest ); Py_INCREF( const_str_plain_DeprecatedTest );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_nose$exc( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_adc049a0f955766c57d6390fd27b521e;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_b706a583984015fcb896b54033354c62 );
    codeobj_adc049a0f955766c57d6390fd27b521e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_exc, 1, const_tuple_empty, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_nose$exc =
{
    PyModuleDef_HEAD_INIT,
    "nose.exc",   /* m_name */
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

MOD_INIT_DECL( nose$exc )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_nose$exc );
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

    // puts( "in initnose$exc" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_nose$exc = Py_InitModule4(
        "nose.exc",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_nose$exc = PyModule_Create( &mdef_nose$exc );
#endif

    moduledict_nose$exc = (PyDictObject *)((PyModuleObject *)module_nose$exc)->md_dict;

    CHECK_OBJECT( module_nose$exc );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_8020274ef48fb4e2ab6128d6efa8c11d, module_nose$exc );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_nose$exc );

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
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_a95f2dffb55d8c5df3f0b463732b4ce4;
    UPDATE_STRING_DICT0( moduledict_nose$exc, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_b706a583984015fcb896b54033354c62;
    UPDATE_STRING_DICT0( moduledict_nose$exc, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_adc049a0f955766c57d6390fd27b521e, module_nose$exc );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_nose$exc)->md_dict;
    frame_module->f_lineno = 8;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_d17334bf6d09840ab7166ddd4b04c38a, tmp_import_globals_1, tmp_import_globals_1, const_tuple_str_plain_SkipTest_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_SkipTest );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$exc, (Nuitka_StringObject *)const_str_plain_SkipTest, tmp_assign_source_3 );
    tmp_import_globals_2 = ((PyModuleObject *)module_nose$exc)->md_dict;
    frame_module->f_lineno = 9;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_digest_94effb661443a66f4170afa6a391a805, tmp_import_globals_2, tmp_import_globals_2, const_tuple_str_plain_DeprecatedTest_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_DeprecatedTest );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$exc, (Nuitka_StringObject *)const_str_plain_DeprecatedTest, tmp_assign_source_4 );

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

    return MOD_RETURN_VALUE( module_nose$exc );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
