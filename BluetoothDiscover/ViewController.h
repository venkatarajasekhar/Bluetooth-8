//
//  ViewController.h
//  BluetoothDiscover
//
//  Created by Klaus Bauernfeind on 01.03.13.
//  Copyright (c) 2013 Klaus Bauernfeind. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BluetoothLEManager.h"
#import "BluetoothLEService.h"
#import "BluetoothLEService+SensorTag.h"
#import "SensorTag.h"

@interface ViewController : UIViewController <BluetoothLEManagerDelegateProtocol, BluetoothLEServiceProtocol>
@property (nonatomic, assign) CBPeripheral *peripheral; // We only connect with 1 device at a time
@property (nonatomic, strong) BluetoothLEService *service;
@property (weak, nonatomic) IBOutlet UILabel *connectLabel;
@property (weak, nonatomic) IBOutlet UISwitch *connectSwitch;
@property (nonatomic, strong) SensorTag *sensorTag;
- (IBAction)connectSwitchSwitched:(id)sender;
@property (weak, nonatomic) IBOutlet UILabel *tempLabel;
@property (weak, nonatomic) IBOutlet UILabel *tempAmbientLabel;
@property (weak, nonatomic) IBOutlet UILabel *humidityLabel;

@property (weak, nonatomic) IBOutlet UISwitch *objTempSwitch;
@property (weak, nonatomic) IBOutlet UISwitch *ambTempSwitch;
@property (weak, nonatomic) IBOutlet UISwitch *humSwitch;

@property int index;

@end
