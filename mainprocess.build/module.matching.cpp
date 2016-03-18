// Generated code for Python source for module 'matching'
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

// The _module_matching is a Python object pointer of module type.

// Note: For full compatibility with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_matching;
PyDictObject *moduledict_matching;

// The module constants used
static PyObject *const_str_digest_768e0ad02e88523db079dda4d6593da2;
extern PyObject *const_str_plain_cv2;
static PyObject *const_int_pos_476;
static PyObject *const_tuple_str_plain_self_str_plain_hamming_sig_tuple;
extern PyObject *const_tuple_str_plain_bitarray_tuple;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_sigGen;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_a81f4d35e05cb7299524321b6e1850cf;
extern PyObject *const_dict_empty;
static PyObject *const_str_plain_signature_hamming;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_matching;
extern PyObject *const_str_plain_sum;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_sigOrig;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain_SignatureMatching;
static PyObject *const_str_plain_tau5;
static PyObject *const_str_plain_tau4;
static PyObject *const_str_plain_tau1;
static PyObject *const_str_plain_tau3;
static PyObject *const_str_plain_tau2;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_plain_hamming_sig;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_signature_rejection;
static PyObject *const_tuple_4eb21d0191b5ebdf93c9769259f6c411_tuple;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_bitarray;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_768e0ad02e88523db079dda4d6593da2 = UNSTREAM_STRING( &constant_bin[ 12804 ], 37, 0 );
    const_int_pos_476 = PyInt_FromLong( 476l );
    const_tuple_str_plain_self_str_plain_hamming_sig_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_hamming_sig_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_hamming_sig = UNSTREAM_STRING( &constant_bin[ 12841 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_hamming_sig_tuple, 1, const_str_plain_hamming_sig ); Py_INCREF( const_str_plain_hamming_sig );
    const_str_digest_a81f4d35e05cb7299524321b6e1850cf = UNSTREAM_STRING( &constant_bin[ 12852 ], 52, 0 );
    const_str_plain_signature_hamming = UNSTREAM_STRING( &constant_bin[ 12904 ], 17, 1 );
    const_str_plain_tau5 = UNSTREAM_STRING( &constant_bin[ 12921 ], 4, 1 );
    const_str_plain_tau4 = UNSTREAM_STRING( &constant_bin[ 12925 ], 4, 1 );
    const_str_plain_tau1 = UNSTREAM_STRING( &constant_bin[ 12929 ], 4, 1 );
    const_str_plain_tau3 = UNSTREAM_STRING( &constant_bin[ 12933 ], 4, 1 );
    const_str_plain_tau2 = UNSTREAM_STRING( &constant_bin[ 12937 ], 4, 1 );
    const_tuple_4eb21d0191b5ebdf93c9769259f6c411_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_4eb21d0191b5ebdf93c9769259f6c411_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_4eb21d0191b5ebdf93c9769259f6c411_tuple, 1, const_str_plain_sigOrig ); Py_INCREF( const_str_plain_sigOrig );
    PyTuple_SET_ITEM( const_tuple_4eb21d0191b5ebdf93c9769259f6c411_tuple, 2, const_str_plain_sigGen ); Py_INCREF( const_str_plain_sigGen );
    PyTuple_SET_ITEM( const_tuple_4eb21d0191b5ebdf93c9769259f6c411_tuple, 3, const_str_plain_tau1 ); Py_INCREF( const_str_plain_tau1 );
    PyTuple_SET_ITEM( const_tuple_4eb21d0191b5ebdf93c9769259f6c411_tuple, 4, const_str_plain_tau2 ); Py_INCREF( const_str_plain_tau2 );
    PyTuple_SET_ITEM( const_tuple_4eb21d0191b5ebdf93c9769259f6c411_tuple, 5, const_str_plain_tau3 ); Py_INCREF( const_str_plain_tau3 );
    PyTuple_SET_ITEM( const_tuple_4eb21d0191b5ebdf93c9769259f6c411_tuple, 6, const_str_plain_tau4 ); Py_INCREF( const_str_plain_tau4 );
    PyTuple_SET_ITEM( const_tuple_4eb21d0191b5ebdf93c9769259f6c411_tuple, 7, const_str_plain_tau5 ); Py_INCREF( const_str_plain_tau5 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_matching( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_9a308dd1f42d0482b5d3d667e9d0ac54;
static PyCodeObject *codeobj_5b002f196fb1a44ad8b0228793c9e520;
static PyCodeObject *codeobj_5aa0face7110216f0a8fbcd0838f5605;
static PyCodeObject *codeobj_ae9f6f42b047c3489832c082f7931c3c;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_768e0ad02e88523db079dda4d6593da2 );
    codeobj_9a308dd1f42d0482b5d3d667e9d0ac54 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 7, const_tuple_4eb21d0191b5ebdf93c9769259f6c411_tuple, 8, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5b002f196fb1a44ad8b0228793c9e520 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_matching, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_5aa0face7110216f0a8fbcd0838f5605 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_signature_hamming, 16, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ae9f6f42b047c3489832c082f7931c3c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_signature_rejection, 19, const_tuple_str_plain_self_str_plain_hamming_sig_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_SignatureMatching_of_matching( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_SignatureMatching_of_matching(  );


static PyObject *MAKE_FUNCTION_function_2_signature_hamming_of_class_1_SignatureMatching_of_matching(  );


static PyObject *MAKE_FUNCTION_function_3_signature_rejection_of_class_1_SignatureMatching_of_matching(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_SignatureMatching_of_matching( PyObject **python_pars )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var___init__ = NULL;
    PyObject *var_signature_hamming = NULL;
    PyObject *var_signature_rejection = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_plain_matching;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_a81f4d35e05cb7299524321b6e1850cf;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = MAKE_FUNCTION_function_1___init___of_class_1_SignatureMatching_of_matching(  );
    assert( var___init__ == NULL );
    var___init__ = tmp_assign_source_3;

    tmp_assign_source_4 = MAKE_FUNCTION_function_2_signature_hamming_of_class_1_SignatureMatching_of_matching(  );
    assert( var_signature_hamming == NULL );
    var_signature_hamming = tmp_assign_source_4;

    tmp_assign_source_5 = MAKE_FUNCTION_function_3_signature_rejection_of_class_1_SignatureMatching_of_matching(  );
    assert( var_signature_rejection == NULL );
    var_signature_rejection = tmp_assign_source_5;

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

    if ( var___init__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___init__,
            var___init__
        );

        assert( res == 0 );
    }

    if ( var_signature_hamming )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_signature_hamming,
            var_signature_hamming
        );

        assert( res == 0 );
    }

    if ( var_signature_rejection )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_signature_rejection,
            var_signature_rejection
        );

        assert( res == 0 );
    }

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( class_1_SignatureMatching_of_matching );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var___doc__ );
    Py_DECREF( var___doc__ );
    var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)var___init__ );
    Py_DECREF( var___init__ );
    var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)var_signature_hamming );
    Py_DECREF( var_signature_hamming );
    var_signature_hamming = NULL;

    CHECK_OBJECT( (PyObject *)var_signature_rejection );
    Py_DECREF( var_signature_rejection );
    var_signature_rejection = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var___doc__ );
    Py_DECREF( var___doc__ );
    var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)var___init__ );
    Py_DECREF( var___init__ );
    var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)var_signature_hamming );
    Py_DECREF( var_signature_hamming );
    var_signature_hamming = NULL;

    CHECK_OBJECT( (PyObject *)var_signature_rejection );
    Py_DECREF( var_signature_rejection );
    var_signature_rejection = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( class_1_SignatureMatching_of_matching );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_function_1___init___of_class_1_SignatureMatching_of_matching( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_sigOrig = python_pars[ 1 ];
    PyObject *par_sigGen = python_pars[ 2 ];
    PyObject *par_tau1 = python_pars[ 3 ];
    PyObject *par_tau2 = python_pars[ 4 ];
    PyObject *par_tau3 = python_pars[ 5 ];
    PyObject *par_tau4 = python_pars[ 6 ];
    PyObject *par_tau5 = python_pars[ 7 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_assattr_name_7;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assattr_target_6;
    PyObject *tmp_assattr_target_7;
    PyObject *tmp_frame_locals;
    bool tmp_result;
    PyObject *tmp_return_value;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_9a308dd1f42d0482b5d3d667e9d0ac54, module_matching );
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
    tmp_assattr_name_1 = par_sigOrig;

    tmp_assattr_target_1 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_sigOrig, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = par_sigGen;

    tmp_assattr_target_2 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_sigGen, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = par_tau1;

    tmp_assattr_target_3 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_tau1, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_4 = par_tau2;

    tmp_assattr_target_4 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_tau2, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_5 = par_tau3;

    tmp_assattr_target_5 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_tau3, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_6 = par_tau4;

    tmp_assattr_target_6 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_tau4, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_7 = par_tau5;

    tmp_assattr_target_7 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_tau5, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto frame_exception_exit_1;
    }

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

            if ( par_sigOrig )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_sigOrig,
                    par_sigOrig
                );

                assert( res == 0 );
            }

            if ( par_sigGen )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_sigGen,
                    par_sigGen
                );

                assert( res == 0 );
            }

            if ( par_tau1 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_tau1,
                    par_tau1
                );

                assert( res == 0 );
            }

            if ( par_tau2 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_tau2,
                    par_tau2
                );

                assert( res == 0 );
            }

            if ( par_tau3 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_tau3,
                    par_tau3
                );

                assert( res == 0 );
            }

            if ( par_tau4 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_tau4,
                    par_tau4
                );

                assert( res == 0 );
            }

            if ( par_tau5 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_tau5,
                    par_tau5
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
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_1_SignatureMatching_of_matching );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_sigOrig );
    Py_DECREF( par_sigOrig );
    par_sigOrig = NULL;

    CHECK_OBJECT( (PyObject *)par_sigGen );
    Py_DECREF( par_sigGen );
    par_sigGen = NULL;

    CHECK_OBJECT( (PyObject *)par_tau1 );
    Py_DECREF( par_tau1 );
    par_tau1 = NULL;

    CHECK_OBJECT( (PyObject *)par_tau2 );
    Py_DECREF( par_tau2 );
    par_tau2 = NULL;

    CHECK_OBJECT( (PyObject *)par_tau3 );
    Py_DECREF( par_tau3 );
    par_tau3 = NULL;

    CHECK_OBJECT( (PyObject *)par_tau4 );
    Py_DECREF( par_tau4 );
    par_tau4 = NULL;

    CHECK_OBJECT( (PyObject *)par_tau5 );
    Py_DECREF( par_tau5 );
    par_tau5 = NULL;

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

    CHECK_OBJECT( (PyObject *)par_sigOrig );
    Py_DECREF( par_sigOrig );
    par_sigOrig = NULL;

    CHECK_OBJECT( (PyObject *)par_sigGen );
    Py_DECREF( par_sigGen );
    par_sigGen = NULL;

    CHECK_OBJECT( (PyObject *)par_tau1 );
    Py_DECREF( par_tau1 );
    par_tau1 = NULL;

    CHECK_OBJECT( (PyObject *)par_tau2 );
    Py_DECREF( par_tau2 );
    par_tau2 = NULL;

    CHECK_OBJECT( (PyObject *)par_tau3 );
    Py_DECREF( par_tau3 );
    par_tau3 = NULL;

    CHECK_OBJECT( (PyObject *)par_tau4 );
    Py_DECREF( par_tau4 );
    par_tau4 = NULL;

    CHECK_OBJECT( (PyObject *)par_tau5 );
    Py_DECREF( par_tau5 );
    par_tau5 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_1___init___of_class_1_SignatureMatching_of_matching );
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


