/*
 * Python object definition of the libvmdk handle
 *
 * Copyright (c) 2009-2013, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _PYVMDK_FILE_H )
#define _PYVMDK_FILE_H

#include <common.h>
#include <types.h>

#include "pyvmdk_libvmdk.h"
#include "pyvmdk_python.h"

#if defined( __cplusplus )
extern "C" {
#endif

typedef struct pyvmdk_handle pyvmdk_handle_t;

struct pyvmdk_handle
{
	/* Python object initialization
	 */
	PyObject_HEAD

	/* The libvmdk handle
	 */
	libvmdk_handle_t *handle;
};

extern PyMethodDef pyvmdk_handle_object_methods[];
extern PyTypeObject pyvmdk_handle_type_object;

PyObject *pyvmdk_handle_new(
           void );

PyObject *pyvmdk_handle_new_open(
           PyObject *self,
           PyObject *arguments,
           PyObject *keywords );

PyObject *pyvmdk_handle_new_open_file_object(
           PyObject *self,
           PyObject *arguments,
           PyObject *keywords );

int pyvmdk_handle_init(
     pyvmdk_handle_t *pyvmdk_handle );

void pyvmdk_handle_free(
      pyvmdk_handle_t *pyvmdk_handle );

PyObject *pyvmdk_handle_signal_abort(
           pyvmdk_handle_t *pyvmdk_handle,
           PyObject *arguments );

PyObject *pyvmdk_handle_open(
           pyvmdk_handle_t *pyvmdk_handle,
           PyObject *arguments,
           PyObject *keywords );

PyObject *pyvmdk_handle_open_file_object(
           pyvmdk_handle_t *pyvmdk_handle,
           PyObject *arguments,
           PyObject *keywords );

PyObject *pyvmdk_handle_close(
           pyvmdk_handle_t *pyvmdk_handle,
           PyObject *arguments );

PyObject *pyvmdk_handle_read_buffer(
           pyvmdk_handle_t *pyvmdk_handle,
           PyObject *arguments,
           PyObject *keywords );

PyObject *pyvmdk_handle_read_random(
           pyvmdk_handle_t *pyvmdk_handle,
           PyObject *arguments,
           PyObject *keywords );

PyObject *pyvmdk_handle_seek_offset(
           pyvmdk_handle_t *pyvmdk_handle,
           PyObject *arguments,
           PyObject *keywords );

PyObject *pyvmdk_handle_get_offset(
           pyvmdk_handle_t *pyvmdk_handle,
           PyObject *arguments );

PyObject *pyvmdk_handle_get_media_size(
           pyvmdk_handle_t *pyvmdk_handle,
           PyObject *arguments );

#if defined( __cplusplus )
}
#endif

#endif
