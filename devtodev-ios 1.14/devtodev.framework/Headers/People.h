#import <Foundation/Foundation.h>
#import "Gender.h"

/**
 * User card
 **/
@interface People : NSObject

/**
 * @property name
 * @brief User name
 **/
@property (nonatomic, retain) NSString * name;

/**
 * @property email
 * @brief User email
 **/
@property (nonatomic, retain) NSString * email;

/**
 * @property phone
 * @brief User phone
 **/
@property (nonatomic, retain) NSString * phone;

/**
 * @property photo
 * @brief User photo
 **/
@property (nonatomic, retain) NSString * photo;

/**
 * @property gender
 * @brief User gender
 **/
@property (nonatomic) DTDGender gender;

/**
 * @property age
 * @brief User age
 **/
@property (nonatomic) NSInteger age;

/**
 * @property cheater
 * @brief cheater true if user is a cheater
 **/
@property (nonatomic) BOOL cheater;

/**
 * @brief Set properties on the current user profile.
 * @param key property name
 * @param value value
 **/
-(void) setUserDataWithKey: (NSString *) key andValue: (id) value;

/**
 * @brief Set properties on the current user profile.
 **/
-(void) setUserData: (NSDictionary *) userData;

/**
 * @brief Removes a property or a list of properties and their values from the current user's profile.
 * @param key property name
 **/
-(void) unsetUserDataWithKey: (NSString *) key;

/**
 * @brief Removes multiple properties from user data at once.
 * @param keys property names
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
 * @param key Property name
 * @param value IncrementValue
 **/
-(void) incrementWithKey: (NSString *) key andValue: (id) value;

/**
 * @brief Increments the given numeric properties by the given values.
 * @param values An associative array of property names and values.
 **/
-(void) increment: (NSDictionary *) values;

@end
