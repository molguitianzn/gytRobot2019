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

class Stand {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.red = null;
      this.blue = null;
    }
    else {
      if (initObj.hasOwnProperty('red')) {
        this.red = initObj.red
      }
      else {
        this.red = false;
      }
      if (initObj.hasOwnProperty('blue')) {
        this.blue = initObj.blue
      }
      else {
        this.blue = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type Stand
    // Serialize message field [red]
    bufferOffset = _serializer.bool(obj.red, buffer, bufferOffset);
    // Serialize message field [blue]
    bufferOffset = _serializer.bool(obj.blue, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type Stand
    let len;
    let data = new Stand(null);
    // Deserialize message field [red]
    data.red = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [blue]
    data.blue = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 2;
  }

  static datatype() {
    // Returns string type for a message object
    return 'simulation/Stand';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '86ceb06532353ac324c209f78172bff1';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    bool red
    bool blue
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new Stand(null);
    if (msg.red !== undefined) {
      resolved.red = msg.red;
    }
    else {
      resolved.red = false
    }

    if (msg.blue !== undefined) {
      resolved.blue = msg.blue;
    }
    else {
      resolved.blue = false
    }

    return resolved;
    }
};

module.exports = Stand;
