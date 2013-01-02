////////////////////////////////////////////////////////////////////////////////
//
//  JASPER BLUES
//  Copyright 2012 - 2013 Jasper Blues
//  All Rights Reserved.
//
//  NOTICE: Jasper Blues permits you to use, modify, and distribute this file
//  in accordance with the terms of the license agreement accompanying it.
//
////////////////////////////////////////////////////////////////////////////////





#import <Foundation/Foundation.h>

@class SpringComponentDefinition;


@interface SpringComponentFactory : NSObject
{
    NSMutableArray* _registry;
    NSMutableDictionary* _singletons;

    NSMutableSet* _currentlyResolvingReferences;
}

- (void) register:(SpringComponentDefinition*)definition;

- (id)componentForType:(id)classOrProtocol;

 - (NSArray*)allComponentsForType:(id)classOrProtocol;

- (id)componentForKey:(NSString*)key;

@end