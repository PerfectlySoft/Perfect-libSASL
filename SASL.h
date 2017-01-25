#ifndef __PERFECT_SASL__
#define __PERFECT_SASL__
#ifdef __APPLE__
#include "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sasl/gai.h"
#include "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sasl/sasl.h"
#include "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sasl/saslplug.h"
#include "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sasl/saslutil.h"
#else
#include "/usr/include/sasl/sasl.h"
#include "/usr/include/sasl/saslplug.h"
#include "/usr/include/sasl/saslutil.h"
#endif
#endif
