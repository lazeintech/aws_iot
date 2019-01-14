/*
 * Amazon FreeRTOS V1.4.1
 * Copyright (C) 2017 Amazon.com, Inc. or its affiliates.  All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * http://aws.amazon.com/freertos
 * http://www.FreeRTOS.org
 */

#ifndef AWS_CLIENT_CREDENTIAL_KEYS_H
#define AWS_CLIENT_CREDENTIAL_KEYS_H

#include <stdint.h>

/*
 * PEM-encoded client certificate
 *
 * Must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----\n"\
 * "...base64 data...\n"\
 * "-----END CERTIFICATE-----\n"
 */
#define keyCLIENT_CERTIFICATE_PEM \
"-----BEGIN CERTIFICATE-----\n"\
"MIIDWjCCAkKgAwIBAgIVAOflBWJZCCYM1qDw1COIqAnz11vFMA0GCSqGSIb3DQEB\n"\
"CwUAME0xSzBJBgNVBAsMQkFtYXpvbiBXZWIgU2VydmljZXMgTz1BbWF6b24uY29t\n"\
"IEluYy4gTD1TZWF0dGxlIFNUPVdhc2hpbmd0b24gQz1VUzAeFw0xOTAxMTQwODE1\n"\
"NDhaFw00OTEyMzEyMzU5NTlaMB4xHDAaBgNVBAMME0FXUyBJb1QgQ2VydGlmaWNh\n"\
"dGUwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQDq1tzJjqfvs48qAC13\n"\
"jl06NfX8dUcUxsko/UQaIf4idYJClasx02RDIqOf2v2lGkkraM4Oo7XD3YzJIEbj\n"\
"/RNCu7+KBuV9J68rbreMQJ57coqon1TiDjHvk0x7pz+ySxiw0cjfYm7LmFGhWTDz\n"\
"r3tbo4KrZx0qdP40eyq1eEKXRVsnm2PYbOw1iE+ZOWmiq5m3Sad7ZbXTVq+Xh/D0\n"\
"rGd513EoJ1ULdWkM43zRRkEe4+AH6PSXqD2K20z11qt5Sfa1yJEfD504TIktn/xY\n"\
"aHTB7weHzLsLQPH266XKy1jzDbda4Gb9SngUJozD9OdoefDZ+jf1pwYG4tw9TBkp\n"\
"DqwrAgMBAAGjYDBeMB8GA1UdIwQYMBaAFEZrgsCcrN5ncfurRSqgbnDBJTemMB0G\n"\
"A1UdDgQWBBS6cDE4zJybCHv0EWKpV5EW4vnhLTAMBgNVHRMBAf8EAjAAMA4GA1Ud\n"\
"DwEB/wQEAwIHgDANBgkqhkiG9w0BAQsFAAOCAQEATVuSPpZKeaDsMZ9+fR3hBCxK\n"\
"x60PWIKS/r/6q56fDC/6MmdP97Rt5JE9BZUEuJrw+yTxf4j8eshZRw/KneP/wxby\n"\
"5rGmkKBPZbpVzXOXAhG61B+DJ7bkkqCJcPNPcTbYGj8wgARoytUAvM6nPljtb91c\n"\
"6Ot7VN5iGFdWC8J8hEkTKNf/Iyn96EAACAUDqhu6x4foEATgf74lwuqE0xr3l9U6\n"\
"MaMbaHyYXq+sA4dEBLXEvCQf8BA5uMDbsCTlJyyctCB3BKmAZr9vTd35lRdbW6zp\n"\
"FCNDRYACQr83JTNirCStWfQKXpHzzsXe7swmWAsUGcjDiy6rAoefyTjYxCDDXg==\n"\
"-----END CERTIFICATE-----\n"

/*
 * PEM-encoded issuer certificate for AWS IoT Just In Time Registration (JITR).
 * This is required if you're using JITR, since the issuer (Certificate 
 * Authority) of the client certificate is used by the server for routing the 
 * device's initial request. (The device client certificate must always be 
 * sent as well.) For more information about JITR, see:
 *  https://docs.aws.amazon.com/iot/latest/developerguide/jit-provisioning.html, 
 *  https://aws.amazon.com/blogs/iot/just-in-time-registration-of-device-certificates-on-aws-iot/.
 *
 * If you're not using JITR, set below to NULL.
 * 
 * Must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----\n"\
 * "...base64 data...\n"\
 * "-----END CERTIFICATE-----\n"
 */
#define keyJITR_DEVICE_CERTIFICATE_AUTHORITY_PEM  NULL

/*
 * PEM-encoded client private key.
 *
 * Must include the PEM header and footer:
 * "-----BEGIN RSA PRIVATE KEY-----\n"\
 * "...base64 data...\n"\
 * "-----END RSA PRIVATE KEY-----\n"
 */
