#include "./core/Firebase_Client_Version.h"
#if !FIREBASE_CLIENT_VERSION_CHECK(40403)
#error "Mixed versions compilation."
#endif

/**
 * Created September 5, 2023
 */

#ifndef FB_Error_H
#define FB_Error_H

#define FIREBASE_ERROR_HTTP_CODE_UNDEFINED -1000
#define FB_ERROR_RANGE -100

/// TCP client errors
// Server does not response to the request in time
#define FIREBASE_ERROR_TCP_ERROR_CONNECTION_REFUSED (-1)

#define FIREBASE_ERROR_TCP_ERROR_SEND_REQUEST_FAILED (-2)
// The session (server disconnected) was closed during reading the response.
#define FIREBASE_ERROR_TCP_ERROR_NOT_CONNECTED (-3)
// Network was disconnected
#define FIREBASE_ERROR_TCP_ERROR_CONNECTION_LOST (-4)
// The session was already opened for other connection
#define FIREBASE_ERROR_TCP_ERROR_CONNECTION_INUSED (-5)
// Response payload is too large or internet is too slow or not responding to complete reading in time 
#define FIREBASE_ERROR_TCP_RESPONSE_PAYLOAD_READ_TIMED_OUT (-6)
// Similar to FIREBASE_ERROR_TCP_RESPONSE_PAYLOAD_READ_TIMED_OUT but not used
#define FIREBASE_ERROR_TCP_RESPONSE_READ_FAILED (-7)


#define FIREBASE_ERROR_TCP_CLIENT_MISSING_NETWORK_CONNECTION_CB -8
#define FIREBASE_ERROR_TCP_CLIENT_MISSING_NETWORK_STATUS_CB -9
#define FIREBASE_ERROR_TCP_CLIENT_NOT_INITIALIZED -10


/// HTTP codes see RFC7231
#define FIREBASE_ERROR_HTTP_CODE_OK 200
#define FIREBASE_ERROR_HTTP_CODE_NON_AUTHORITATIVE_INFORMATION 203
#define FIREBASE_ERROR_HTTP_CODE_NO_CONTENT 204
#define FIREBASE_ERROR_HTTP_CODE_MOVED_PERMANENTLY 301
#define FIREBASE_ERROR_HTTP_CODE_FOUND 302
#define FIREBASE_ERROR_HTTP_CODE_USE_PROXY 305
#define FIREBASE_ERROR_HTTP_CODE_TEMPORARY_REDIRECT 307
#define FIREBASE_ERROR_HTTP_CODE_PERMANENT_REDIRECT 308
#define FIREBASE_ERROR_HTTP_CODE_BAD_REQUEST 400
#define FIREBASE_ERROR_HTTP_CODE_UNAUTHORIZED 401
#define FIREBASE_ERROR_HTTP_CODE_FORBIDDEN 403
#define FIREBASE_ERROR_HTTP_CODE_NOT_FOUND 404
#define FIREBASE_ERROR_HTTP_CODE_METHOD_NOT_ALLOWED 405
#define FIREBASE_ERROR_HTTP_CODE_NOT_ACCEPTABLE 406
#define FIREBASE_ERROR_HTTP_CODE_PROXY_AUTHENTICATION_REQUIRED 407
#define FIREBASE_ERROR_HTTP_CODE_REQUEST_TIMEOUT 408
#define FIREBASE_ERROR_HTTP_CODE_LENGTH_REQUIRED 411
#define FIREBASE_ERROR_HTTP_CODE_PRECONDITION_FAILED 412
#define FIREBASE_ERROR_HTTP_CODE_PAYLOAD_TOO_LARGE 413
#define FIREBASE_ERROR_HTTP_CODE_URI_TOO_LONG 414
#define FIREBASE_ERROR_HTTP_CODE_MISDIRECTED_REQUEST 421
#define FIREBASE_ERROR_HTTP_CODE_UNPROCESSABLE_ENTITY 422
#define FIREBASE_ERROR_HTTP_CODE_TOO_MANY_REQUESTS 429
#define FIREBASE_ERROR_HTTP_CODE_REQUEST_HEADER_FIELDS_TOO_LARGE 431
#define FIREBASE_ERROR_HTTP_CODE_INTERNAL_SERVER_ERROR 500
#define FIREBASE_ERROR_HTTP_CODE_NOT_IMPLEMENTED 501
#define FIREBASE_ERROR_HTTP_CODE_BAD_GATEWAY 502
#define FIREBASE_ERROR_HTTP_CODE_SERVICE_UNAVAILABLE 503
#define FIREBASE_ERROR_HTTP_CODE_GATEWAY_TIMEOUT 504
#define FIREBASE_ERROR_HTTP_CODE_HTTP_VERSION_NOT_SUPPORTED 505
#define FIREBASE_ERROR_HTTP_CODE_LOOP_DETECTED 508
#define FIREBASE_ERROR_HTTP_CODE_NETWORK_AUTHENTICATION_REQUIRED 511

