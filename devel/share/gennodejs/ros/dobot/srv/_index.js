
"use strict";

let ClearAllAlarmsState = require('./ClearAllAlarmsState.js')
let GetARCParams = require('./GetARCParams.js')
let GetAlarmsState = require('./GetAlarmsState.js')
let GetCPCmd = require('./GetCPCmd.js')
let GetCPParams = require('./GetCPParams.js')
let GetColorSensor = require('./GetColorSensor.js')
let GetDeviceName = require('./GetDeviceName.js')
let GetDeviceSN = require('./GetDeviceSN.js')
let GetDeviceVersion = require('./GetDeviceVersion.js')
let GetEndEffectorGripper = require('./GetEndEffectorGripper.js')
let GetEndEffectorLaser = require('./GetEndEffectorLaser.js')
let GetEndEffectorParams = require('./GetEndEffectorParams.js')
let GetEndEffectorSuctionCup = require('./GetEndEffectorSuctionCup.js')
let GetHOMEParams = require('./GetHOMEParams.js')
let GetIOADC = require('./GetIOADC.js')
let GetIODI = require('./GetIODI.js')
let GetIODO = require('./GetIODO.js')
let GetIOMultiplexing = require('./GetIOMultiplexing.js')
let GetIOPWM = require('./GetIOPWM.js')
let GetInfraredSensor = require('./GetInfraredSensor.js')
let GetJOGCommonParams = require('./GetJOGCommonParams.js')
let GetJOGCoordinateParams = require('./GetJOGCoordinateParams.js')
let GetJOGJointParams = require('./GetJOGJointParams.js')
let GetPTPCommonParams = require('./GetPTPCommonParams.js')
let GetPTPCoordinateParams = require('./GetPTPCoordinateParams.js')
let GetPTPJointParams = require('./GetPTPJointParams.js')
let GetPTPJumpParams = require('./GetPTPJumpParams.js')
let GetPose = require('./GetPose.js')
let SetARCCmd = require('./SetARCCmd.js')
let SetARCParams = require('./SetARCParams.js')
let SetCPCmd = require('./SetCPCmd.js')
let SetCPParams = require('./SetCPParams.js')
let SetCmdTimeout = require('./SetCmdTimeout.js')
let SetColorSensor = require('./SetColorSensor.js')
let SetDeviceName = require('./SetDeviceName.js')
let SetEMotor = require('./SetEMotor.js')
let SetEndEffectorGripper = require('./SetEndEffectorGripper.js')
let SetEndEffectorLaser = require('./SetEndEffectorLaser.js')
let SetEndEffectorParams = require('./SetEndEffectorParams.js')
let SetEndEffectorSuctionCup = require('./SetEndEffectorSuctionCup.js')
let SetHOMECmd = require('./SetHOMECmd.js')
let SetHOMEParams = require('./SetHOMEParams.js')
let SetIODO = require('./SetIODO.js')
let SetIOMultiplexing = require('./SetIOMultiplexing.js')
let SetIOPWM = require('./SetIOPWM.js')
let SetInfraredSensor = require('./SetInfraredSensor.js')
let SetJOGCmd = require('./SetJOGCmd.js')
let SetJOGCommonParams = require('./SetJOGCommonParams.js')
let SetJOGCoordinateParams = require('./SetJOGCoordinateParams.js')
let SetJOGJointParams = require('./SetJOGJointParams.js')
let SetPTPCmd = require('./SetPTPCmd.js')
let SetPTPCommonParams = require('./SetPTPCommonParams.js')
let SetPTPCoordinateParams = require('./SetPTPCoordinateParams.js')
let SetPTPJointParams = require('./SetPTPJointParams.js')
let SetPTPJumpParams = require('./SetPTPJumpParams.js')
let SetQueuedCmdClear = require('./SetQueuedCmdClear.js')
let SetQueuedCmdForceStopExec = require('./SetQueuedCmdForceStopExec.js')
let SetQueuedCmdStartExec = require('./SetQueuedCmdStartExec.js')
let SetQueuedCmdStopExec = require('./SetQueuedCmdStopExec.js')
let SetTRIGCmd = require('./SetTRIGCmd.js')
let SetWAITCmd = require('./SetWAITCmd.js')

module.exports = {
  ClearAllAlarmsState: ClearAllAlarmsState,
  GetARCParams: GetARCParams,
  GetAlarmsState: GetAlarmsState,
  GetCPCmd: GetCPCmd,
  GetCPParams: GetCPParams,
  GetColorSensor: GetColorSensor,
  GetDeviceName: GetDeviceName,
  GetDeviceSN: GetDeviceSN,
  GetDeviceVersion: GetDeviceVersion,
  GetEndEffectorGripper: GetEndEffectorGripper,
  GetEndEffectorLaser: GetEndEffectorLaser,
  GetEndEffectorParams: GetEndEffectorParams,
  GetEndEffectorSuctionCup: GetEndEffectorSuctionCup,
  GetHOMEParams: GetHOMEParams,
  GetIOADC: GetIOADC,
  GetIODI: GetIODI,
  GetIODO: GetIODO,
  GetIOMultiplexing: GetIOMultiplexing,
  GetIOPWM: GetIOPWM,
  GetInfraredSensor: GetInfraredSensor,
  GetJOGCommonParams: GetJOGCommonParams,
  GetJOGCoordinateParams: GetJOGCoordinateParams,
  GetJOGJointParams: GetJOGJointParams,
  GetPTPCommonParams: GetPTPCommonParams,
  GetPTPCoordinateParams: GetPTPCoordinateParams,
  GetPTPJointParams: GetPTPJointParams,
  GetPTPJumpParams: GetPTPJumpParams,
  GetPose: GetPose,
  SetARCCmd: SetARCCmd,
  SetARCParams: SetARCParams,
  SetCPCmd: SetCPCmd,
  SetCPParams: SetCPParams,
  SetCmdTimeout: SetCmdTimeout,
  SetColorSensor: SetColorSensor,
  SetDeviceName: SetDeviceName,
  SetEMotor: SetEMotor,
  SetEndEffectorGripper: SetEndEffectorGripper,
  SetEndEffectorLaser: SetEndEffectorLaser,
  SetEndEffectorParams: SetEndEffectorParams,
  SetEndEffectorSuctionCup: SetEndEffectorSuctionCup,
  SetHOMECmd: SetHOMECmd,
  SetHOMEParams: SetHOMEParams,
  SetIODO: SetIODO,
  SetIOMultiplexing: SetIOMultiplexing,
  SetIOPWM: SetIOPWM,
  SetInfraredSensor: SetInfraredSensor,
  SetJOGCmd: SetJOGCmd,
  SetJOGCommonParams: SetJOGCommonParams,
  SetJOGCoordinateParams: SetJOGCoordinateParams,
  SetJOGJointParams: SetJOGJointParams,
  SetPTPCmd: SetPTPCmd,
  SetPTPCommonParams: SetPTPCommonParams,
  SetPTPCoordinateParams: SetPTPCoordinateParams,
  SetPTPJointParams: SetPTPJointParams,
  SetPTPJumpParams: SetPTPJumpParams,
  SetQueuedCmdClear: SetQueuedCmdClear,
  SetQueuedCmdForceStopExec: SetQueuedCmdForceStopExec,
  SetQueuedCmdStartExec: SetQueuedCmdStartExec,
  SetQueuedCmdStopExec: SetQueuedCmdStopExec,
  SetTRIGCmd: SetTRIGCmd,
  SetWAITCmd: SetWAITCmd,
};
