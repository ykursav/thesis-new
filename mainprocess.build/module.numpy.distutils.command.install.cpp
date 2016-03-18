// Generated code for Python source for module 'numpy.distutils.command.install'
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

// The _module_numpy$distutils$command$install is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_numpy$distutils$command$install;
PyDictObject *moduledict_numpy$distutils$command$install;

// The module constants used
extern PyObject *const_str_space;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_rstrip;
static PyObject *const_str_plain_setuptools_run;
static PyObject *const_str_plain_old_install_mod;
extern PyObject *const_str_plain_command;
extern PyObject *const_tuple_str_plain_install_tuple;
static PyObject *const_str_plain_do_egg_install;
extern PyObject *const_tuple_int_pos_3_tuple;
extern PyObject *const_str_plain_have_setuptools;
extern PyObject *const_str_plain__getframe;
extern PyObject *const_str_digest_1e4616cb2877c002aa48d41e8b575b32;
static PyObject *const_str_digest_20dbfbd7d7327a9c2c2bdb76a8e452fb;
extern PyObject *const_str_plain_run;
static PyObject *const_str_plain_co_name;
extern PyObject *const_str_digest_ac56091d2e235fc7ddd5932da1894382;
extern PyObject *const_str_plain_caller_name;
static PyObject *const_str_digest_f7977663ffae41eef9411681871aad75;
extern PyObject *const_dict_empty;
static PyObject *const_str_digest_41c69ae92fbe56a62cb275c9b1574b80;
extern PyObject *const_str_plain_setuptools;
extern PyObject *const_str_plain_finalize_options;
static PyObject *const_str_plain_old_and_unmanageable;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_record;
extern PyObject *const_tuple_str_plain_x_tuple;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_plain_caller_module;
static PyObject *const_str_digest_a8703742bcc498869be6fd278416f897;
extern PyObject *const_str_plain_lines;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_f_code;
extern PyObject *const_str_plain_install_libbase;
extern PyObject *const_int_0;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_single_version_externally_managed;
static PyObject *const_str_plain_distutils_install;
extern PyObject *const_str_digest_968a2c5a8a83699fcbdba0a370e3be67;
static PyObject *const_str_digest_6fa9ec9a4a6d5f19020ebbdd83dd21a5;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_execute;
extern PyObject *const_str_plain_install;
extern PyObject *const_str_plain_modules;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_empty;
static PyObject *const_tuple_de841d3596a4f263dbb1ae3e1a6cb0d2_tuple;
extern PyObject *const_str_plain_sub_commands;
static PyObject *const_tuple_str_plain___name___str_empty_tuple;
extern PyObject *const_str_plain_install_lib;
static PyObject *const_str_plain_need_rewrite;
extern PyObject *const_str_plain_f_globals;
extern PyObject *const_str_plain_l;
extern PyObject *const_int_pos_3;
static PyObject *const_str_plain_run_commands;
static PyObject *const_str_digest_320d641098edd80f3d3675346242667b;
extern PyObject *const_str_plain_append;
static PyObject *const_tuple_str_plain_write_file_tuple;
static PyObject *const_tuple_dea7efd441d106639fc364a523847185_tuple;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_f;
extern PyObject *const_str_plain_install_clib;
extern PyObject *const_str_plain_close;
static PyObject *const_str_plain_old_install;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_print_function;
static PyObject *const_str_plain_write_file;
static PyObject *const_str_plain_caller;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain_r;
extern PyObject *const_str_angle_lambda;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_setuptools_run = UNSTREAM_STRING( &constant_bin[ 625572 ], 14, 1 );
    const_str_plain_old_install_mod = UNSTREAM_STRING( &constant_bin[ 625586 ], 15, 1 );
    const_str_plain_do_egg_install = UNSTREAM_STRING( &constant_bin[ 625601 ], 14, 1 );
    const_str_digest_20dbfbd7d7327a9c2c2bdb76a8e452fb = UNSTREAM_STRING( &constant_bin[ 625615 ], 204, 0 );
    const_str_plain_co_name = UNSTREAM_STRING( &constant_bin[ 327339 ], 7, 1 );
    const_str_digest_f7977663ffae41eef9411681871aad75 = UNSTREAM_STRING( &constant_bin[ 625819 ], 65, 0 );
    const_str_digest_41c69ae92fbe56a62cb275c9b1574b80 = UNSTREAM_STRING( &constant_bin[ 625884 ], 31, 0 );
    const_str_plain_old_and_unmanageable = UNSTREAM_STRING( &constant_bin[ 625915 ], 20, 1 );
    const_str_plain_caller_module = UNSTREAM_STRING( &constant_bin[ 625935 ], 13, 1 );
    const_str_digest_a8703742bcc498869be6fd278416f897 = UNSTREAM_STRING( &constant_bin[ 625948 ], 42, 0 );
    const_str_plain_single_version_externally_managed = UNSTREAM_STRING( &constant_bin[ 625990 ], 33, 1 );
    const_str_plain_distutils_install = UNSTREAM_STRING( &constant_bin[ 626023 ], 17, 1 );
    const_str_digest_6fa9ec9a4a6d5f19020ebbdd83dd21a5 = UNSTREAM_STRING( &constant_bin[ 625890 ], 25, 0 );
    const_str_plain_execute = UNSTREAM_STRING( &constant_bin[ 21211 ], 7, 1 );
    const_tuple_de841d3596a4f263dbb1ae3e1a6cb0d2_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_de841d3596a4f263dbb1ae3e1a6cb0d2_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_de841d3596a4f263dbb1ae3e1a6cb0d2_tuple, 1, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    PyTuple_SET_ITEM( const_tuple_de841d3596a4f263dbb1ae3e1a6cb0d2_tuple, 2, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    PyTuple_SET_ITEM( const_tuple_de841d3596a4f263dbb1ae3e1a6cb0d2_tuple, 3, const_str_plain_lines ); Py_INCREF( const_str_plain_lines );
    const_str_plain_need_rewrite = UNSTREAM_STRING( &constant_bin[ 626040 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_de841d3596a4f263dbb1ae3e1a6cb0d2_tuple, 4, const_str_plain_need_rewrite ); Py_INCREF( const_str_plain_need_rewrite );
    PyTuple_SET_ITEM( const_tuple_de841d3596a4f263dbb1ae3e1a6cb0d2_tuple, 5, const_str_plain_l ); Py_INCREF( const_str_plain_l );
    const_tuple_str_plain___name___str_empty_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain___name___str_empty_tuple, 0, const_str_plain___name__ ); Py_INCREF( const_str_plain___name__ );
    PyTuple_SET_ITEM( const_tuple_str_plain___name___str_empty_tuple, 1, const_str_empty ); Py_INCREF( const_str_empty );
    const_str_plain_run_commands = UNSTREAM_STRING( &constant_bin[ 626052 ], 12, 1 );
    const_str_digest_320d641098edd80f3d3675346242667b = UNSTREAM_STRING( &constant_bin[ 626064 ], 26, 0 );
    const_tuple_str_plain_write_file_tuple = PyTuple_New( 1 );
    const_str_plain_write_file = UNSTREAM_STRING( &constant_bin[ 626090 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_write_file_tuple, 0, const_str_plain_write_file ); Py_INCREF( const_str_plain_write_file );
    const_tuple_dea7efd441d106639fc364a523847185_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_dea7efd441d106639fc364a523847185_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_dea7efd441d106639fc364a523847185_tuple, 1, const_str_plain_distutils_install ); Py_INCREF( const_str_plain_distutils_install );
    const_str_plain_caller = UNSTREAM_STRING( &constant_bin[ 625935 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_dea7efd441d106639fc364a523847185_tuple, 2, const_str_plain_caller ); Py_INCREF( const_str_plain_caller );
    PyTuple_SET_ITEM( const_tuple_dea7efd441d106639fc364a523847185_tuple, 3, const_str_plain_caller_module ); Py_INCREF( const_str_plain_caller_module );
    PyTuple_SET_ITEM( const_tuple_dea7efd441d106639fc364a523847185_tuple, 4, const_str_plain_caller_name ); Py_INCREF( const_str_plain_caller_name );
    const_str_plain_old_install = UNSTREAM_STRING( &constant_bin[ 625586 ], 11, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$distutils$command$install( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_08cc5a4617424d74dcc2d33b28897405;
static PyCodeObject *codeobj_7575d9ace2524912b0607563ef4a41a5;
static PyCodeObject *codeobj_e79bd9415de8bc265fbb8c86a2a47f53;
static PyCodeObject *codeobj_57dcdbf6e88d9f054bb1028ffcae2d41;
static PyCodeObject *codeobj_d71eddcf40de87ee53971dbc2b930e5a;
static PyCodeObject *codeobj_56b4e29a8d69f4ff0d4bbddc046ebf1a;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_f7977663ffae41eef9411681871aad75 );
    codeobj_08cc5a4617424d74dcc2d33b28897405 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 19, const_tuple_str_plain_x_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7575d9ace2524912b0607563ef4a41a5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_finalize_options, 22, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e79bd9415de8bc265fbb8c86a2a47f53 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_install, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_57dcdbf6e88d9f054bb1028ffcae2d41 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_install, 14, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d71eddcf40de87ee53971dbc2b930e5a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_run, 58, const_tuple_de841d3596a4f263dbb1ae3e1a6cb0d2_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_56b4e29a8d69f4ff0d4bbddc046ebf1a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_setuptools_run, 26, const_tuple_dea7efd441d106639fc364a523847185_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_install_of_numpy$distutils$command$install( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_function_1_lambda_of_class_1_install_of_numpy$distutils$command$install(  );


static PyObject *MAKE_FUNCTION_function_2_finalize_options_of_class_1_install_of_numpy$distutils$command$install(  );


static PyObject *MAKE_FUNCTION_function_3_setuptools_run_of_class_1_install_of_numpy$distutils$command$install(  );


static PyObject *MAKE_FUNCTION_function_4_run_of_class_1_install_of_numpy$distutils$command$install(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_install_of_numpy$distutils$command$install( PyObject **python_pars )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *var___module__ = NULL;
    PyObject *var_sub_commands = NULL;
    PyObject *var_finalize_options = NULL;
    PyObject *var_setuptools_run = NULL;
    PyObject *var_run = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_frame_locals;
    PyObject *tmp_left_name_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_41c69ae92fbe56a62cb275c9b1574b80;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_57dcdbf6e88d9f054bb1028ffcae2d41, module_numpy$distutils$command$install );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$install, (Nuitka_StringObject *)const_str_plain_old_install );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_old_install );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "old_install" );
        exception_tb = NULL;

        exception_lineno = 18;
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sub_commands );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = PyList_New( 1 );
    tmp_list_element_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_str_plain_install_clib;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_list_element_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = MAKE_FUNCTION_function_1_lambda_of_class_1_install_of_numpy$distutils$command$install(  );
    PyTuple_SET_ITEM( tmp_list_element_1, 1, tmp_tuple_element_1 );
    PyList_SET_ITEM( tmp_right_name_1, 0, tmp_list_element_1 );
    tmp_assign_source_2 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        goto frame_exception_exit_1;
    }
    assert( var_sub_commands == NULL );
    var_sub_commands = tmp_assign_source_2;


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

            if ( var_sub_commands )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_sub_commands,
                    var_sub_commands
                );

                assert( res == 0 );
            }

            if ( var_finalize_options )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_finalize_options,
                    var_finalize_options
                );

                assert( res == 0 );
            }

            if ( var_setuptools_run )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_setuptools_run,
                    var_setuptools_run
                );

                assert( res == 0 );
            }

            if ( var_run )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_run,
                    var_run
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

    tmp_assign_source_3 = MAKE_FUNCTION_function_2_finalize_options_of_class_1_install_of_numpy$distutils$command$install(  );
    assert( var_finalize_options == NULL );
    var_finalize_options = tmp_assign_source_3;

    tmp_assign_source_4 = MAKE_FUNCTION_function_3_setuptools_run_of_class_1_install_of_numpy$distutils$command$install(  );
    assert( var_setuptools_run == NULL );
    var_setuptools_run = tmp_assign_source_4;

    tmp_assign_source_5 = MAKE_FUNCTION_function_4_run_of_class_1_install_of_numpy$distutils$command$install(  );
    assert( var_run == NULL );
    var_run = tmp_assign_source_5;

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

    if ( var_sub_commands )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_sub_commands,
            var_sub_commands
        );

        assert( res == 0 );
    }

    if ( var_finalize_options )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_finalize_options,
            var_finalize_options
        );

        assert( res == 0 );
    }

    if ( var_setuptools_run )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_setuptools_run,
            var_setuptools_run
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

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_1_install_of_numpy$distutils$command$install );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var_sub_commands );
    Py_DECREF( var_sub_commands );
    var_sub_commands = NULL;

    CHECK_OBJECT( (PyObject *)var_finalize_options );
    Py_DECREF( var_finalize_options );
    var_finalize_options = NULL;

    CHECK_OBJECT( (PyObject *)var_setuptools_run );
    Py_DECREF( var_setuptools_run );
    var_setuptools_run = NULL;

    CHECK_OBJECT( (PyObject *)var_run );
    Py_DECREF( var_run );
    var_run = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_1_install_of_numpy$distutils$command$install );
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