// Firebase error
#define FIREBASE_ERROR_BUFFER_OVERFLOW /*          */ (FB_ERROR_RANGE - 1)
#define FIREBASE_ERROR_DATA_TYPE_MISMATCH /*          */ (FB_ERROR_RANGE - 2)
#define FIREBASE_ERROR_PATH_NOT_EXIST /*          */ (FB_ERROR_RANGE - 3)
#define FIREBASE_ERROR_EXTERNAL_CLIENT_DISABLED /*          */ (FB_ERROR_RANGE - 4)
#define FIREBASE_ERROR_EXTERNAL_CLIENT_NOT_INITIALIZED /*          */ (FB_ERROR_RANGE - 5)
#define FIREBASE_ERROR_NO_FCM_ID_TOKEN_PROVIDED /*          */ (FB_ERROR_RANGE - 6)
#define FIREBASE_ERROR_NO_FCM_SERVER_KEY_PROVIDED /*          */ (FB_ERROR_RANGE - 7)
#define FIREBASE_ERROR_OAUTH2_REQUIRED /*          */ (FB_ERROR_RANGE - 8)
#define FIREBASE_ERROR_TCP_MAX_REDIRECT_REACHED /*          */ (FB_ERROR_RANGE - 9)
#define FIREBASE_ERROR_EXPECTED_JSON_DATA /*          */ (FB_ERROR_RANGE - 10)
#define FIREBASE_ERROR_NTP_TIMEOUT /*          */ (FB_ERROR_RANGE - 11)
#define FIREBASE_ERROR_SSL_RX_BUFFER_SIZE_TOO_SMALL /*          */ (FB_ERROR_RANGE - 12)
#define FIREBASE_ERROR_ARCHIVE_NOT_FOUND /*          */ (FB_ERROR_RANGE - 13)
#define FIREBASE_ERROR_UNINITIALIZED /*          */ (FB_ERROR_RANGE - 14)
#define FIREBASE_ERROR_NO_WIFI_TIME /*          */ (FB_ERROR_RANGE - 15)
#define FIREBASE_ERROR_TOKEN_CREATE_HASH /*          */ (FB_ERROR_RANGE - 16)
#define FIREBASE_ERROR_TOKEN_PARSE_PK /*          */ (FB_ERROR_RANGE - 17)
#define FIREBASE_ERROR_TOKEN_SIGN /*          */ (FB_ERROR_RANGE - 18)
#define FIREBASE_ERROR_TOKEN_EXCHANGE /*          */ (FB_ERROR_RANGE - 19)
#define FIREBASE_ERROR_TOKEN_NOT_READY /*          */ (FB_ERROR_RANGE - 20)
#define FIREBASE_ERROR_LONG_RUNNING_TASK /*          */ (FB_ERROR_RANGE - 21)
#define FIREBASE_ERROR_UPLOAD_TIME_OUT /*          */ (FB_ERROR_RANGE - 22)
#define FIREBASE_ERROR_UPLOAD_DATA_ERRROR /*          */ (FB_ERROR_RANGE - 23)
#define FIREBASE_ERROR_NO_FCM_TOPIC_PROVIDED /*          */ (FB_ERROR_RANGE - 24)
#define FIREBASE_ERROR_FCM_ID_TOKEN_AT_INDEX_NOT_FOUND /*          */ (FB_ERROR_RANGE - 25)
#define FIREBASE_ERROR_MISSING_DATA /*          */ (FB_ERROR_RANGE - 26)
#define FIREBASE_ERROR_MISSING_CREDENTIALS /*          */ (FB_ERROR_RANGE - 27)
#define FIREBASE_ERROR_INVALID_JSON_RULES /*          */ (FB_ERROR_RANGE - 28)
#define FIREBASE_ERROR_FW_UPDATE_INVALID_FIRMWARE /*          */ (FB_ERROR_RANGE - 29)
#define FIREBASE_ERROR_FW_UPDATE_TOO_LOW_FREE_SKETCH_SPACE /*          */ (FB_ERROR_RANGE - 30)
#define FIREBASE_ERROR_FW_UPDATE_BIN_SIZE_NOT_MATCH_SPI_FLASH_SPACE /*          */ (FB_ERROR_RANGE - 31)
#define FIREBASE_ERROR_FW_UPDATE_BEGIN_FAILED /*          */ (FB_ERROR_RANGE - 32)
#define FIREBASE_ERROR_FW_UPDATE_WRITE_FAILED /*          */ (FB_ERROR_RANGE - 33)
#define FIREBASE_ERROR_FW_UPDATE_END_FAILED /*          */ (FB_ERROR_RANGE - 34)
#define FIREBASE_ERROR_TOKEN_COMPLETE_NOTIFY /*          */ (FB_ERROR_RANGE - 35)
#define FIREBASE_ERROR_TOKEN_COMPLETE_UNNOTIFY /*          */ (FB_ERROR_RANGE - 36)
#define FIREBASE_ERROR_TOKEN_ERROR_UNNOTIFY /*          */ (FB_ERROR_RANGE - 37)
#define FIREBASE_ERROR_USER_TIME_SETTING_REQUIRED /*          */ (FB_ERROR_RANGE - 38)
#define FIREBASE_ERROR_SYS_TIME_IS_NOT_READY /*          */ (FB_ERROR_RANGE - 39)
#define FIREBASE_ERROR_USER_PAUSE /*          */ (FB_ERROR_RANGE - 40)

#endif