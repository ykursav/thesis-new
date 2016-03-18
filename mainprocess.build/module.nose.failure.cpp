// Generated code for Python source for module 'nose.failure'
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

// The _module_nose$failure is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_nose$failure;
PyDictObject *moduledict_nose$failure;

// The module constants used
extern PyObject *const_str_plain_log;
extern PyObject *const_tuple_none_none_tuple;
extern PyObject *const_str_plain_Failure;
extern PyObject *const_str_plain_TestCase;
extern PyObject *const_str_plain___str__;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_logging;
extern PyObject *const_str_plain_format_tb;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_runTest;
static PyObject *const_str_digest_d50b28ed7f56f5a9efebe1f7baf55a6c;
static PyObject *const_str_plain_failure;
static PyObject *const_str_digest_496d85b6526195072a82aed979629eee;
extern PyObject *const_str_plain___name__;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_tuple_4c25a601b6ac0cec15a0f46ab6548107_tuple;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_unittest;
extern PyObject *const_str_plain___test__;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_digest_1548d6dfdeabb8d04328840ac809a7e7;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain_getLogger;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_debug;
extern PyObject *const_str_plain_tb;
static PyObject *const_str_digest_37d6711bd717739598a97412857564ca;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_str_plain_format_tb_tuple;
extern PyObject *const_str_digest_50ec6eec50305057aff101793edbb556;
extern PyObject *const_str_plain_is_base_exception;
static PyObject *const_list_str_plain_Failure_list;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_exc_val;
static PyObject *const_tuple_str_digest_50ec6eec50305057aff101793edbb556_tuple;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_str_plain__address;
extern PyObject *const_str_plain_address;
static PyObject *const_tuple_str_plain_is_base_exception_tuple;
extern PyObject *const_str_digest_c4a41d45d3f3273121ae80a944790f18;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_traceback;
static PyObject *const_str_plain_exc_class;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_d50b28ed7f56f5a9efebe1f7baf55a6c = UNSTREAM_STRING( &constant_bin[ 61412 ], 46, 0 );
    const_str_plain_failure = UNSTREAM_STRING( &constant_bin[ 20537 ], 7, 1 );
    const_str_digest_496d85b6526195072a82aed979629eee = UNSTREAM_STRING( &constant_bin[ 61458 ], 16, 0 );
    const_tuple_4c25a601b6ac0cec15a0f46ab6548107_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_4c25a601b6ac0cec15a0f46ab6548107_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_exc_class = UNSTREAM_STRING( &constant_bin[ 61474 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_4c25a601b6ac0cec15a0f46ab6548107_tuple, 1, const_str_plain_exc_class ); Py_INCREF( const_str_plain_exc_class );
    PyTuple_SET_ITEM( const_tuple_4c25a601b6ac0cec15a0f46ab6548107_tuple, 2, const_str_plain_exc_val ); Py_INCREF( const_str_plain_exc_val );
    PyTuple_SET_ITEM( const_tuple_4c25a601b6ac0cec15a0f46ab6548107_tuple, 3, const_str_plain_tb ); Py_INCREF( const_str_plain_tb );
    PyTuple_SET_ITEM( const_tuple_4c25a601b6ac0cec15a0f46ab6548107_tuple, 4, const_str_plain_address ); Py_INCREF( const_str_plain_address );
    const_str_digest_1548d6dfdeabb8d04328840ac809a7e7 = UNSTREAM_STRING( &constant_bin[ 61483 ], 19, 0 );
    const_str_digest_37d6711bd717739598a97412857564ca = UNSTREAM_STRING( &constant_bin[ 61502 ], 225, 0 );
    const_tuple_str_plain_format_tb_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_format_tb_tuple, 0, const_str_plain_format_tb ); Py_INCREF( const_str_plain_format_tb );
    const_list_str_plain_Failure_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_Failure_list, 0, const_str_plain_Failure ); Py_INCREF( const_str_plain_Failure );
    const_tuple_str_digest_50ec6eec50305057aff101793edbb556_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_50ec6eec50305057aff101793edbb556_tuple, 0, const_str_digest_50ec6eec50305057aff101793edbb556 ); Py_INCREF( const_str_digest_50ec6eec50305057aff101793edbb556 );
    const_str_plain__address = UNSTREAM_STRING( &constant_bin[ 61727 ], 8, 1 );
    const_tuple_str_plain_is_base_exception_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_is_base_exception_tuple, 0, const_str_plain_is_base_exception ); Py_INCREF( const_str_plain_is_base_exception );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_nose$failure( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_2891dd8ae7d5b497b8135807fa44e27b;
static PyCodeObject *codeobj_94079f6c2367daa014ca77af4287ee3e;
static PyCodeObject *codeobj_5651f52e600667bf92bef202423ffd1b;
static PyCodeObject *codeobj_ca8b63924493df96b13fbf574b822d7d;
static PyCodeObject *codeobj_aa65b3cfaeea66f9b264cb77935645db;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_d50b28ed7f56f5a9efebe1f7baf55a6c );
    codeobj_2891dd8ae7d5b497b8135807fa44e27b = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 21, const_tuple_4c25a601b6ac0cec15a0f46ab6548107_tuple, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_94079f6c2367daa014ca77af4287ee3e = MAKE_CODEOBJ( module_filename_obj, const_str_plain___str__, 29, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5651f52e600667bf92bef202423ffd1b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_address, 33, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ca8b63924493df96b13fbf574b822d7d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_failure, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_aa65b3cfaeea66f9b264cb77935645db = MAKE_CODEOBJ( module_filename_obj, const_str_plain_runTest, 36, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_Failure_of_nose$failure( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_Failure_of_nose$failure( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_2___str___of_class_1_Failure_of_nose$failure(  );


static PyObject *MAKE_FUNCTION_function_3_address_of_class_1_Failure_of_nose$failure(  );


static PyObject *MAKE_FUNCTION_function_4_runTest_of_class_1_Failure_of_nose$failure(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_Failure_of_nose$failure( PyObject **python_pars )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var___test__ = NULL;
    PyObject *var___init__ = NULL;
    PyObject *var___str__ = NULL;
    PyObject *var_address = NULL;
    PyObject *var_runTest = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_defaults_1;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_50ec6eec50305057aff101793edbb556;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_37d6711bd717739598a97412857564ca;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = Py_False;
    assert( var___test__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___test__ = tmp_assign_source_3;

    tmp_defaults_1 = const_tuple_none_none_tuple;
    tmp_assign_source_4 = MAKE_FUNCTION_function_1___init___of_class_1_Failure_of_nose$failure( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    assert( var___init__ == NULL );
    var___init__ = tmp_assign_source_4;

    tmp_assign_source_5 = MAKE_FUNCTION_function_2___str___of_class_1_Failure_of_nose$failure(  );
    assert( var___str__ == NULL );
    var___str__ = tmp_assign_source_5;

    tmp_assign_source_6 = MAKE_FUNCTION_function_3_address_of_class_1_Failure_of_nose$failure(  );
    assert( var_address == NULL );
    var_address = tmp_assign_source_6;

    tmp_assign_source_7 = MAKE_FUNCTION_function_4_runTest_of_class_1_Failure_of_nose$failure(  );
    assert( var_runTest == NULL );
    var_runTest = tmp_assign_source_7;

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

    if ( var___test__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___test__,
            var___test__
        );

        assert( res == 0 );
    }

    if ( var___init__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___init__,
            var___init__
        );

        assert( res == 0 );
    }

    if ( var___str__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___str__,
            var___str__
        );

        assert( res == 0 );
    }

    if ( var_address )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_address,
            var_address
        );

        assert( res == 0 );
    }

    if ( var_runTest )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_runTest,
            var_runTest
        );

        assert( res == 0 );
    }

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_1_Failure_of_nose$failure );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var___doc__ );
    Py_DECREF( var___doc__ );
    var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)var___test__ );
    Py_DECREF( var___test__ );
    var___test__ = NULL;

    CHECK_OBJECT( (PyObject *)var___init__ );
    Py_DECREF( var___init__ );
    var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)var___str__ );
    Py_DECREF( var___str__ );
    var___str__ = NULL;

    CHECK_OBJECT( (PyObject *)var_address );
    Py_DECREF( var_address );
    var_address = NULL;

    CHECK_OBJECT( (PyObject *)var_runTest );
    Py_DECREF( var_runTest );
    var_runTest = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_1_Failure_of_nose$failure );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_function_1___init___of_class_1_Failure_of_nose$failure( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_exc_class = python_pars[ 1 ];
    PyObject *par_exc_val = python_pars[ 2 ];
    PyObject *par_tb = python_pars[ 3 ];
    PyObject *par_address = python_pars[ 4 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_frame_locals;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_2891dd8ae7d5b497b8135807fa44e27b, module_nose$failure );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_nose$failure, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "log" );
        exception_tb = NULL;

        exception_lineno = 22;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_debug );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = const_str_digest_1548d6dfdeabb8d04328840ac809a7e7;
    tmp_args_element_name_2 = par_exc_class;

    tmp_args_element_name_3 = par_exc_val;

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_nose$failure, (Nuitka_StringObject *)const_str_plain_format_tb );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_format_tb );
    }

    if ( tmp_called_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "format_tb" );
        exception_tb = NULL;

        exception_lineno = 22;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = par_tb;

    frame_function->f_lineno = 22;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_args_element_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 22;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 22;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_1 = par_exc_class;

    tmp_assattr_target_1 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_exc_class, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = par_exc_val;

    tmp_assattr_target_2 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_exc_val, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = par_tb;

    tmp_assattr_target_3 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_tb, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_4 = par_address;

    tmp_assattr_target_4 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain__address, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_nose$failure, (Nuitka_StringObject *)const_str_plain_unittest );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unittest );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "unittest" );
        exception_tb = NULL;

        exception_lineno = 27;
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_TestCase );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___init__ );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = par_self;

    frame_function->f_lineno = 27;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
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

            if ( par_exc_class )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_exc_class,
                    par_exc_class
                );

                assert( res == 0 );
            }

            if ( par_exc_val )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_exc_val,
                    par_exc_val
                );

                assert( res == 0 );
            }

            if ( par_tb )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_tb,
                    par_tb
                );

                assert( res == 0 );
            }

            if ( par_address )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_address,
                    par_address
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
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_1_Failure_of_nose$failure );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_exc_class );
    Py_DECREF( par_exc_class );
    par_exc_class = NULL;

    CHECK_OBJECT( (PyObject *)par_exc_val );
    Py_DECREF( par_exc_val );
    par_exc_val = NULL;

    CHECK_OBJECT( (PyObject *)par_tb );
    Py_DECREF( par_tb );
    par_tb = NULL;

    CHECK_OBJECT( (PyObject *)par_address );
    Py_DECREF( par_address );
    par_address = NULL;

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

    CHECK_OBJECT( (PyObject *)par_exc_class );
    Py_DECREF( par_exc_class );
    par_exc_class = NULL;

    CHECK_OBJECT( (PyObject *)par_exc_val );
    Py_DECREF( par_exc_val );
    par_exc_val = NULL;

    CHECK_OBJECT( (PyObject *)par_tb );
    Py_DECREF( par_tb );
    par_tb = NULL;

    CHECK_OBJECT( (PyObject *)par_address );
    Py_DECREF( par_address );
    par_address = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_1_Failure_of_nose$failure );
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


