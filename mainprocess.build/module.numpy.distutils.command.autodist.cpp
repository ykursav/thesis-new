// Generated code for Python source for module 'numpy.distutils.command.autodist'
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

// The _module_numpy$distutils$command$autodist is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_numpy$distutils$command$autodist;
PyDictObject *moduledict_numpy$distutils$command$autodist;

// The module constants used
static PyObject *const_str_plain_inline;
static PyObject *const_tuple_str_plain_cmd_str_plain_body_str_plain_kw_str_plain_st_tuple;
extern PyObject *const_str_plain_kw;
static PyObject *const_str_digest_7edab179671b9fc413a9046420281e06;
static PyObject *const_str_digest_4cba9c45430a84ceaa48d2cf4d4609ec;
static PyObject *const_tuple_40c06ae664a6d2f6d011e2342afa105f_tuple;
static PyObject *const_str_plain___inline;
static PyObject *const_tuple_827fc08d7cf2af4385b7e285840c87ea_tuple;
static PyObject *const_str_digest_32aa7c34d125f75ad6a6abe6882f0be3;
static PyObject *const_str_digest_e259cb3cb4c06ece138dd40e105bdac5;
static PyObject *const_str_plain___restrict;
static PyObject *const_tuple_str_plain_inline_str_plain___inline___str_plain___inline_tuple;
extern PyObject *const_str_plain_check_compiler_gcc4;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_digest_bf546cbcbb8e0949437c5e3ff142b530;
extern PyObject *const_str_plain_st;
static PyObject *const_str_digest_733e724b2f6f1da2158061253fe05673;
static PyObject *const_str_plain___inline__;
extern PyObject *const_str_plain_check_inline;
extern PyObject *const_dict_empty;
static PyObject *const_str_plain_restrict;
extern PyObject *const_str_plain___doc__;
static PyObject *const_tuple_str_plain_cmd_str_plain_attribute_str_plain_body_tuple;
static PyObject *const_str_digest_340c9208ecaaa9d94c0ed81a419e7679;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain__check_compiler;
static PyObject *const_str_digest_9eb5399c8b8a55d262491f1864d6ee4a;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_check_gcc_variable_attribute;
static PyObject *const_str_digest_4ca25e31d350b21186d0176b720f0550;
extern PyObject *const_str_plain_division;
static PyObject *const_tuple_str_digest_4ca25e31d350b21186d0176b720f0550_none_none_tuple;
extern PyObject *const_str_empty;
static PyObject *const_str_digest_ab6a288f01840b581082a0cd3795dfca;
extern PyObject *const_str_plain_body;
static PyObject *const_str_plain___restrict__;
static PyObject *const_str_digest_b8cd725ef8ecc7f54f21cc2515152b10;
extern PyObject *const_str_plain_try_compile;
static PyObject *const_str_digest_63dcc942b121ab475a4d52025f387295;
static PyObject *const_str_digest_7484ddc8968fef2cfbbad7d04dd08c48;
extern PyObject *const_str_plain_cmd;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_check_restrict;
static PyObject *const_tuple_str_plain_cmd_str_plain_body_tuple;
extern PyObject *const_str_plain_attribute;
extern PyObject *const_str_plain_check_gcc_function_attribute;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_inline = UNSTREAM_STRING( &constant_bin[ 15530 ], 6, 1 );
    const_tuple_str_plain_cmd_str_plain_body_str_plain_kw_str_plain_st_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_cmd_str_plain_body_str_plain_kw_str_plain_st_tuple, 0, const_str_plain_cmd ); Py_INCREF( const_str_plain_cmd );
    PyTuple_SET_ITEM( const_tuple_str_plain_cmd_str_plain_body_str_plain_kw_str_plain_st_tuple, 1, const_str_plain_body ); Py_INCREF( const_str_plain_body );
    PyTuple_SET_ITEM( const_tuple_str_plain_cmd_str_plain_body_str_plain_kw_str_plain_st_tuple, 2, const_str_plain_kw ); Py_INCREF( const_str_plain_kw );
    PyTuple_SET_ITEM( const_tuple_str_plain_cmd_str_plain_body_str_plain_kw_str_plain_st_tuple, 3, const_str_plain_st ); Py_INCREF( const_str_plain_st );
    const_str_digest_7edab179671b9fc413a9046420281e06 = UNSTREAM_STRING( &constant_bin[ 611453 ], 66, 0 );
    const_str_digest_4cba9c45430a84ceaa48d2cf4d4609ec = UNSTREAM_STRING( &constant_bin[ 611519 ], 57, 0 );
    const_tuple_40c06ae664a6d2f6d011e2342afa105f_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_40c06ae664a6d2f6d011e2342afa105f_tuple, 0, const_str_plain_cmd ); Py_INCREF( const_str_plain_cmd );
    PyTuple_SET_ITEM( const_tuple_40c06ae664a6d2f6d011e2342afa105f_tuple, 1, const_str_plain_attribute ); Py_INCREF( const_str_plain_attribute );
    PyTuple_SET_ITEM( const_tuple_40c06ae664a6d2f6d011e2342afa105f_tuple, 2, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_40c06ae664a6d2f6d011e2342afa105f_tuple, 3, const_str_plain_body ); Py_INCREF( const_str_plain_body );
    const_str_plain___inline = UNSTREAM_STRING( &constant_bin[ 611576 ], 8, 1 );
    const_tuple_827fc08d7cf2af4385b7e285840c87ea_tuple = PyTuple_New( 3 );
    const_str_plain_restrict = UNSTREAM_STRING( &constant_bin[ 104018 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_827fc08d7cf2af4385b7e285840c87ea_tuple, 0, const_str_plain_restrict ); Py_INCREF( const_str_plain_restrict );
    const_str_plain___restrict__ = UNSTREAM_STRING( &constant_bin[ 611584 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_827fc08d7cf2af4385b7e285840c87ea_tuple, 1, const_str_plain___restrict__ ); Py_INCREF( const_str_plain___restrict__ );
    const_str_plain___restrict = UNSTREAM_STRING( &constant_bin[ 611584 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_827fc08d7cf2af4385b7e285840c87ea_tuple, 2, const_str_plain___restrict ); Py_INCREF( const_str_plain___restrict );
    const_str_digest_32aa7c34d125f75ad6a6abe6882f0be3 = UNSTREAM_STRING( &constant_bin[ 611596 ], 41, 0 );
    const_str_digest_e259cb3cb4c06ece138dd40e105bdac5 = UNSTREAM_STRING( &constant_bin[ 611637 ], 57, 0 );
    const_tuple_str_plain_inline_str_plain___inline___str_plain___inline_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_inline_str_plain___inline___str_plain___inline_tuple, 0, const_str_plain_inline ); Py_INCREF( const_str_plain_inline );
    const_str_plain___inline__ = UNSTREAM_STRING( &constant_bin[ 611576 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_inline_str_plain___inline___str_plain___inline_tuple, 1, const_str_plain___inline__ ); Py_INCREF( const_str_plain___inline__ );
    PyTuple_SET_ITEM( const_tuple_str_plain_inline_str_plain___inline___str_plain___inline_tuple, 2, const_str_plain___inline ); Py_INCREF( const_str_plain___inline );
    const_str_digest_733e724b2f6f1da2158061253fe05673 = UNSTREAM_STRING( &constant_bin[ 611694 ], 134, 0 );
    const_tuple_str_plain_cmd_str_plain_attribute_str_plain_body_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_cmd_str_plain_attribute_str_plain_body_tuple, 0, const_str_plain_cmd ); Py_INCREF( const_str_plain_cmd );
    PyTuple_SET_ITEM( const_tuple_str_plain_cmd_str_plain_attribute_str_plain_body_tuple, 1, const_str_plain_attribute ); Py_INCREF( const_str_plain_attribute );
    PyTuple_SET_ITEM( const_tuple_str_plain_cmd_str_plain_attribute_str_plain_body_tuple, 2, const_str_plain_body ); Py_INCREF( const_str_plain_body );
    const_str_digest_340c9208ecaaa9d94c0ed81a419e7679 = UNSTREAM_STRING( &constant_bin[ 611828 ], 66, 0 );
    const_str_digest_9eb5399c8b8a55d262491f1864d6ee4a = UNSTREAM_STRING( &constant_bin[ 611894 ], 140, 0 );
    const_str_digest_4ca25e31d350b21186d0176b720f0550 = UNSTREAM_STRING( &constant_bin[ 612034 ], 105, 0 );
    const_tuple_str_digest_4ca25e31d350b21186d0176b720f0550_none_none_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_digest_4ca25e31d350b21186d0176b720f0550_none_none_tuple, 0, const_str_digest_4ca25e31d350b21186d0176b720f0550 ); Py_INCREF( const_str_digest_4ca25e31d350b21186d0176b720f0550 );
    PyTuple_SET_ITEM( const_tuple_str_digest_4ca25e31d350b21186d0176b720f0550_none_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_str_digest_4ca25e31d350b21186d0176b720f0550_none_none_tuple, 2, Py_None ); Py_INCREF( Py_None );
    const_str_digest_ab6a288f01840b581082a0cd3795dfca = UNSTREAM_STRING( &constant_bin[ 612139 ], 46, 0 );
    const_str_digest_b8cd725ef8ecc7f54f21cc2515152b10 = UNSTREAM_STRING( &constant_bin[ 612185 ], 140, 0 );
    const_str_digest_63dcc942b121ab475a4d52025f387295 = UNSTREAM_STRING( &constant_bin[ 612325 ], 75, 0 );
    const_str_digest_7484ddc8968fef2cfbbad7d04dd08c48 = UNSTREAM_STRING( &constant_bin[ 612400 ], 44, 0 );
    const_tuple_str_plain_cmd_str_plain_body_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_cmd_str_plain_body_tuple, 0, const_str_plain_cmd ); Py_INCREF( const_str_plain_cmd );
    PyTuple_SET_ITEM( const_tuple_str_plain_cmd_str_plain_body_tuple, 1, const_str_plain_body ); Py_INCREF( const_str_plain_body );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$distutils$command$autodist( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_bf49953affab1ffdbe0e7debea8ab2ee;
static PyCodeObject *codeobj_ad42211f29a50c59b00ad446a4dc6cb7;
static PyCodeObject *codeobj_6640c23b355e6ed3d061b8d45aa7a072;
static PyCodeObject *codeobj_8bcaa1fb20e6183ef965d5f4f33c26dc;
static PyCodeObject *codeobj_a5c9a76e75745f905a0c4fa05af1e154;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_340c9208ecaaa9d94c0ed81a419e7679 );
    codeobj_bf49953affab1ffdbe0e7debea8ab2ee = MAKE_CODEOBJ( module_filename_obj, const_str_plain_check_compiler_gcc4, 48, const_tuple_str_plain_cmd_str_plain_body_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ad42211f29a50c59b00ad446a4dc6cb7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_check_gcc_function_attribute, 64, const_tuple_40c06ae664a6d2f6d011e2342afa105f_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_6640c23b355e6ed3d061b8d45aa7a072 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_check_gcc_variable_attribute, 81, const_tuple_str_plain_cmd_str_plain_attribute_str_plain_body_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_8bcaa1fb20e6183ef965d5f4f33c26dc = MAKE_CODEOBJ( module_filename_obj, const_str_plain_check_inline, 9, const_tuple_str_plain_cmd_str_plain_body_str_plain_kw_str_plain_st_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a5c9a76e75745f905a0c4fa05af1e154 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_check_restrict, 31, const_tuple_str_plain_cmd_str_plain_body_str_plain_kw_str_plain_st_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_function_1_check_inline_of_numpy$distutils$command$autodist(  );


static PyObject *MAKE_FUNCTION_function_2_check_restrict_of_numpy$distutils$command$autodist(  );


static PyObject *MAKE_FUNCTION_function_3_check_compiler_gcc4_of_numpy$distutils$command$autodist(  );


static PyObject *MAKE_FUNCTION_function_4_check_gcc_function_attribute_of_numpy$distutils$command$autodist(  );


static PyObject *MAKE_FUNCTION_function_5_check_gcc_variable_attribute_of_numpy$distutils$command$autodist(  );


// The module function definitions.
static PyObject *impl_function_1_check_inline_of_numpy$distutils$command$autodist( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cmd = python_pars[ 0 ];
    PyObject *var_kw = NULL;
    PyObject *var_st = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_8bcaa1fb20e6183ef965d5f4f33c26dc, module_numpy$distutils$command$autodist );
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
    tmp_source_name_1 = par_cmd;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__check_compiler );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 11;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_iter_arg_1 = const_tuple_str_plain_inline_str_plain___inline___str_plain___inline_tuple;
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    assert( tmp_assign_source_1 != NULL );
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_1;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 24;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    tmp_assign_source_3 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_kw;
        var_kw = tmp_assign_source_3;
        Py_INCREF( var_kw );
        Py_XDECREF( old );
    }

    tmp_source_name_2 = par_cmd;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_try_compile );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        goto try_except_handler_2;
    }
    tmp_left_name_1 = const_str_digest_b8cd725ef8ecc7f54f21cc2515152b10;
    tmp_right_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = var_kw;

    tmp_dict_key_1 = const_str_plain_inline;
    PyDict_SetItem( tmp_right_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_args_element_name_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 25;
        goto try_except_handler_2;
    }
    tmp_args_element_name_2 = Py_None;
    tmp_args_element_name_3 = Py_None;
    frame_function->f_lineno = 25;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_st;
        var_st = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_cond_value_1 = var_st;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        goto try_except_handler_2;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = var_kw;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_2;
    branch_no_1:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__iter_value );
    Py_DECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
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
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

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
            if ( par_cmd )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cmd,
                    par_cmd
                );

                assert( res == 0 );
            }

            if ( var_kw )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_kw,
                    var_kw
                );

                assert( res == 0 );
            }

            if ( var_st )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_st,
                    var_st
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_return_value = const_str_empty;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_1_check_inline_of_numpy$distutils$command$autodist );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cmd );
    Py_DECREF( par_cmd );
    par_cmd = NULL;

    Py_XDECREF( var_kw );
    var_kw = NULL;

    Py_XDECREF( var_st );
    var_st = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    CHECK_OBJECT( (PyObject *)par_cmd );
    Py_DECREF( par_cmd );
    par_cmd = NULL;

    Py_XDECREF( var_kw );
    var_kw = NULL;

    Py_XDECREF( var_st );
    var_st = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1_check_inline_of_numpy$distutils$command$autodist );
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


