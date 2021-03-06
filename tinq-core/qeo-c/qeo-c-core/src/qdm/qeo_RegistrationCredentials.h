/*
 * Copyright (c) 2014 - Qeo LLC
 *
 * The source code form of this Qeo Open Source Project component is subject
 * to the terms of the Clear BSD license.
 *
 * You can redistribute it and/or modify it under the terms of the Clear BSD
 * License (http://directory.fsf.org/wiki/License:ClearBSD). See LICENSE file
 * for more details.
 *
 * The Qeo Open Source Project also includes third party Open Source Software.
 * See LICENSE file for more details.
 */

/**************************************************************
 ********          THIS IS A GENERATED FILE         ***********
 **************************************************************/

#ifndef QDM_QEO_REGISTRATIONCREDENTIALS_H_
#define QDM_QEO_REGISTRATIONCREDENTIALS_H_

#include <qeo/types.h>
#include "qeo_types.h"


DDS_SEQUENCE(int8_t, org_qeo_system_RegistrationCredentials_encryptedOtc_seq);
/**
 * The encrypted OTC (to be decrypted and used by the remote device) and the Security Management Server URL
 */
typedef struct {
    /**
     * [Key] The device identification generated by Qeo.
     */
    org_qeo_system_DeviceId_t deviceId;
    /**
     * [Key] The PEM-encoded public key generated by the remote device requesting a registration.
     */
    char * requestRSAPublicKey;
    /**
     * The OTC (encrypted with the above public key using PKCS1 OEAP padding) to be used by the remote device
     */
    org_qeo_system_RegistrationCredentials_encryptedOtc_seq encryptedOtc;
    /**
     * Security Management Server URL
     */
    char * url;
    /**
     * The name of the realm to use
     */
    char * realmName;
} org_qeo_system_RegistrationCredentials_t;
extern const DDS_TypeSupport_meta org_qeo_system_RegistrationCredentials_type[];


#endif /* QDM_QEO_REGISTRATIONCREDENTIALS_H_ */

