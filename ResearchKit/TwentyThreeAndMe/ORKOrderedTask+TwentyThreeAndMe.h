//
//  ORKOrderedTask+TwentyThreeAndMe.h
//  ResearchKit
//
//  Created by Andrew Schramm on 7/27/15.
//  Copyright (c) 2015 researchkit.org. All rights reserved.
//

#import <ResearchKit/ResearchKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface ORKOrderedTask (TwentyThreeAndMe)

/**
 Returns a predefined task that connects a participant with 23andMe
 
 TODO: Finish writing the detailed documentation for this method
 */
+ (ORKOrderedTask *)twentyThreeAndMeTaskWithIdentifier:(NSString *)identifier
                                          authClientId:(NSString *)clientId
                                      authClientSecret:(NSString *)clientSecret
                                            authScopes:(NSString *)scopes
                               investigatorDisplayName:(NSString *)investigatorDisplayName
                                      studyDisplayName:(NSString *)studyDisplayName
                                     studyContactEmail:(NSString *)studyContactEmail;

@end

NS_ASSUME_NONNULL_END
