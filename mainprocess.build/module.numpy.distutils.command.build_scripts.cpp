// Generated code for Python source for module 'numpy.distutils.command.build_scripts'
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

// The _module_numpy$distutils$command$build_scripts is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_numpy$distutils$command$build_scripts;
PyDictObject *moduledict_numpy$distutils$command$build_scripts;

// The module constants used
extern PyObject *const_str_plain_log;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_build_scripts;
static PyObject *const_str_plain_generate_scripts;
static PyObject *const_str_plain_script;
static PyObject *const_str_digest_7afcbb935e2d9b106ff325941bc598be;
extern PyObject *const_str_digest_0e6cce5d2f21199bd98b4fd22ff45e74;
extern PyObject *const_str_plain_is_string;
static PyObject *const_str_digest_c350add5b601cd6391295b43ce2d45bc;
extern PyObject *const_dict_empty;
static PyObject *const_tuple_str_plain_get_script_files_tuple;
static PyObject *const_tuple_7ce92cf377ecb0e02dee44f05980144e_tuple;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_info;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_get_script_files;
extern PyObject *const_str_plain_build_dir;
extern PyObject *const_tuple_str_plain_build_scripts_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_get_source_files;
extern PyObject *const_int_0;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_new_scripts;
extern PyObject *const_tuple_str_plain_log_tuple;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_extend;
extern PyObject *const_str_plain_distribution;
extern PyObject *const_str_plain_mkpath;
extern PyObject *const_str_plain_self;
static PyObject *const_str_digest_e54715bd27669ddd172c2b9fc0affd4e;
extern PyObject *const_str_digest_6d315605648e433b0f5827b4d0f11ccf;
static PyObject *const_str_plain_old_build_scripts;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_func;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_division;
static PyObject *const_tuple_str_plain_self_str_plain_get_script_files_tuple;
extern PyObject *const_tuple_str_plain_is_string_tuple;
static PyObject *const_str_digest_e5a6980e71f18436d073befa6d6d40af;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_scripts;
extern PyObject *const_str_plain_s;
static PyObject *const_str_plain_func_scripts;
static PyObject *const_str_digest_51f9ee1c3401b461525f25a593056704;
extern PyObject *const_str_plain_run;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_generate_scripts = UNSTREAM_STRING( &constant_bin[ 616251 ], 16, 1 );
    const_str_plain_script = UNSTREAM_STRING( &constant_bin[ 2659 ], 6, 1 );
    const_str_digest_7afcbb935e2d9b106ff325941bc598be = UNSTREAM_STRING( &constant_bin[ 616267 ], 24, 0 );
    const_str_digest_c350add5b601cd6391295b43ce2d45bc = UNSTREAM_STRING( &constant_bin[ 616291 ], 82, 0 );
    const_tuple_str_plain_get_script_files_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_get_script_files_tuple, 0, const_str_plain_get_script_files ); Py_INCREF( const_str_plain_get_script_files );
    const_tuple_7ce92cf377ecb0e02dee44f05980144e_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_7ce92cf377ecb0e02dee44f05980144e_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_7ce92cf377ecb0e02dee44f05980144e_tuple, 1, const_str_plain_scripts ); Py_INCREF( const_str_plain_scripts );
    const_str_plain_new_scripts = UNSTREAM_STRING( &constant_bin[ 616373 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_7ce92cf377ecb0e02dee44f05980144e_tuple, 2, const_str_plain_new_scripts ); Py_INCREF( const_str_plain_new_scripts );
    const_str_plain_func_scripts = UNSTREAM_STRING( &constant_bin[ 616384 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_7ce92cf377ecb0e02dee44f05980144e_tuple, 3, const_str_plain_func_scripts ); Py_INCREF( const_str_plain_func_scripts );
    PyTuple_SET_ITEM( const_tuple_7ce92cf377ecb0e02dee44f05980144e_tuple, 4, const_str_plain_script ); Py_INCREF( const_str_plain_script );
    PyTuple_SET_ITEM( const_tuple_7ce92cf377ecb0e02dee44f05980144e_tuple, 5, const_str_plain_build_dir ); Py_INCREF( const_str_plain_build_dir );
    PyTuple_SET_ITEM( const_tuple_7ce92cf377ecb0e02dee44f05980144e_tuple, 6, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_7ce92cf377ecb0e02dee44f05980144e_tuple, 7, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    const_str_digest_e54715bd27669ddd172c2b9fc0affd4e = UNSTREAM_STRING( &constant_bin[ 616396 ], 37, 0 );
    const_str_plain_old_build_scripts = UNSTREAM_STRING( &constant_bin[ 616433 ], 17, 1 );
    const_tuple_str_plain_self_str_plain_get_script_files_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_get_script_files_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_get_script_files_tuple, 1, const_str_plain_get_script_files ); Py_INCREF( const_str_plain_get_script_files );
    const_str_digest_e5a6980e71f18436d073befa6d6d40af = UNSTREAM_STRING( &constant_bin[ 616450 ], 71, 0 );
    const_str_digest_51f9ee1c3401b461525f25a593056704 = UNSTREAM_STRING( &constant_bin[ 616402 ], 31, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$distutils$command$build_scripts( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_afd5eff91a8650b47c4ad93c78e48b72;
static PyCodeObject *codeobj_0a64aa6af426f9c0f7279c2c764ab007;
static PyCodeObject *codeobj_e192f2746712870e8c6ac08ef8b17b74;
static PyCodeObject *codeobj_3702589ff1d0b9ea646e19af99e18b21;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_e5a6980e71f18436d073befa6d6d40af );
    codeobj_afd5eff91a8650b47c4ad93c78e48b72 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_build_scripts, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0a64aa6af426f9c0f7279c2c764ab007 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_generate_scripts, 12, const_tuple_7ce92cf377ecb0e02dee44f05980144e_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e192f2746712870e8c6ac08ef8b17b74 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_source_files, 49, const_tuple_str_plain_self_str_plain_get_script_files_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_3702589ff1d0b9ea646e19af99e18b21 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_run, 37, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_build_scripts_of_numpy$distutils$command$build_scripts( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_function_1_generate_scripts_of_class_1_build_scripts_of_numpy$distutils$command$build_scripts(  );


static PyObject *MAKE_FUNCTION_function_2_run_of_class_1_build_scripts_of_numpy$distutils$command$build_scripts(  );


static PyObject *MAKE_FUNCTION_function_3_get_source_files_of_class_1_build_scripts_of_numpy$distutils$command$build_scripts(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_build_scripts_of_numpy$distutils$command$build_scripts( PyObject **python_pars )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *var___module__ = NULL;
    PyObject *var_generate_scripts = NULL;
    PyObject *var_run = NULL;
    PyObject *var_get_source_files = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_e54715bd27669ddd172c2b9fc0affd4e;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = MAKE_FUNCTION_function_1_generate_scripts_of_class_1_build_scripts_of_numpy$distutils$command$build_scripts(  );
    assert( var_generate_scripts == NULL );
    var_generate_scripts = tmp_assign_source_2;

    tmp_assign_source_3 = MAKE_FUNCTION_function_2_run_of_class_1_build_scripts_of_numpy$distutils$command$build_scripts(  );
    assert( var_run == NULL );
    var_run = tmp_assign_source_3;

    tmp_assign_source_4 = MAKE_FUNCTION_function_3_get_source_files_of_class_1_build_scripts_of_numpy$distutils$command$build_scripts(  );
    assert( var_get_source_files == NULL );
    var_get_source_files = tmp_assign_source_4;

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

    if ( var_generate_scripts )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_generate_scripts,
            var_generate_scripts
        );

        assert( res == 0 );
    }

    if ( var_run )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_run,
            var_run
        );

        assert( res == 0 );
    }

    if ( var_get_source_files )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_get_source_files,
            var_get_source_files
        );

        assert( res == 0 );
    }

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_1_build_scripts_of_numpy$distutils$command$build_scripts );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var_generate_scripts );
    Py_DECREF( var_generate_scripts );
    var_generate_scripts = NULL;

    CHECK_OBJECT( (PyObject *)var_run );
    Py_DECREF( var_run );
    var_run = NULL;

    CHECK_OBJECT( (PyObject *)var_get_source_files );
    Py_DECREF( var_get_source_files );
    var_get_source_files = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var_generate_scripts );
    Py_DECREF( var_generate_scripts );
    var_generate_scripts = NULL;

    CHECK_OBJECT( (PyObject *)var_run );
    Py_DECREF( var_run );
    var_run = NULL;

    CHECK_OBJECT( (PyObject *)var_get_source_files );
    Py_DECREF( var_get_source_files );
    var_get_source_files = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_1_build_scripts_of_numpy$distutils$command$build_scripts );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_function_1_generate_scripts_of_class_1_build_scripts_of_numpy$distutils$command$build_scripts( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_scripts = python_pars[ 1 ];
    PyObject *var_new_scripts = NULL;
    PyObject *var_func_scripts = NULL;
    PyObject *var_script = NULL;
    PyObject *var_build_dir = NULL;
    PyObject *var_func = NULL;
    PyObject *var_s = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
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
    PyObject *tmp_append_list_1;
    PyObject *tmp_append_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    PyObject *tmp_called_name_10;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_list_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_next_source_3;
    PyObject *tmp_outline_return_value_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyList_New( 0 );
    assert( var_new_scripts == NULL );
    var_new_scripts = tmp_assign_source_1;

    tmp_assign_source_2 = PyList_New( 0 );
    assert( var_func_scripts == NULL );
    var_func_scripts = tmp_assign_source_2;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_0a64aa6af426f9c0f7279c2c764ab007, module_numpy$distutils$command$build_scripts );
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
    tmp_iter_arg_1 = par_scripts;

    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_3;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_4 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 15;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_assign_source_5 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_script;
        var_script = tmp_assign_source_5;
        Py_INCREF( var_script );
        Py_XDECREF( old );
    }

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_scripts, (Nuitka_StringObject *)const_str_plain_is_string );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_is_string );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "is_string" );
        exception_tb = NULL;

        exception_lineno = 16;
        goto try_except_handler_2;
    }

    tmp_args_element_name_1 = var_script;

    frame_function->f_lineno = 16;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        goto try_except_handler_2;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 16;
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
    tmp_source_name_1 = var_new_scripts;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_append );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto try_except_handler_2;
    }
    tmp_args_element_name_2 = var_script;

    frame_function->f_lineno = 17;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_2 = var_func_scripts;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_append );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto try_except_handler_2;
    }
    tmp_args_element_name_3 = var_script;

    frame_function->f_lineno = 19;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    branch_end_1:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
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
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_cond_value_2 = var_func_scripts;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_return_value = var_new_scripts;

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_source_name_3 = par_self;

    tmp_assign_source_6 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_build_dir );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    assert( var_build_dir == NULL );
    var_build_dir = tmp_assign_source_6;

    tmp_source_name_4 = par_self;

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_mkpath );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = var_build_dir;

    frame_function->f_lineno = 24;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_iter_arg_2 = var_func_scripts;

    tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_2__for_iterator == NULL );
    tmp_for_loop_2__for_iterator = tmp_assign_source_7;

    // Tried code:
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator;

    tmp_assign_source_8 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 25;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    tmp_assign_source_9 = tmp_for_loop_2__iter_value;

    {
        PyObject *old = var_func;
        var_func = tmp_assign_source_9;
        Py_INCREF( var_func );
        Py_XDECREF( old );
    }

    tmp_called_name_5 = var_func;

    tmp_args_element_name_5 = var_build_dir;

    frame_function->f_lineno = 26;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        goto try_except_handler_3;
    }
    {
        PyObject *old = var_script;
        var_script = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    tmp_cond_value_3 = var_script;

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        goto try_except_handler_3;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_no_3;
    }
    else
    {
        goto branch_yes_3;
    }
    branch_yes_3:;
    goto loop_start_2;
    branch_no_3:;
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_scripts, (Nuitka_StringObject *)const_str_plain_is_string );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_is_string );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "is_string" );
        exception_tb = NULL;

        exception_lineno = 29;
        goto try_except_handler_3;
    }

    tmp_args_element_name_6 = var_script;

    frame_function->f_lineno = 29;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_cond_value_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    if ( tmp_cond_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        goto try_except_handler_3;
    }
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        exception_lineno = 29;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_scripts, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "log" );
        exception_tb = NULL;

        exception_lineno = 30;
        goto try_except_handler_3;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_info );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        goto try_except_handler_3;
    }
    tmp_left_name_1 = const_str_digest_7afcbb935e2d9b106ff325941bc598be;
    tmp_right_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = var_script;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_args_element_name_7 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );

        exception_lineno = 30;
        goto try_except_handler_3;
    }
    frame_function->f_lineno = 30;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_6 = var_new_scripts;

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_append );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        goto try_except_handler_3;
    }
    tmp_args_element_name_8 = var_script;

    frame_function->f_lineno = 31;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_4;
    branch_no_4:;
    // Tried code:
    tmp_iter_arg_3 = var_script;

    tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_3 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_list_contraction_1__$0;
        tmp_list_contraction_1__$0 = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    tmp_assign_source_12 = PyList_New( 0 );
    {
        PyObject *old = tmp_list_contraction_1__contraction_result;
        tmp_list_contraction_1__contraction_result = tmp_assign_source_12;
        Py_XDECREF( old );
    }

    loop_start_3:;
    tmp_next_source_3 = tmp_list_contraction_1__$0;

    tmp_assign_source_13 = ITERATOR_NEXT( tmp_next_source_3 );
    if ( tmp_assign_source_13 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_3;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            PyThreadState_GET()->frame->f_lineno = 33;
            goto try_except_handler_4;
        }
    }

    {
        PyObject *old = tmp_list_contraction_1__iter_value_0;
        tmp_list_contraction_1__iter_value_0 = tmp_assign_source_13;
        Py_XDECREF( old );
    }

    tmp_assign_source_14 = tmp_list_contraction_1__iter_value_0;

    {
        PyObject *old = var_s;
        var_s = tmp_assign_source_14;
        Py_INCREF( var_s );
        Py_XDECREF( old );
    }

    tmp_append_list_1 = tmp_list_contraction_1__contraction_result;

    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_scripts, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "log" );
        exception_tb = NULL;

        exception_lineno = 33;
        goto try_except_handler_4;
    }

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_info );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        goto try_except_handler_4;
    }
    tmp_left_name_2 = const_str_digest_7afcbb935e2d9b106ff325941bc598be;
    tmp_right_name_2 = PyTuple_New( 1 );
    tmp_tuple_element_2 = var_s;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_2 );
    tmp_args_element_name_9 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );

        exception_lineno = 33;
        goto try_except_handler_4;
    }
    PyThreadState_GET()->frame->f_lineno = 33;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        goto try_except_handler_4;
    }
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        goto try_except_handler_4;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        goto try_except_handler_4;
    }
    goto loop_start_3;
    loop_end_3:;
    tmp_outline_return_value_1 = tmp_list_contraction_1__contraction_result;

    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_4;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_1_generate_scripts_of_class_1_build_scripts_of_numpy$distutils$command$build_scripts );
    return NULL;
    // Return handler code:
    try_return_handler_4:;
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
    try_except_handler_4:;
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

    goto try_except_handler_3;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1_generate_scripts_of_class_1_build_scripts_of_numpy$distutils$command$build_scripts );
    return NULL;
    outline_result_1:;
    tmp_unused = tmp_outline_return_value_1;
    Py_DECREF( tmp_unused );
    tmp_source_name_8 = var_new_scripts;

    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_extend );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        goto try_except_handler_3;
    }
    tmp_list_arg_1 = var_script;

    tmp_args_element_name_10 = PySequence_List( tmp_list_arg_1 );
    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_10 );

        exception_lineno = 34;
        goto try_except_handler_3;
    }
    frame_function->f_lineno = 34;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_called_name_10 );
    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    branch_end_4:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
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

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

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

            if ( par_scripts )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_scripts,
                    par_scripts
                );

                assert( res == 0 );
            }

            if ( var_new_scripts )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_new_scripts,
                    var_new_scripts
                );

                assert( res == 0 );
            }

            if ( var_func_scripts )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_func_scripts,
                    var_func_scripts
                );

                assert( res == 0 );
            }

            if ( var_script )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_script,
                    var_script
                );

                assert( res == 0 );
            }

            if ( var_build_dir )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_build_dir,
                    var_build_dir
                );

                assert( res == 0 );
            }

            if ( var_func )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_func,
                    var_func
                );

                assert( res == 0 );
            }

            if ( var_s )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_s,
                    var_s
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

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    tmp_return_value = var_new_scripts;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_1_generate_scripts_of_class_1_build_scripts_of_numpy$distutils$command$build_scripts );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_scripts );
    Py_DECREF( par_scripts );
    par_scripts = NULL;

    CHECK_OBJECT( (PyObject *)var_new_scripts );
    Py_DECREF( var_new_scripts );
    var_new_scripts = NULL;

    CHECK_OBJECT( (PyObject *)var_func_scripts );
    Py_DECREF( var_func_scripts );
    var_func_scripts = NULL;

    Py_XDECREF( var_script );
    var_script = NULL;

    Py_XDECREF( var_build_dir );
    var_build_dir = NULL;

    Py_XDECREF( var_func );
    var_func = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_scripts );
    Py_DECREF( par_scripts );
    par_scripts = NULL;

    CHECK_OBJECT( (PyObject *)var_new_scripts );
    Py_DECREF( var_new_scripts );
    var_new_scripts = NULL;

    CHECK_OBJECT( (PyObject *)var_func_scripts );
    Py_DECREF( var_func_scripts );
    var_func_scripts = NULL;

    Py_XDECREF( var_script );
    var_script = NULL;

    Py_XDECREF( var_build_dir );
    var_build_dir = NULL;

    Py_XDECREF( var_func );
    var_func = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1_generate_scripts_of_class_1_build_scripts_of_numpy$distutils$command$build_scripts );
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


