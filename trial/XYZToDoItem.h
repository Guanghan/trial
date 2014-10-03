//
//  XYZToDoItem.h
//  trial
//
//  Created by ngh on 14-9-30.
//  Copyright (c) 2014年 ngh. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XYZToDoItem : NSObject


@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;


@end
