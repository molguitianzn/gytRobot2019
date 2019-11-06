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

class Task {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.type = null;
      this.step = null;
      this.lateral = null;
      this.turn = null;
    }
    else {
      if (initObj.hasOwnProperty('type')) {
        this.type = initObj.type
      }
      else {
        this.type = 0;
      }
      if (initObj.hasOwnProperty('step')) {
        this.step = initObj.step
      }
      else {
        this.step = 0.0;
      }
      if (initObj.hasOwnProperty('lateral')) {
        this.lateral = initObj.lateral
      }
      else {
        this.lateral = 0.0;
      }
      if (initObj.hasOwnProperty('turn')) {
        this.turn = initObj.turn
      }
      else {
        this.turn = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type Task
    // Serialize message field [type]
    bufferOffset = _serializer.int32(obj.type, buffer, bufferOffset);
    // Serialize message field [step]
    bufferOffset = _serializer.float64(obj.step, buffer, bufferOffset);
    // Serialize message field [lateral]
    bufferOffset = _serializer.float64(obj.lateral, buffer, bufferOffset);
    // Serialize message field [turn]
    bufferOffset = _serializer.float64(obj.turn, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type Task
    let len;
    let data = new Task(null);
    // Deserialize message field [type]
    data.type = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [step]
    data.step = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [lateral]
    data.lateral = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [turn]
    data.turn = _deserializer.float64(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 28;
  }

  static datatype() {
    // Returns string type for a message object
    return 'simulation/Task';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '19ba3c70aeefc25e705489e4597513cc';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    int32 type
    float64 step
    float64 lateral
    float64 turn
    
    int32 TASK_NONE = 0
    int32 TASK_WALK = 1
    int32 TASK_KICK = 2
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new Task(null);
    if (msg.type !== undefined) {
      resolved.type = msg.type;
    }
    else {
      resolved.type = 0
    }

    if (msg.step !== undefined) {
      resolved.step = msg.step;
    }
    else {
      resolved.step = 0.0
    }

    if (msg.lateral !== undefined) {
      resolved.lateral = msg.lateral;
    }
    else {
      resolved.lateral = 0.0
    }

    if (msg.turn !== undefined) {
      resolved.turn = msg.turn;
    }
    else {
      resolved.turn = 0.0
    }

    return resolved;
    }
};

// Constants for message
Task.Constants = {
  TASK_NONE: 0,
  TASK_WALK: 1,
  TASK_KICK: 2,
}

module.exports = Task;