static PyObject *impl_function_2_check_restrict_of_numpy$distutils$command$autodist( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cmd = python_pars[ 0 ];
    PyObject *var_kw = NULL;
    PyObject *var_st = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_a5c9a76e75745f905a0c4fa05af1e154, module_numpy$distutils$command$autodist );
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
    tmp_source_name_1 = par_cmd;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__check_compiler );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 33;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_iter_arg_1 = const_tuple_827fc08d7cf2af4385b7e285840c87ea_tuple;
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    assert( tmp_assign_source_1 != NULL );
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_1;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 41;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    tmp_assign_source_3 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_kw;
        var_kw = tmp_assign_source_3;
        Py_INCREF( var_kw );
        Py_XDECREF( old );
    }

    tmp_source_name_2 = par_cmd;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_try_compile );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        goto try_except_handler_2;
    }
    tmp_left_name_1 = const_str_digest_7edab179671b9fc413a9046420281e06;
    tmp_right_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = var_kw;

    tmp_dict_key_1 = const_str_plain_restrict;
    PyDict_SetItem( tmp_right_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_args_element_name_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 42;
        goto try_except_handler_2;
    }
    tmp_args_element_name_2 = Py_None;
    tmp_args_element_name_3 = Py_None;
    frame_function->f_lineno = 42;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_st;
        var_st = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_cond_value_1 = var_st;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        goto try_except_handler_2;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = var_kw;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_2;
    branch_no_1:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__iter_value );
    Py_DECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
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
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

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
            if ( par_cmd )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cmd,
                    par_cmd
                );

                assert( res == 0 );
            }

            if ( var_kw )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_kw,
                    var_kw
                );

                assert( res == 0 );
            }

            if ( var_st )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_st,
                    var_st
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_return_value = const_str_empty;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_2_check_restrict_of_numpy$distutils$command$autodist );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cmd );
    Py_DECREF( par_cmd );
    par_cmd = NULL;

    Py_XDECREF( var_kw );
    var_kw = NULL;

    Py_XDECREF( var_st );
    var_st = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    CHECK_OBJECT( (PyObject *)par_cmd );
    Py_DECREF( par_cmd );
    par_cmd = NULL;

    Py_XDECREF( var_kw );
    var_kw = NULL;

    Py_XDECREF( var_st );
    var_st = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_2_check_restrict_of_numpy$distutils$command$autodist );
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


