// Auto-generated. Do not edit!

// (in-package game_ctrl.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------


//-----------------------------------------------------------

class TeamInfoRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.teamname = null;
    }
    else {
      if (initObj.hasOwnProperty('teamname')) {
        this.teamname = initObj.teamname
      }
      else {
        this.teamname = '';
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type TeamInfoRequest
    // Serialize message field [teamname]
    bufferOffset = _serializer.string(obj.teamname, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type TeamInfoRequest
    let len;
    let data = new TeamInfoRequest(null);
    // Deserialize message field [teamname]
    data.teamname = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += object.teamname.length;
    return length + 4;
  }

  static datatype() {
    // Returns string type for a service object
    return 'game_ctrl/TeamInfoRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'ddd1dc7a3dea0e70185bda146cc075a4';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    string teamname
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new TeamInfoRequest(null);
    if (msg.teamname !== undefined) {
      resolved.teamname = msg.teamname;
    }
    else {
      resolved.teamname = ''
    }

    return resolved;
    }
};

class TeamInfoResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.team = null;
    }
    else {
      if (initObj.hasOwnProperty('team')) {
        this.team = initObj.team
      }
      else {
        this.team = '';
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type TeamInfoResponse
    // Serialize message field [team]
    bufferOffset = _serializer.string(obj.team, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type TeamInfoResponse
    let len;
    let data = new TeamInfoResponse(null);
    // Deserialize message field [team]
    data.team = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += object.team.length;
    return length + 4;
  }

  static datatype() {
    // Returns string type for a service object
    return 'game_ctrl/TeamInfoResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '0ea91258faa2e43cced50cc90a49ffff';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    string team
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new TeamInfoResponse(null);
    if (msg.team !== undefined) {
      resolved.team = msg.team;
    }
    else {
      resolved.team = ''
    }

    return resolved;
    }
};

module.exports = {
  Request: TeamInfoRequest,
  Response: TeamInfoResponse,
  md5sum() { return '967db2d47319aba09eabb132f932430e'; },
  datatype() { return 'game_ctrl/TeamInfo'; }
};
