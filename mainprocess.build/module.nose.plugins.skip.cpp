// Generated code for Python source for module 'nose.plugins.skip'
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

// The _module_nose$plugins$skip is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_nose$plugins$skip;
PyDictObject *moduledict_nose$plugins$skip;

// The module constants used
extern PyObject *const_str_plain_conf;
static PyObject *const_str_plain_NOSE_WITHOUT_SKIP;
extern PyObject *const_str_plain_get;
static PyObject *const_str_digest_349a285fed0ed4cd684e3f463ab99c43;
extern PyObject *const_str_plain_configure;
extern PyObject *const_str_plain_default;
extern PyObject *const_tuple_str_plain_SkipTest_tuple;
extern PyObject *const_tuple_9556c80415934cda1599b2a7a7d6fe77_tuple;
static PyObject *const_str_digest_6931362ca8ed3baa49b972f20fdcd329;
static PyObject *const_str_plain_skipped;
extern PyObject *const_int_neg_1;
static PyObject *const_dict_2d3a9370bae9919d8b8d2c4fe01c150e;
static PyObject *const_str_digest_86f821eb944e619e7f04d884ffde3a4a;
static PyObject *const_str_plain_Skip;
static PyObject *const_str_plain_noSkip;
extern PyObject *const_dict_empty;
static PyObject *const_tuple_str_plain_NOSE_WITHOUT_SKIP_false_tuple;
static PyObject *const_str_digest_5935ab33a7394f972069836583f1ef91;
extern PyObject *const_str_plain_SkipTest;
extern PyObject *const_str_plain_isfailure;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_ErrorClass;
extern PyObject *const_tuple_str_plain_ErrorClass_str_plain_ErrorClassPlugin_tuple;
extern PyObject *const_str_digest_d17334bf6d09840ab7166ddd4b04c38a;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_plain_skip;
extern PyObject *const_str_plain_action;
static PyObject *const_str_digest_68eb7eaa3db0ec40e4aee9aa688fbdc0;
extern PyObject *const_str_plain_can_configure;
static PyObject *const_str_plain_SKIP;
static PyObject *const_str_digest_d0cff3f1a225b3c8b5d46700f71afde2;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_env;
extern PyObject *const_str_plain_help;
extern PyObject *const_str_digest_521fa66f5bd2fff2afcf6e09904f8994;
extern PyObject *const_str_plain_parser;
extern PyObject *const_str_plain_options;
extern PyObject *const_str_plain_label;
extern PyObject *const_str_plain_env_opt;
extern PyObject *const_tuple_e43e8cf780dad9c5184abe983d1b8b02_tuple;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_disable;
static PyObject *const_str_digest_4d31028a4f49739d76ef87ff723ab1c8;
extern PyObject *const_str_plain_add_option;
extern PyObject *const_str_plain_enabled;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_dest;
static PyObject *const_tuple_str_digest_6931362ca8ed3baa49b972f20fdcd329_tuple;
static PyObject *const_str_digest_71bd0f0176d80286b52ca85a5c69aa98;
extern PyObject *const_str_plain_store_true;
extern PyObject *const_str_plain_ErrorClassPlugin;
static PyObject *const_str_digest_0216b2fb3aae220ab699686e02a5dbbd;
static PyObject *const_str_digest_6e47e4fd510f7b073644afcadbe93041;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_NOSE_WITHOUT_SKIP = UNSTREAM_STRING( &constant_bin[ 115634 ], 17, 1 );
    const_str_digest_349a285fed0ed4cd684e3f463ab99c43 = UNSTREAM_STRING( &constant_bin[ 115651 ], 14, 0 );
    const_str_digest_6931362ca8ed3baa49b972f20fdcd329 = UNSTREAM_STRING( &constant_bin[ 115665 ], 9, 0 );
    const_str_plain_skipped = UNSTREAM_STRING( &constant_bin[ 29466 ], 7, 1 );
    const_dict_2d3a9370bae9919d8b8d2c4fe01c150e = _PyDict_NewPresized( 2 );
    PyDict_SetItem( const_dict_2d3a9370bae9919d8b8d2c4fe01c150e, const_str_plain_isfailure, Py_False );
    const_str_plain_SKIP = UNSTREAM_STRING( &constant_bin[ 115647 ], 4, 1 );
    PyDict_SetItem( const_dict_2d3a9370bae9919d8b8d2c4fe01c150e, const_str_plain_label, const_str_plain_SKIP );
    assert( PyDict_Size( const_dict_2d3a9370bae9919d8b8d2c4fe01c150e ) == 2 );
    const_str_digest_86f821eb944e619e7f04d884ffde3a4a = UNSTREAM_STRING( &constant_bin[ 115674 ], 70, 0 );
    const_str_plain_Skip = UNSTREAM_STRING( &constant_bin[ 92839 ], 4, 1 );
    const_str_plain_noSkip = UNSTREAM_STRING( &constant_bin[ 115744 ], 6, 1 );
    const_tuple_str_plain_NOSE_WITHOUT_SKIP_false_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_NOSE_WITHOUT_SKIP_false_tuple, 0, const_str_plain_NOSE_WITHOUT_SKIP ); Py_INCREF( const_str_plain_NOSE_WITHOUT_SKIP );
    PyTuple_SET_ITEM( const_tuple_str_plain_NOSE_WITHOUT_SKIP_false_tuple, 1, Py_False ); Py_INCREF( Py_False );
    const_str_digest_5935ab33a7394f972069836583f1ef91 = UNSTREAM_STRING( &constant_bin[ 115750 ], 350, 0 );
    const_str_plain_skip = UNSTREAM_STRING( &constant_bin[ 29466 ], 4, 1 );
    const_str_digest_68eb7eaa3db0ec40e4aee9aa688fbdc0 = UNSTREAM_STRING( &constant_bin[ 116100 ], 51, 0 );
    const_str_digest_d0cff3f1a225b3c8b5d46700f71afde2 = UNSTREAM_STRING( &constant_bin[ 116151 ], 60, 0 );
    const_str_digest_4d31028a4f49739d76ef87ff723ab1c8 = UNSTREAM_STRING( &constant_bin[ 116211 ], 290, 0 );
    const_tuple_str_digest_6931362ca8ed3baa49b972f20fdcd329_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_6931362ca8ed3baa49b972f20fdcd329_tuple, 0, const_str_digest_6931362ca8ed3baa49b972f20fdcd329 ); Py_INCREF( const_str_digest_6931362ca8ed3baa49b972f20fdcd329 );
    const_str_digest_71bd0f0176d80286b52ca85a5c69aa98 = UNSTREAM_STRING( &constant_bin[ 116501 ], 13, 0 );
    const_str_digest_0216b2fb3aae220ab699686e02a5dbbd = UNSTREAM_STRING( &constant_bin[ 116514 ], 49, 0 );
    const_str_digest_6e47e4fd510f7b073644afcadbe93041 = UNSTREAM_STRING( &constant_bin[ 116563 ], 48, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_nose$plugins$skip( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_8fb1ebf8d56b0c81532132de1c9b406a;
static PyCodeObject *codeobj_79d1132ade4026d215bdd119e94371fa;
static PyCodeObject *codeobj_5c663a7db18bf2ecd72137343fe01631;
static PyCodeObject *codeobj_bb1e81ab321e0bdb09b86b4e79578144;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_68eb7eaa3db0ec40e4aee9aa688fbdc0 );
    codeobj_8fb1ebf8d56b0c81532132de1c9b406a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Skip, 30, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_79d1132ade4026d215bdd119e94371fa = MAKE_CODEOBJ( module_filename_obj, const_str_plain_configure, 53, const_tuple_9556c80415934cda1599b2a7a7d6fe77_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5c663a7db18bf2ecd72137343fe01631 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_options, 43, const_tuple_e43e8cf780dad9c5184abe983d1b8b02_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_bb1e81ab321e0bdb09b86b4e79578144 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_skip, 1, const_tuple_empty, 0, CO_NOFREE );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_SkipTest_of_nose$plugins$skip( PyObject **python_pars );


NUITKA_LOCAL_MODULE PyObject *impl_class_2_Skip_of_nose$plugins$skip( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_function_1_options_of_class_2_Skip_of_nose$plugins$skip(  );


static PyObject *MAKE_FUNCTION_function_2_configure_of_class_2_Skip_of_nose$plugins$skip(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_SkipTest_of_nose$plugins$skip( PyObject **python_pars )
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
    tmp_assign_source_1 = const_str_digest_d17334bf6d09840ab7166ddd4b04c38a;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_d0cff3f1a225b3c8b5d46700f71afde2;
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
    NUITKA_CANNOT_GET_HERE( class_1_SkipTest_of_nose$plugins$skip );
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
    NUITKA_CANNOT_GET_HERE( class_1_SkipTest_of_nose$plugins$skip );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


NUITKA_LOCAL_MODULE PyObject *impl_class_2_Skip_of_nose$plugins$skip( PyObject **python_pars )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var_enabled = NULL;
    PyObject *var_skipped = NULL;
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
    tmp_assign_source_1 = const_str_digest_d17334bf6d09840ab7166ddd4b04c38a;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_4d31028a4f49739d76ef87ff723ab1c8;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = Py_True;
    assert( var_enabled == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_enabled = tmp_assign_source_3;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_8fb1ebf8d56b0c81532132de1c9b406a, module_nose$plugins$skip );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_nose$plugins$skip, (Nuitka_StringObject *)const_str_plain_ErrorClass );

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

        exception_lineno = 39;
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_nose$plugins$skip, (Nuitka_StringObject *)const_str_plain_SkipTest );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SkipTest );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "SkipTest" );
        exception_tb = NULL;

        exception_lineno = 39;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_2d3a9370bae9919d8b8d2c4fe01c150e );
    frame_function->f_lineno = 41;
    tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        goto frame_exception_exit_1;
    }
    assert( var_skipped == NULL );
    var_skipped = tmp_assign_source_4;


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

            if ( var_skipped )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_skipped,
                    var_skipped
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

    tmp_assign_source_5 = MAKE_FUNCTION_function_1_options_of_class_2_Skip_of_nose$plugins$skip(  );
    assert( var_options == NULL );
    var_options = tmp_assign_source_5;

    tmp_assign_source_6 = MAKE_FUNCTION_function_2_configure_of_class_2_Skip_of_nose$plugins$skip(  );
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

    if ( var_skipped )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_skipped,
            var_skipped
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
    NUITKA_CANNOT_GET_HERE( class_2_Skip_of_nose$plugins$skip );
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

    CHECK_OBJECT( (PyObject *)var_skipped );
    Py_DECREF( var_skipped );
    var_skipped = NULL;

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
    NUITKA_CANNOT_GET_HERE( class_2_Skip_of_nose$plugins$skip );
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