static PyObject *impl_function_3_check_compiler_gcc4_of_numpy$distutils$command$autodist( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cmd = python_pars[ 0 ];
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
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_bf49953affab1ffdbe0e7debea8ab2ee, module_numpy$distutils$command$autodist );
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
    tmp_source_name_1 = par_cmd;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__check_compiler );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 50;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_2 = par_cmd;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_try_compile );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 61;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_str_digest_4ca25e31d350b21186d0176b720f0550_none_none_tuple, 0 ) );

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
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
            if ( par_cmd )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cmd,
                    par_cmd
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
    NUITKA_CANNOT_GET_HERE( function_3_check_compiler_gcc4_of_numpy$distutils$command$autodist );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cmd );
    Py_DECREF( par_cmd );
    par_cmd = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cmd );
    Py_DECREF( par_cmd );
    par_cmd = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_3_check_compiler_gcc4_of_numpy$distutils$command$autodist );
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


static PyObject *impl_function_4_check_gcc_function_attribute_of_numpy$distutils$command$autodist( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cmd = python_pars[ 0 ];
    PyObject *par_attribute = python_pars[ 1 ];
    PyObject *par_name = python_pars[ 2 ];
    PyObject *var_body = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_ad42211f29a50c59b00ad446a4dc6cb7, module_numpy$distutils$command$autodist );
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
    tmp_source_name_1 = par_cmd;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__check_compiler );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 66;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_left_name_1 = const_str_digest_9eb5399c8b8a55d262491f1864d6ee4a;
    tmp_right_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_attribute;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_name;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_assign_source_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        goto frame_exception_exit_1;
    }
    assert( var_body == NULL );
    var_body = tmp_assign_source_1;

    tmp_source_name_2 = par_cmd;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_try_compile );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = var_body;

    tmp_args_element_name_2 = Py_None;
    tmp_args_element_name_3 = Py_None;
    frame_function->f_lineno = 79;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_0;
    tmp_return_value = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
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
            if ( par_cmd )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cmd,
                    par_cmd
                );

                assert( res == 0 );
            }

            if ( par_attribute )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_attribute,
                    par_attribute
                );

                assert( res == 0 );
            }

            if ( par_name )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_name,
                    par_name
                );

                assert( res == 0 );
            }

            if ( var_body )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_body,
                    var_body
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
    NUITKA_CANNOT_GET_HERE( function_4_check_gcc_function_attribute_of_numpy$distutils$command$autodist );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cmd );
    Py_DECREF( par_cmd );
    par_cmd = NULL;

    CHECK_OBJECT( (PyObject *)par_attribute );
    Py_DECREF( par_attribute );
    par_attribute = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)var_body );
    Py_DECREF( var_body );
    var_body = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cmd );
    Py_DECREF( par_cmd );
    par_cmd = NULL;

    CHECK_OBJECT( (PyObject *)par_attribute );
    Py_DECREF( par_attribute );
    par_attribute = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    Py_XDECREF( var_body );
    var_body = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_4_check_gcc_function_attribute_of_numpy$distutils$command$autodist );
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