#define keyCLIENT_PRIVATE_KEY_PEM \
"-----BEGIN RSA PRIVATE KEY-----\n"\
"MIIEpQIBAAKCAQEA6tbcyY6n77OPKgAtd45dOjX1/HVHFMbJKP1EGiH+InWCQpWr\n"\
"MdNkQyKjn9r9pRpJK2jODqO1w92MySBG4/0TQru/igblfSevK263jECee3KKqJ9U\n"\
"4g4x75NMe6c/sksYsNHI32Juy5hRoVkw8697W6OCq2cdKnT+NHsqtXhCl0VbJ5tj\n"\
"2GzsNYhPmTlpoquZt0mne2W101avl4fw9KxneddxKCdVC3VpDON80UZBHuPgB+j0\n"\
"l6g9ittM9dareUn2tciRHw+dOEyJLZ/8WGh0we8Hh8y7C0Dx9uulystY8w23WuBm\n"\
"/Up4FCaMw/TnaHnw2fo39acGBuLcPUwZKQ6sKwIDAQABAoIBAQCiCnI8bb/5SPff\n"\
"LlIxLb2sXfGHKtFKR8QkEWX9djkqQ9UG5slCzy9el7c5pVzhoJqeZmnQdiwEo4ny\n"\
"eeAQjt7MbEpFDm8phcl7+aCTGT+BxM5ifdaPSOYx/nyG0ifEecbms0qcwQncWBTz\n"\
"dVyuuQYwfEm8xaC9XA7P3bDhmMKyJymvPnqUpGLeYW0V0QjYdevEMVUCAbVPsWiX\n"\
"fTffl0fH+iR/02PidsQDh68kwzeP+BgxBN1obE3SO5iZ8hFxaWET5UFXrvP0a9JT\n"\
"4kaupVMA5lMdkn7dTBKViTkdHhDcctQn2lDspXiHR442IHNEadBiD+V9k0kOvh7Z\n"\
"kuhWpNw5AoGBAPzcxdq9qy+QCwR6HxdXQDLT9adxQrxkzP00NQplIT7MCDKjYKrt\n"\
"U8GLTnRk0T1Xr3ciMpm0E4cnLR7oDsuHhJJl3WJzOMj6Wp37/5FxgqEKdoDowZV7\n"\
"fULdym6ZmTG4uHI1e2jLBw4xjH5e2WnFr+5n9Wzkt0BDQn7HIK7imw6VAoGBAO3A\n"\
"1qs0ytTU+RN9FmZ2Vmo7qcUoHo0drqJBJK0Balyz724yTlKh0OP7XXuFuHEu6YBY\n"\
"StqvtzWxXuuCpm1INJ48ICm/F0KLzxCZK47oKnJw4vLT7n5VkZtPKQYy/sAtGtmU\n"\
"4Zsmckff8MrpMw4+U7YClZVuK5nYZVykeRXzP9+/AoGAXq7cd1fmLd0mAvsngTnu\n"\
"lBnCNny2nIyyJW3THp1XoYgM2clLfTV401QygGrv3qRi050+jUdcuJL21kfWomeQ\n"\
"QLFcAG1cqgT0wYuG2xNB8sNUNFjzg+HFubALCPcC4hdlGX7lQwwjDDGJhhhGGNEp\n"\
"W4AZ6jiKVcnZsFcn6dR4czECgYEAglTR2OyJu/47xBkwLF72pCmsuS1zAfyhfMSl\n"\
"LEm4WrUwrYHaOaYG8tMavdnh7/m9euPrtNHaZw6icAwg24tXfN6M6xWb1Jj7m6e7\n"\
"nw1aJ34GiwLunEagGTldzc4qpIKVU20v93Mt9oSmZTVNDaPRE9d61H2eXSmo9w4a\n"\
"apP8EdUCgYEA+b+qc8Vfp26gGtsfGL8g2gLU457ys+tardUxRu8lkyq566ogn+Bu\n"\
"Qh+eYc/NAcZgH9+ZNEDzbGec9zvYV1ChDkMFFvHMCHq+O3p3umxyYIPAguAE4GGF\n"\
"KVD847GBQ9RiBOEoOhDskW5Z6rA6hilpdr8vuBooiTVvL2yprSHesDI=\n"\
"-----END RSA PRIVATE KEY-----\n"

/* The constants above are set to const char * pointers defined in aws_demo_runner.c,
 * and externed here for use in C files.  NOTE!  THIS IS DONE FOR CONVENIENCE
 * DURING AN EVALUATION PHASE AND IS NOT GOOD PRACTICE FOR PRODUCTION SYSTEMS 
 * WHICH MUST STORE KEYS SECURELY. */
extern const char clientcredentialCLIENT_CERTIFICATE_PEM[];
extern const char* clientcredentialJITR_DEVICE_CERTIFICATE_AUTHORITY_PEM;
extern const char clientcredentialCLIENT_PRIVATE_KEY_PEM[];
extern const uint32_t clientcredentialCLIENT_CERTIFICATE_LENGTH;
extern const uint32_t clientcredentialCLIENT_PRIVATE_KEY_LENGTH;

#endif /* AWS_CLIENT_CREDENTIAL_KEYS_H */
