//
//  CTUTMParameters.h
//  CarTrawlerSDK
//
//  Created by Rafael Ortiz on 16/10/2023.
//  Copyright © 2023 Cartrawler. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CTUTMParameters : NSObject

@property (nonatomic, strong, nullable) NSString *source;
@property (nonatomic, strong, nullable) NSString *medium;
@property (nonatomic, strong, nullable) NSString *campaign;
@property (nonatomic, strong, nullable) NSString *term;
@property (nonatomic, strong, nullable) NSString *content;

@end

NS_ASSUME_NONNULL_END