static PyObject *impl_function_5_check_gcc_variable_attribute_of_numpy$distutils$command$autodist( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cmd = python_pars[ 0 ];
    PyObject *par_attribute = python_pars[ 1 ];
    PyObject *var_body = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_6640c23b355e6ed3d061b8d45aa7a072, module_numpy$distutils$command$autodist );
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
    tmp_source_name_1 = par_cmd;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__check_compiler );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 83;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_left_name_1 = const_str_digest_733e724b2f6f1da2158061253fe05673;
    tmp_right_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_attribute;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_assign_source_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        goto frame_exception_exit_1;
    }
    assert( var_body == NULL );
    var_body = tmp_assign_source_1;

    tmp_source_name_2 = par_cmd;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_try_compile );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = var_body;

    tmp_args_element_name_2 = Py_None;
    tmp_args_element_name_3 = Py_None;
    frame_function->f_lineno = 96;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_0;
    tmp_return_value = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
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
            if ( par_cmd )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cmd,
                    par_cmd
                );

                assert( res == 0 );
            }

            if ( par_attribute )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_attribute,
                    par_attribute
                );

                assert( res == 0 );
            }

            if ( var_body )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_body,
                    var_body
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
    NUITKA_CANNOT_GET_HERE( function_5_check_gcc_variable_attribute_of_numpy$distutils$command$autodist );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cmd );
    Py_DECREF( par_cmd );
    par_cmd = NULL;

    CHECK_OBJECT( (PyObject *)par_attribute );
    Py_DECREF( par_attribute );
    par_attribute = NULL;

    CHECK_OBJECT( (PyObject *)var_body );
    Py_DECREF( var_body );
    var_body = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cmd );
    Py_DECREF( par_cmd );
    par_cmd = NULL;

    CHECK_OBJECT( (PyObject *)par_attribute );
    Py_DECREF( par_attribute );
    par_attribute = NULL;

    Py_XDECREF( var_body );
    var_body = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_5_check_gcc_variable_attribute_of_numpy$distutils$command$autodist );
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



