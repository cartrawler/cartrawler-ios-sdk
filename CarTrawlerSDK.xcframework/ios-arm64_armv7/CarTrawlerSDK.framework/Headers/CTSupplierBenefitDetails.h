//
//  CTSupplierBenefitDetails.h
//  CarTrawlerSDK
//
//  Created by Rafael Ortiz on 07/02/2022.
//  Copyright © 2022 Cartrawler. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CTSupplierBenefitDetails : NSObject

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *xmlType;
@property (nonatomic, readonly) NSString *codeType;
@property (nonatomic, readonly) NSString *codeTypeText;
@property (nonatomic, readonly) NSString *rentalCompanyName;
@property (nonatomic, readonly) NSString *code;

@end

NS_ASSUME_NONNULL_END
