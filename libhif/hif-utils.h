/* -*- Mode: C; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*-
 *
 * Copyright (C) 2013-2015 Richard Hughes <richard@hughsie.com>
 *
 * Licensed under the GNU Lesser General Public License Version 2.1
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301 USA
 */

#ifndef __HIF_UTILS_H
#define __HIF_UTILS_H

#include <glib.h>

gchar           *hif_realpath                       (const gchar            *path);
gboolean         hif_remove_recursive               (const gchar            *directory,
                                                     GError                 **error);
gboolean         hif_get_file_contents_allow_noent  (const gchar            *path,
                                                     gchar                  **out_contents,
                                                     gsize                  *length,
                                                     GError                 **error);

#endif /* __HIF_UTILS_H */