static PyObject *impl_function_1_lambda_of_class_1_install_of_numpy$distutils$command$install( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_True;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_1_lambda_of_class_1_install_of_numpy$distutils$command$install );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1_lambda_of_class_1_install_of_numpy$distutils$command$install );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_function_2_finalize_options_of_class_1_install_of_numpy$distutils$command$install( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_7575d9ace2524912b0607563ef4a41a5, module_numpy$distutils$command$install );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$install, (Nuitka_StringObject *)const_str_plain_old_install );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_old_install );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "old_install" );
        exception_tb = NULL;

        exception_lineno = 23;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_finalize_options );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_self;

    frame_function->f_lineno = 23;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_2 = par_self;

    tmp_assattr_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_install_libbase );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_install_lib, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 24;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );

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

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_2_finalize_options_of_class_1_install_of_numpy$distutils$command$install );
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
    NUITKA_CANNOT_GET_HERE( function_2_finalize_options_of_class_1_install_of_numpy$distutils$command$install );
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


static PyObject *impl_function_3_setuptools_run_of_class_1_install_of_numpy$distutils$command$install( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_distutils_install = NULL;
    PyObject *var_caller = NULL;
    PyObject *var_caller_module = NULL;
    PyObject *var_caller_name = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_name_from_1;
    int tmp_or_left_truth_1;
    int tmp_or_left_truth_2;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_left_value_2;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_or_right_value_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_56b4e29a8d69f4ff0d4bbddc046ebf1a, module_numpy$distutils$command$install );
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
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$distutils$command$install)->md_dict;
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

    if ( var_distutils_install )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_distutils_install,
            var_distutils_install
        );

        assert( res == 0 );
    }

    if ( var_caller )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_caller,
            var_caller
        );

        assert( res == 0 );
    }

    if ( var_caller_module )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_caller_module,
            var_caller_module
        );

        assert( res == 0 );
    }

    if ( var_caller_name )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_caller_name,
            var_caller_name
        );

        assert( res == 0 );
    }

    frame_function->f_lineno = 32;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_6fa9ec9a4a6d5f19020ebbdd83dd21a5, tmp_import_globals_1, tmp_import_locals_1, const_tuple_str_plain_install_tuple, const_int_0 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_install );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        goto frame_exception_exit_1;
    }
    assert( var_distutils_install == NULL );
    var_distutils_install = tmp_assign_source_1;

    tmp_source_name_1 = par_self;

    tmp_or_left_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_old_and_unmanageable );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 35;
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
    Py_DECREF( tmp_or_left_value_1 );
    tmp_source_name_2 = par_self;

    tmp_or_right_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_single_version_externally_managed );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_cond_value_1 = tmp_or_left_value_1;
    or_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 35;
        goto frame_exception_exit_1;
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
    tmp_source_name_3 = var_distutils_install;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_run );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_self;

    frame_function->f_lineno = 36;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$install, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 46;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__getframe );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 46;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_int_pos_3_tuple, 0 ) );

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        goto frame_exception_exit_1;
    }
    assert( var_caller == NULL );
    var_caller = tmp_assign_source_2;

    tmp_source_name_6 = var_caller;

    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_f_globals );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_get );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 47;
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_str_plain___name___str_empty_tuple, 0 ) );

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        goto frame_exception_exit_1;
    }
    assert( var_caller_module == NULL );
    var_caller_module = tmp_assign_source_3;

    tmp_source_name_8 = var_caller;

    tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_f_code );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_co_name );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        goto frame_exception_exit_1;
    }
    assert( var_caller_name == NULL );
    var_caller_name = tmp_assign_source_4;

    tmp_compexpr_left_1 = var_caller_module;

    tmp_compexpr_right_1 = const_str_digest_968a2c5a8a83699fcbdba0a370e3be67;
    tmp_or_left_value_2 = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_or_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
    if ( tmp_or_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_2 );

        exception_lineno = 50;
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_2 == 1 )
    {
        goto or_left_2;
    }
    else
    {
        goto or_right_2;
    }
    or_right_2:;
    Py_DECREF( tmp_or_left_value_2 );
    tmp_compexpr_left_2 = var_caller_name;

    tmp_compexpr_right_2 = const_str_plain_run_commands;
    tmp_or_right_value_2 = RICH_COMPARE_NE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_or_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        goto frame_exception_exit_1;
    }
    tmp_cond_value_2 = tmp_or_right_value_2;
    goto or_end_2;
    or_left_2:;
    tmp_cond_value_2 = tmp_or_left_value_2;
    or_end_2:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 50;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_9 = var_distutils_install;

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_run );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_self;

    frame_function->f_lineno = 54;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_10 = par_self;

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_do_egg_install );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 56;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_name_5 );
    Py_DECREF( tmp_called_name_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_end_2:;

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

            if ( var_distutils_install )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_distutils_install,
                    var_distutils_install
                );

                assert( res == 0 );
            }

            if ( var_caller )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_caller,
                    var_caller
                );

                assert( res == 0 );
            }

            if ( var_caller_module )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_caller_module,
                    var_caller_module
                );

                assert( res == 0 );
            }

            if ( var_caller_name )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_caller_name,
                    var_caller_name
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
    NUITKA_CANNOT_GET_HERE( function_3_setuptools_run_of_class_1_install_of_numpy$distutils$command$install );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_distutils_install );
    Py_DECREF( var_distutils_install );
    var_distutils_install = NULL;

    Py_XDECREF( var_caller );
    var_caller = NULL;

    Py_XDECREF( var_caller_module );
    var_caller_module = NULL;

    Py_XDECREF( var_caller_name );
    var_caller_name = NULL;

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

    Py_XDECREF( var_distutils_install );
    var_distutils_install = NULL;

    Py_XDECREF( var_caller );
    var_caller = NULL;

    Py_XDECREF( var_caller_module );
    var_caller_module = NULL;

    Py_XDECREF( var_caller_name );
    var_caller_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_3_setuptools_run_of_class_1_install_of_numpy$distutils$command$install );
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


