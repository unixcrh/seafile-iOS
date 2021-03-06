//
//  SeafTextEditorViewController.h
//  seafile
//
//  Created by Wang Wei on 4/9/13.
//  Copyright (c) 2013 Seafile Ltd.  All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SeafDetailViewController.h"
#import "SeafFile.h"

@interface SeafTextEditorViewController : UIViewController<UIWebViewDelegate>

@property (strong) SeafDetailViewController *detailViewController;

- (void) setFile:(id<QLPreviewItem, PreViewDelegate>) file;

@end
