// Generated code for Python source for module 'nose.tools.trivial'
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

// The _module_nose$tools$trivial is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_nose$tools$trivial;
PyDictObject *moduledict_nose$tools$trivial;

// The module constants used
extern PyObject *const_str_plain_nop;
static PyObject *const_str_digest_da249168cfef429eed04c7ff0af32dd7;
static PyObject *const_str_plain_caps;
extern PyObject *const_str_plain_TestCase;
extern PyObject *const_str_plain_sub;
extern PyObject *const_str_plain_expr;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_str_plain_at;
extern PyObject *const_int_neg_1;
static PyObject *const_str_plain_Dummy;
static PyObject *const_tuple_str_plain_nop_tuple;
extern PyObject *const_str_plain_lower;
static PyObject *const_str_digest_d2714ebb35e6e024eafc4251102fbd6b;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain__t;
extern PyObject *const_str_digest_810dad066cfe70eff6f358a2083c5404;
static PyObject *const_str_digest_c0ff148b54402be90353134577df1957;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_assert;
static PyObject *const_str_plain_pep8;
static PyObject *const_str_digest_f33b8d3da1f7cfef90f60cca392d9990;
extern PyObject *const_str_plain_unittest;
static PyObject *const_tuple_str_plain_expr_str_plain_msg_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_name;
extern PyObject *const_tuple_str_plain_m_tuple;
static PyObject *const_str_digest_fd2330d976d8a21dd6304bda88dba8b1;
static PyObject *const_str_plain_eq_;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_append;
static PyObject *const_tuple_str_plain_a_str_plain_b_str_plain_msg_tuple;
extern PyObject *const_str_plain__;
static PyObject *const_list_str_plain_ok__str_plain_eq__list;
extern PyObject *const_str_plain_msg;
extern PyObject *const_int_pos_1;
static PyObject *const_str_plain___unittest;
static PyObject *const_tuple_str_digest_da249168cfef429eed04c7ff0af32dd7_tuple;
static PyObject *const_tuple_str_plain_assert_tuple;
extern PyObject *const_tuple_str_plain_name_tuple;
extern PyObject *const_str_plain_m;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_plain_ok_;
extern PyObject *const_str_plain_compile;
extern PyObject *const_str_plain_groups;
static PyObject *const_str_digest_689c806e963c62bed88364b96c01258b;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_plain_b;
static PyObject *const_str_plain_trivial;
static PyObject *const_str_plain_pepd;
extern PyObject *const_str_plain_re;
extern PyObject *const_str_plain_startswith;
extern PyObject *const_str_angle_lambda;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_da249168cfef429eed04c7ff0af32dd7 = UNSTREAM_STRING( &constant_bin[ 129590 ], 7, 0 );
    const_str_plain_caps = UNSTREAM_STRING( &constant_bin[ 129597 ], 4, 1 );
    const_str_plain_Dummy = UNSTREAM_STRING( &constant_bin[ 6 ], 5, 1 );
    const_tuple_str_plain_nop_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_nop_tuple, 0, const_str_plain_nop ); Py_INCREF( const_str_plain_nop );
    const_str_digest_d2714ebb35e6e024eafc4251102fbd6b = UNSTREAM_STRING( &constant_bin[ 129601 ], 52, 0 );
    const_str_digest_c0ff148b54402be90353134577df1957 = UNSTREAM_STRING( &constant_bin[ 129653 ], 52, 0 );
    const_str_plain_assert = UNSTREAM_STRING( &constant_bin[ 5517 ], 6, 1 );
    const_str_plain_pep8 = UNSTREAM_STRING( &constant_bin[ 57 ], 4, 1 );
    const_str_digest_f33b8d3da1f7cfef90f60cca392d9990 = UNSTREAM_STRING( &constant_bin[ 129705 ], 54, 0 );
    const_tuple_str_plain_expr_str_plain_msg_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_expr_str_plain_msg_tuple, 0, const_str_plain_expr ); Py_INCREF( const_str_plain_expr );
    PyTuple_SET_ITEM( const_tuple_str_plain_expr_str_plain_msg_tuple, 1, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    const_str_digest_fd2330d976d8a21dd6304bda88dba8b1 = UNSTREAM_STRING( &constant_bin[ 129759 ], 251, 0 );
    const_str_plain_eq_ = UNSTREAM_STRING( &constant_bin[ 130010 ], 3, 1 );
    const_tuple_str_plain_a_str_plain_b_str_plain_msg_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_b_str_plain_msg_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_b_str_plain_msg_tuple, 1, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_b_str_plain_msg_tuple, 2, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    const_list_str_plain_ok__str_plain_eq__list = PyList_New( 2 );
    const_str_plain_ok_ = UNSTREAM_STRING( &constant_bin[ 130013 ], 3, 1 );
    PyList_SET_ITEM( const_list_str_plain_ok__str_plain_eq__list, 0, const_str_plain_ok_ ); Py_INCREF( const_str_plain_ok_ );
    PyList_SET_ITEM( const_list_str_plain_ok__str_plain_eq__list, 1, const_str_plain_eq_ ); Py_INCREF( const_str_plain_eq_ );
    const_str_plain___unittest = UNSTREAM_STRING( &constant_bin[ 129838 ], 10, 1 );
    const_tuple_str_digest_da249168cfef429eed04c7ff0af32dd7_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_da249168cfef429eed04c7ff0af32dd7_tuple, 0, const_str_digest_da249168cfef429eed04c7ff0af32dd7 ); Py_INCREF( const_str_digest_da249168cfef429eed04c7ff0af32dd7 );
    const_tuple_str_plain_assert_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_assert_tuple, 0, const_str_plain_assert ); Py_INCREF( const_str_plain_assert );
    const_str_digest_689c806e963c62bed88364b96c01258b = UNSTREAM_STRING( &constant_bin[ 129736 ], 8, 0 );
    const_str_plain_trivial = UNSTREAM_STRING( &constant_bin[ 127766 ], 7, 1 );
    const_str_plain_pepd = UNSTREAM_STRING( &constant_bin[ 130016 ], 4, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_nose$tools$trivial( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_0fb8410773c1106735a59d3687ba5a1d;
static PyCodeObject *codeobj_3085f9cafe8bc239c5e480fc02da7321;
static PyCodeObject *codeobj_16a5469f49d036eb2466de8fc4b0c482;
static PyCodeObject *codeobj_8a635583e807274a4c4a100d1cd941a0;
static PyCodeObject *codeobj_f11551cfd00ac6795d142b6283d5b410;
static PyCodeObject *codeobj_5bb19914fd76c928b5c7d7915b6eae67;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_d2714ebb35e6e024eafc4251102fbd6b );
    codeobj_0fb8410773c1106735a59d3687ba5a1d = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 39, const_tuple_str_plain_m_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3085f9cafe8bc239c5e480fc02da7321 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_eq_, 25, const_tuple_str_plain_a_str_plain_b_str_plain_msg_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_16a5469f49d036eb2466de8fc4b0c482 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_nop, 42, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8a635583e807274a4c4a100d1cd941a0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ok_, 18, const_tuple_str_plain_expr_str_plain_msg_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f11551cfd00ac6795d142b6283d5b410 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_pep8, 38, const_tuple_str_plain_name_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5bb19914fd76c928b5c7d7915b6eae67 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_trivial, 1, const_tuple_empty, 0, CO_NOFREE );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_Dummy_of_nose$tools$trivial( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_function_1_lambda_of_function_3_pep8_of_nose$tools$trivial(  );


static PyObject *MAKE_FUNCTION_function_1_nop_of_class_1_Dummy_of_nose$tools$trivial(  );


static PyObject *MAKE_FUNCTION_function_1_ok__of_nose$tools$trivial( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_2_eq__of_nose$tools$trivial( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_3_pep8_of_nose$tools$trivial(  );


// The module function definitions.
static PyObject *impl_function_1_ok__of_nose$tools$trivial( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_expr = python_pars[ 0 ];
    PyObject *par_msg = python_pars[ 1 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_8a635583e807274a4c4a100d1cd941a0, module_nose$tools$trivial );
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
    tmp_cond_value_1 = par_expr;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = par_msg;

    frame_function->f_lineno = 22;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_AssertionError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 22;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;

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
            if ( par_expr )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_expr,
                    par_expr
                );

                assert( res == 0 );
            }

            if ( par_msg )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_msg,
                    par_msg
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
    NUITKA_CANNOT_GET_HERE( function_1_ok__of_nose$tools$trivial );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_expr );
    Py_DECREF( par_expr );
    par_expr = NULL;

    CHECK_OBJECT( (PyObject *)par_msg );
    Py_DECREF( par_msg );
    par_msg = NULL;

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

    CHECK_OBJECT( (PyObject *)par_expr );
    Py_DECREF( par_expr );
    par_expr = NULL;

    CHECK_OBJECT( (PyObject *)par_msg );
    Py_DECREF( par_msg );
    par_msg = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1_ok__of_nose$tools$trivial );
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


