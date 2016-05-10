//
//  BluetoothLib.h
//  BlueChain
//
//  Created by Shirley on 2016/5/10.
//  Copyright © 2016年 Shirley. All rights reserved.
//

#ifndef BluetoothLib_h
#define BluetoothLib_h

#import <Foundation/Foundation.h>
#import <CoreBluetooth/CoreBluetooth.h>

#define TRANSFER_SERVICE_UUID           @"E20A39F4-73F5-4BC4-A12F-17D1AD07A961"
#define TRANSFER_CHARACTERISTIC_UUID    @"08590F7E-DB05-467E-8757-72F6FAEB13D4"

@interface BluetoothLib : NSObject<CBCentralManagerDelegate, CBPeripheralDelegate>

@property (strong, nonatomic) CBCentralManager      *centralManager;
@property (strong, nonatomic) CBPeripheral          *discoveredPeripheral;
@property (strong, nonatomic) NSMutableData         *data;

@end

#endif /* BluetoothLib_h */
