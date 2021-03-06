//
//  ObjcDelegateProxy.h
//  CombineCocoa
//
//  Created by Joan Disho on 25/09/2019.
//  Copyright © 2020 Combine Community. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ObjcDelegateProxy : NSObject

@property (nonnull, strong, atomic, readonly) NSSet *selectors;

- (void)interceptedSelector:(SEL _Nonnull)selector arguments:(NSArray * _Nonnull)arguments;

@end
