void loadFixedBindConfig() {
  bind_data.version = version;
  bind_data.serial_baudrate = 115200;
  bind_data.rf_frequency = 435000000;
  bind_data.rf_magic = 0xDEADF134;
  bind_data.rf_power = 7;
  bind_data.rf_channel_spacing = 5;
  bind_data.hopchannel[0] = 22;
  bind_data.hopchannel[1] = 10;
  bind_data.hopchannel[2] = 19;
  bind_data.hopchannel[3] = 34;
  bind_data.hopchannel[4] = 49;
  bind_data.hopchannel[5] = 41;
  // bind_data.modem_params = ????;
  bind_data.flags = (0x01 | 0x10);
}
