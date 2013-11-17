//
//  OCUDL.h
//  OCUDL
//
//  Created by Dustin Bachrach on 10/10/13.
//  Copyright (c) 2013 Dustin Bachrach. All rights reserved.
//

#import "OCUDLManager.h"
#import "NSString+OCUDL.h"

#define $(literal) ( (id) [[OCUDLManager defaultManager] ocudlForLiteral:#literal] )