static PyObject *impl_function_2_signature_hamming_of_class_1_SignatureMatching_of_matching( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_5aa0face7110216f0a8fbcd0838f5605, module_matching );
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

    tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sigOrig );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sigGen );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    tmp_return_value = BINARY_OPERATION( PyNumber_Xor, tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
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
    NUITKA_CANNOT_GET_HERE( function_2_signature_hamming_of_class_1_SignatureMatching_of_matching );
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
    NUITKA_CANNOT_GET_HERE( function_2_signature_hamming_of_class_1_SignatureMatching_of_matching );
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


static PyObject *impl_function_3_signature_rejection_of_class_1_SignatureMatching_of_matching( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_hamming_sig = NULL;
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
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    int tmp_cmp_Gt_1;
    int tmp_cmp_Gt_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    Py_ssize_t tmp_slice_index_upper_1;
    Py_ssize_t tmp_slice_index_upper_2;
    Py_ssize_t tmp_slice_index_upper_3;
    Py_ssize_t tmp_slice_index_upper_4;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_source_2;
    PyObject *tmp_slice_source_3;
    PyObject *tmp_slice_source_4;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_2;
    Py_ssize_t tmp_sliceslicedel_index_lower_3;
    Py_ssize_t tmp_sliceslicedel_index_lower_4;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_ae9f6f42b047c3489832c082f7931c3c, module_matching );
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

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_signature_hamming );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 20;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        goto frame_exception_exit_1;
    }
    assert( var_hamming_sig == NULL );
    var_hamming_sig = tmp_assign_source_1;

    tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_sum );
    assert( tmp_called_name_2 != NULL );
    tmp_sliceslicedel_index_lower_1 = 0;
    tmp_slice_index_upper_1 = 120;
    tmp_slice_source_1 = var_hamming_sig;

    tmp_args_element_name_1 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 21;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_compare_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_tau1 );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 21;
        goto frame_exception_exit_1;
    }
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 21;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_1 = Py_False;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_sum );
    assert( tmp_called_name_3 != NULL );
    tmp_args_element_name_2 = var_hamming_sig;

    frame_function->f_lineno = 22;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_left_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 22;
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_int_pos_476;
    tmp_tuple_element_1 = BINARY_OPERATION_DIV( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 22;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_called_name_4 = LOOKUP_BUILTIN( const_str_plain_sum );
    assert( tmp_called_name_4 != NULL );
    tmp_sliceslicedel_index_lower_2 = 0;
    tmp_slice_index_upper_2 = 240;
    tmp_slice_source_2 = var_hamming_sig;

    tmp_args_element_name_3 = LOOKUP_INDEX_SLICE( tmp_slice_source_2, tmp_sliceslicedel_index_lower_2, tmp_slice_index_upper_2 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 24;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_compare_left_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    tmp_compare_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_tau2 );
    if ( tmp_compare_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 24;
        goto frame_exception_exit_1;
    }
    tmp_cmp_Gt_2 = RICH_COMPARE_BOOL_GT( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Gt_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );
        Py_DECREF( tmp_compare_right_2 );

        exception_lineno = 24;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    Py_DECREF( tmp_compare_right_2 );
    if ( tmp_cmp_Gt_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_2 = Py_False;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
    tmp_called_name_5 = LOOKUP_BUILTIN( const_str_plain_sum );
    assert( tmp_called_name_5 != NULL );
    tmp_args_element_name_4 = var_hamming_sig;

    frame_function->f_lineno = 25;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_left_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 25;
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = const_int_pos_476;
    tmp_tuple_element_2 = BINARY_OPERATION_DIV( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 25;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    tmp_called_name_6 = LOOKUP_BUILTIN( const_str_plain_sum );
    assert( tmp_called_name_6 != NULL );
    tmp_sliceslicedel_index_lower_3 = 0;
    tmp_slice_index_upper_3 = 240;
    tmp_slice_source_3 = var_hamming_sig;

    tmp_args_element_name_5 = LOOKUP_INDEX_SLICE( tmp_slice_source_3, tmp_sliceslicedel_index_lower_3, tmp_slice_index_upper_3 );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 27;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_self;

    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_tau3 );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_1 );

        exception_lineno = 27;
        goto frame_exception_exit_1;
    }
    tmp_or_left_value_1 = RICH_COMPARE_LT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 27;
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
    tmp_called_name_7 = LOOKUP_BUILTIN( const_str_plain_sum );
    assert( tmp_called_name_7 != NULL );
    tmp_sliceslicedel_index_lower_4 = 240;
    tmp_slice_index_upper_4 = 476;
    tmp_slice_source_4 = var_hamming_sig;

    tmp_args_element_name_6 = LOOKUP_INDEX_SLICE( tmp_slice_source_4, tmp_sliceslicedel_index_lower_4, tmp_slice_index_upper_4 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 27;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_compexpr_left_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = par_self;

    tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_tau4 );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_2 );

        exception_lineno = 27;
        goto frame_exception_exit_1;
    }
    tmp_or_right_value_1 = RICH_COMPARE_LT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
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

        exception_lineno = 27;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_3 = Py_True;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_3 );
    tmp_called_name_8 = LOOKUP_BUILTIN( const_str_plain_sum );
    assert( tmp_called_name_8 != NULL );
    tmp_args_element_name_7 = var_hamming_sig;

    frame_function->f_lineno = 28;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_left_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 28;
        goto frame_exception_exit_1;
    }
    tmp_right_name_3 = const_int_pos_476;
    tmp_tuple_element_3 = BINARY_OPERATION_DIV( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_3 );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 28;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_3 );
    goto frame_return_exit_1;
    goto branch_end_3;
    branch_no_3:;
    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_4 = Py_False;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_4 );
    tmp_called_name_9 = LOOKUP_BUILTIN( const_str_plain_sum );
    assert( tmp_called_name_9 != NULL );
    tmp_args_element_name_8 = var_hamming_sig;

    frame_function->f_lineno = 30;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_left_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    if ( tmp_left_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 30;
        goto frame_exception_exit_1;
    }
    tmp_right_name_4 = const_int_pos_476;
    tmp_tuple_element_4 = BINARY_OPERATION_DIV( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_4 );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 30;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_4 );
    goto frame_return_exit_1;
    branch_end_3:;
    branch_end_2:;
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

            if ( var_hamming_sig )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_hamming_sig,
                    var_hamming_sig
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
    NUITKA_CANNOT_GET_HERE( function_3_signature_rejection_of_class_1_SignatureMatching_of_matching );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_hamming_sig );
    Py_DECREF( var_hamming_sig );
    var_hamming_sig = NULL;

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

    Py_XDECREF( var_hamming_sig );
    var_hamming_sig = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( function_3_signature_rejection_of_class_1_SignatureMatching_of_matching );
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



