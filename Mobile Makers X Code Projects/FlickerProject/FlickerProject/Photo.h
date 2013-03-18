//
//  Photo.h
//  FlickerProject
//
//  Created by Nirav Amin on 3/12/13.
//  Copyright (c) 2013 Nirav Amin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Photo : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * photoURL;

@end
