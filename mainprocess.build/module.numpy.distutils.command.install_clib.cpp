// Generated code for Python source for module 'numpy.distutils.command.install_clib'
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

// The _module_numpy$distutils$command$install_clib is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_numpy$distutils$command$install_clib;
PyDictObject *moduledict_numpy$distutils$command$install_clib;

// The module constants used
static PyObject *const_str_plain_build_clib_cmd;
static PyObject *const_dict_abea38abcd8b956042e5a077284ccd4c;
static PyObject *const_tuple_f35bfabf838ce5f2f5202774291fa69e_tuple;
extern PyObject *const_str_plain_target_dir;
extern PyObject *const_str_plain_install_lib;
static PyObject *const_str_digest_2d7bdceec2aacf934a68463f11758bb2;
extern PyObject *const_str_plain_run;
extern PyObject *const_str_plain_build_clib;
extern PyObject *const_str_plain_customize;
extern PyObject *const_str_plain_initialize_options;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_get_cmd;
extern PyObject *const_str_plain_finalize_options;
extern PyObject *const_str_plain_new_compiler;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_tuple_empty;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_set_undefined_options;
extern PyObject *const_str_plain_path;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_mkpath;
extern PyObject *const_str_plain_user_options;
extern PyObject *const_str_plain_os;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_compiler;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_get_outputs;
extern PyObject *const_str_plain_l;
extern PyObject *const_str_plain_outfiles;
static PyObject *const_tuple_str_plain_get_cmd_tuple;
extern PyObject *const_str_digest_ec8a3e4dce79fe85170ca4f1784c494d;
extern PyObject *const_str_plain_library_filename;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_install_dir;
extern PyObject *const_tuple_str_plain_build_clib_tuple;
extern PyObject *const_str_plain_distribution;
extern PyObject *const_str_digest_c979cab178c2e1f803369c019017501c;
extern PyObject *const_str_plain_install;
extern PyObject *const_str_plain_description;
extern PyObject *const_tuple_str_plain_Command_tuple;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_digest_6d315605648e433b0f5827b4d0f11ccf;
extern PyObject *const_str_plain_copy_file;
extern PyObject *const_str_plain_installed_libraries;
static PyObject *const_tuple_661bd06ee9d4ea0ba469fa53ab538929_tuple;
extern PyObject *const_str_plain_build_dir;
extern PyObject *const_str_plain_append;
static PyObject *const_str_digest_9e3c6235d45bb96b1dd7331bbf54635c;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_install_clib;
extern PyObject *const_tuple_str_plain_install_lib_str_plain_install_dir_tuple;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_source;
extern PyObject *const_str_plain_Command;
static PyObject *const_str_digest_29d7b4e419745841adebc03526e69496;
extern PyObject *const_tuple_str_plain_new_compiler_tuple;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_build_clib_cmd = UNSTREAM_STRING( &constant_bin[ 626100 ], 14, 1 );
    const_dict_abea38abcd8b956042e5a077284ccd4c = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_abea38abcd8b956042e5a077284ccd4c, const_str_plain_compiler, Py_None );
    assert( PyDict_Size( const_dict_abea38abcd8b956042e5a077284ccd4c ) == 1 );
    const_tuple_f35bfabf838ce5f2f5202774291fa69e_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_f35bfabf838ce5f2f5202774291fa69e_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_f35bfabf838ce5f2f5202774291fa69e_tuple, 1, const_str_plain_build_clib_cmd ); Py_INCREF( const_str_plain_build_clib_cmd );
    PyTuple_SET_ITEM( const_tuple_f35bfabf838ce5f2f5202774291fa69e_tuple, 2, const_str_plain_build_dir ); Py_INCREF( const_str_plain_build_dir );
    PyTuple_SET_ITEM( const_tuple_f35bfabf838ce5f2f5202774291fa69e_tuple, 3, const_str_plain_compiler ); Py_INCREF( const_str_plain_compiler );
    PyTuple_SET_ITEM( const_tuple_f35bfabf838ce5f2f5202774291fa69e_tuple, 4, const_str_plain_l ); Py_INCREF( const_str_plain_l );
    PyTuple_SET_ITEM( const_tuple_f35bfabf838ce5f2f5202774291fa69e_tuple, 5, const_str_plain_target_dir ); Py_INCREF( const_str_plain_target_dir );
    PyTuple_SET_ITEM( const_tuple_f35bfabf838ce5f2f5202774291fa69e_tuple, 6, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_f35bfabf838ce5f2f5202774291fa69e_tuple, 7, const_str_plain_source ); Py_INCREF( const_str_plain_source );
    const_str_digest_2d7bdceec2aacf934a68463f11758bb2 = UNSTREAM_STRING( &constant_bin[ 626114 ], 70, 0 );
    const_tuple_str_plain_get_cmd_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_get_cmd_tuple, 0, const_str_plain_get_cmd ); Py_INCREF( const_str_plain_get_cmd );
    const_tuple_661bd06ee9d4ea0ba469fa53ab538929_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_661bd06ee9d4ea0ba469fa53ab538929_tuple, 0, const_str_plain_install ); Py_INCREF( const_str_plain_install );
    PyTuple_SET_ITEM( const_tuple_661bd06ee9d4ea0ba469fa53ab538929_tuple, 1, const_tuple_str_plain_install_lib_str_plain_install_dir_tuple ); Py_INCREF( const_tuple_str_plain_install_lib_str_plain_install_dir_tuple );
    const_str_digest_9e3c6235d45bb96b1dd7331bbf54635c = UNSTREAM_STRING( &constant_bin[ 626184 ], 36, 0 );
    const_str_digest_29d7b4e419745841adebc03526e69496 = UNSTREAM_STRING( &constant_bin[ 626220 ], 42, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$distutils$command$install_clib( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_f32b0d0782bc00e7aec664da72060607;
static PyCodeObject *codeobj_fcd2191ac5d7bfd2ad7ffb8d3cb7c38a;
static PyCodeObject *codeobj_eabb28f62e49b92d30f0fbe52e3caebd;
static PyCodeObject *codeobj_fedad5578a6c3a7456a5af1470d53d46;
static PyCodeObject *codeobj_7413f2fab89cec7c4e62a6d8e0c5d271;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_2d7bdceec2aacf934a68463f11758bb2 );
    codeobj_f32b0d0782bc00e7aec664da72060607 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_finalize_options, 17, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_fcd2191ac5d7bfd2ad7ffb8d3cb7c38a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_outputs, 38, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_eabb28f62e49b92d30f0fbe52e3caebd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_initialize_options, 13, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_fedad5578a6c3a7456a5af1470d53d46 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_install_clib, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7413f2fab89cec7c4e62a6d8e0c5d271 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_run, 20, const_tuple_f35bfabf838ce5f2f5202774291fa69e_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_install_clib_of_numpy$distutils$command$install_clib( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_function_1_initialize_options_of_class_1_install_clib_of_numpy$distutils$command$install_clib(  );


static PyObject *MAKE_FUNCTION_function_2_finalize_options_of_class_1_install_clib_of_numpy$distutils$command$install_clib(  );


static PyObject *MAKE_FUNCTION_function_3_run_of_class_1_install_clib_of_numpy$distutils$command$install_clib(  );


static PyObject *MAKE_FUNCTION_function_4_get_outputs_of_class_1_install_clib_of_numpy$distutils$command$install_clib(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_install_clib_of_numpy$distutils$command$install_clib( PyObject **python_pars )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *var___module__ = NULL;
    PyObject *var_description = NULL;
    PyObject *var_user_options = NULL;
    PyObject *var_initialize_options = NULL;
    PyObject *var_finalize_options = NULL;
    PyObject *var_run = NULL;
    PyObject *var_get_outputs = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_9e3c6235d45bb96b1dd7331bbf54635c;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_29d7b4e419745841adebc03526e69496;
    assert( var_description == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_description = tmp_assign_source_2;

    tmp_assign_source_3 = PyList_New( 0 );
    assert( var_user_options == NULL );
    var_user_options = tmp_assign_source_3;

    tmp_assign_source_4 = MAKE_FUNCTION_function_1_initialize_options_of_class_1_install_clib_of_numpy$distutils$command$install_clib(  );
    assert( var_initialize_options == NULL );
    var_initialize_options = tmp_assign_source_4;

    tmp_assign_source_5 = MAKE_FUNCTION_function_2_finalize_options_of_class_1_install_clib_of_numpy$distutils$command$install_clib(  );
    assert( var_finalize_options == NULL );
    var_finalize_options = tmp_assign_source_5;

    tmp_assign_source_6 = MAKE_FUNCTION_function_3_run_of_class_1_install_clib_of_numpy$distutils$command$install_clib(  );
    assert( var_run == NULL );
    var_run = tmp_assign_source_6;

    tmp_assign_source_7 = MAKE_FUNCTION_function_4_get_outputs_of_class_1_install_clib_of_numpy$distutils$command$install_clib(  );
    assert( var_get_outputs == NULL );
    var_get_outputs = tmp_assign_source_7;

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

    if ( var_description )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_description,
            var_description
        );

        assert( res == 0 );
    }

    if ( var_user_options )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_user_options,
            var_user_options
        );

        assert( res == 0 );
    }

    if ( var_initialize_options )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_initialize_options,
            var_initialize_options
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

    if ( var_run )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_run,
            var_run
        );

        assert( res == 0 );
    }

    if ( var_get_outputs )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_get_outputs,
            var_get_outputs
        );

        assert( res == 0 );
    }

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_1_install_clib_of_numpy$distutils$command$install_clib );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var_description );
    Py_DECREF( var_description );
    var_description = NULL;

    CHECK_OBJECT( (PyObject *)var_user_options );
    Py_DECREF( var_user_options );
    var_user_options = NULL;

    CHECK_OBJECT( (PyObject *)var_initialize_options );
    Py_DECREF( var_initialize_options );
    var_initialize_options = NULL;

    CHECK_OBJECT( (PyObject *)var_finalize_options );
    Py_DECREF( var_finalize_options );
    var_finalize_options = NULL;

    CHECK_OBJECT( (PyObject *)var_run );
    Py_DECREF( var_run );
    var_run = NULL;

    CHECK_OBJECT( (PyObject *)var_get_outputs );
    Py_DECREF( var_get_outputs );
    var_get_outputs = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var_description );
    Py_DECREF( var_description );
    var_description = NULL;

    CHECK_OBJECT( (PyObject *)var_user_options );
    Py_DECREF( var_user_options );
    var_user_options = NULL;

    CHECK_OBJECT( (PyObject *)var_initialize_options );
    Py_DECREF( var_initialize_options );
    var_initialize_options = NULL;

    CHECK_OBJECT( (PyObject *)var_finalize_options );
    Py_DECREF( var_finalize_options );
    var_finalize_options = NULL;

    CHECK_OBJECT( (PyObject *)var_run );
    Py_DECREF( var_run );
    var_run = NULL;

    CHECK_OBJECT( (PyObject *)var_get_outputs );
    Py_DECREF( var_get_outputs );
    var_get_outputs = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_1_install_clib_of_numpy$distutils$command$install_clib );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_function_1_initialize_options_of_class_1_install_clib_of_numpy$distutils$command$install_clib( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_frame_locals;
    bool tmp_result;
    PyObject *tmp_return_value;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_eabb28f62e49b92d30f0fbe52e3caebd, module_numpy$distutils$command$install_clib );
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
    tmp_assattr_name_1 = Py_None;
    tmp_assattr_target_1 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_install_dir, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = PyList_New( 0 );
    tmp_assattr_target_2 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_outfiles, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 15;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );

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
    NUITKA_CANNOT_GET_HERE( function_1_initialize_options_of_class_1_install_clib_of_numpy$distutils$command$install_clib );
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
    NUITKA_CANNOT_GET_HERE( function_1_initialize_options_of_class_1_install_clib_of_numpy$distutils$command$install_clib );
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


