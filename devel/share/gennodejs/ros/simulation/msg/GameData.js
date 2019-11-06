// Auto-generated. Do not edit!

// (in-package simulation.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class GameData {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.mode = null;
      this.state = null;
      this.remainTime = null;
      this.secondTime = null;
      this.redScore = null;
      this.blueScore = null;
    }
    else {
      if (initObj.hasOwnProperty('mode')) {
        this.mode = initObj.mode
      }
      else {
        this.mode = 0;
      }
      if (initObj.hasOwnProperty('state')) {
        this.state = initObj.state
      }
      else {
        this.state = 0;
      }
      if (initObj.hasOwnProperty('remainTime')) {
        this.remainTime = initObj.remainTime
      }
      else {
        this.remainTime = 0;
      }
      if (initObj.hasOwnProperty('secondTime')) {
        this.secondTime = initObj.secondTime
      }
      else {
        this.secondTime = 0;
      }
      if (initObj.hasOwnProperty('redScore')) {
        this.redScore = initObj.redScore
      }
      else {
        this.redScore = 0;
      }
      if (initObj.hasOwnProperty('blueScore')) {
        this.blueScore = initObj.blueScore
      }
      else {
        this.blueScore = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type GameData
    // Serialize message field [mode]
    bufferOffset = _serializer.int32(obj.mode, buffer, bufferOffset);
    // Serialize message field [state]
    bufferOffset = _serializer.int32(obj.state, buffer, bufferOffset);
    // Serialize message field [remainTime]
    bufferOffset = _serializer.int32(obj.remainTime, buffer, bufferOffset);
    // Serialize message field [secondTime]
    bufferOffset = _serializer.int32(obj.secondTime, buffer, bufferOffset);
    // Serialize message field [redScore]
    bufferOffset = _serializer.int32(obj.redScore, buffer, bufferOffset);
    // Serialize message field [blueScore]
    bufferOffset = _serializer.int32(obj.blueScore, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type GameData
    let len;
    let data = new GameData(null);
    // Deserialize message field [mode]
    data.mode = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [state]
    data.state = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [remainTime]
    data.remainTime = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [secondTime]
    data.secondTime = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [redScore]
    data.redScore = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [blueScore]
    data.blueScore = _deserializer.int32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 24;
  }

  static datatype() {
    // Returns string type for a message object
    return 'simulation/GameData';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '252f7aa3551cd9e19b1c2d0f842ab93b';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    int32 mode
    
    int32 MODE_NORM=1
    int32 MODE_KICK=2
    
    int32 state
    int32 remainTime
    int32 secondTime
    int32 redScore
    int32 blueScore
    
    int32 STATE_INIT = 0
    int32 STATE_READY = 1
    int32 STATE_PLAY = 2
    int32 STATE_PAUSE = 3
    int32 STATE_END = 4
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new GameData(null);
    if (msg.mode !== undefined) {
      resolved.mode = msg.mode;
    }
    else {
      resolved.mode = 0
    }

    if (msg.state !== undefined) {
      resolved.state = msg.state;
    }
    else {
      resolved.state = 0
    }

    if (msg.remainTime !== undefined) {
      resolved.remainTime = msg.remainTime;
    }
    else {
      resolved.remainTime = 0
    }

    if (msg.secondTime !== undefined) {
      resolved.secondTime = msg.secondTime;
    }
    else {
      resolved.secondTime = 0
    }

    if (msg.redScore !== undefined) {
      resolved.redScore = msg.redScore;
    }
    else {
      resolved.redScore = 0
    }

    if (msg.blueScore !== undefined) {
      resolved.blueScore = msg.blueScore;
    }
    else {
      resolved.blueScore = 0
    }

    return resolved;
    }
};

// Constants for message
GameData.Constants = {
  MODE_NORM: 1,
  MODE_KICK: 2,
  STATE_INIT: 0,
  STATE_READY: 1,
  STATE_PLAY: 2,
  STATE_PAUSE: 3,
  STATE_END: 4,
}

module.exports = GameData;
