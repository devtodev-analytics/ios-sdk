#import <Foundation/Foundation.h>
#import "DTDActionType.h"

@interface DTDPushMessage : NSObject

@property (nonatomic) NSDictionary * data;
@property (nonatomic) DTDActionType actionType;
@property (nonatomic) NSString * actionString;
@property (nonatomic) NSString * category;
@property (nonatomic) NSInteger badge;

- (NSDictionary *) dictionary;

@end
