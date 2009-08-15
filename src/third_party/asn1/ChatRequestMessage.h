/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 */

#ifndef	_ChatRequestMessage_H_
#define	_ChatRequestMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include <UTF8String.h>
#include "ChatRequestTypeLobby.h"
#include "ChatRequestTypeGame.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum chatRequestType_PR {
	chatRequestType_PR_NOTHING,	/* No components present */
	chatRequestType_PR_chatRequestTypeLobby,
	chatRequestType_PR_chatRequestTypeGame,
	/* Extensions may appear below */
	
} chatRequestType_PR;

/* ChatRequestMessage */
typedef struct ChatRequestMessage {
	struct chatRequestType {
		chatRequestType_PR present;
		union ChatRequestMessage__chatRequestType_u {
			ChatRequestTypeLobby_t	 chatRequestTypeLobby;
			ChatRequestTypeGame_t	 chatRequestTypeGame;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} chatRequestType;
	UTF8String_t	 chatText;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ChatRequestMessage_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ChatRequestMessage;

#ifdef __cplusplus
}
#endif

#endif	/* _ChatRequestMessage_H_ */
