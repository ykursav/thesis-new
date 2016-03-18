// Generated code for Python source for module 'nose.plugins.deprecated'
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

// The _module_nose$plugins$deprecated is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_nose$plugins$deprecated;
PyDictObject *moduledict_nose$plugins$deprecated;

// The module constants used
extern PyObject *const_str_plain_conf;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_configure;
static PyObject *const_str_digest_87852e0e4d3de84d6a65cbc370b16e9a;
extern PyObject *const_tuple_9556c80415934cda1599b2a7a7d6fe77_tuple;
extern PyObject *const_tuple_e43e8cf780dad9c5184abe983d1b8b02_tuple;
extern PyObject *const_int_neg_1;
static PyObject *const_str_plain_DEPRECATED;
static PyObject *const_str_digest_a2d6197e6e39f07c8a2580b32af346b9;
extern PyObject *const_dict_empty;
static PyObject *const_str_plain_noDeprecated;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_ErrorClass;
static PyObject *const_str_digest_bc3de90af7e6d47039993f1b0d8e36c1;
extern PyObject *const_tuple_str_plain_ErrorClass_str_plain_ErrorClassPlugin_tuple;
extern PyObject *const_str_digest_94effb661443a66f4170afa6a391a805;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_digest_4a32d4b631777017cbe06e3c717b6763;
extern PyObject *const_str_plain_isfailure;
extern PyObject *const_str_plain_action;
static PyObject *const_dict_a1ef4cba1147edc1494605747f32732f;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_can_configure;
extern PyObject *const_str_plain_DeprecatedTest;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_env;
extern PyObject *const_str_plain_help;
static PyObject *const_str_plain_Deprecated;
extern PyObject *const_str_digest_521fa66f5bd2fff2afcf6e09904f8994;
static PyObject *const_tuple_str_plain_NOSE_WITHOUT_DEPRECATED_false_tuple;
extern PyObject *const_str_plain_options;
extern PyObject *const_str_plain_label;
extern PyObject *const_str_plain_env_opt;
extern PyObject *const_str_plain_parser;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_disable;
extern PyObject *const_str_plain_default;
static PyObject *const_tuple_str_digest_4a32d4b631777017cbe06e3c717b6763_tuple;
extern PyObject *const_str_plain_add_option;
extern PyObject *const_str_plain_enabled;
static PyObject *const_str_plain_NOSE_WITHOUT_DEPRECATED;
extern PyObject *const_str_digest_108dee72c86a18b11a7b8f993a5746d2;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_dest;
static PyObject *const_str_digest_36f9e010a0ba73eaad2db815fb6eeb5b;
extern PyObject *const_str_plain_deprecated;
extern PyObject *const_str_plain_store_true;
extern PyObject *const_str_plain_ErrorClassPlugin;
static PyObject *const_str_digest_de63a5f4118dcc41db94e69d2b7e722d;
static PyObject *const_str_digest_4dcdc22e4a4352ac1809e0917c0eef46;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_87852e0e4d3de84d6a65cbc370b16e9a = UNSTREAM_STRING( &constant_bin[ 93074 ], 392, 0 );
    const_str_plain_DEPRECATED = UNSTREAM_STRING( &constant_bin[ 75155 ], 10, 1 );
    const_str_digest_a2d6197e6e39f07c8a2580b32af346b9 = UNSTREAM_STRING( &constant_bin[ 93466 ], 55, 0 );
    const_str_plain_noDeprecated = UNSTREAM_STRING( &constant_bin[ 93521 ], 12, 1 );
    const_str_digest_bc3de90af7e6d47039993f1b0d8e36c1 = UNSTREAM_STRING( &constant_bin[ 93533 ], 101, 0 );
    const_str_digest_4a32d4b631777017cbe06e3c717b6763 = UNSTREAM_STRING( &constant_bin[ 93447 ], 15, 0 );
    const_dict_a1ef4cba1147edc1494605747f32732f = _PyDict_NewPresized( 2 );
    PyDict_SetItem( const_dict_a1ef4cba1147edc1494605747f32732f, const_str_plain_isfailure, Py_False );
    PyDict_SetItem( const_dict_a1ef4cba1147edc1494605747f32732f, const_str_plain_label, const_str_plain_DEPRECATED );
    assert( PyDict_Size( const_dict_a1ef4cba1147edc1494605747f32732f ) == 2 );
    const_str_plain_Deprecated = UNSTREAM_STRING( &constant_bin[ 1648 ], 10, 1 );
    const_tuple_str_plain_NOSE_WITHOUT_DEPRECATED_false_tuple = PyTuple_New( 2 );
    const_str_plain_NOSE_WITHOUT_DEPRECATED = UNSTREAM_STRING( &constant_bin[ 93634 ], 23, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_NOSE_WITHOUT_DEPRECATED_false_tuple, 0, const_str_plain_NOSE_WITHOUT_DEPRECATED ); Py_INCREF( const_str_plain_NOSE_WITHOUT_DEPRECATED );
    PyTuple_SET_ITEM( const_tuple_str_plain_NOSE_WITHOUT_DEPRECATED_false_tuple, 1, Py_False ); Py_INCREF( Py_False );
    const_tuple_str_digest_4a32d4b631777017cbe06e3c717b6763_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_4a32d4b631777017cbe06e3c717b6763_tuple, 0, const_str_digest_4a32d4b631777017cbe06e3c717b6763 ); Py_INCREF( const_str_digest_4a32d4b631777017cbe06e3c717b6763 );
    const_str_digest_36f9e010a0ba73eaad2db815fb6eeb5b = UNSTREAM_STRING( &constant_bin[ 93657 ], 38, 0 );
    const_str_digest_de63a5f4118dcc41db94e69d2b7e722d = UNSTREAM_STRING( &constant_bin[ 93695 ], 57, 0 );
    const_str_digest_4dcdc22e4a4352ac1809e0917c0eef46 = UNSTREAM_STRING( &constant_bin[ 93752 ], 54, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_nose$plugins$deprecated( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_9db2816c793c8252591450d339167283;
static PyCodeObject *codeobj_edf511cecd47f62eea5a3fb4782b67aa;
static PyCodeObject *codeobj_ff95ebf1ed28d47bc52743062e6810ea;
static PyCodeObject *codeobj_097278cb5ee8f64fee862222f32b9ba0;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_de63a5f4118dcc41db94e69d2b7e722d );
    codeobj_9db2816c793c8252591450d339167283 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Deprecated, 18, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_edf511cecd47f62eea5a3fb4782b67aa = MAKE_CODEOBJ( module_filename_obj, const_str_plain_configure, 37, const_tuple_9556c80415934cda1599b2a7a7d6fe77_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ff95ebf1ed28d47bc52743062e6810ea = MAKE_CODEOBJ( module_filename_obj, const_str_plain_deprecated, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_097278cb5ee8f64fee862222f32b9ba0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_options, 28, const_tuple_e43e8cf780dad9c5184abe983d1b8b02_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_DeprecatedTest_of_nose$plugins$deprecated( PyObject **python_pars );


NUITKA_LOCAL_MODULE PyObject *impl_class_2_Deprecated_of_nose$plugins$deprecated( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_function_1_options_of_class_2_Deprecated_of_nose$plugins$deprecated(  );


static PyObject *MAKE_FUNCTION_function_2_configure_of_class_2_Deprecated_of_nose$plugins$deprecated(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_DeprecatedTest_of_nose$plugins$deprecated( PyObject **python_pars )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_94effb661443a66f4170afa6a391a805;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_a2d6197e6e39f07c8a2580b32af346b9;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    // Tried code:
    tmp_return_value = PyDict_New();
    if ( var___module__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___module__,
            var___module__
        );

        assert( res == 0 );
    }

    if ( var___doc__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___doc__,
            var___doc__
        );

        assert( res == 0 );
    }

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_1_DeprecatedTest_of_nose$plugins$deprecated );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var___doc__ );
    Py_DECREF( var___doc__ );
    var___doc__ = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var___doc__ );
    Py_DECREF( var___doc__ );
    var___doc__ = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_1_DeprecatedTest_of_nose$plugins$deprecated );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


