/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _LINUX_QRTR_COPY_H
#define _LINUX_QRTR_COPY_H
#include <linux/socket.h>
#include <linux/types.h>
#define QRTR_NODE_BCAST 0xffffffffu
#define QRTR_PORT_CTRL 0xfffffffeu
struct sockaddr_qrtr {
  __kernel_sa_family_t sq_family;
  __u32 sq_node;
  __u32 sq_port;
};
enum qrtr_pkt_type {
  QRTR_TYPE_DATA = 1,
  QRTR_TYPE_HELLO = 2,
  QRTR_TYPE_BYE = 3,
  QRTR_TYPE_NEW_SERVER = 4,
  QRTR_TYPE_DEL_SERVER = 5,
  QRTR_TYPE_DEL_CLIENT = 6,
  QRTR_TYPE_RESUME_TX = 7,
  QRTR_TYPE_EXIT = 8,
  QRTR_TYPE_PING = 9,
  QRTR_TYPE_NEW_LOOKUP = 10,
  QRTR_TYPE_DEL_LOOKUP = 11,
};
struct qrtr_ctrl_pkt {
  __le32 cmd;
  union {
    struct {
      __le32 service;
      __le32 instance;
      __le32 node;
      __le32 port;
    } server;
    struct {
      __le32 node;
      __le32 port;
    } client;
  };
};
#endif