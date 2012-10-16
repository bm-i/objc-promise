//
//  PromiseTestCallback.h
//  objc-promise
//
//  Created by Michael Roberts on 2012-10-15.
//  Copyright (c) 2012 Mike Roberts. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Deferred.h"

@interface PromiseTestCallback : NSObject {
    resolved_block _thenBlock;
    rejected_block _failedBlock;
    any_block _anyBlock;
    
    int _thenCount;
    int _failedCount;
    int _anyCount;
}

@property (readonly, copy) resolved_block thenBlock;
@property (readonly, copy) rejected_block failedBlock;
@property (readonly, copy) any_block anyBlock;

@property (readonly, assign) int thenCallCount;
@property (readonly, assign) int failedCallCount;
@property (readonly, assign) int anyCallCount;

@end