static PyObject *impl_function_2_run_of_class_1_build_scripts_of_numpy$distutils$command$build_scripts( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_3702589ff1d0b9ea646e19af99e18b21, module_numpy$distutils$command$build_scripts );
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

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_scripts );
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
    tmp_source_name_2 = par_self;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_generate_scripts );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_scripts );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 41;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 41;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_scripts, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 41;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_source_name_4 = par_self;

    tmp_assattr_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_scripts );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = par_self;

    tmp_assattr_target_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_distribution );
    if ( tmp_assattr_target_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 45;
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_scripts, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );
        Py_DECREF( tmp_assattr_target_2 );

        exception_lineno = 45;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    Py_DECREF( tmp_assattr_target_2 );
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_scripts, (Nuitka_StringObject *)const_str_plain_old_build_scripts );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_old_build_scripts );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "old_build_scripts" );
        exception_tb = NULL;

        exception_lineno = 47;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_run );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_self;

    frame_function->f_lineno = 47;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
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
    NUITKA_CANNOT_GET_HERE( function_2_run_of_class_1_build_scripts_of_numpy$distutils$command$build_scripts );
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
    NUITKA_CANNOT_GET_HERE( function_2_run_of_class_1_build_scripts_of_numpy$distutils$command$build_scripts );
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


