//
//  NSArrayController+Duplicate.h
//  NerdTool
//
//  Created by Kevin Nygaard on 6/17/09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface NSArrayController (Duplicate)
- (IBAction)duplicateSelection:(id)sender;
- (NSString*)duplicateCheck:(NSString*)myObjectName;
@end