static PyObject *MAKE_FUNCTION_function_1_check_inline_of_numpy$distutils$command$autodist(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_1_check_inline_of_numpy$distutils$command$autodist,
        const_str_plain_check_inline,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8bcaa1fb20e6183ef965d5f4f33c26dc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$autodist,
        const_str_digest_7484ddc8968fef2cfbbad7d04dd08c48
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_check_restrict_of_numpy$distutils$command$autodist(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_2_check_restrict_of_numpy$distutils$command$autodist,
        const_str_plain_check_restrict,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a5c9a76e75745f905a0c4fa05af1e154,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$autodist,
        const_str_digest_ab6a288f01840b581082a0cd3795dfca
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_check_compiler_gcc4_of_numpy$distutils$command$autodist(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_3_check_compiler_gcc4_of_numpy$distutils$command$autodist,
        const_str_plain_check_compiler_gcc4,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_bf49953affab1ffdbe0e7debea8ab2ee,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$autodist,
        const_str_digest_32aa7c34d125f75ad6a6abe6882f0be3
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_check_gcc_function_attribute_of_numpy$distutils$command$autodist(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_4_check_gcc_function_attribute_of_numpy$distutils$command$autodist,
        const_str_plain_check_gcc_function_attribute,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ad42211f29a50c59b00ad446a4dc6cb7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$autodist,
        const_str_digest_4cba9c45430a84ceaa48d2cf4d4609ec
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_check_gcc_variable_attribute_of_numpy$distutils$command$autodist(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_5_check_gcc_variable_attribute_of_numpy$distutils$command$autodist,
        const_str_plain_check_gcc_variable_attribute,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6640c23b355e6ed3d061b8d45aa7a072,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$autodist,
        const_str_digest_e259cb3cb4c06ece138dd40e105bdac5
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$distutils$command$autodist =
{
    PyModuleDef_HEAD_INIT,
    "numpy.distutils.command.autodist",   /* m_name */
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

MOD_INIT_DECL( numpy$distutils$command$autodist )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$distutils$command$autodist );
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

    // puts( "in initnumpy$distutils$command$autodist" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$distutils$command$autodist = Py_InitModule4(
        "numpy.distutils.command.autodist",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$distutils$command$autodist = PyModule_Create( &mdef_numpy$distutils$command$autodist );
#endif

    moduledict_numpy$distutils$command$autodist = (PyDictObject *)((PyModuleObject *)module_numpy$distutils$command$autodist)->md_dict;

    CHECK_OBJECT( module_numpy$distutils$command$autodist );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_bf546cbcbb8e0949437c5e3ff142b530, module_numpy$distutils$command$autodist );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_numpy$distutils$command$autodist );

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

    // Module code.
    tmp_assign_source_1 = const_str_digest_63dcc942b121ab475a4d52025f387295;
    UPDATE_STRING_DICT0( moduledict_numpy$distutils$command$autodist, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_340c9208ecaaa9d94c0ed81a419e7679;
    UPDATE_STRING_DICT0( moduledict_numpy$distutils$command$autodist, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "division");
    UPDATE_STRING_DICT0( moduledict_numpy$distutils$command$autodist, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_assign_source_4 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "absolute_import");
    UPDATE_STRING_DICT0( moduledict_numpy$distutils$command$autodist, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    tmp_assign_source_5 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "print_function");
    UPDATE_STRING_DICT0( moduledict_numpy$distutils$command$autodist, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_5 );
    tmp_assign_source_6 = MAKE_FUNCTION_function_1_check_inline_of_numpy$distutils$command$autodist(  );
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$autodist, (Nuitka_StringObject *)const_str_plain_check_inline, tmp_assign_source_6 );
    tmp_assign_source_7 = MAKE_FUNCTION_function_2_check_restrict_of_numpy$distutils$command$autodist(  );
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$autodist, (Nuitka_StringObject *)const_str_plain_check_restrict, tmp_assign_source_7 );
    tmp_assign_source_8 = MAKE_FUNCTION_function_3_check_compiler_gcc4_of_numpy$distutils$command$autodist(  );
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$autodist, (Nuitka_StringObject *)const_str_plain_check_compiler_gcc4, tmp_assign_source_8 );
    tmp_assign_source_9 = MAKE_FUNCTION_function_4_check_gcc_function_attribute_of_numpy$distutils$command$autodist(  );
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$autodist, (Nuitka_StringObject *)const_str_plain_check_gcc_function_attribute, tmp_assign_source_9 );
    tmp_assign_source_10 = MAKE_FUNCTION_function_5_check_gcc_variable_attribute_of_numpy$distutils$command$autodist(  );
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$autodist, (Nuitka_StringObject *)const_str_plain_check_gcc_variable_attribute, tmp_assign_source_10 );

    return MOD_RETURN_VALUE( module_numpy$distutils$command$autodist );
}