static PyObject *impl_function_2___str___of_class_1_Failure_of_nose$failure( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_94079f6c2367daa014ca77af4287ee3e, module_nose$failure );
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
    tmp_left_name_1 = const_str_digest_496d85b6526195072a82aed979629eee;
    tmp_right_name_1 = PyTuple_New( 2 );
    tmp_source_name_1 = par_self;

    tmp_getattr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_exc_class );
    if ( tmp_getattr_target_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 31;
        goto frame_exception_exit_1;
    }
    tmp_getattr_attr_1 = const_str_plain___name__;
    tmp_source_name_2 = par_self;

    tmp_getattr_default_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_exc_class );
    if ( tmp_getattr_default_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );
        Py_DECREF( tmp_getattr_target_1 );

        exception_lineno = 31;
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    Py_DECREF( tmp_getattr_target_1 );
    Py_DECREF( tmp_getattr_default_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 31;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_source_name_3 = par_self;

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_exc_val );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 31;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

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

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_2___str___of_class_1_Failure_of_nose$failure );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_2___str___of_class_1_Failure_of_nose$failure );
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


static PyObject *impl_function_3_address_of_class_1_Failure_of_nose$failure( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_5651f52e600667bf92bef202423ffd1b, module_nose$failure );
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

    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__address );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

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

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_3_address_of_class_1_Failure_of_nose$failure );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_3_address_of_class_1_Failure_of_nose$failure );
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