static PyObject *impl_function_2_eq__of_nose$tools$trivial( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_b = python_pars[ 1 ];
    PyObject *par_msg = python_pars[ 2 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_left_name_1;
    PyObject *tmp_make_exception_arg_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_3085f9cafe8bc239c5e480fc02da7321, module_nose$tools$trivial );
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
    tmp_compare_left_1 = par_a;

    tmp_compare_right_1 = par_b;

    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_or_left_value_1 = par_msg;

    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_1 == 1 )
    {
        goto or_left_1;
    }
    else
    {
        goto or_right_1;
    }
    or_right_1:;
    tmp_left_name_1 = const_str_digest_689c806e963c62bed88364b96c01258b;
    tmp_right_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_a;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_b;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_or_right_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        goto frame_exception_exit_1;
    }
    tmp_make_exception_arg_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    Py_INCREF( tmp_or_left_value_1 );
    tmp_make_exception_arg_1 = tmp_or_left_value_1;
    or_end_1:;
    frame_function->f_lineno = 29;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_AssertionError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_1 );
    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 29;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;

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
            if ( par_a )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_a,
                    par_a
                );

                assert( res == 0 );
            }

            if ( par_b )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_b,
                    par_b
                );

                assert( res == 0 );
            }

            if ( par_msg )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_msg,
                    par_msg
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
    NUITKA_CANNOT_GET_HERE( function_2_eq__of_nose$tools$trivial );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)par_msg );
    Py_DECREF( par_msg );
    par_msg = NULL;

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

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)par_msg );
    Py_DECREF( par_msg );
    par_msg = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_2_eq__of_nose$tools$trivial );
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


