/*
 * Copyright (c) 2022 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: LicenseRef-Nordic-5-Clause
 */

#ifndef CELLULAR_NRF_CLOUD_H_
#define CELLULAR_NRF_CLOUD_H_

#include "cellular_service.h"

#ifdef __cplusplus
extern "C" {
#endif

int cellular_nrf_cloud_pos_get(
	const struct location_cellular_serv_pos_req *params,
	char *const rcv_buf,
	const size_t rcv_buf_len,
	struct location_data *const location);

#ifdef __cplusplus
}
#endif

#endif /* CELLULAR_NRF_CLOUD_H_ */