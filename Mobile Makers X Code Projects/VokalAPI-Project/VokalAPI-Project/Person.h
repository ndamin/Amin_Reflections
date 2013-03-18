//
//  Person.h
//  VokalAPI-Project
//
//  Created by Nirav Amin on 3/11/13.
//  Copyright (c) 2013 Nirav Amin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Person : NSManagedObject

@property (nonatomic, retain) NSString * email;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * photoURL;

@end
