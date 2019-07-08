package com.example.mp3encoder;

/**
 * Created on 2019-07-08.
 */
public class Mp3Encoder {
  static {
    System.loadLibrary("Mp3Encoder");
  }

  public native void encode();
}
