#import <Foundation/Foundation.h>
#import "ProgressionEventParams.h"

@interface LocationEventParams : ProgressionEventParams

@property (nonatomic) NSInteger difficulty;
@property (nonatomic) NSString * source;
@property (nonatomic) NSNumber * duration;

@end
