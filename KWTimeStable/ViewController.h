//
//  ViewController.h
//  KWTimeStable
//
//  Created by Kalyani on 20/09/16.
//  Copyright © 2016 kalyani warke. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UITableViewDelegate,UITableViewDataSource>
{
    NSMutableArray *allValues;
}

@property (strong, nonatomic) IBOutlet UIView *buttonCalculate;
@property (strong, nonatomic) IBOutlet UITextField *numberField;
@property (strong, nonatomic) IBOutlet UITextField *limitField;

- (IBAction)calculateAction:(id)sender;

@property (strong, nonatomic) IBOutlet UITableView *numberTableView;

@end

