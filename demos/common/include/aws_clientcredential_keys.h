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
"MIIDWjCCAkKgAwIBAgIVAOoA/BFEIZ0msX1+gg0TEbNMD7HmMA0GCSqGSIb3DQEB\n"\
"CwUAME0xSzBJBgNVBAsMQkFtYXpvbiBXZWIgU2VydmljZXMgTz1BbWF6b24uY29t\n"\
"IEluYy4gTD1TZWF0dGxlIFNUPVdhc2hpbmd0b24gQz1VUzAeFw0xOTAxMTUxNTI0\n"\
"MzFaFw00OTEyMzEyMzU5NTlaMB4xHDAaBgNVBAMME0FXUyBJb1QgQ2VydGlmaWNh\n"\
"dGUwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQDmOZScYtVT3U9IchwV\n"\
"sCK+X1Lg/0i9N0TzBLIyW49ocfumYnGDntw+NbaqoujqglE1MRCE6X6fT6REscay\n"\
"94NR+nsQu3+AeGuECzF+fy8B0F5oPzCnNzdZkRgK3rhuqz1unzmVeSVmdOMoh5vz\n"\
"RfAX+7tjrOMk9H8HGw+wk2BtaCvn0WMTCgUntKrEw/8cF4QZI4+JAh89dEB7aAP3\n"\
"49lxX/ITvCUhpXtnhn0f899BXP6/1jONSfgU7wEdcZtSHVyCvVC+FvxYrxJ5/XmB\n"\
"YN+mk4m6Pzo2snM9LYrIDOK50+ILlM9ui147XQm4H0syz7CeAKjXVxz7WVyV488c\n"\
"Bwj5AgMBAAGjYDBeMB8GA1UdIwQYMBaAFGfB3178+RJUt/9VG4vOWzWFkp+PMB0G\n"\
"A1UdDgQWBBQGto/nqneVHv3WbgDtl2wsMibXEDAMBgNVHRMBAf8EAjAAMA4GA1Ud\n"\
"DwEB/wQEAwIHgDANBgkqhkiG9w0BAQsFAAOCAQEAOq29lolZt0xwgiw5m9kyPzvA\n"\
"QKwuFHjDrVUYxl3r04VLyFn05yJYJYtLFoJWjg1NiMUgdbT+sySpEtTvQJfMW5U4\n"\
"Q/VGV6KI5+gSDuRLU14BuMxb8qHoJ/IxCXizBq6Iu2gUAcWxVJxCrsclvftZbWTo\n"\
"G2dyO9N6FO5ASrfz0w3ozyWmEc13ejPkKdBX8Qwwi7MUPsbmh7S11znX/WQ5V9A5\n"\
"LpXoDCWUuuFeZphc5Fy8kI7Ven4I+J9Hzg63p4wp/o4vznGZKp40OfWgolGQ6P2x\n"\
"Ch0KiEpHJlcmNqnbTihyTTUcoTrwQpD+R0p2ciQyLtEj/sglvKrYMVT0fHvosA==\n"\
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
"MIIEowIBAAKCAQEA5jmUnGLVU91PSHIcFbAivl9S4P9IvTdE8wSyMluPaHH7pmJx\n"\
"g57cPjW2qqLo6oJRNTEQhOl+n0+kRLHGsveDUfp7ELt/gHhrhAsxfn8vAdBeaD8w\n"\
"pzc3WZEYCt64bqs9bp85lXklZnTjKIeb80XwF/u7Y6zjJPR/BxsPsJNgbWgr59Fj\n"\
"EwoFJ7SqxMP/HBeEGSOPiQIfPXRAe2gD9+PZcV/yE7wlIaV7Z4Z9H/PfQVz+v9Yz\n"\
"jUn4FO8BHXGbUh1cgr1Qvhb8WK8Sef15gWDfppOJuj86NrJzPS2KyAziudPiC5TP\n"\
"boteO10JuB9LMs+wngCo11cc+1lclePPHAcI+QIDAQABAoIBAAMlxmJc942t+OeE\n"\
"p92kCtWPeBKbauMrXkX0SntlxRAofshHkEW8ZkZzdYvfrk+GeJXBlfg7OP/0lspZ\n"\
"o93OhH0ab5RK+/NFsjKb9JFGK95aeu/x7ThcCOWwliOP5/WbYbuhcagZf+lmr7Re\n"\
"JkOtMRsi1e0G8BQRQ6tVM2G2ohrcyxl6DRkzkSvJqoqqCW7c0jQw7uegPgUUG3gc\n"\
"2/2eCC2G8FReTVKGX7lQDMTReu/AH0G2xhG6eKkl4fXm0d0zpMz6fQvYo6K/0GD0\n"\
"aEvgwl73WFxyrk1mbdWRwPbTm4HbW/Bz6XdHJGN0zAAVXLXEVXQtMFO7LjGB210K\n"\
"g1gzmAECgYEA81mmLdh4MQEKso+gW0hI3UCMtPdiCxPtW8HXccgkzpDjNTGjIw+d\n"\
"Tx3FF3AjP0ejT1T6esLgY37MXB7qVF04MDnTHEFQ/l5XFHRTc3O6tsWdqi4UNFXT\n"\
"CvtisZLTrQ/WKcgmcvUP4zrfSRFCapbmt2+5QV+gQGeuhlbMDhrWa/0CgYEA8jFE\n"\
"wgOFuOgjlvhnCm1y6yDV+B+VUqRZBc4K08O9YwC9WacPYdWMGheIzXBQsejZ+Aki\n"\
"pBNmnLH65jLgfKotvmSL6Yjc/0uk0BaVGEHrOz4vNVIn85HOe6+f1sGhr4gHfggL\n"\
"hv3hSkJwMYsLggAu6Qjz1OtImPOnKNjXpMzr+60CgYA9C2gcaAj+gfxk/pKDU4az\n"\
"udWSL9xwWvdX5TBeYo6ZIs9cMK9zxB76EcW3M3IkFZxp8i9DTE9tpgktsrOlphzK\n"\
"PDcxB1GB/bhqcSPd+lIEN15tqlF3L3BZeOYxFVv0NdzLbmH2xHLP1Zzdf27hvijy\n"\
"KxyVwZ85iMjG+k8F2sWfIQKBgQCj77eUACBe9jtI8KGGzGkSQSq0hmRkCTz9EegA\n"\
"SamDPzfsXImr9omcC7wdG15z3qLUIxLgrwUxIcQsV9neaK8IBjUygeLdqA1KkU6g\n"\
"mdYpRsFbvV2voE19KXbvPig8kb5IkBeFa4o44tngnzbN62PVd6rcv9pnNd47ZvQo\n"\
"6FEADQKBgBUDuSPwBQFcTOQejsj/4ZRoPhjZTAB6z4A6dOWFdO5ntlphSS1UfEgB\n"\
"BgfNNZ0hH3GUm2PmAdLjpqmCRyEM7tgGZT+FGbL0CcXxbc522pkt2E5afmm8XK2h\n"\
"AEzK9pgCOZvmHkryWfWo4gKv1Rrfct/xtwy00zAuR2EP6CFrj10y\n"\
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
