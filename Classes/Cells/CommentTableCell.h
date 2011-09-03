//
//  CommentTableCell.h
//  newsyc
//
//  Created by Grant Paul on 3/5/11.
//  Copyright 2011 Xuzz Productions, LLC. All rights reserved.
//

#import "ABTableViewCell.h"

@class HNEntry;
@interface CommentTableCell : ABTableViewCell {
    HNEntry *comment;
    int indentationLevel;
}

@property (nonatomic, retain) HNEntry *comment;
@property (nonatomic, assign) int indentationLevel;

+ (CGFloat)heightForEntry:(HNEntry *)entry withWidth:(CGFloat)width;
+ (CGFloat)heightForEntry:(HNEntry *)entry withWidth:(CGFloat)width indentationLevel:(int)indentationLevel;

- (id)initWithReuseIdentifier:(NSString *)identifier;

@end
