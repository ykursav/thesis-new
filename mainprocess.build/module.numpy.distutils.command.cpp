// Generated code for Python source for module 'numpy.distutils.command'
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

// The _module_numpy$distutils$command is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_numpy$distutils$command;
PyDictObject *moduledict_numpy$distutils$command;

// The module constants used
extern PyObject *const_str_plain_bdist_rpm;
extern PyObject *const_str_plain_install_data;
static PyObject *const_str_plain_clean;
extern PyObject *const_str_plain_command;
extern PyObject *const_str_plain_build;
extern PyObject *const_str_plain_install_lib;
extern PyObject *const_str_plain_config_compiler;
static PyObject *const_str_plain_distutils_all;
extern PyObject *const_str_plain_build_clib;
static PyObject *const_str_plain_payload;
extern PyObject *const_str_plain_sdist;
extern PyObject *const_str_plain_install_headers;
static PyObject *const_list_3e2e61107e998903d9314df3dd21b68a_list;
extern PyObject *const_dict_empty;
static PyObject *const_list_str_plain_payload_str_plain_dtype_list;
extern PyObject *const_str_digest_013fccb1bcdb116ccb4eb70c79ae1af2;
static PyObject *const_str_digest_6a07cc2105aacb9d08c603b84c0dcbd6;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_config;
static PyObject *const_str_plain_bdist;
extern PyObject *const_str_plain_build_scripts;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_build_ext;
extern PyObject *const_str_plain_attr;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_plain___revision__;
extern PyObject *const_int_0;
static PyObject *const_tuple_str_plain_a_str_plain_attr_str_plain_s_tuple;
static PyObject *const_list_str_digest_df5b4e65f0dfbb207f5be91274084dfe_list;
extern PyObject *const_str_plain_build_py;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_dtype;
static PyObject *const_str_plain_test_na_writable_attributes_deletion;
extern PyObject *const_str_plain_division;
extern PyObject *const_int_pos_2;
static PyObject *const_str_plain_bdist_dumb;
static PyObject *const_str_digest_bd2a462e143c1bd414afc34dda151cbc;
extern PyObject *const_str_plain_install;
extern PyObject *const_str_plain___path__;
static PyObject *const_list_0bbba11320c0bcdfde9b2eb40463de91_list;
static PyObject *const_str_plain_install_scripts;
extern PyObject *const_str_plain_build_src;
extern PyObject *const_tuple_int_pos_2_tuple;
static PyObject *const_str_plain_NA;
extern PyObject *const_str_plain_install_clib;
extern PyObject *const_str_plain_a;
static PyObject *const_str_digest_0158650dfc44404a1a17dc6b8d641053;
extern PyObject *const_str_digest_e210b91a463ea74efc033215dbc8be45;
extern PyObject *const_str_plain_print_function;
static PyObject *const_str_plain_bdist_wininst;
extern PyObject *const_str_plain_assert_raises;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_delattr;
static PyObject *const_str_digest_df5b4e65f0dfbb207f5be91274084dfe;
extern PyObject *const_str_plain_s;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_clean = UNSTREAM_STRING( &constant_bin[ 14062 ], 5, 1 );
    const_str_plain_distutils_all = UNSTREAM_STRING( &constant_bin[ 611128 ], 13, 1 );
    const_str_plain_payload = UNSTREAM_STRING( &constant_bin[ 611141 ], 7, 1 );
    const_list_3e2e61107e998903d9314df3dd21b68a_list = PyList_New( 6 );
    PyList_SET_ITEM( const_list_3e2e61107e998903d9314df3dd21b68a_list, 0, const_str_plain_clean ); Py_INCREF( const_str_plain_clean );
    PyList_SET_ITEM( const_list_3e2e61107e998903d9314df3dd21b68a_list, 1, const_str_plain_install_clib ); Py_INCREF( const_str_plain_install_clib );
    const_str_plain_install_scripts = UNSTREAM_STRING( &constant_bin[ 611148 ], 15, 1 );
    PyList_SET_ITEM( const_list_3e2e61107e998903d9314df3dd21b68a_list, 2, const_str_plain_install_scripts ); Py_INCREF( const_str_plain_install_scripts );
    const_str_plain_bdist = UNSTREAM_STRING( &constant_bin[ 611163 ], 5, 1 );
    PyList_SET_ITEM( const_list_3e2e61107e998903d9314df3dd21b68a_list, 3, const_str_plain_bdist ); Py_INCREF( const_str_plain_bdist );
    const_str_plain_bdist_dumb = UNSTREAM_STRING( &constant_bin[ 611168 ], 10, 1 );
    PyList_SET_ITEM( const_list_3e2e61107e998903d9314df3dd21b68a_list, 4, const_str_plain_bdist_dumb ); Py_INCREF( const_str_plain_bdist_dumb );
    const_str_plain_bdist_wininst = UNSTREAM_STRING( &constant_bin[ 611178 ], 13, 1 );
    PyList_SET_ITEM( const_list_3e2e61107e998903d9314df3dd21b68a_list, 5, const_str_plain_bdist_wininst ); Py_INCREF( const_str_plain_bdist_wininst );
    const_list_str_plain_payload_str_plain_dtype_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_payload_str_plain_dtype_list, 0, const_str_plain_payload ); Py_INCREF( const_str_plain_payload );
    PyList_SET_ITEM( const_list_str_plain_payload_str_plain_dtype_list, 1, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    const_str_digest_6a07cc2105aacb9d08c603b84c0dcbd6 = UNSTREAM_STRING( &constant_bin[ 611191 ], 66, 0 );
    const_str_plain___revision__ = UNSTREAM_STRING( &constant_bin[ 611257 ], 12, 1 );
    const_tuple_str_plain_a_str_plain_attr_str_plain_s_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_attr_str_plain_s_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_attr_str_plain_s_tuple, 1, const_str_plain_attr ); Py_INCREF( const_str_plain_attr );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_attr_str_plain_s_tuple, 2, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    const_list_str_digest_df5b4e65f0dfbb207f5be91274084dfe_list = PyList_New( 1 );
    const_str_digest_df5b4e65f0dfbb207f5be91274084dfe = UNSTREAM_STRING( &constant_bin[ 611191 ], 54, 0 );
    PyList_SET_ITEM( const_list_str_digest_df5b4e65f0dfbb207f5be91274084dfe_list, 0, const_str_digest_df5b4e65f0dfbb207f5be91274084dfe ); Py_INCREF( const_str_digest_df5b4e65f0dfbb207f5be91274084dfe );
    const_str_plain_test_na_writable_attributes_deletion = UNSTREAM_STRING( &constant_bin[ 611269 ], 36, 1 );
    const_str_digest_bd2a462e143c1bd414afc34dda151cbc = UNSTREAM_STRING( &constant_bin[ 611305 ], 54, 0 );
    const_list_0bbba11320c0bcdfde9b2eb40463de91_list = PyList_New( 14 );
    PyList_SET_ITEM( const_list_0bbba11320c0bcdfde9b2eb40463de91_list, 0, const_str_plain_build ); Py_INCREF( const_str_plain_build );
    PyList_SET_ITEM( const_list_0bbba11320c0bcdfde9b2eb40463de91_list, 1, const_str_plain_config_compiler ); Py_INCREF( const_str_plain_config_compiler );
    PyList_SET_ITEM( const_list_0bbba11320c0bcdfde9b2eb40463de91_list, 2, const_str_plain_config ); Py_INCREF( const_str_plain_config );
    PyList_SET_ITEM( const_list_0bbba11320c0bcdfde9b2eb40463de91_list, 3, const_str_plain_build_src ); Py_INCREF( const_str_plain_build_src );
    PyList_SET_ITEM( const_list_0bbba11320c0bcdfde9b2eb40463de91_list, 4, const_str_plain_build_py ); Py_INCREF( const_str_plain_build_py );
    PyList_SET_ITEM( const_list_0bbba11320c0bcdfde9b2eb40463de91_list, 5, const_str_plain_build_ext ); Py_INCREF( const_str_plain_build_ext );
    PyList_SET_ITEM( const_list_0bbba11320c0bcdfde9b2eb40463de91_list, 6, const_str_plain_build_clib ); Py_INCREF( const_str_plain_build_clib );
    PyList_SET_ITEM( const_list_0bbba11320c0bcdfde9b2eb40463de91_list, 7, const_str_plain_build_scripts ); Py_INCREF( const_str_plain_build_scripts );
    PyList_SET_ITEM( const_list_0bbba11320c0bcdfde9b2eb40463de91_list, 8, const_str_plain_install ); Py_INCREF( const_str_plain_install );
    PyList_SET_ITEM( const_list_0bbba11320c0bcdfde9b2eb40463de91_list, 9, const_str_plain_install_data ); Py_INCREF( const_str_plain_install_data );
    PyList_SET_ITEM( const_list_0bbba11320c0bcdfde9b2eb40463de91_list, 10, const_str_plain_install_headers ); Py_INCREF( const_str_plain_install_headers );
    PyList_SET_ITEM( const_list_0bbba11320c0bcdfde9b2eb40463de91_list, 11, const_str_plain_install_lib ); Py_INCREF( const_str_plain_install_lib );
    PyList_SET_ITEM( const_list_0bbba11320c0bcdfde9b2eb40463de91_list, 12, const_str_plain_bdist_rpm ); Py_INCREF( const_str_plain_bdist_rpm );
    PyList_SET_ITEM( const_list_0bbba11320c0bcdfde9b2eb40463de91_list, 13, const_str_plain_sdist ); Py_INCREF( const_str_plain_sdist );
    const_str_plain_NA = UNSTREAM_STRING( &constant_bin[ 17745 ], 2, 1 );
    const_str_digest_0158650dfc44404a1a17dc6b8d641053 = UNSTREAM_STRING( &constant_bin[ 611359 ], 94, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$distutils$command( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_2fc23e184b3838237b6df50eafd017b0;
static PyCodeObject *codeobj_e3112949ff45819a963335076cb3689d;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_6a07cc2105aacb9d08c603b84c0dcbd6 );
    codeobj_2fc23e184b3838237b6df50eafd017b0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_command, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e3112949ff45819a963335076cb3689d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_test_na_writable_attributes_deletion, 9, const_tuple_str_plain_a_str_plain_attr_str_plain_s_tuple, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_function_1_test_na_writable_attributes_deletion_of_numpy$distutils$command(  );


// The module function definitions.
static PyObject *impl_function_1_test_na_writable_attributes_deletion_of_numpy$distutils$command( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_a = NULL;
    PyObject *var_attr = NULL;
    PyObject *var_s = NULL;
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
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_e3112949ff45819a963335076cb3689d, module_numpy$distutils$command );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 10;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_NA );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 10;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_int_pos_2_tuple, 0 ) );

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto frame_exception_exit_1;
    }
    assert( var_a == NULL );
    var_a = tmp_assign_source_1;

    tmp_assign_source_2 = LIST_COPY( const_list_str_plain_payload_str_plain_dtype_list );
    assert( var_attr == NULL );
    var_attr = tmp_assign_source_2;

    tmp_iter_arg_1 = var_attr;

    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
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
            frame_function->f_lineno = 12;
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
        PyObject *old = var_s;
        var_s = tmp_assign_source_5;
        Py_INCREF( var_s );
        Py_XDECREF( old );
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command, (Nuitka_StringObject *)const_str_plain_assert_raises );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_assert_raises );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "assert_raises" );
        exception_tb = NULL;

        exception_lineno = 13;
        goto try_except_handler_2;
    }

    tmp_args_element_name_1 = PyExc_AttributeError;
    tmp_args_element_name_2 = LOOKUP_BUILTIN( const_str_plain_delattr );
    assert( tmp_args_element_name_2 != NULL );
    tmp_args_element_name_3 = var_a;

    tmp_args_element_name_4 = var_s;

    frame_function->f_lineno = 13;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_2, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
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
            if ( var_a )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_a,
                    var_a
                );

                assert( res == 0 );
            }

            if ( var_attr )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_attr,
                    var_attr
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_1_test_na_writable_attributes_deletion_of_numpy$distutils$command );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_a );
    Py_DECREF( var_a );
    var_a = NULL;

    CHECK_OBJECT( (PyObject *)var_attr );
    Py_DECREF( var_attr );
    var_attr = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

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

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_attr );
    var_attr = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1_test_na_writable_attributes_deletion_of_numpy$distutils$command );
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



