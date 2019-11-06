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

class BodyAngles {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.total = null;
      this.id = null;
      this.time = null;
      this.left_hip_yaw = null;
      this.left_hip_roll = null;
      this.left_hip_pitch = null;
      this.left_knee = null;
      this.left_ankle_pitch = null;
      this.left_ankle_roll = null;
      this.right_hip_yaw = null;
      this.right_hip_roll = null;
      this.right_hip_pitch = null;
      this.right_knee = null;
      this.right_ankle_pitch = null;
      this.right_ankle_roll = null;
      this.left_shoulder = null;
      this.left_elbow = null;
      this.right_shoulder = null;
      this.right_elbow = null;
    }
    else {
      if (initObj.hasOwnProperty('total')) {
        this.total = initObj.total
      }
      else {
        this.total = 0;
      }
      if (initObj.hasOwnProperty('id')) {
        this.id = initObj.id
      }
      else {
        this.id = 0;
      }
      if (initObj.hasOwnProperty('time')) {
        this.time = initObj.time
      }
      else {
        this.time = 0;
      }
      if (initObj.hasOwnProperty('left_hip_yaw')) {
        this.left_hip_yaw = initObj.left_hip_yaw
      }
      else {
        this.left_hip_yaw = 0.0;
      }
      if (initObj.hasOwnProperty('left_hip_roll')) {
        this.left_hip_roll = initObj.left_hip_roll
      }
      else {
        this.left_hip_roll = 0.0;
      }
      if (initObj.hasOwnProperty('left_hip_pitch')) {
        this.left_hip_pitch = initObj.left_hip_pitch
      }
      else {
        this.left_hip_pitch = 0.0;
      }
      if (initObj.hasOwnProperty('left_knee')) {
        this.left_knee = initObj.left_knee
      }
      else {
        this.left_knee = 0.0;
      }
      if (initObj.hasOwnProperty('left_ankle_pitch')) {
        this.left_ankle_pitch = initObj.left_ankle_pitch
      }
      else {
        this.left_ankle_pitch = 0.0;
      }
      if (initObj.hasOwnProperty('left_ankle_roll')) {
        this.left_ankle_roll = initObj.left_ankle_roll
      }
      else {
        this.left_ankle_roll = 0.0;
      }
      if (initObj.hasOwnProperty('right_hip_yaw')) {
        this.right_hip_yaw = initObj.right_hip_yaw
      }
      else {
        this.right_hip_yaw = 0.0;
      }
      if (initObj.hasOwnProperty('right_hip_roll')) {
        this.right_hip_roll = initObj.right_hip_roll
      }
      else {
        this.right_hip_roll = 0.0;
      }
      if (initObj.hasOwnProperty('right_hip_pitch')) {
        this.right_hip_pitch = initObj.right_hip_pitch
      }
      else {
        this.right_hip_pitch = 0.0;
      }
      if (initObj.hasOwnProperty('right_knee')) {
        this.right_knee = initObj.right_knee
      }
      else {
        this.right_knee = 0.0;
      }
      if (initObj.hasOwnProperty('right_ankle_pitch')) {
        this.right_ankle_pitch = initObj.right_ankle_pitch
      }
      else {
        this.right_ankle_pitch = 0.0;
      }
      if (initObj.hasOwnProperty('right_ankle_roll')) {
        this.right_ankle_roll = initObj.right_ankle_roll
      }
      else {
        this.right_ankle_roll = 0.0;
      }
      if (initObj.hasOwnProperty('left_shoulder')) {
        this.left_shoulder = initObj.left_shoulder
      }
      else {
        this.left_shoulder = 0.0;
      }
      if (initObj.hasOwnProperty('left_elbow')) {
        this.left_elbow = initObj.left_elbow
      }
      else {
        this.left_elbow = 0.0;
      }
      if (initObj.hasOwnProperty('right_shoulder')) {
        this.right_shoulder = initObj.right_shoulder
      }
      else {
        this.right_shoulder = 0.0;
      }
      if (initObj.hasOwnProperty('right_elbow')) {
        this.right_elbow = initObj.right_elbow
      }
      else {
        this.right_elbow = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type BodyAngles
    // Serialize message field [total]
    bufferOffset = _serializer.int32(obj.total, buffer, bufferOffset);
    // Serialize message field [id]
    bufferOffset = _serializer.int32(obj.id, buffer, bufferOffset);
    // Serialize message field [time]
    bufferOffset = _serializer.int32(obj.time, buffer, bufferOffset);
    // Serialize message field [left_hip_yaw]
    bufferOffset = _serializer.float64(obj.left_hip_yaw, buffer, bufferOffset);
    // Serialize message field [left_hip_roll]
    bufferOffset = _serializer.float64(obj.left_hip_roll, buffer, bufferOffset);
    // Serialize message field [left_hip_pitch]
    bufferOffset = _serializer.float64(obj.left_hip_pitch, buffer, bufferOffset);
    // Serialize message field [left_knee]
    bufferOffset = _serializer.float64(obj.left_knee, buffer, bufferOffset);
    // Serialize message field [left_ankle_pitch]
    bufferOffset = _serializer.float64(obj.left_ankle_pitch, buffer, bufferOffset);
    // Serialize message field [left_ankle_roll]
    bufferOffset = _serializer.float64(obj.left_ankle_roll, buffer, bufferOffset);
    // Serialize message field [right_hip_yaw]
    bufferOffset = _serializer.float64(obj.right_hip_yaw, buffer, bufferOffset);
    // Serialize message field [right_hip_roll]
    bufferOffset = _serializer.float64(obj.right_hip_roll, buffer, bufferOffset);
    // Serialize message field [right_hip_pitch]
    bufferOffset = _serializer.float64(obj.right_hip_pitch, buffer, bufferOffset);
    // Serialize message field [right_knee]
    bufferOffset = _serializer.float64(obj.right_knee, buffer, bufferOffset);
    // Serialize message field [right_ankle_pitch]
    bufferOffset = _serializer.float64(obj.right_ankle_pitch, buffer, bufferOffset);
    // Serialize message field [right_ankle_roll]
    bufferOffset = _serializer.float64(obj.right_ankle_roll, buffer, bufferOffset);
    // Serialize message field [left_shoulder]
    bufferOffset = _serializer.float64(obj.left_shoulder, buffer, bufferOffset);
    // Serialize message field [left_elbow]
    bufferOffset = _serializer.float64(obj.left_elbow, buffer, bufferOffset);
    // Serialize message field [right_shoulder]
    bufferOffset = _serializer.float64(obj.right_shoulder, buffer, bufferOffset);
    // Serialize message field [right_elbow]
    bufferOffset = _serializer.float64(obj.right_elbow, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type BodyAngles
    let len;
    let data = new BodyAngles(null);
    // Deserialize message field [total]
    data.total = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [id]
    data.id = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [time]
    data.time = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [left_hip_yaw]
    data.left_hip_yaw = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [left_hip_roll]
    data.left_hip_roll = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [left_hip_pitch]
    data.left_hip_pitch = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [left_knee]
    data.left_knee = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [left_ankle_pitch]
    data.left_ankle_pitch = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [left_ankle_roll]
    data.left_ankle_roll = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [right_hip_yaw]
    data.right_hip_yaw = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [right_hip_roll]
    data.right_hip_roll = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [right_hip_pitch]
    data.right_hip_pitch = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [right_knee]
    data.right_knee = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [right_ankle_pitch]
    data.right_ankle_pitch = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [right_ankle_roll]
    data.right_ankle_roll = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [left_shoulder]
    data.left_shoulder = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [left_elbow]
    data.left_elbow = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [right_shoulder]
    data.right_shoulder = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [right_elbow]
    data.right_elbow = _deserializer.float64(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 140;
  }

  static datatype() {
    // Returns string type for a message object
    return 'simulation/BodyAngles';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'dbb3402eec6db5b7fff29a56bafe2d79';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    int32 total
    int32 id
    int32 time
    float64 left_hip_yaw
    float64 left_hip_roll
    float64 left_hip_pitch
    float64 left_knee
    float64 left_ankle_pitch
    float64 left_ankle_roll
    float64 right_hip_yaw
    float64 right_hip_roll
    float64 right_hip_pitch
    float64 right_knee
    float64 right_ankle_pitch
    float64 right_ankle_roll
    float64 left_shoulder
    float64 left_elbow
    float64 right_shoulder
    float64 right_elbow
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new BodyAngles(null);
    if (msg.total !== undefined) {
      resolved.total = msg.total;
    }
    else {
      resolved.total = 0
    }

    if (msg.id !== undefined) {
      resolved.id = msg.id;
    }
    else {
      resolved.id = 0
    }

    if (msg.time !== undefined) {
      resolved.time = msg.time;
    }
    else {
      resolved.time = 0
    }

    if (msg.left_hip_yaw !== undefined) {
      resolved.left_hip_yaw = msg.left_hip_yaw;
    }
    else {
      resolved.left_hip_yaw = 0.0
    }

    if (msg.left_hip_roll !== undefined) {
      resolved.left_hip_roll = msg.left_hip_roll;
    }
    else {
      resolved.left_hip_roll = 0.0
    }

    if (msg.left_hip_pitch !== undefined) {
      resolved.left_hip_pitch = msg.left_hip_pitch;
    }
    else {
      resolved.left_hip_pitch = 0.0
    }

    if (msg.left_knee !== undefined) {
      resolved.left_knee = msg.left_knee;
    }
    else {
      resolved.left_knee = 0.0
    }

    if (msg.left_ankle_pitch !== undefined) {
      resolved.left_ankle_pitch = msg.left_ankle_pitch;
    }
    else {
      resolved.left_ankle_pitch = 0.0
    }

    if (msg.left_ankle_roll !== undefined) {
      resolved.left_ankle_roll = msg.left_ankle_roll;
    }
    else {
      resolved.left_ankle_roll = 0.0
    }

    if (msg.right_hip_yaw !== undefined) {
      resolved.right_hip_yaw = msg.right_hip_yaw;
    }
    else {
      resolved.right_hip_yaw = 0.0
    }

    if (msg.right_hip_roll !== undefined) {
      resolved.right_hip_roll = msg.right_hip_roll;
    }
    else {
      resolved.right_hip_roll = 0.0
    }

    if (msg.right_hip_pitch !== undefined) {
      resolved.right_hip_pitch = msg.right_hip_pitch;
    }
    else {
      resolved.right_hip_pitch = 0.0
    }

    if (msg.right_knee !== undefined) {
      resolved.right_knee = msg.right_knee;
    }
    else {
      resolved.right_knee = 0.0
    }

    if (msg.right_ankle_pitch !== undefined) {
      resolved.right_ankle_pitch = msg.right_ankle_pitch;
    }
    else {
      resolved.right_ankle_pitch = 0.0
    }

    if (msg.right_ankle_roll !== undefined) {
      resolved.right_ankle_roll = msg.right_ankle_roll;
    }
    else {
      resolved.right_ankle_roll = 0.0
    }

    if (msg.left_shoulder !== undefined) {
      resolved.left_shoulder = msg.left_shoulder;
    }
    else {
      resolved.left_shoulder = 0.0
    }

    if (msg.left_elbow !== undefined) {
      resolved.left_elbow = msg.left_elbow;
    }
    else {
      resolved.left_elbow = 0.0
    }

    if (msg.right_shoulder !== undefined) {
      resolved.right_shoulder = msg.right_shoulder;
    }
    else {
      resolved.right_shoulder = 0.0
    }

    if (msg.right_elbow !== undefined) {
      resolved.right_elbow = msg.right_elbow;
    }
    else {
      resolved.right_elbow = 0.0
    }

    return resolved;
    }
};

module.exports = BodyAngles;
