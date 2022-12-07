//
//  Customer.h
//  CartrawlerAPI
//
//  Created by Lee Maguire on 15/04/2016.
//  Copyright © 2016 Cartrawler. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 *  CTCustomer
 */
@interface CTCustomer : NSObject

/**
 *  the Customers age
 */
@property (nonatomic, nonnull) NSNumber *age;
/**
 *  The customers home country
 */
@property (nonatomic, nonnull) NSString *homeCountry;
/**
 *  the customers first name
 */
@property (nonatomic, nonnull) NSString *firstName;
/**
 *  The customers last name
 */
@property (nonatomic, nonnull) NSString *lastName;
/**
 *  The customers email
 */
@property (nonatomic, nonnull) NSString *email;
/**
 *  The customers address
 */
@property (nonatomic, nonnull) NSString *address;
/**
 *  The customers phone number
 */
@property (nonatomic, nonnull) NSString *phone;

- (instancetype)initWithHomeCountry:(NSString *)homeCountry
                      age:(NSNumber *)age
                firstName:(NSString *)firstName
                 lastName:(NSString *)lastName
                    email:(NSString *)email
                  address:(NSString *)address
                    phone:(NSString *)phone;

@end

NS_ASSUME_NONNULL_END

