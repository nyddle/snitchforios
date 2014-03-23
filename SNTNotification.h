//
//  SNTNotification.h
//  Snitch
//
//  Created by Alexander Davydov on 23.03.14.
//  Copyright (c) 2014 Alexander Davydov. All rights reserved.
//

/*
 {
 "app" : 'Snitch',
 "title" : "Stack Overflow",
 "text" : "trace message",
 type : "alert",
 time : 10000
 }
 */


#import <Foundation/Foundation.h>

@interface SNTNotification : NSObject

@property (nonatomic, copy) NSString *appName;
@property (nonatomic, copy) NSString *eventName;
@property (nonatomic, copy) NSString *eventText;
@property (nonatomic, copy) NSString *eventType;

@property (nonatomic, readonly, strong) NSDate *dateCreated;



@end