static PyObject *impl_function_2_finalize_options_of_class_1_install_clib_of_numpy$distutils$command$install_clib( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_f32b0d0782bc00e7aec664da72060607, module_numpy$distutils$command$install_clib );
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

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_set_undefined_options );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 18;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_661bd06ee9d4ea0ba469fa53ab538929_tuple, 0 ) );

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
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
    NUITKA_CANNOT_GET_HERE( function_2_finalize_options_of_class_1_install_clib_of_numpy$distutils$command$install_clib );
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
    NUITKA_CANNOT_GET_HERE( function_2_finalize_options_of_class_1_install_clib_of_numpy$distutils$command$install_clib );
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


static PyObject *impl_function_3_run_of_class_1_install_clib_of_numpy$distutils$command$install_clib( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_build_clib_cmd = NULL;
    PyObject *var_build_dir = NULL;
    PyObject *var_compiler = NULL;
    PyObject *var_l = NULL;
    PyObject *var_target_dir = NULL;
    PyObject *var_name = NULL;
    PyObject *var_source = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_next_source_1;
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
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_source_name_14;
    PyObject *tmp_source_name_15;
    PyObject *tmp_source_name_16;
    PyObject *tmp_source_name_17;
    PyObject *tmp_source_name_18;
    PyObject *tmp_source_name_19;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_7413f2fab89cec7c4e62a6d8e0c5d271, module_numpy$distutils$command$install_clib );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$install_clib, (Nuitka_StringObject *)const_str_plain_get_cmd );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_cmd );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "get_cmd" );
        exception_tb = NULL;

        exception_lineno = 21;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 21;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_plain_build_clib_tuple, 0 ) );

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto frame_exception_exit_1;
    }
    assert( var_build_clib_cmd == NULL );
    var_build_clib_cmd = tmp_assign_source_1;

    tmp_source_name_1 = var_build_clib_cmd;

    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_build_clib );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        goto frame_exception_exit_1;
    }
    assert( var_build_dir == NULL );
    var_build_dir = tmp_assign_source_2;

    tmp_source_name_2 = var_build_clib_cmd;

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_compiler );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 25;
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
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$install_clib, (Nuitka_StringObject *)const_str_plain_new_compiler );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_new_compiler );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "new_compiler" );
        exception_tb = NULL;

        exception_lineno = 26;
        goto frame_exception_exit_1;
    }

    tmp_kw_name_1 = PyDict_Copy( const_dict_abea38abcd8b956042e5a077284ccd4c );
    frame_function->f_lineno = 26;
    tmp_assign_source_3 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        goto frame_exception_exit_1;
    }
    assert( var_compiler == NULL );
    var_compiler = tmp_assign_source_3;

    tmp_source_name_3 = var_compiler;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_customize );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_self;

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_distribution );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 27;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 27;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_5 = var_build_clib_cmd;

    tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_compiler );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        goto frame_exception_exit_1;
    }
    assert( var_compiler == NULL );
    var_compiler = tmp_assign_source_4;

    branch_end_1:;
    tmp_source_name_7 = par_self;

    tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_distribution );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        goto frame_exception_exit_1;
    }
    tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_installed_libraries );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_5;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_6 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 31;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_assign_source_7 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_l;
        var_l = tmp_assign_source_7;
        Py_INCREF( var_l );
        Py_XDECREF( old );
    }

    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$install_clib, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 32;
        goto try_except_handler_2;
    }

    tmp_source_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_path );
    if ( tmp_source_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        goto try_except_handler_2;
    }
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_join );
    Py_DECREF( tmp_source_name_8 );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        goto try_except_handler_2;
    }
    tmp_source_name_10 = par_self;

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_install_dir );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 32;
        goto try_except_handler_2;
    }
    tmp_source_name_11 = var_l;

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_target_dir );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 32;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 32;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_target_dir;
        var_target_dir = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    tmp_source_name_12 = var_compiler;

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_library_filename );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        goto try_except_handler_2;
    }
    tmp_source_name_13 = var_l;

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_name );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 33;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 33;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_name;
        var_name = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$install_clib, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 34;
        goto try_except_handler_2;
    }

    tmp_source_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_path );
    if ( tmp_source_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        goto try_except_handler_2;
    }
    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_join );
    Py_DECREF( tmp_source_name_14 );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        goto try_except_handler_2;
    }
    tmp_args_element_name_5 = var_build_dir;

    tmp_args_element_name_6 = var_name;

    frame_function->f_lineno = 34;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_source;
        var_source = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    tmp_source_name_16 = par_self;

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_mkpath );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        goto try_except_handler_2;
    }
    tmp_args_element_name_7 = var_target_dir;

    frame_function->f_lineno = 35;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_18 = par_self;

    tmp_source_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_outfiles );
    if ( tmp_source_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto try_except_handler_2;
    }
    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_append );
    Py_DECREF( tmp_source_name_17 );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto try_except_handler_2;
    }
    tmp_source_name_19 = par_self;

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_copy_file );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_8 );

        exception_lineno = 36;
        goto try_except_handler_2;
    }
    tmp_args_element_name_9 = var_source;

    tmp_args_element_name_10 = var_target_dir;

    frame_function->f_lineno = 36;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
        tmp_subscribed_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_8 );

        exception_lineno = 36;
        goto try_except_handler_2;
    }
    tmp_subscript_name_1 = const_int_0;
    tmp_args_element_name_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_8 );

        exception_lineno = 36;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 36;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
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
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( var_build_clib_cmd )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_build_clib_cmd,
                    var_build_clib_cmd
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

            if ( var_compiler )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_compiler,
                    var_compiler
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

            if ( var_target_dir )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_target_dir,
                    var_target_dir
                );

                assert( res == 0 );
            }

            if ( var_name )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_name,
                    var_name
                );

                assert( res == 0 );
            }

            if ( var_source )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_source,
                    var_source
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
    NUITKA_CANNOT_GET_HERE( function_3_run_of_class_1_install_clib_of_numpy$distutils$command$install_clib );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_build_clib_cmd );
    Py_DECREF( var_build_clib_cmd );
    var_build_clib_cmd = NULL;

    CHECK_OBJECT( (PyObject *)var_build_dir );
    Py_DECREF( var_build_dir );
    var_build_dir = NULL;

    CHECK_OBJECT( (PyObject *)var_compiler );
    Py_DECREF( var_compiler );
    var_compiler = NULL;

    Py_XDECREF( var_l );
    var_l = NULL;

    Py_XDECREF( var_target_dir );
    var_target_dir = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    Py_XDECREF( var_source );
    var_source = NULL;

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

    Py_XDECREF( var_build_clib_cmd );
    var_build_clib_cmd = NULL;

    Py_XDECREF( var_build_dir );
    var_build_dir = NULL;

    Py_XDECREF( var_compiler );
    var_compiler = NULL;

    Py_XDECREF( var_l );
    var_l = NULL;

    Py_XDECREF( var_target_dir );
    var_target_dir = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    Py_XDECREF( var_source );
    var_source = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_3_run_of_class_1_install_clib_of_numpy$distutils$command$install_clib );
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