static PyObject *MAKE_FUNCTION_function_1_test_na_writable_attributes_deletion_of_numpy$distutils$command(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_1_test_na_writable_attributes_deletion_of_numpy$distutils$command,
        const_str_plain_test_na_writable_attributes_deletion,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e3112949ff45819a963335076cb3689d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$distutils$command =
{
    PyModuleDef_HEAD_INIT,
    "numpy.distutils.command",   /* m_name */
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

MOD_INIT_DECL( numpy$distutils$command )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$distutils$command );
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

    // puts( "in initnumpy$distutils$command" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$distutils$command = Py_InitModule4(
        "numpy.distutils.command",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$distutils$command = PyModule_Create( &mdef_numpy$distutils$command );
#endif

    moduledict_numpy$distutils$command = (PyDictObject *)((PyModuleObject *)module_numpy$distutils$command)->md_dict;

    CHECK_OBJECT( module_numpy$distutils$command );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_e210b91a463ea74efc033215dbc8be45, module_numpy$distutils$command );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_numpy$distutils$command );

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
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_import_fromlist_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_level_1;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_modulename_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_right_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_0158650dfc44404a1a17dc6b8d641053;
    UPDATE_STRING_DICT0( moduledict_numpy$distutils$command, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_6a07cc2105aacb9d08c603b84c0dcbd6;
    UPDATE_STRING_DICT0( moduledict_numpy$distutils$command, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_df5b4e65f0dfbb207f5be91274084dfe_list );
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "division");
    UPDATE_STRING_DICT0( moduledict_numpy$distutils$command, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_4 );
    tmp_assign_source_5 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "absolute_import");
    UPDATE_STRING_DICT0( moduledict_numpy$distutils$command, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
    tmp_assign_source_6 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "print_function");
    UPDATE_STRING_DICT0( moduledict_numpy$distutils$command, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
    tmp_assign_source_7 = MAKE_FUNCTION_function_1_test_na_writable_attributes_deletion_of_numpy$distutils$command(  );
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command, (Nuitka_StringObject *)const_str_plain_test_na_writable_attributes_deletion, tmp_assign_source_7 );
    tmp_assign_source_8 = const_str_digest_bd2a462e143c1bd414afc34dda151cbc;
    UPDATE_STRING_DICT0( moduledict_numpy$distutils$command, (Nuitka_StringObject *)const_str_plain___revision__, tmp_assign_source_8 );
    tmp_assign_source_9 = LIST_COPY( const_list_3e2e61107e998903d9314df3dd21b68a_list );
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command, (Nuitka_StringObject *)const_str_plain_distutils_all, tmp_assign_source_9 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_2fc23e184b3838237b6df50eafd017b0, module_numpy$distutils$command );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_modulename_1 = const_str_digest_013fccb1bcdb116ccb4eb70c79ae1af2;
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$distutils$command)->md_dict;
    tmp_import_locals_1 = ((PyModuleObject *)module_numpy$distutils$command)->md_dict;
    tmp_import_fromlist_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command, (Nuitka_StringObject *)const_str_plain_distutils_all );

    if (unlikely( tmp_import_fromlist_1 == NULL ))
    {
        tmp_import_fromlist_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_distutils_all );
    }

    if ( tmp_import_fromlist_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "distutils_all" );
        exception_tb = NULL;

        exception_lineno = 27;
        goto frame_exception_exit_1;
    }

    tmp_import_level_1 = const_int_0;
    frame_module->f_lineno = 27;
    tmp_unused = IMPORT_MODULE( tmp_import_modulename_1, tmp_import_globals_1, tmp_import_locals_1, tmp_import_fromlist_1, tmp_import_level_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_left_name_1 = LIST_COPY( const_list_0bbba11320c0bcdfde9b2eb40463de91_list );
    tmp_right_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command, (Nuitka_StringObject *)const_str_plain_distutils_all );

    if (unlikely( tmp_right_name_1 == NULL ))
    {
        tmp_right_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_distutils_all );
    }

    if ( tmp_right_name_1 == NULL )
    {
        Py_DECREF( tmp_left_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "distutils_all" );
        exception_tb = NULL;

        exception_lineno = 43;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_10 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_10 );

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

    return MOD_RETURN_VALUE( module_numpy$distutils$command );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