static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_SignatureMatching_of_matching(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_1___init___of_class_1_SignatureMatching_of_matching,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9a308dd1f42d0482b5d3d667e9d0ac54,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_matching,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_signature_hamming_of_class_1_SignatureMatching_of_matching(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_2_signature_hamming_of_class_1_SignatureMatching_of_matching,
        const_str_plain_signature_hamming,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5aa0face7110216f0a8fbcd0838f5605,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_matching,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_signature_rejection_of_class_1_SignatureMatching_of_matching(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_function_3_signature_rejection_of_class_1_SignatureMatching_of_matching,
        const_str_plain_signature_rejection,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ae9f6f42b047c3489832c082f7931c3c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_matching,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_matching =
{
    PyModuleDef_HEAD_INIT,
    "matching",   /* m_name */
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

MOD_INIT_DECL( matching )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_matching );
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

    // puts( "in initmatching" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_matching = Py_InitModule4(
        "matching",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_matching = PyModule_Create( &mdef_matching );
#endif

    moduledict_matching = (PyDictObject *)((PyModuleObject *)module_matching)->md_dict;

    CHECK_OBJECT( module_matching );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_matching, module_matching );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_matching );

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
    PyObject *tmp_key_name_1;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_matching, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_768e0ad02e88523db079dda4d6593da2;
    UPDATE_STRING_DICT0( moduledict_matching, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_5b002f196fb1a44ad8b0228793c9e520, module_matching );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_matching)->md_dict;
    frame_module->f_lineno = 1;
    tmp_assign_source_3 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_1, tmp_import_globals_1, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_matching, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_3 );
    tmp_import_globals_2 = ((PyModuleObject *)module_matching)->md_dict;
    frame_module->f_lineno = 2;
    tmp_assign_source_4 = IMPORT_MODULE( const_str_plain_cv2, tmp_import_globals_2, tmp_import_globals_2, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_matching, (Nuitka_StringObject *)const_str_plain_cv2, tmp_assign_source_4 );
    tmp_import_globals_3 = ((PyModuleObject *)module_matching)->md_dict;
    frame_module->f_lineno = 3;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_bitarray, tmp_import_globals_3, tmp_import_globals_3, const_tuple_str_plain_bitarray_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_bitarray );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_matching, (Nuitka_StringObject *)const_str_plain_bitarray, tmp_assign_source_5 );
    tmp_assign_source_6 = impl_class_1_SignatureMatching_of_matching( NULL );
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


        exception_lineno = 5;
        goto try_except_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_bases_name_1 = const_tuple_empty;
    tmp_assign_source_7 = SELECT_METACLASS( tmp_bases_name_1, GET_STRING_DICT_VALUE( moduledict_matching, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_7;

    tmp_called_name_1 = tmp_class_creation_1__metaclass;

    tmp_args_element_name_1 = const_str_plain_SignatureMatching;
    tmp_args_element_name_2 = const_tuple_empty;
    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    frame_module->f_lineno = 5;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
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
    tmp_assign_source_9 = tmp_class_creation_1__class;

    UPDATE_STRING_DICT0( moduledict_matching, (Nuitka_StringObject *)const_str_plain_SignatureMatching, tmp_assign_source_9 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class );
    Py_DECREF( tmp_class_creation_1__class );
    tmp_class_creation_1__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;


    return MOD_RETURN_VALUE( module_matching );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