static PyObject *impl_function_1_options_of_class_2_Skip_of_nose$plugins$skip( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_5c663a7db18bf2ecd72137343fe01631, module_nose$plugins$skip );
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


        exception_lineno = 48;
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = const_tuple_str_digest_6931362ca8ed3baa49b972f20fdcd329_tuple;
    tmp_kw_name_1 = _PyDict_NewPresized( 4 );
    tmp_dict_value_1 = const_str_plain_store_true;
    tmp_dict_key_1 = const_str_plain_action;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = const_str_plain_noSkip;
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

        exception_lineno = 49;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 49;
    tmp_dict_value_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_str_plain_NOSE_WITHOUT_SKIP_false_tuple, 0 ) );

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_dict_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 49;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_3 = const_str_plain_default;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    Py_DECREF( tmp_dict_value_3 );
    tmp_dict_value_4 = const_str_digest_6e47e4fd510f7b073644afcadbe93041;
    tmp_dict_key_4 = const_str_plain_help;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_4, tmp_dict_value_4 );
    frame_function->f_lineno = 50;
    tmp_unused = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
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
    NUITKA_CANNOT_GET_HERE( function_1_options_of_class_2_Skip_of_nose$plugins$skip );
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
    NUITKA_CANNOT_GET_HERE( function_1_options_of_class_2_Skip_of_nose$plugins$skip );
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


