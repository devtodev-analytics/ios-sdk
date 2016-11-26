#ifndef _ReceiptStatus_h
#define _ReceiptStatus_h

typedef enum {
    ReceiptValid,
	ReceiptNotValid,
	ReceiptServerError,
	ReceiptSandbox,
	ReceiptInternalError
} ReceiptStatus;

#endif