static PyObject *impl_function_3_get_source_files_of_class_1_build_scripts_of_numpy$distutils$command$build_scripts( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_get_script_files = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_e192f2746712870e8c6ac08ef8b17b74, module_numpy$distutils$command$build_scripts );
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
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$distutils$command$build_scripts)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ( par_self )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_self,
            par_self
        );

        assert( res == 0 );
    }

    if ( var_get_script_files )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_get_script_files,
            var_get_script_files
        );

        assert( res == 0 );
    }

    frame_function->f_lineno = 50;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_6d315605648e433b0f5827b4d0f11ccf, tmp_import_globals_1, tmp_import_locals_1, const_tuple_str_plain_get_script_files_tuple, const_int_0 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_get_script_files );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        goto frame_exception_exit_1;
    }
    assert( var_get_script_files == NULL );
    var_get_script_files = tmp_assign_source_1;

    tmp_called_name_1 = var_get_script_files;

    tmp_source_name_1 = par_self;

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_scripts );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 51;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
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

            if ( var_get_script_files )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_get_script_files,
                    var_get_script_files
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
    NUITKA_CANNOT_GET_HERE( function_3_get_source_files_of_class_1_build_scripts_of_numpy$distutils$command$build_scripts );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_get_script_files );
    Py_DECREF( var_get_script_files );
    var_get_script_files = NULL;

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

    Py_XDECREF( var_get_script_files );
    var_get_script_files = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_3_get_source_files_of_class_1_build_scripts_of_numpy$distutils$command$build_scripts );
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