static PyObject *impl_function_4_run_of_class_1_install_of_numpy$distutils$command$install( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_r = NULL;
    PyObject *var_f = NULL;
    PyObject *var_lines = NULL;
    PyObject *var_need_rewrite = NULL;
    PyObject *var_l = NULL;
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
    PyObject *tmp_args_element_name_5;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_next_source_1;
    PyObject *tmp_open_filename_1;
    PyObject *tmp_open_mode_1;
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
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_d71eddcf40de87ee53971dbc2b930e5a, module_numpy$distutils$command$install );
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
    tmp_cond_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$install, (Nuitka_StringObject *)const_str_plain_have_setuptools );

    if (unlikely( tmp_cond_value_1 == NULL ))
    {
        tmp_cond_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_have_setuptools );
    }

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "have_setuptools" );
        exception_tb = NULL;

        exception_lineno = 59;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$install, (Nuitka_StringObject *)const_str_plain_old_install );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_old_install );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "old_install" );
        exception_tb = NULL;

        exception_lineno = 60;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_run );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_self;

    frame_function->f_lineno = 60;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        goto frame_exception_exit_1;
    }
    assert( var_r == NULL );
    var_r = tmp_assign_source_1;

    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_2 = par_self;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_setuptools_run );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 62;
    tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        goto frame_exception_exit_1;
    }
    assert( var_r == NULL );
    var_r = tmp_assign_source_2;

    branch_end_1:;
    tmp_source_name_3 = par_self;

    tmp_cond_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_record );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 63;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_4 = par_self;

    tmp_open_filename_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_record );
    if ( tmp_open_filename_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        goto frame_exception_exit_1;
    }
    tmp_open_mode_1 = const_str_plain_r;
    tmp_assign_source_3 = BUILTIN_OPEN( tmp_open_filename_1, tmp_open_mode_1, NULL );
    Py_DECREF( tmp_open_filename_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        goto frame_exception_exit_1;
    }
    assert( var_f == NULL );
    var_f = tmp_assign_source_3;

    tmp_assign_source_4 = PyList_New( 0 );
    assert( var_lines == NULL );
    var_lines = tmp_assign_source_4;

    tmp_assign_source_5 = Py_False;
    assert( var_need_rewrite == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_need_rewrite = tmp_assign_source_5;

    tmp_iter_arg_1 = var_f;

    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_6;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_7 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 70;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_assign_source_8 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_l;
        var_l = tmp_assign_source_8;
        Py_INCREF( var_l );
        Py_XDECREF( old );
    }

    tmp_source_name_5 = var_l;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_rstrip );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 71;
    tmp_assign_source_9 = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
    Py_DECREF( tmp_called_name_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_l;
        assert( old != NULL );
        var_l = tmp_assign_source_9;
        Py_DECREF( old );
    }

    tmp_compare_left_1 = const_str_space;
    tmp_compare_right_1 = var_l;

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_10 = Py_True;
    {
        PyObject *old = var_need_rewrite;
        var_need_rewrite = tmp_assign_source_10;
        Py_INCREF( var_need_rewrite );
        Py_XDECREF( old );
    }

    tmp_left_name_1 = const_str_digest_1e4616cb2877c002aa48d41e8b575b32;
    tmp_right_name_1 = var_l;

    tmp_assign_source_11 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_l;
        assert( old != NULL );
        var_l = tmp_assign_source_11;
        Py_DECREF( old );
    }

    branch_no_3:;
    tmp_source_name_6 = var_lines;

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_append );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        goto try_except_handler_2;
    }
    tmp_args_element_name_2 = var_l;

    frame_function->f_lineno = 75;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
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

    tmp_source_name_7 = var_f;

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_close );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 76;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_name_5 );
    Py_DECREF( tmp_called_name_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_cond_value_3 = var_need_rewrite;

    if ( tmp_cond_value_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "need_rewrite" );
        exception_tb = NULL;

        exception_lineno = 77;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_source_name_8 = par_self;

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_execute );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$install, (Nuitka_StringObject *)const_str_plain_write_file );

    if (unlikely( tmp_args_element_name_3 == NULL ))
    {
        tmp_args_element_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_write_file );
    }

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "write_file" );
        exception_tb = NULL;

        exception_lineno = 78;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = PyTuple_New( 2 );
    tmp_source_name_9 = par_self;

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_record );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_4 );

        exception_lineno = 79;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_element_name_4, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_lines;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_4, 1, tmp_tuple_element_1 );
    tmp_left_name_2 = const_str_digest_a8703742bcc498869be6fd278416f897;
    tmp_source_name_10 = par_self;

    tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_record );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_4 );

        exception_lineno = 81;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_4 );

        exception_lineno = 80;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 81;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_element_name_4 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_4:;
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

            if ( var_r )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_r,
                    var_r
                );

                assert( res == 0 );
            }

            if ( var_f )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_f,
                    var_f
                );

                assert( res == 0 );
            }

            if ( var_lines )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_lines,
                    var_lines
                );

                assert( res == 0 );
            }

            if ( var_need_rewrite )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_need_rewrite,
                    var_need_rewrite
                );

                assert( res == 0 );
            }

            if ( var_l )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_l,
                    var_l
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

    tmp_return_value = var_r;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( function_4_run_of_class_1_install_of_numpy$distutils$command$install );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_r );
    Py_DECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_f );
    var_f = NULL;

    Py_XDECREF( var_lines );
    var_lines = NULL;

    Py_XDECREF( var_need_rewrite );
    var_need_rewrite = NULL;

    Py_XDECREF( var_l );
    var_l = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_f );
    var_f = NULL;

    Py_XDECREF( var_lines );
    var_lines = NULL;

    Py_XDECREF( var_need_rewrite );
    var_need_rewrite = NULL;

    Py_XDECREF( var_l );
    var_l = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_4_run_of_class_1_install_of_numpy$distutils$command$install );
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



