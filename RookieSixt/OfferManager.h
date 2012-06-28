//
//  OfferManager.h
//  RookieSixt
//
//  Created by Sven Röder on 6/13/12.
//  Copyright (c) 2012 Sixt. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void (^OfferManagerBlock)(NSArray*, NSError*);

@interface OfferManager : NSObject

- (void)offersFromFile:(NSString*)resource completion:(OfferManagerBlock)block;

@end
