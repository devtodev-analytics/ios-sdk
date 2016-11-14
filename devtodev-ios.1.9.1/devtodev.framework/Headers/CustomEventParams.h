#import <Foundation/Foundation.h>

@interface CustomEventParams : NSObject <NSCoding>

- (id) init;

- (void) putParam: (NSString *) key withString: (NSString *) value;

- (void) putParam: (NSString *) key withInt: (int) value;

- (void) putParam: (NSString *) key withFloat:(float) value;

- (void) putParam: (NSString *) key withDouble: (double) value;

- (void) putParam: (NSString *) key withLong: (long) value;

- (unsigned long) paramsCount;

- (NSMutableDictionary *) numberParams;

- (NSMutableDictionary *) stringParams;

- (NSMutableDictionary *) dateParams;

@end
