//
//  SNTNotificationsStore.m
//  Snitch
//
//  Created by Alexander Davydov on 23.03.14.
//  Copyright (c) 2014 Alexander Davydov. All rights reserved.
//

#import "SNTNotificationsStore.h"
#import "SNTNotification.h"

@interface SNTNotificationsStore ()

@property (nonatomic) NSMutableArray *privateNotifications;

@end

@implementation SNTNotificationsStore

+(instancetype)sharedStore
{
    static SNTNotificationsStore *sharedStore = nil;
    if (! sharedStore) {
        sharedStore = [[self alloc] initPrivate];
    }
    
    return sharedStore;
}

-(instancetype)initPrivate
{
    self = [super init];
    if (self) {
        _privateNotifications = [[NSMutableArray alloc] init];
    }
    return self;
}

-(instancetype)init
{
    @throw [NSException exceptionWithName:@"Singleton" reason:@"use +[BNRItemStore sharedStore]" userInfo:nil];
    return nil;
}



@end
