/*
 * This file is part of the UWB stack for linux.
 *
 * Copyright (c) 2020-2024 Qorvo US, Inc.
 *
 * This software is provided under the GNU General Public License, version 2
 * (GPLv2), as well as under a Qorvo commercial license.
 *
 * You may choose to use this software under the terms of the GPLv2 License,
 * version 2 ("GPLv2"), as published by the Free Software Foundation.
 * You should have received a copy of the GPLv2 along with this program.  If
 * not, see <http://www.gnu.org/licenses/>.
 *
 * This program is distributed under the GPLv2 in the hope that it will be
 * useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GPLv2 for more
 * details.
 *
 * If you cannot meet the requirements of the GPLv2, you may not use this
 * software for any purpose without first obtaining a commercial license from
 * Qorvo. Please contact Qorvo to inquire about licensing terms.
 */
#ifndef QM35_SPI_TRANSPORT_H
#define QM35_SPI_TRANSPORT_H

#include "qm35_transport.h"

extern const struct qm35_transport qm35_spi_transport;

struct qm35_spi;
void qm35_spi_transport_setup(struct qm35_spi *qmspi);

#endif /* QM35_SPI_TRANSPORT_H */