static PyObject *impl_function_3_pep8_of_nose$tools$trivial( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[ 0 ];
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
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_f11551cfd00ac6795d142b6283d5b410, module_nose$tools$trivial );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_nose$tools$trivial, (Nuitka_StringObject *)const_str_plain_caps );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_caps );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "caps" );
        exception_tb = NULL;

        exception_lineno = 39;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sub );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = MAKE_FUNCTION_function_1_lambda_of_function_3_pep8_of_nose$tools$trivial(  );
    tmp_args_element_name_2 = par_name;

    frame_function->f_lineno = 39;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
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
            if ( par_name )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_name,
                    par_name
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
    NUITKA_CANNOT_GET_HERE( function_3_pep8_of_nose$tools$trivial );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

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

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_3_pep8_of_nose$tools$trivial );
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


static PyObject *impl_function_1_lambda_of_function_3_pep8_of_nose$tools$trivial( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_m = python_pars[ 0 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_0fb8410773c1106735a59d3687ba5a1d, module_nose$tools$trivial );
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
    tmp_left_name_1 = const_str_plain__;
    tmp_source_name_2 = par_m;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_groups );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 39;
    tmp_subscribed_name_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    Py_DECREF( tmp_called_name_2 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_int_0;
    tmp_source_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_lower );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 39;
    tmp_right_name_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        goto frame_exception_exit_1;
    }
    tmp_return_value = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
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
            if ( par_m )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_m,
                    par_m
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
    NUITKA_CANNOT_GET_HERE( function_1_lambda_of_function_3_pep8_of_nose$tools$trivial );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

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

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1_lambda_of_function_3_pep8_of_nose$tools$trivial );
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