static PyObject *MAKE_FUNCTION_function_1_lambda_of_class_1_install_of_numpy$distutils$command$install(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_1_lambda_of_class_1_install_of_numpy$distutils$command$install,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_08cc5a4617424d74dcc2d33b28897405,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$install,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_finalize_options_of_class_1_install_of_numpy$distutils$command$install(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_2_finalize_options_of_class_1_install_of_numpy$distutils$command$install,
        const_str_plain_finalize_options,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7575d9ace2524912b0607563ef4a41a5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$install,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_setuptools_run_of_class_1_install_of_numpy$distutils$command$install(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_3_setuptools_run_of_class_1_install_of_numpy$distutils$command$install,
        const_str_plain_setuptools_run,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_56b4e29a8d69f4ff0d4bbddc046ebf1a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$install,
        const_str_digest_20dbfbd7d7327a9c2c2bdb76a8e452fb
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_run_of_class_1_install_of_numpy$distutils$command$install(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_4_run_of_class_1_install_of_numpy$distutils$command$install,
        const_str_plain_run,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d71eddcf40de87ee53971dbc2b930e5a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$install,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$distutils$command$install =
{
    PyModuleDef_HEAD_INIT,
    "numpy.distutils.command.install",   /* m_name */
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

MOD_INIT_DECL( numpy$distutils$command$install )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$distutils$command$install );
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

    // puts( "in initnumpy$distutils$command$install" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$distutils$command$install = Py_InitModule4(
        "numpy.distutils.command.install",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$distutils$command$install = PyModule_Create( &mdef_numpy$distutils$command$install );
#endif

    moduledict_numpy$distutils$command$install = (PyDictObject *)((PyModuleObject *)module_numpy$distutils$command$install)->md_dict;

    CHECK_OBJECT( module_numpy$distutils$command$install );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_41c69ae92fbe56a62cb275c9b1574b80, module_numpy$distutils$command$install );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_numpy$distutils$command$install );

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
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_assign_source_16;
    PyObject *tmp_assign_source_17;
    PyObject *tmp_bases_name_1;
    PyObject *tmp_called_name_1;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_key_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_numpy$distutils$command$install, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_f7977663ffae41eef9411681871aad75;
    UPDATE_STRING_DICT0( moduledict_numpy$distutils$command$install, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "division");
    UPDATE_STRING_DICT0( moduledict_numpy$distutils$command$install, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_assign_source_4 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "absolute_import");
    UPDATE_STRING_DICT0( moduledict_numpy$distutils$command$install, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    tmp_assign_source_5 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "print_function");
    UPDATE_STRING_DICT0( moduledict_numpy$distutils$command$install, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_5 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_e79bd9415de8bc265fbb8c86a2a47f53, module_numpy$distutils$command$install );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$distutils$command$install)->md_dict;
    frame_module->f_lineno = 3;
    tmp_assign_source_6 = IMPORT_MODULE( const_str_plain_sys, tmp_import_globals_1, tmp_import_globals_1, Py_None, const_int_0 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$install, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_6 );
    tmp_compare_left_1 = const_str_plain_setuptools;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$install, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 4;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_modules );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;
        goto frame_exception_exit_1;
    }
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    assert( !(tmp_cmp_In_1 == -1) );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$distutils$command$install)->md_dict;
    frame_module->f_lineno = 5;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_digest_320d641098edd80f3d3675346242667b, tmp_import_globals_2, tmp_import_globals_2, Py_None, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto frame_exception_exit_1;
    }
    tmp_import_name_from_1 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_command );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_install );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$install, (Nuitka_StringObject *)const_str_plain_old_install_mod, tmp_assign_source_7 );
    tmp_assign_source_8 = Py_True;
    UPDATE_STRING_DICT0( moduledict_numpy$distutils$command$install, (Nuitka_StringObject *)const_str_plain_have_setuptools, tmp_assign_source_8 );
    goto branch_end_1;
    branch_no_1:;
    tmp_import_globals_3 = ((PyModuleObject *)module_numpy$distutils$command$install)->md_dict;
    frame_module->f_lineno = 8;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_digest_6fa9ec9a4a6d5f19020ebbdd83dd21a5, tmp_import_globals_3, tmp_import_globals_3, Py_None, const_int_0 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto frame_exception_exit_1;
    }
    tmp_import_name_from_3 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_command );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_install );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$install, (Nuitka_StringObject *)const_str_plain_old_install_mod, tmp_assign_source_9 );
    tmp_assign_source_10 = Py_False;
    UPDATE_STRING_DICT0( moduledict_numpy$distutils$command$install, (Nuitka_StringObject *)const_str_plain_have_setuptools, tmp_assign_source_10 );
    branch_end_1:;
    tmp_import_globals_4 = ((PyModuleObject *)module_numpy$distutils$command$install)->md_dict;
    frame_module->f_lineno = 10;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_digest_ac56091d2e235fc7ddd5932da1894382, tmp_import_globals_4, tmp_import_globals_4, const_tuple_str_plain_write_file_tuple, const_int_0 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_write_file );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$install, (Nuitka_StringObject *)const_str_plain_write_file, tmp_assign_source_11 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$install, (Nuitka_StringObject *)const_str_plain_old_install_mod );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_old_install_mod );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "old_install_mod" );
        exception_tb = NULL;

        exception_lineno = 12;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_12 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_install );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$install, (Nuitka_StringObject *)const_str_plain_old_install, tmp_assign_source_12 );
    // Tried code:
    tmp_assign_source_13 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$install, (Nuitka_StringObject *)const_str_plain_old_install );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_old_install );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "old_install" );
        exception_tb = NULL;

        exception_lineno = 14;
        goto try_except_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_13;

    tmp_assign_source_14 = impl_class_1_install_of_numpy$distutils$command$install( NULL );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_14;

    tmp_compare_left_2 = const_str_plain___metaclass__;
    tmp_compare_right_2 = tmp_class_creation_1__class_dict;

    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    assert( !(tmp_cmp_In_2 == -1) );
    if ( tmp_cmp_In_2 == 1 )
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
    tmp_assign_source_15 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto try_except_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_bases_name_1 = tmp_class_creation_1__bases;

    tmp_assign_source_15 = SELECT_METACLASS( tmp_bases_name_1, GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$install, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_15;

    tmp_called_name_1 = tmp_class_creation_1__metaclass;

    tmp_args_element_name_1 = const_str_plain_install;
    tmp_args_element_name_2 = tmp_class_creation_1__bases;

    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    frame_module->f_lineno = 14;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_16;

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
    tmp_assign_source_17 = tmp_class_creation_1__class;

    UPDATE_STRING_DICT0( moduledict_numpy$distutils$command$install, (Nuitka_StringObject *)const_str_plain_install, tmp_assign_source_17 );
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


    return MOD_RETURN_VALUE( module_numpy$distutils$command$install );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