NUITKA_LOCAL_MODULE PyObject *impl_class_2_Deprecated_of_nose$plugins$deprecated( PyObject **python_pars )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var_enabled = NULL;
    PyObject *var_deprecated = NULL;
    PyObject *var_options = NULL;
    PyObject *var_configure = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_94effb661443a66f4170afa6a391a805;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_bc3de90af7e6d47039993f1b0d8e36c1;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = Py_True;
    assert( var_enabled == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_enabled = tmp_assign_source_3;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_9db2816c793c8252591450d339167283, module_nose$plugins$deprecated );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_nose$plugins$deprecated, (Nuitka_StringObject *)const_str_plain_ErrorClass );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ErrorClass );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ErrorClass" );
        exception_tb = NULL;

        exception_lineno = 24;
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_nose$plugins$deprecated, (Nuitka_StringObject *)const_str_plain_DeprecatedTest );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DeprecatedTest );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "DeprecatedTest" );
        exception_tb = NULL;

        exception_lineno = 24;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_a1ef4cba1147edc1494605747f32732f );
    frame_function->f_lineno = 26;
    tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        goto frame_exception_exit_1;
    }
    assert( var_deprecated == NULL );
    var_deprecated = tmp_assign_source_4;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    {
        bool needs_detach = false;

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_function, exception_lineno );
            needs_detach = true;
        }
        else if ( exception_lineno != -1 )
        {
            PyTracebackObject *traceback_new = MAKE_TRACEBACK( frame_function, exception_lineno );
            traceback_new->tb_next = exception_tb;
            exception_tb = traceback_new;

            needs_detach = true;
        }

        if (needs_detach)
        {

            tmp_frame_locals = PyDict_New();
            if ( var___module__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___module__,
                    var___module__
                );

                assert( res == 0 );
            }

            if ( var___doc__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___doc__,
                    var___doc__
                );

                assert( res == 0 );
            }

            if ( var_enabled )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_enabled,
                    var_enabled
                );

                assert( res == 0 );
            }

            if ( var_deprecated )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_deprecated,
                    var_deprecated
                );

                assert( res == 0 );
            }

            if ( var_options )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_options,
                    var_options
                );

                assert( res == 0 );
            }

            if ( var_configure )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_configure,
                    var_configure
                );

                assert( res == 0 );
            }



            detachFrame( exception_tb, tmp_frame_locals );
        }
    }

    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_assign_source_5 = MAKE_FUNCTION_function_1_options_of_class_2_Deprecated_of_nose$plugins$deprecated(  );
    assert( var_options == NULL );
    var_options = tmp_assign_source_5;

    tmp_assign_source_6 = MAKE_FUNCTION_function_2_configure_of_class_2_Deprecated_of_nose$plugins$deprecated(  );
    assert( var_configure == NULL );
    var_configure = tmp_assign_source_6;

    tmp_return_value = PyDict_New();
    if ( var___module__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___module__,
            var___module__
        );

        assert( res == 0 );
    }

    if ( var___doc__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___doc__,
            var___doc__
        );

        assert( res == 0 );
    }

    if ( var_enabled )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_enabled,
            var_enabled
        );

        assert( res == 0 );
    }

    if ( var_deprecated )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_deprecated,
            var_deprecated
        );

        assert( res == 0 );
    }

    if ( var_options )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_options,
            var_options
        );

        assert( res == 0 );
    }

    if ( var_configure )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_configure,
            var_configure
        );

        assert( res == 0 );
    }

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_2_Deprecated_of_nose$plugins$deprecated );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var___doc__ );
    Py_DECREF( var___doc__ );
    var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)var_enabled );
    Py_DECREF( var_enabled );
    var_enabled = NULL;

    CHECK_OBJECT( (PyObject *)var_deprecated );
    Py_DECREF( var_deprecated );
    var_deprecated = NULL;

    CHECK_OBJECT( (PyObject *)var_options );
    Py_DECREF( var_options );
    var_options = NULL;

    CHECK_OBJECT( (PyObject *)var_configure );
    Py_DECREF( var_configure );
    var_configure = NULL;

    goto function_return_exit;
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

    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var___doc__ );
    Py_DECREF( var___doc__ );
    var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)var_enabled );
    Py_DECREF( var_enabled );
    var_enabled = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_2_Deprecated_of_nose$plugins$deprecated );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_function_1_options_of_class_2_Deprecated_of_nose$plugins$deprecated( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_parser = python_pars[ 1 ];
    PyObject *par_env = python_pars[ 2 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_frame_locals;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_097278cb5ee8f64fee862222f32b9ba0, module_nose$plugins$deprecated );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_source_name_1 = par_parser;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_add_option );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = const_tuple_str_digest_4a32d4b631777017cbe06e3c717b6763_tuple;
    tmp_kw_name_1 = _PyDict_NewPresized( 4 );
    tmp_dict_value_1 = const_str_plain_store_true;
    tmp_dict_key_1 = const_str_plain_action;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = const_str_plain_noDeprecated;
    tmp_dict_key_2 = const_str_plain_dest;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_source_name_2 = par_env;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_get );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 33;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 33;
    tmp_dict_value_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_str_plain_NOSE_WITHOUT_DEPRECATED_false_tuple, 0 ) );

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_dict_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 33;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_3 = const_str_plain_default;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    Py_DECREF( tmp_dict_value_3 );
    tmp_dict_value_4 = const_str_digest_4dcdc22e4a4352ac1809e0917c0eef46;
    tmp_dict_key_4 = const_str_plain_help;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_4, tmp_dict_value_4 );
    frame_function->f_lineno = 34;
    tmp_unused = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    {
        bool needs_detach = false;

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_function, exception_lineno );
            needs_detach = true;
        }
        else if ( exception_lineno != -1 )
        {
            PyTracebackObject *traceback_new = MAKE_TRACEBACK( frame_function, exception_lineno );
            traceback_new->tb_next = exception_tb;
            exception_tb = traceback_new;

            needs_detach = true;
        }

        if (needs_detach)
        {

            tmp_frame_locals = PyDict_New();
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( par_parser )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_parser,
                    par_parser
                );

                assert( res == 0 );
            }

            if ( par_env )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_env,
                    par_env
                );

                assert( res == 0 );
            }



            detachFrame( exception_tb, tmp_frame_locals );
        }
    }

    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_1_options_of_class_2_Deprecated_of_nose$plugins$deprecated );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_parser );
    Py_DECREF( par_parser );
    par_parser = NULL;

    CHECK_OBJECT( (PyObject *)par_env );
    Py_DECREF( par_env );
    par_env = NULL;

    goto function_return_exit;
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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_parser );
    Py_DECREF( par_parser );
    par_parser = NULL;

    CHECK_OBJECT( (PyObject *)par_env );
    Py_DECREF( par_env );
    par_env = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1_options_of_class_2_Deprecated_of_nose$plugins$deprecated );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_function_2_configure_of_class_2_Deprecated_of_nose$plugins$deprecated( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_options = python_pars[ 1 ];
    PyObject *par_conf = python_pars[ 2 ];
    PyObject *var_disable = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assign_source_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_target_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_edf511cecd47f62eea5a3fb4782b67aa, module_nose$plugins$deprecated );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_source_name_1 = par_self;

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_can_configure );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 40;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_assattr_name_1 = par_conf;

    tmp_assattr_target_1 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_conf, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        goto frame_exception_exit_1;
    }
    tmp_getattr_target_1 = par_options;

    tmp_getattr_attr_1 = const_str_plain_noDeprecated;
    tmp_getattr_default_1 = Py_False;
    tmp_assign_source_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        goto frame_exception_exit_1;
    }
    assert( var_disable == NULL );
    var_disable = tmp_assign_source_1;

    tmp_cond_value_2 = var_disable;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assattr_name_2 = Py_False;
    tmp_assattr_target_2 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_enabled, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        goto frame_exception_exit_1;
    }
    branch_no_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto try_return_handler_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    {
        bool needs_detach = false;

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_function, exception_lineno );
            needs_detach = true;
        }
        else if ( exception_lineno != -1 )
        {
            PyTracebackObject *traceback_new = MAKE_TRACEBACK( frame_function, exception_lineno );
            traceback_new->tb_next = exception_tb;
            exception_tb = traceback_new;

            needs_detach = true;
        }

        if (needs_detach)
        {

            tmp_frame_locals = PyDict_New();
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( par_options )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_options,
                    par_options
                );

                assert( res == 0 );
            }

            if ( par_conf )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_conf,
                    par_conf
                );

                assert( res == 0 );
            }

            if ( var_disable )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_disable,
                    var_disable
                );

                assert( res == 0 );
            }



            detachFrame( exception_tb, tmp_frame_locals );
        }
    }

    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_2_configure_of_class_2_Deprecated_of_nose$plugins$deprecated );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_options );
    Py_DECREF( par_options );
    par_options = NULL;

    CHECK_OBJECT( (PyObject *)par_conf );
    Py_DECREF( par_conf );
    par_conf = NULL;

    Py_XDECREF( var_disable );
    var_disable = NULL;

    goto function_return_exit;
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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_options );
    Py_DECREF( par_options );
    par_options = NULL;

    CHECK_OBJECT( (PyObject *)par_conf );
    Py_DECREF( par_conf );
    par_conf = NULL;

    Py_XDECREF( var_disable );
    var_disable = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_2_configure_of_class_2_Deprecated_of_nose$plugins$deprecated );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}



