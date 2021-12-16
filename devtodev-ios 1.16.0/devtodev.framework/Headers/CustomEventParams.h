#import <Foundation/Foundation.h>

/**
 * Custom event parameters
 */
@interface CustomEventParams : NSObject <NSCoding>

/**
 * @brief Initialization
 **/
- (id) init;

/**
 * @brief Insert NSString parameter
 * @param key name (max. 32 symbols)
 * @param value value
 **/
- (void) putParam: (NSString *) key withString: (NSString *) value;

/**
 * @brief Insert int parameter
 * @param key name (max. 32 symbols)
 * @param value value
 **/
- (void) putParam: (NSString *) key withInt: (int) value;

/**
 * @brief Insert float parameter
 * @param key name (max. 32 symbols)
 * @param value value
 **/
- (void) putParam: (NSString *) key withFloat:(float) value;

/**
 * @brief Insert double parameter
 * @param key name (max. 32 symbols)
 * @param value value
 **/
- (void) putParam: (NSString *) key withDouble: (double) value;

/**
 * @brief Insert long parameter
 * @param key name (max. 32 symbols)
 * @param value value
 **/
- (void) putParam: (NSString *) key withLong: (long) value;

- (unsigned long) paramsCount;

- (NSMutableDictionary *) numberParams;

- (NSMutableDictionary *) stringParams;

- (NSMutableDictionary *) dateParams;

@end
