//
//  RCTAppleHealthKit+TypesAndPermissions.h
//  RCTAppleHealthKit
//
//  Maintained by Terrillo Wallson 2016-06-26.
//  This source code is licensed under the MIT-style license found in the
//  LICENSE file in the root directory of this source tree.
//

#import "RCTAppleHealthKit.h"

@interface RCTAppleHealthKit (TypesAndPermissions)

- (NSDictionary *)readPermsDict;
- (NSDictionary *)writePermsDict;
- (NSSet *)getReadPermsFromOptions:(NSArray *)options;
- (NSSet *)getWritePermsFromOptions:(NSArray *)options;
- (NSArray *)getReadPermsArrayFromOptions:(NSArray *)options;
- (NSArray *)getWritePermsArrayFromOptions:(NSArray *)options;
+ (NSDictionary *)getStringToWorkoutActivityTypeDictionary;
+ (NSDictionary *)getNumberToWorkoutNameDictionary;
@end
