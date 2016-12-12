#import <Foundation/Foundation.h>
#import "DTDActionType.h"

@interface DTDPushMessage : NSObject

@property (nonatomic, retain) NSDictionary * data;
@property (nonatomic) DTDActionType actionType;
@property (nonatomic, retain) NSString * actionString;
@property (nonatomic, retain) NSString * category;
@property (nonatomic) NSInteger badge;

- (NSDictionary *) dictionary;

@end