static PyObject *impl_function_2_configure_of_class_2_Skip_of_nose$plugins$skip( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_79d1132ade4026d215bdd119e94371fa, module_nose$plugins$skip );
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


        exception_lineno = 57;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 57;
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


        exception_lineno = 59;
        goto frame_exception_exit_1;
    }
    tmp_getattr_target_1 = par_options;

    tmp_getattr_attr_1 = const_str_plain_noSkip;
    tmp_getattr_default_1 = Py_False;
    tmp_assign_source_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
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


        exception_lineno = 61;
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


        exception_lineno = 62;
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
    NUITKA_CANNOT_GET_HERE( function_2_configure_of_class_2_Skip_of_nose$plugins$skip );
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
    NUITKA_CANNOT_GET_HERE( function_2_configure_of_class_2_Skip_of_nose$plugins$skip );
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



static PyObject *MAKE_FUNCTION_function_1_options_of_class_2_Skip_of_nose$plugins$skip(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_1_options_of_class_2_Skip_of_nose$plugins$skip,
        const_str_plain_options,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5c663a7db18bf2ecd72137343fe01631,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$plugins$skip,
        const_str_digest_0216b2fb3aae220ab699686e02a5dbbd
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_configure_of_class_2_Skip_of_nose$plugins$skip(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_2_configure_of_class_2_Skip_of_nose$plugins$skip,
        const_str_plain_configure,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_79d1132ade4026d215bdd119e94371fa,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$plugins$skip,
        const_str_digest_86f821eb944e619e7f04d884ffde3a4a
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_nose$plugins$skip =
{
    PyModuleDef_HEAD_INIT,
    "nose.plugins.skip",   /* m_name */
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

MOD_INIT_DECL( nose$plugins$skip )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_nose$plugins$skip );
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

    // puts( "in initnose$plugins$skip" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_nose$plugins$skip = Py_InitModule4(
        "nose.plugins.skip",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_nose$plugins$skip = PyModule_Create( &mdef_nose$plugins$skip );
#endif

    moduledict_nose$plugins$skip = (PyDictObject *)((PyModuleObject *)module_nose$plugins$skip)->md_dict;

    CHECK_OBJECT( module_nose$plugins$skip );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_d17334bf6d09840ab7166ddd4b04c38a, module_nose$plugins$skip );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_nose$plugins$skip );

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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
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
    PyObject *tmp_assign_source_15;
    PyObject *tmp_assign_source_16;
    PyObject *tmp_bases_name_1;
    PyObject *tmp_bases_name_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_5935ab33a7394f972069836583f1ef91;
    UPDATE_STRING_DICT0( moduledict_nose$plugins$skip, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_68eb7eaa3db0ec40e4aee9aa688fbdc0;
    UPDATE_STRING_DICT0( moduledict_nose$plugins$skip, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_bb1e81ab321e0bdb09b86b4e79578144, module_nose$plugins$skip );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_nose$plugins$skip)->md_dict;
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
    UPDATE_STRING_DICT1( moduledict_nose$plugins$skip, (Nuitka_StringObject *)const_str_plain_ErrorClass, tmp_assign_source_3 );
    tmp_import_globals_2 = ((PyModuleObject *)module_nose$plugins$skip)->md_dict;
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
    UPDATE_STRING_DICT1( moduledict_nose$plugins$skip, (Nuitka_StringObject *)const_str_plain_ErrorClassPlugin, tmp_assign_source_4 );
    // Tried code:
    tmp_import_globals_3 = ((PyModuleObject *)module_nose$plugins$skip)->md_dict;
    frame_module->f_lineno = 19;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_digest_71bd0f0176d80286b52ca85a5c69aa98, tmp_import_globals_3, tmp_import_globals_3, const_tuple_str_plain_SkipTest_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto try_except_handler_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_SkipTest );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$plugins$skip, (Nuitka_StringObject *)const_str_plain_SkipTest, tmp_assign_source_5 );
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


        exception_lineno = 20;
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
    // Tried code:
    tmp_import_globals_4 = ((PyModuleObject *)module_nose$plugins$skip)->md_dict;
    frame_module->f_lineno = 22;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_digest_349a285fed0ed4cd684e3f463ab99c43, tmp_import_globals_4, tmp_import_globals_4, const_tuple_str_plain_SkipTest_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        goto try_except_handler_2;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_SkipTest );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_nose$plugins$skip, (Nuitka_StringObject *)const_str_plain_SkipTest, tmp_assign_source_6 );
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_module );
    if ( exception_keeper_tb_2 == NULL )
    {
        exception_keeper_tb_2 = MAKE_TRACEBACK( frame_module, exception_keeper_lineno_2 );
    }
    else if ( exception_keeper_lineno_2 != -1 )
    {
        exception_keeper_tb_2 = ADD_TRACEBACK( exception_keeper_tb_2, frame_module, exception_keeper_lineno_2 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    PUBLISH_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    tmp_compare_left_2 = PyThreadState_GET()->exc_type;
    tmp_compare_right_2 = PyExc_ImportError;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_7 = PyTuple_New( 1 );
    tmp_tuple_element_1 = PyExc_Exception;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_7, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_7;

    tmp_assign_source_8 = impl_class_1_SkipTest_of_nose$plugins$skip( NULL );
    assert( tmp_assign_source_8 != NULL );
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_8;

    // Tried code:
    tmp_compare_left_3 = const_str_plain___metaclass__;
    tmp_compare_right_3 = tmp_class_creation_1__class_dict;

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
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
    tmp_assign_source_9 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        goto try_except_handler_3;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_bases_name_1 = tmp_class_creation_1__bases;

    tmp_assign_source_9 = SELECT_METACLASS( tmp_bases_name_1, GET_STRING_DICT_VALUE( moduledict_nose$plugins$skip, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_9;

    tmp_called_name_1 = tmp_class_creation_1__metaclass;

    tmp_args_element_name_1 = const_str_plain_SkipTest;
    tmp_args_element_name_2 = tmp_class_creation_1__bases;

    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    frame_module->f_lineno = 24;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        goto try_except_handler_3;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_10;

    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    tmp_assign_source_11 = tmp_class_creation_1__class;

    UPDATE_STRING_DICT0( moduledict_nose$plugins$skip, (Nuitka_StringObject *)const_str_plain_SkipTest, tmp_assign_source_11 );
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

    goto branch_end_2;
    branch_no_2:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_module) frame_module->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_2:;
    goto try_end_2;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nose$plugins$skip );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_2:;
    goto branch_end_1;
    branch_no_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_module) frame_module->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_1:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nose$plugins$skip );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_1:;
    // Tried code:
    tmp_assign_source_12 = PyTuple_New( 1 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_nose$plugins$skip, (Nuitka_StringObject *)const_str_plain_ErrorClassPlugin );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ErrorClassPlugin );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_12 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ErrorClassPlugin" );
        exception_tb = NULL;

        exception_lineno = 30;
        goto try_except_handler_4;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_12, 0, tmp_tuple_element_2 );
    assert( tmp_class_creation_2__bases == NULL );
    tmp_class_creation_2__bases = tmp_assign_source_12;

    tmp_assign_source_13 = impl_class_2_Skip_of_nose$plugins$skip( NULL );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        goto try_except_handler_4;
    }
    assert( tmp_class_creation_2__class_dict == NULL );
    tmp_class_creation_2__class_dict = tmp_assign_source_13;

    tmp_compare_left_4 = const_str_plain___metaclass__;
    tmp_compare_right_4 = tmp_class_creation_2__class_dict;

    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_4, tmp_compare_left_4 );
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
    tmp_assign_source_14 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        goto try_except_handler_4;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_bases_name_2 = tmp_class_creation_2__bases;

    tmp_assign_source_14 = SELECT_METACLASS( tmp_bases_name_2, GET_STRING_DICT_VALUE( moduledict_nose$plugins$skip, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_2:;
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_14;

    tmp_called_name_2 = tmp_class_creation_2__metaclass;

    tmp_args_element_name_4 = const_str_plain_Skip;
    tmp_args_element_name_5 = tmp_class_creation_2__bases;

    tmp_args_element_name_6 = tmp_class_creation_2__class_dict;

    frame_module->f_lineno = 30;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        goto try_except_handler_4;
    }
    assert( tmp_class_creation_2__class == NULL );
    tmp_class_creation_2__class = tmp_assign_source_15;

    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
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
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

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
    tmp_assign_source_16 = tmp_class_creation_2__class;

    UPDATE_STRING_DICT0( moduledict_nose$plugins$skip, (Nuitka_StringObject *)const_str_plain_Skip, tmp_assign_source_16 );
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


    return MOD_RETURN_VALUE( module_nose$plugins$skip );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