static PyObject *MAKE_FUNCTION_function_1_generate_scripts_of_class_1_build_scripts_of_numpy$distutils$command$build_scripts(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_1_generate_scripts_of_class_1_build_scripts_of_numpy$distutils$command$build_scripts,
        const_str_plain_generate_scripts,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0a64aa6af426f9c0f7279c2c764ab007,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$build_scripts,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_run_of_class_1_build_scripts_of_numpy$distutils$command$build_scripts(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_2_run_of_class_1_build_scripts_of_numpy$distutils$command$build_scripts,
        const_str_plain_run,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3702589ff1d0b9ea646e19af99e18b21,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$build_scripts,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_get_source_files_of_class_1_build_scripts_of_numpy$distutils$command$build_scripts(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_3_get_source_files_of_class_1_build_scripts_of_numpy$distutils$command$build_scripts,
        const_str_plain_get_source_files,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e192f2746712870e8c6ac08ef8b17b74,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$build_scripts,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$distutils$command$build_scripts =
{
    PyModuleDef_HEAD_INIT,
    "numpy.distutils.command.build_scripts",   /* m_name */
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

MOD_INIT_DECL( numpy$distutils$command$build_scripts )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$distutils$command$build_scripts );
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

    // puts( "in initnumpy$distutils$command$build_scripts" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$distutils$command$build_scripts = Py_InitModule4(
        "numpy.distutils.command.build_scripts",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$distutils$command$build_scripts = PyModule_Create( &mdef_numpy$distutils$command$build_scripts );
#endif

    moduledict_numpy$distutils$command$build_scripts = (PyDictObject *)((PyModuleObject *)module_numpy$distutils$command$build_scripts)->md_dict;

    CHECK_OBJECT( module_numpy$distutils$command$build_scripts );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_e54715bd27669ddd172c2b9fc0affd4e, module_numpy$distutils$command$build_scripts );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_numpy$distutils$command$build_scripts );

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
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_key_name_1;
    PyObject *tmp_tuple_element_1;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_c350add5b601cd6391295b43ce2d45bc;
    UPDATE_STRING_DICT0( moduledict_numpy$distutils$command$build_scripts, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_e5a6980e71f18436d073befa6d6d40af;
    UPDATE_STRING_DICT0( moduledict_numpy$distutils$command$build_scripts, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "division");
    UPDATE_STRING_DICT0( moduledict_numpy$distutils$command$build_scripts, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_assign_source_4 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "absolute_import");
    UPDATE_STRING_DICT0( moduledict_numpy$distutils$command$build_scripts, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    tmp_assign_source_5 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "print_function");
    UPDATE_STRING_DICT0( moduledict_numpy$distutils$command$build_scripts, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_5 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_afd5eff91a8650b47c4ad93c78e48b72, module_numpy$distutils$command$build_scripts );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$distutils$command$build_scripts)->md_dict;
    frame_module->f_lineno = 6;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_51f9ee1c3401b461525f25a593056704, tmp_import_globals_1, tmp_import_globals_1, const_tuple_str_plain_build_scripts_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_build_scripts );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$build_scripts, (Nuitka_StringObject *)const_str_plain_old_build_scripts, tmp_assign_source_6 );
    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$distutils$command$build_scripts)->md_dict;
    frame_module->f_lineno = 7;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_digest_0e6cce5d2f21199bd98b4fd22ff45e74, tmp_import_globals_2, tmp_import_globals_2, const_tuple_str_plain_log_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_log );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$build_scripts, (Nuitka_StringObject *)const_str_plain_log, tmp_assign_source_7 );
    tmp_import_globals_3 = ((PyModuleObject *)module_numpy$distutils$command$build_scripts)->md_dict;
    frame_module->f_lineno = 8;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_digest_6d315605648e433b0f5827b4d0f11ccf, tmp_import_globals_3, tmp_import_globals_3, const_tuple_str_plain_is_string_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_is_string );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$build_scripts, (Nuitka_StringObject *)const_str_plain_is_string, tmp_assign_source_8 );
    // Tried code:
    tmp_assign_source_9 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_scripts, (Nuitka_StringObject *)const_str_plain_old_build_scripts );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_old_build_scripts );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "old_build_scripts" );
        exception_tb = NULL;

        exception_lineno = 10;
        goto try_except_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_9, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_9;

    tmp_assign_source_10 = impl_class_1_build_scripts_of_numpy$distutils$command$build_scripts( NULL );
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


        exception_lineno = 10;
        goto try_except_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_bases_name_1 = tmp_class_creation_1__bases;

    tmp_assign_source_11 = SELECT_METACLASS( tmp_bases_name_1, GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$build_scripts, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_11;

    tmp_called_name_1 = tmp_class_creation_1__metaclass;

    tmp_args_element_name_1 = const_str_plain_build_scripts;
    tmp_args_element_name_2 = tmp_class_creation_1__bases;

    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    frame_module->f_lineno = 10;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
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

    UPDATE_STRING_DICT0( moduledict_numpy$distutils$command$build_scripts, (Nuitka_StringObject *)const_str_plain_build_scripts, tmp_assign_source_13 );
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


    return MOD_RETURN_VALUE( module_numpy$distutils$command$build_scripts );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
