#import <Foundation/Foundation.h>
#import "Gender.h"

@interface People : NSObject

@property (nonatomic) NSString * name;
@property (nonatomic) NSString * email;
@property (nonatomic) NSString * phone;
@property (nonatomic) NSString * photo;
@property (nonatomic) DTDGender gender;
@property (nonatomic) NSInteger age;
@property (nonatomic) BOOL cheater;

/**
 * @brief Set properties on the current user profile.
 **/
-(void) setUserDataWithKey: (NSString *) key andValue: (id) value;

/**
 * @brief Set properties on the current user profile.
 **/
-(void) setUserData: (NSDictionary *) userData;

/**
 * @brief Removes a property or a list of properties and their values from the current user's profile.
 **/
-(void) unsetUserDataWithKey: (NSString *) key;

/**
 * @brief Removes multiple properties from user data at once.
 **/
-(void) unsetUserData: (NSArray *) keys;

/**
 * @brief Removes all user's custom personal data from devtodev data base.
 */
-(void) clearUserData;

/**
 * @brief Append values to list properties.
 * @param key Property name
 * @param value Appending value {NSString|NSNumber|NSNull|NSArray|NSDictionary|NSDate|NSURL}
 */
-(void) appendWithKey: (NSString *) key andValue: (id) value;

/**
 * @brief Multiple append list-valued properties at once
 * @param userData An associative array of property names and values.
 */
-(void) append: (NSDictionary *) userData;

/**
 * @brief Union a given list with a list-valued property, excluding duplicate values.
 * @param key Property name
 * @param value Appending value {NSString|NSNumber|NSNull|NSArray|NSDictionary|NSDate|NSURL}
 */
-(void) unionWithKey: (NSString *) key andValue: (id) value;

/**
 * @brief Multiple union of a given lists with a list-valued properties at once
 * @param userData An associative array of property names and values.
 */
-(void) unionWithData: (NSDictionary *) userData;

/**
 * @brief Increments the given numeric properties by the given values.
 **/
-(void) incrementWithKey: (NSString *) key andValue: (id) value;

/**
 * @brief Increments the given numeric properties by the given values.
 **/
-(void) increment: (NSDictionary *) values;

@end