static PyObject *MAKE_FUNCTION_function_1_options_of_class_2_Deprecated_of_nose$plugins$deprecated(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_1_options_of_class_2_Deprecated_of_nose$plugins$deprecated,
        const_str_plain_options,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_097278cb5ee8f64fee862222f32b9ba0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$plugins$deprecated,
        const_str_digest_36f9e010a0ba73eaad2db815fb6eeb5b
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_configure_of_class_2_Deprecated_of_nose$plugins$deprecated(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_2_configure_of_class_2_Deprecated_of_nose$plugins$deprecated,
        const_str_plain_configure,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_edf511cecd47f62eea5a3fb4782b67aa,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$plugins$deprecated,
        const_str_digest_108dee72c86a18b11a7b8f993a5746d2
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_nose$plugins$deprecated =
{
    PyModuleDef_HEAD_INIT,
    "nose.plugins.deprecated",   /* m_name */
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

MOD_INIT_DECL( nose$plugins$deprecated )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_nose$plugins$deprecated );
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

    // puts( "in initnose$plugins$deprecated" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_nose$plugins$deprecated = Py_InitModule4(
        "nose.plugins.deprecated",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_nose$plugins$deprecated = PyModule_Create( &mdef_nose$plugins$deprecated );
#endif

    moduledict_nose$plugins$deprecated = (PyDictObject *)((PyModuleObject *)module_nose$plugins$deprecated)->md_dict;

    CHECK_OBJECT( module_nose$plugins$deprecated );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_94effb661443a66f4170afa6a391a805, module_nose$plugins$deprecated );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_nose$plugins$deprecated );

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
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__class = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
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
    PyObject *tmp_bases_name_1;
    PyObject *tmp_bases_name_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_87852e0e4d3de84d6a65cbc370b16e9a;
    UPDATE_STRING_DICT0( moduledict_nose$plugins$deprecated, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_de63a5f4118dcc41db94e69d2b7e722d;
    UPDATE_STRING_DICT0( moduledict_nose$plugins$deprecated, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_ff95ebf1ed28d47bc52743062e6810ea, module_nose$plugins$deprecated );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_nose$plugins$deprecated)->md_dict;
    frame_module->f_lineno = 9;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_521fa66f5bd2fff2afcf6e09904f8994, tmp_import_globals_1, tmp_import_globals_1, const_tuple_str_plain_ErrorClass_str_plain_ErrorClassPlugin_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_ErrorClass );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$plugins$deprecated, (Nuitka_StringObject *)const_str_plain_ErrorClass, tmp_assign_source_3 );
    tmp_import_globals_2 = ((PyModuleObject *)module_nose$plugins$deprecated)->md_dict;
    frame_module->f_lineno = 9;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_digest_521fa66f5bd2fff2afcf6e09904f8994, tmp_import_globals_2, tmp_import_globals_2, const_tuple_str_plain_ErrorClass_str_plain_ErrorClassPlugin_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_ErrorClassPlugin );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$plugins$deprecated, (Nuitka_StringObject *)const_str_plain_ErrorClassPlugin, tmp_assign_source_4 );
    tmp_assign_source_5 = PyTuple_New( 1 );
    tmp_tuple_element_1 = PyExc_Exception;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_5, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_5;

    tmp_assign_source_6 = impl_class_1_DeprecatedTest_of_nose$plugins$deprecated( NULL );
    assert( tmp_assign_source_6 != NULL );
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_6;

    // Tried code:
    tmp_compare_left_1 = const_str_plain___metaclass__;
    tmp_compare_right_1 = tmp_class_creation_1__class_dict;

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_dict_name_1 = tmp_class_creation_1__class_dict;

    tmp_key_name_1 = const_str_plain___metaclass__;
    tmp_assign_source_7 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto try_except_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_bases_name_1 = tmp_class_creation_1__bases;

    tmp_assign_source_7 = SELECT_METACLASS( tmp_bases_name_1, GET_STRING_DICT_VALUE( moduledict_nose$plugins$deprecated, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_7;

    tmp_called_name_1 = tmp_class_creation_1__metaclass;

    tmp_args_element_name_1 = const_str_plain_DeprecatedTest;
    tmp_args_element_name_2 = tmp_class_creation_1__bases;

    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    frame_module->f_lineno = 12;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_8;

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

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__bases );
    Py_DECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    tmp_assign_source_9 = tmp_class_creation_1__class;

    UPDATE_STRING_DICT0( moduledict_nose$plugins$deprecated, (Nuitka_StringObject *)const_str_plain_DeprecatedTest, tmp_assign_source_9 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class );
    Py_DECREF( tmp_class_creation_1__class );
    tmp_class_creation_1__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__bases );
    Py_DECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    // Tried code:
    tmp_assign_source_10 = PyTuple_New( 1 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_nose$plugins$deprecated, (Nuitka_StringObject *)const_str_plain_ErrorClassPlugin );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ErrorClassPlugin );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_10 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ErrorClassPlugin" );
        exception_tb = NULL;

        exception_lineno = 18;
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_10, 0, tmp_tuple_element_2 );
    assert( tmp_class_creation_2__bases == NULL );
    tmp_class_creation_2__bases = tmp_assign_source_10;

    tmp_assign_source_11 = impl_class_2_Deprecated_of_nose$plugins$deprecated( NULL );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        goto try_except_handler_2;
    }
    assert( tmp_class_creation_2__class_dict == NULL );
    tmp_class_creation_2__class_dict = tmp_assign_source_11;

    tmp_compare_left_2 = const_str_plain___metaclass__;
    tmp_compare_right_2 = tmp_class_creation_2__class_dict;

    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    assert( !(tmp_cmp_In_2 == -1) );
    if ( tmp_cmp_In_2 == 1 )
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    tmp_dict_name_2 = tmp_class_creation_2__class_dict;

    tmp_key_name_2 = const_str_plain___metaclass__;
    tmp_assign_source_12 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        goto try_except_handler_2;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_bases_name_2 = tmp_class_creation_2__bases;

    tmp_assign_source_12 = SELECT_METACLASS( tmp_bases_name_2, GET_STRING_DICT_VALUE( moduledict_nose$plugins$deprecated, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_2:;
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_12;

    tmp_called_name_2 = tmp_class_creation_2__metaclass;

    tmp_args_element_name_4 = const_str_plain_Deprecated;
    tmp_args_element_name_5 = tmp_class_creation_2__bases;

    tmp_args_element_name_6 = tmp_class_creation_2__class_dict;

    frame_module->f_lineno = 18;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        goto try_except_handler_2;
    }
    assert( tmp_class_creation_2__class == NULL );
    tmp_class_creation_2__class = tmp_assign_source_13;

    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_dict );
    tmp_class_creation_2__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

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
    tmp_assign_source_14 = tmp_class_creation_2__class;

    UPDATE_STRING_DICT0( moduledict_nose$plugins$deprecated, (Nuitka_StringObject *)const_str_plain_Deprecated, tmp_assign_source_14 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class );
    Py_DECREF( tmp_class_creation_2__class );
    tmp_class_creation_2__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__bases );
    Py_DECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_dict );
    Py_DECREF( tmp_class_creation_2__class_dict );
    tmp_class_creation_2__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__metaclass );
    Py_DECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;


    return MOD_RETURN_VALUE( module_nose$plugins$deprecated );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
