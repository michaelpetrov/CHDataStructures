/************************
 A Cocoa DataStructuresFramework
 Copyright (C) 2002  Phillip Morelock in the United States
 http://www.phillipmorelock.com
 Other copyrights for this specific file as acknowledged herein.
 
 This library is free software; you can redistribute it and/or
 modify it under the terms of the GNU Lesser General Public
 License as published by the Free Software Foundation; either
 version 2.1 of the License, or (at your option) any later version.
 
 This library is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 Lesser General Public License for more details.
 
 You should have received a copy of the GNU Lesser General Public
 License along with this library; if not, write to the Free Software
 Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *******************************/

//  ArrayDeque.h
//  DataStructuresFramework

#import <Foundation/Foundation.h>
#import "Deque.h"

/**
 A fairly basic Deque implemented using an NSMutableArray.
 See the protocol definition for Deque to understand the programming contract.
 */
@interface ArrayDeque : NSObject <Deque> {
	NSMutableArray *array;
}

#pragma mark Method Implementations

- (void) prependObject:(id)anObject;
- (void) appendObject:(id)anObject;
- (id) firstObject;
- (id) lastObject;
- (NSArray*) allObjects;

- (void) removeFirstObject;
- (void) removeLastObject;
- (void) removeAllObjects;

- (BOOL) containsObject:(id)anObject;
- (BOOL) containsObjectIdenticalTo:(id)anObject;
- (NSUInteger) count;

- (NSEnumerator*) objectEnumerator;
- (NSEnumerator*) reverseObjectEnumerator;

@end