static PyObject *impl_function_4_get_outputs_of_class_1_install_clib_of_numpy$distutils$command$install_clib( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_fcd2191ac5d7bfd2ad7ffb8d3cb7c38a, module_numpy$distutils$command$install_clib );
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

    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_outfiles );
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
    NUITKA_CANNOT_GET_HERE( function_4_get_outputs_of_class_1_install_clib_of_numpy$distutils$command$install_clib );
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
    NUITKA_CANNOT_GET_HERE( function_4_get_outputs_of_class_1_install_clib_of_numpy$distutils$command$install_clib );
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



static PyObject *MAKE_FUNCTION_function_1_initialize_options_of_class_1_install_clib_of_numpy$distutils$command$install_clib(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_1_initialize_options_of_class_1_install_clib_of_numpy$distutils$command$install_clib,
        const_str_plain_initialize_options,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_eabb28f62e49b92d30f0fbe52e3caebd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$install_clib,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_finalize_options_of_class_1_install_clib_of_numpy$distutils$command$install_clib(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_2_finalize_options_of_class_1_install_clib_of_numpy$distutils$command$install_clib,
        const_str_plain_finalize_options,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f32b0d0782bc00e7aec664da72060607,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$install_clib,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_run_of_class_1_install_clib_of_numpy$distutils$command$install_clib(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_3_run_of_class_1_install_clib_of_numpy$distutils$command$install_clib,
        const_str_plain_run,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7413f2fab89cec7c4e62a6d8e0c5d271,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$install_clib,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_get_outputs_of_class_1_install_clib_of_numpy$distutils$command$install_clib(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_4_get_outputs_of_class_1_install_clib_of_numpy$distutils$command$install_clib,
        const_str_plain_get_outputs,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_fcd2191ac5d7bfd2ad7ffb8d3cb7c38a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$install_clib,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$distutils$command$install_clib =
{
    PyModuleDef_HEAD_INIT,
    "numpy.distutils.command.install_clib",   /* m_name */
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

MOD_INIT_DECL( numpy$distutils$command$install_clib )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$distutils$command$install_clib );
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

    // puts( "in initnumpy$distutils$command$install_clib" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$distutils$command$install_clib = Py_InitModule4(
        "numpy.distutils.command.install_clib",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$distutils$command$install_clib = PyModule_Create( &mdef_numpy$distutils$command$install_clib );
#endif

    moduledict_numpy$distutils$command$install_clib = (PyDictObject *)((PyModuleObject *)module_numpy$distutils$command$install_clib)->md_dict;

    CHECK_OBJECT( module_numpy$distutils$command$install_clib );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_9e3c6235d45bb96b1dd7331bbf54635c, module_numpy$distutils$command$install_clib );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_numpy$distutils$command$install_clib );

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
    PyObject *tmp_bases_name_1;
    PyObject *tmp_called_name_1;
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
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_key_name_1;
    PyObject *tmp_tuple_element_1;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_numpy$distutils$command$install_clib, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_2d7bdceec2aacf934a68463f11758bb2;
    UPDATE_STRING_DICT0( moduledict_numpy$distutils$command$install_clib, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "division");
    UPDATE_STRING_DICT0( moduledict_numpy$distutils$command$install_clib, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_assign_source_4 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "absolute_import");
    UPDATE_STRING_DICT0( moduledict_numpy$distutils$command$install_clib, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    tmp_assign_source_5 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "print_function");
    UPDATE_STRING_DICT0( moduledict_numpy$distutils$command$install_clib, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_5 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_fedad5578a6c3a7456a5af1470d53d46, module_numpy$distutils$command$install_clib );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$distutils$command$install_clib)->md_dict;
    frame_module->f_lineno = 3;
    tmp_assign_source_6 = IMPORT_MODULE( const_str_plain_os, tmp_import_globals_1, tmp_import_globals_1, Py_None, const_int_0 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$install_clib, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_6 );
    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$distutils$command$install_clib)->md_dict;
    frame_module->f_lineno = 4;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_c979cab178c2e1f803369c019017501c, tmp_import_globals_2, tmp_import_globals_2, const_tuple_str_plain_Command_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_Command );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$install_clib, (Nuitka_StringObject *)const_str_plain_Command, tmp_assign_source_7 );
    tmp_import_globals_3 = ((PyModuleObject *)module_numpy$distutils$command$install_clib)->md_dict;
    frame_module->f_lineno = 5;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_digest_ec8a3e4dce79fe85170ca4f1784c494d, tmp_import_globals_3, tmp_import_globals_3, const_tuple_str_plain_new_compiler_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_new_compiler );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$install_clib, (Nuitka_StringObject *)const_str_plain_new_compiler, tmp_assign_source_8 );
    tmp_import_globals_4 = ((PyModuleObject *)module_numpy$distutils$command$install_clib)->md_dict;
    frame_module->f_lineno = 6;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_digest_6d315605648e433b0f5827b4d0f11ccf, tmp_import_globals_4, tmp_import_globals_4, const_tuple_str_plain_get_cmd_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_get_cmd );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$install_clib, (Nuitka_StringObject *)const_str_plain_get_cmd, tmp_assign_source_9 );
    // Tried code:
    tmp_assign_source_10 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$install_clib, (Nuitka_StringObject *)const_str_plain_Command );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Command );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_10 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "Command" );
        exception_tb = NULL;

        exception_lineno = 8;
        goto try_except_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_10, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_10;

    tmp_assign_source_11 = impl_class_1_install_clib_of_numpy$distutils$command$install_clib( NULL );
    assert( tmp_assign_source_11 != NULL );
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_11;

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
    tmp_assign_source_12 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto try_except_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_bases_name_1 = tmp_class_creation_1__bases;

    tmp_assign_source_12 = SELECT_METACLASS( tmp_bases_name_1, GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$install_clib, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_12;

    tmp_called_name_1 = tmp_class_creation_1__metaclass;

    tmp_args_element_name_1 = const_str_plain_install_clib;
    tmp_args_element_name_2 = tmp_class_creation_1__bases;

    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    frame_module->f_lineno = 8;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_13;

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
    tmp_assign_source_14 = tmp_class_creation_1__class;

    UPDATE_STRING_DICT0( moduledict_numpy$distutils$command$install_clib, (Nuitka_StringObject *)const_str_plain_install_clib, tmp_assign_source_14 );
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


    return MOD_RETURN_VALUE( module_numpy$distutils$command$install_clib );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