NUITKA_LOCAL_MODULE PyObject *impl_class_1_Dummy_of_nose$tools$trivial( PyObject **python_pars )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *var___module__ = NULL;
    PyObject *var_nop = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_810dad066cfe70eff6f358a2083c5404;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = MAKE_FUNCTION_function_1_nop_of_class_1_Dummy_of_nose$tools$trivial(  );
    assert( var_nop == NULL );
    var_nop = tmp_assign_source_2;

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

    if ( var_nop )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_nop,
            var_nop
        );

        assert( res == 0 );
    }

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_1_Dummy_of_nose$tools$trivial );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var_nop );
    Py_DECREF( var_nop );
    var_nop = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var_nop );
    Py_DECREF( var_nop );
    var_nop = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_1_Dummy_of_nose$tools$trivial );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_function_1_nop_of_class_1_Dummy_of_nose$tools$trivial( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1_nop_of_class_1_Dummy_of_nose$tools$trivial );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}



static PyObject *MAKE_FUNCTION_function_1_lambda_of_function_3_pep8_of_nose$tools$trivial(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_1_lambda_of_function_3_pep8_of_nose$tools$trivial,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0fb8410773c1106735a59d3687ba5a1d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$tools$trivial,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_nop_of_class_1_Dummy_of_nose$tools$trivial(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_1_nop_of_class_1_Dummy_of_nose$tools$trivial,
        const_str_plain_nop,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_16a5469f49d036eb2466de8fc4b0c482,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$tools$trivial,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_ok__of_nose$tools$trivial( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_1_ok__of_nose$tools$trivial,
        const_str_plain_ok_,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8a635583e807274a4c4a100d1cd941a0,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$tools$trivial,
        const_str_digest_c0ff148b54402be90353134577df1957
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_eq__of_nose$tools$trivial( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_2_eq__of_nose$tools$trivial,
        const_str_plain_eq_,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3085f9cafe8bc239c5e480fc02da7321,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$tools$trivial,
        const_str_digest_f33b8d3da1f7cfef90f60cca392d9990
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_pep8_of_nose$tools$trivial(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_3_pep8_of_nose$tools$trivial,
        const_str_plain_pep8,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f11551cfd00ac6795d142b6283d5b410,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nose$tools$trivial,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_nose$tools$trivial =
{
    PyModuleDef_HEAD_INIT,
    "nose.tools.trivial",   /* m_name */
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

MOD_INIT_DECL( nose$tools$trivial )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_nose$tools$trivial );
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

    // puts( "in initnose$tools$trivial" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_nose$tools$trivial = Py_InitModule4(
        "nose.tools.trivial",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_nose$tools$trivial = PyModule_Create( &mdef_nose$tools$trivial );
#endif

    moduledict_nose$tools$trivial = (PyDictObject *)((PyModuleObject *)module_nose$tools$trivial)->md_dict;

    CHECK_OBJECT( module_nose$tools$trivial );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_810dad066cfe70eff6f358a2083c5404, module_nose$tools$trivial );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_nose$tools$trivial );

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
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
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
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_append_list_1;
    PyObject *tmp_append_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
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
    PyObject *tmp_assign_source_18;
    PyObject *tmp_assign_source_19;
    PyObject *tmp_assign_source_20;
    PyObject *tmp_assign_source_21;
    PyObject *tmp_assign_source_22;
    PyObject *tmp_assign_source_23;
    PyObject *tmp_assign_source_24;
    PyObject *tmp_bases_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dir_arg_1;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_key_name_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_outline_return_value_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_outline_return_value_1 = NULL;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_fd2330d976d8a21dd6304bda88dba8b1;
    UPDATE_STRING_DICT0( moduledict_nose$tools$trivial, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_d2714ebb35e6e024eafc4251102fbd6b;
    UPDATE_STRING_DICT0( moduledict_nose$tools$trivial, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_5bb19914fd76c928b5c7d7915b6eae67, module_nose$tools$trivial );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_nose$tools$trivial)->md_dict;
    frame_module->f_lineno = 8;
    tmp_assign_source_3 = IMPORT_MODULE( const_str_plain_re, tmp_import_globals_1, tmp_import_globals_1, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$tools$trivial, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_3 );
    tmp_import_globals_2 = ((PyModuleObject *)module_nose$tools$trivial)->md_dict;
    frame_module->f_lineno = 9;
    tmp_assign_source_4 = IMPORT_MODULE( const_str_plain_unittest, tmp_import_globals_2, tmp_import_globals_2, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$tools$trivial, (Nuitka_StringObject *)const_str_plain_unittest, tmp_assign_source_4 );
    tmp_assign_source_5 = LIST_COPY( const_list_str_plain_ok__str_plain_eq__list );
    UPDATE_STRING_DICT1( moduledict_nose$tools$trivial, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_nose$tools$trivial, (Nuitka_StringObject *)const_str_plain___unittest, tmp_assign_source_6 );
    tmp_defaults_1 = const_tuple_none_tuple;
    tmp_assign_source_7 = MAKE_FUNCTION_function_1_ok__of_nose$tools$trivial( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    UPDATE_STRING_DICT1( moduledict_nose$tools$trivial, (Nuitka_StringObject *)const_str_plain_ok_, tmp_assign_source_7 );
    tmp_defaults_2 = const_tuple_none_tuple;
    tmp_assign_source_8 = MAKE_FUNCTION_function_2_eq__of_nose$tools$trivial( INCREASE_REFCOUNT( tmp_defaults_2 ) );
    UPDATE_STRING_DICT1( moduledict_nose$tools$trivial, (Nuitka_StringObject *)const_str_plain_eq_, tmp_assign_source_8 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_nose$tools$trivial, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;

        exception_lineno = 36;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_compile );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 36;
    tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_da249168cfef429eed04c7ff0af32dd7_tuple, 0 ) );

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$tools$trivial, (Nuitka_StringObject *)const_str_plain_caps, tmp_assign_source_9 );
    tmp_assign_source_10 = MAKE_FUNCTION_function_3_pep8_of_nose$tools$trivial(  );
    UPDATE_STRING_DICT1( moduledict_nose$tools$trivial, (Nuitka_StringObject *)const_str_plain_pep8, tmp_assign_source_10 );
    // Tried code:
    tmp_assign_source_11 = PyTuple_New( 1 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_nose$tools$trivial, (Nuitka_StringObject *)const_str_plain_unittest );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unittest );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_11 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "unittest" );
        exception_tb = NULL;

        exception_lineno = 41;
        goto try_except_handler_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_TestCase );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_11 );

        exception_lineno = 41;
        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_11, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_11;

    tmp_assign_source_12 = impl_class_1_Dummy_of_nose$tools$trivial( NULL );
    assert( tmp_assign_source_12 != NULL );
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_12;

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
    tmp_assign_source_13 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        goto try_except_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_bases_name_1 = tmp_class_creation_1__bases;

    tmp_assign_source_13 = SELECT_METACLASS( tmp_bases_name_1, GET_STRING_DICT_VALUE( moduledict_nose$tools$trivial, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_13;

    tmp_called_name_2 = tmp_class_creation_1__metaclass;

    tmp_args_element_name_1 = const_str_plain_Dummy;
    tmp_args_element_name_2 = tmp_class_creation_1__bases;

    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    frame_module->f_lineno = 41;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_14;

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
    tmp_assign_source_15 = tmp_class_creation_1__class;

    UPDATE_STRING_DICT0( moduledict_nose$tools$trivial, (Nuitka_StringObject *)const_str_plain_Dummy, tmp_assign_source_15 );
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

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_nose$tools$trivial, (Nuitka_StringObject *)const_str_plain_Dummy );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Dummy );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "Dummy" );
        exception_tb = NULL;

        exception_lineno = 44;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 44;
    tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_str_plain_nop_tuple, 0 ) );

    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nose$tools$trivial, (Nuitka_StringObject *)const_str_plain__t, tmp_assign_source_16 );
    // Tried code:
    tmp_dir_arg_1 = GET_STRING_DICT_VALUE( moduledict_nose$tools$trivial, (Nuitka_StringObject *)const_str_plain__t );

    if (unlikely( tmp_dir_arg_1 == NULL ))
    {
        tmp_dir_arg_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__t );
    }

    if ( tmp_dir_arg_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_t" );
        exception_tb = NULL;

        exception_lineno = 46;
        goto try_except_handler_2;
    }

    tmp_iter_arg_2 = PyObject_Dir( tmp_dir_arg_1 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        goto try_except_handler_2;
    }
    tmp_assign_source_18 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        goto try_except_handler_2;
    }
    assert( tmp_list_contraction_1__$0 == NULL );
    tmp_list_contraction_1__$0 = tmp_assign_source_18;

    tmp_assign_source_19 = PyList_New( 0 );
    assert( tmp_list_contraction_1__contraction_result == NULL );
    tmp_list_contraction_1__contraction_result = tmp_assign_source_19;

    loop_start_1:;
    tmp_next_source_1 = tmp_list_contraction_1__$0;

    tmp_assign_source_20 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_20 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            PyThreadState_GET()->frame->f_lineno = 46;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_list_contraction_1__iter_value_0;
        tmp_list_contraction_1__iter_value_0 = tmp_assign_source_20;
        Py_XDECREF( old );
    }

    tmp_assign_source_21 = tmp_list_contraction_1__iter_value_0;

    UPDATE_STRING_DICT0( moduledict_nose$tools$trivial, (Nuitka_StringObject *)const_str_plain_at, tmp_assign_source_21 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_nose$tools$trivial, (Nuitka_StringObject *)const_str_plain_at );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_at );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "at" );
        exception_tb = NULL;

        exception_lineno = 47;
        goto try_except_handler_2;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_startswith );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        goto try_except_handler_2;
    }
    PyThreadState_GET()->frame->f_lineno = 47;
    tmp_and_left_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, &PyTuple_GET_ITEM( const_tuple_str_plain_assert_tuple, 0 ) );

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        goto try_except_handler_2;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 47;
        goto try_except_handler_2;
    }
    if ( tmp_and_left_truth_1 == 1 )
    {
        goto and_right_1;
    }
    else
    {
        goto and_left_1;
    }
    and_right_1:;
    Py_DECREF( tmp_and_left_value_1 );
    tmp_compexpr_left_1 = const_str_plain__;
    tmp_compexpr_right_1 = GET_STRING_DICT_VALUE( moduledict_nose$tools$trivial, (Nuitka_StringObject *)const_str_plain_at );

    if (unlikely( tmp_compexpr_right_1 == NULL ))
    {
        tmp_compexpr_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_at );
    }

    if ( tmp_compexpr_right_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "at" );
        exception_tb = NULL;

        exception_lineno = 47;
        goto try_except_handler_2;
    }

    tmp_and_right_value_1 = SEQUENCE_CONTAINS_NOT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        goto try_except_handler_2;
    }
    Py_INCREF( tmp_and_right_value_1 );
    tmp_cond_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 47;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_append_list_1 = tmp_list_contraction_1__contraction_result;

    tmp_append_value_1 = GET_STRING_DICT_VALUE( moduledict_nose$tools$trivial, (Nuitka_StringObject *)const_str_plain_at );

    if (unlikely( tmp_append_value_1 == NULL ))
    {
        tmp_append_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_at );
    }

    if ( tmp_append_value_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "at" );
        exception_tb = NULL;

        exception_lineno = 46;
        goto try_except_handler_2;
    }

    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        goto try_except_handler_2;
    }
    branch_no_1:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_outline_return_value_1 = tmp_list_contraction_1__contraction_result;

    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nose$tools$trivial );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_list_contraction_1__$0 );
    Py_DECREF( tmp_list_contraction_1__$0 );
    tmp_list_contraction_1__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_list_contraction_1__contraction_result );
    Py_DECREF( tmp_list_contraction_1__contraction_result );
    tmp_list_contraction_1__contraction_result = NULL;

    Py_XDECREF( tmp_list_contraction_1__iter_value_0 );
    tmp_list_contraction_1__iter_value_0 = NULL;

    goto outline_result_1;
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

    Py_XDECREF( tmp_list_contraction_1__$0 );
    tmp_list_contraction_1__$0 = NULL;

    Py_XDECREF( tmp_list_contraction_1__contraction_result );
    tmp_list_contraction_1__contraction_result = NULL;

    Py_XDECREF( tmp_list_contraction_1__iter_value_0 );
    tmp_list_contraction_1__iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( nose$tools$trivial );
    return MOD_RETURN_VALUE( NULL );
    outline_result_1:;
    tmp_iter_arg_1 = tmp_outline_return_value_1;
    tmp_assign_source_17 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_17;

    // Tried code:
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_22 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_22 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_module->f_lineno = 46;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_22;
        Py_XDECREF( old );
    }

    tmp_assign_source_23 = tmp_for_loop_1__iter_value;

    UPDATE_STRING_DICT0( moduledict_nose$tools$trivial, (Nuitka_StringObject *)const_str_plain_at, tmp_assign_source_23 );
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_nose$tools$trivial, (Nuitka_StringObject *)const_str_plain_pep8 );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pep8 );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "pep8" );
        exception_tb = NULL;

        exception_lineno = 48;
        goto try_except_handler_3;
    }

    tmp_args_element_name_4 = GET_STRING_DICT_VALUE( moduledict_nose$tools$trivial, (Nuitka_StringObject *)const_str_plain_at );

    if (unlikely( tmp_args_element_name_4 == NULL ))
    {
        tmp_args_element_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_at );
    }

    if ( tmp_args_element_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "at" );
        exception_tb = NULL;

        exception_lineno = 48;
        goto try_except_handler_3;
    }

    frame_module->f_lineno = 48;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_nose$tools$trivial, (Nuitka_StringObject *)const_str_plain_pepd, tmp_assign_source_24 );
    tmp_getattr_target_1 = GET_STRING_DICT_VALUE( moduledict_nose$tools$trivial, (Nuitka_StringObject *)const_str_plain__t );

    if (unlikely( tmp_getattr_target_1 == NULL ))
    {
        tmp_getattr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__t );
    }

    if ( tmp_getattr_target_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_t" );
        exception_tb = NULL;

        exception_lineno = 49;
        goto try_except_handler_3;
    }

    tmp_getattr_attr_1 = GET_STRING_DICT_VALUE( moduledict_nose$tools$trivial, (Nuitka_StringObject *)const_str_plain_at );

    if (unlikely( tmp_getattr_attr_1 == NULL ))
    {
        tmp_getattr_attr_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_at );
    }

    if ( tmp_getattr_attr_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "at" );
        exception_tb = NULL;

        exception_lineno = 49;
        goto try_except_handler_3;
    }

    tmp_ass_subvalue_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, NULL );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        goto try_except_handler_3;
    }
    tmp_ass_subscribed_1 = ((PyModuleObject *)module_nose$tools$trivial)->md_dict;
    tmp_ass_subscript_1 = GET_STRING_DICT_VALUE( moduledict_nose$tools$trivial, (Nuitka_StringObject *)const_str_plain_pepd );

    if (unlikely( tmp_ass_subscript_1 == NULL ))
    {
        tmp_ass_subscript_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pepd );
    }

    if ( tmp_ass_subscript_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "pepd" );
        exception_tb = NULL;

        exception_lineno = 49;
        goto try_except_handler_3;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        goto try_except_handler_3;
    }
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_nose$tools$trivial, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "__all__" );
        exception_tb = NULL;

        exception_lineno = 50;
        goto try_except_handler_3;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_append );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        goto try_except_handler_3;
    }
    tmp_args_element_name_5 = GET_STRING_DICT_VALUE( moduledict_nose$tools$trivial, (Nuitka_StringObject *)const_str_plain_pepd );

    if (unlikely( tmp_args_element_name_5 == NULL ))
    {
        tmp_args_element_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pepd );
    }

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "pepd" );
        exception_tb = NULL;

        exception_lineno = 50;
        goto try_except_handler_3;
    }

    frame_module->f_lineno = 50;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_2;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_res = PyDict_DelItem( (PyObject *)moduledict_nose$tools$trivial, const_str_plain_Dummy );
    if ( tmp_res == -1 ) CLEAR_ERROR_OCCURRED();

    if ( tmp_res == -1 )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 0 ], 27, 0 );
        exception_tb = NULL;

        exception_lineno = 52;
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_DelItem( (PyObject *)moduledict_nose$tools$trivial, const_str_plain__t );
    if ( tmp_res == -1 ) CLEAR_ERROR_OCCURRED();

    if ( tmp_res == -1 )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 27 ], 24, 0 );
        exception_tb = NULL;

        exception_lineno = 53;
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_DelItem( (PyObject *)moduledict_nose$tools$trivial, const_str_plain_pep8 );
    if ( tmp_res == -1 ) CLEAR_ERROR_OCCURRED();

    if ( tmp_res == -1 )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 51 ], 26, 0 );
        exception_tb = NULL;

        exception_lineno = 54;
        goto frame_exception_exit_1;
    }


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

    return MOD_RETURN_VALUE( module_nose$tools$trivial );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