static PyObject *impl_function_4_runTest_of_class_1_Failure_of_nose$failure( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    bool tmp_isnot_1;
    PyObject *tmp_raise_tb_1;
    PyObject *tmp_raise_tb_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    PyObject *tmp_raise_value_1;
    PyObject *tmp_raise_value_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;


    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_aa65b3cfaeea66f9b264cb77935645db, module_nose$failure );
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

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_tb );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_nose$failure, (Nuitka_StringObject *)const_str_plain_is_base_exception );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_is_base_exception );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "is_base_exception" );
        exception_tb = NULL;

        exception_lineno = 38;
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = par_self;

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_exc_val );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 38;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 38;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_3 = par_self;

    tmp_raise_type_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_exc_val );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        goto frame_exception_exit_1;
    }
    tmp_raise_value_1 = Py_None;
    tmp_source_name_4 = par_self;

    tmp_raise_tb_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_tb );
    if ( tmp_raise_tb_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_raise_type_1 );

        exception_lineno = 39;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_value = tmp_raise_value_1;
    Py_INCREF( tmp_raise_value_1 );
    exception_tb = (PyTracebackObject *)tmp_raise_tb_1;
    RAISE_EXCEPTION_WITH_TRACEBACK( &exception_type, &exception_value, &exception_tb);
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_source_name_5 = par_self;

    tmp_raise_type_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_exc_class );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = par_self;

    tmp_raise_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_exc_val );
    if ( tmp_raise_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_raise_type_2 );

        exception_lineno = 40;
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = par_self;

    tmp_raise_tb_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_tb );
    if ( tmp_raise_tb_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_raise_type_2 );
        Py_DECREF( tmp_raise_value_2 );

        exception_lineno = 40;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    exception_value = tmp_raise_value_2;
    exception_tb = (PyTracebackObject *)tmp_raise_tb_2;
    RAISE_EXCEPTION_WITH_TRACEBACK( &exception_type, &exception_value, &exception_tb);
    goto frame_exception_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_8 = par_self;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_exc_class );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        goto frame_exception_exit_1;
    }
    tmp_source_name_9 = par_self;

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_exc_val );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 42;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 42;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_raise_type_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_3;
    exception_lineno = 42;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_end_1:;

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

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_4_runTest_of_class_1_Failure_of_nose$failure );
    return NULL;
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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_4_runTest_of_class_1_Failure_of_nose$failure );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_Failure_of_nose$failure( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_1___init___of_class_1_Failure_of_nose$failure,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2891dd8ae7d5b497b8135807fa44e27b,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$failure,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2___str___of_class_1_Failure_of_nose$failure(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_2___str___of_class_1_Failure_of_nose$failure,
        const_str_plain___str__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_94079f6c2367daa014ca77af4287ee3e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$failure,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_address_of_class_1_Failure_of_nose$failure(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_3_address_of_class_1_Failure_of_nose$failure,
        const_str_plain_address,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5651f52e600667bf92bef202423ffd1b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$failure,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_runTest_of_class_1_Failure_of_nose$failure(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_4_runTest_of_class_1_Failure_of_nose$failure,
        const_str_plain_runTest,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_aa65b3cfaeea66f9b264cb77935645db,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$failure,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_nose$failure =
{
    PyModuleDef_HEAD_INIT,
    "nose.failure",   /* m_name */
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

MOD_INIT_DECL( nose$failure )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_nose$failure );
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

    // puts( "in initnose$failure" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_nose$failure = Py_InitModule4(
        "nose.failure",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_nose$failure = PyModule_Create( &mdef_nose$failure );
#endif

    moduledict_nose$failure = (PyDictObject *)((PyModuleObject *)module_nose$failure)->md_dict;

    CHECK_OBJECT( module_nose$failure );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_50ec6eec50305057aff101793edbb556, module_nose$failure );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_nose$failure );

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
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
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
    PyObject *tmp_bases_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_key_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_nose$failure, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_d50b28ed7f56f5a9efebe1f7baf55a6c;
    UPDATE_STRING_DICT0( moduledict_nose$failure, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_ca8b63924493df96b13fbf574b822d7d, module_nose$failure );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_nose$failure)->md_dict;
    frame_module->f_lineno = 1;
    tmp_assign_source_3 = IMPORT_MODULE( const_str_plain_logging, tmp_import_globals_1, tmp_import_globals_1, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$failure, (Nuitka_StringObject *)const_str_plain_logging, tmp_assign_source_3 );
    tmp_import_globals_2 = ((PyModuleObject *)module_nose$failure)->md_dict;
    frame_module->f_lineno = 2;
    tmp_assign_source_4 = IMPORT_MODULE( const_str_plain_unittest, tmp_import_globals_2, tmp_import_globals_2, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$failure, (Nuitka_StringObject *)const_str_plain_unittest, tmp_assign_source_4 );
    tmp_import_globals_3 = ((PyModuleObject *)module_nose$failure)->md_dict;
    frame_module->f_lineno = 3;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_traceback, tmp_import_globals_3, tmp_import_globals_3, const_tuple_str_plain_format_tb_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_format_tb );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$failure, (Nuitka_StringObject *)const_str_plain_format_tb, tmp_assign_source_5 );
    tmp_import_globals_4 = ((PyModuleObject *)module_nose$failure)->md_dict;
    frame_module->f_lineno = 4;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_digest_c4a41d45d3f3273121ae80a944790f18, tmp_import_globals_4, tmp_import_globals_4, const_tuple_str_plain_is_base_exception_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_is_base_exception );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$failure, (Nuitka_StringObject *)const_str_plain_is_base_exception, tmp_assign_source_6 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_nose$failure, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "logging" );
        exception_tb = NULL;

        exception_lineno = 6;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_getLogger );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 6;
    tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_50ec6eec50305057aff101793edbb556_tuple, 0 ) );

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$failure, (Nuitka_StringObject *)const_str_plain_log, tmp_assign_source_7 );
    tmp_assign_source_8 = LIST_COPY( const_list_str_plain_Failure_list );
    UPDATE_STRING_DICT1( moduledict_nose$failure, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_8 );
    // Tried code:
    tmp_assign_source_9 = PyTuple_New( 1 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_nose$failure, (Nuitka_StringObject *)const_str_plain_unittest );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unittest );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "unittest" );
        exception_tb = NULL;

        exception_lineno = 12;
        goto try_except_handler_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_TestCase );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_9 );

        exception_lineno = 12;
        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_9, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_9;

    tmp_assign_source_10 = impl_class_1_Failure_of_nose$failure( NULL );
    assert( tmp_assign_source_10 != NULL );
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_10;

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
    tmp_assign_source_11 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto try_except_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_bases_name_1 = tmp_class_creation_1__bases;

    tmp_assign_source_11 = SELECT_METACLASS( tmp_bases_name_1, GET_STRING_DICT_VALUE( moduledict_nose$failure, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_11;

    tmp_called_name_2 = tmp_class_creation_1__metaclass;

    tmp_args_element_name_1 = const_str_plain_Failure;
    tmp_args_element_name_2 = tmp_class_creation_1__bases;

    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    frame_module->f_lineno = 12;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_12;

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

    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_dict );
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
    tmp_assign_source_13 = tmp_class_creation_1__class;

    UPDATE_STRING_DICT0( moduledict_nose$failure, (Nuitka_StringObject *)const_str_plain_Failure, tmp_assign_source_13 );
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


    return MOD_RETURN_VALUE( module_nose$failure );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
