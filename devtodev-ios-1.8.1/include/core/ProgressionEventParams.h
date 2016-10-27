#import <Foundation/Foundation.h>

@interface ProgressionEventParams : NSObject <NSCoding>

@property (nonatomic) NSMutableDictionary * earned;
@property (nonatomic) NSMutableDictionary * spent;
@property (nonatomic) BOOL isSuccess;

- (void) mergeWithParameters: (ProgressionEventParams *) parameters;

- (NSMutableDictionary *) dictionary;

@end
