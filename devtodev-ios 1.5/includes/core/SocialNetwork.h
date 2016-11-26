
#import <Foundation/Foundation.h>

@interface SocialNetwork : NSObject

@property (nonatomic, assign) NSString * socialNetworkName;

+ (SocialNetwork *) Custom: (NSString *) networkName;

@end

extern SocialNetwork * Vk;
extern SocialNetwork * Twitter;
extern SocialNetwork * Facebook;
extern SocialNetwork * GooglePlus;