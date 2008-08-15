/*******************************************************************************
 * Copyright (c) 2000, 2008 IBM Corporation and others.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 *    IBM Corporation - initial API and implementation
 *******************************************************************************/

#include "swt.h"
#include "os_stats.h"

#ifdef NATIVE_STATS

int OS_nativeFunctionCount = 199;
int OS_nativeFunctionCallCount[199];
char * OS_nativeFunctionNames[] = {
	"CGPoint_1sizeof",
	"CGRect_1sizeof",
	"CGSize_1sizeof",
	"CGWarpMouseCursorPosition",
	"CloseRgn",
	"CopyRgn",
	"DeleteGlobalRef",
	"DiffRgn",
	"DisposeRgn",
	"EmptyRgn",
	"Gestalt",
	"GetCurrentProcess",
	"GetRegionBounds",
	"JNIGetObject",
	"LineTo",
	"MoveTo",
	"NSAccessibilityPositionAttribute",
	"NSAccessibilitySizeAttribute",
	"NSAffineTransformStruct_1sizeof",
	"NSBackgroundColorAttributeName",
	"NSBaselineOffsetAttributeName",
	"NSBitsPerPixelFromDepth",
	"NSCalibratedRGBColorSpace",
	"NSDefaultRunLoopMode",
	"NSDeviceRGBColorSpace",
	"NSDeviceResolution",
	"NSErrorFailingURLStringKey",
	"NSFileTypeForHFSTypeCode",
	"NSFilenamesPboardType",
	"NSFontAttributeName",
	"NSForegroundColorAttributeName",
	"NSIntersectionRect",
	"NSLinkAttributeName",
	"NSParagraphStyleAttributeName",
	"NSPoint_1sizeof",
	"NSPrintAllPages",
	"NSPrintCopies",
	"NSPrintFirstPage",
	"NSPrintJobDisposition",
	"NSPrintLastPage",
	"NSPrintMustCollate",
	"NSPrintPreviewJob",
	"NSPrintSaveJob",
	"NSPrintSavePath",
	"NSPrintSpoolJob",
	"NSRTFPboardType",
	"NSRange_1sizeof",
	"NSRect_1sizeof",
	"NSSearchPathForDirectoriesInDomains",
	"NSSize_1sizeof",
	"NSStrikethroughColorAttributeName",
	"NSStrikethroughStyleAttributeName",
	"NSStringPboardType",
	"NSTIFFPboardType",
	"NSTemporaryDirectory",
	"NSURLPboardType",
	"NSUnderlineColorAttributeName",
	"NSUnderlineStyleAttributeName",
	"NewGlobalRef",
	"NewRgn",
	"OffsetRgn",
	"OpenRgn",
	"PtInRgn",
	"QDRegionToRects",
	"RectInRgn",
	"RectRgn",
	"SectRgn",
	"SetFrontProcess",
	"SetRect",
	"TransformProcessType",
	"UnionRgn",
	"attributedSubstringFromRange_1CALLBACK",
	"characterIndexForPoint_1CALLBACK",
	"class_1addIvar",
	"class_1addMethod",
	"class_1addProtocol",
	"drawInteriorWithFrame_1inView_1CALLBACK",
	"drawRect_1CALLBACK",
	"firstRectForCharacterRange_1CALLBACK",
	"hitTest_1CALLBACK",
	"instrumentObjcMessageSends",
	"markedRange_1CALLBACK",
	"memmove__ILorg_eclipse_swt_internal_cocoa_CGPoint_2I",
	"memmove__ILorg_eclipse_swt_internal_cocoa_CGRect_2I",
	"memmove__ILorg_eclipse_swt_internal_cocoa_CGSize_2I",
	"memmove__ILorg_eclipse_swt_internal_cocoa_NSAffineTransformStruct_2I",
	"memmove__ILorg_eclipse_swt_internal_cocoa_NSPoint_2I",
	"memmove__ILorg_eclipse_swt_internal_cocoa_NSRange_2I",
	"memmove__ILorg_eclipse_swt_internal_cocoa_NSRect_2I",
	"memmove__ILorg_eclipse_swt_internal_cocoa_NSSize_2I",
	"memmove__Lorg_eclipse_swt_internal_cocoa_CGPoint_2II",
	"memmove__Lorg_eclipse_swt_internal_cocoa_CGRect_2II",
	"memmove__Lorg_eclipse_swt_internal_cocoa_CGSize_2II",
	"memmove__Lorg_eclipse_swt_internal_cocoa_NSAffineTransformStruct_2II",
	"memmove__Lorg_eclipse_swt_internal_cocoa_NSPoint_2II",
	"memmove__Lorg_eclipse_swt_internal_cocoa_NSRange_2II",
	"memmove__Lorg_eclipse_swt_internal_cocoa_NSRect_2II",
	"memmove__Lorg_eclipse_swt_internal_cocoa_NSSize_2II",
	"objc_1allocateClassPair",
	"objc_1getClass",
	"objc_1getProtocol",
	"objc_1lookUpClass",
	"objc_1msgSend__II",
	"objc_1msgSend__IID",
	"objc_1msgSend__IIDIIIZ",
	"objc_1msgSend__IIF",
	"objc_1msgSend__IIFF",
	"objc_1msgSend__IIFFFF",
	"objc_1msgSend__III",
	"objc_1msgSend__IIIF",
	"objc_1msgSend__IIII",
	"objc_1msgSend__IIIII",
	"objc_1msgSend__IIIIII",
	"objc_1msgSend__IIIIIII",
	"objc_1msgSend__IIIIIIIII",
	"objc_1msgSend__IIIIIIIZZIII",
	"objc_1msgSend__IIIIIIIZZIIII",
	"objc_1msgSend__IIIIIZ",
	"objc_1msgSend__IIIILorg_eclipse_swt_internal_cocoa_NSRange_2",
	"objc_1msgSend__IIIIZ",
	"objc_1msgSend__IIILorg_eclipse_swt_internal_cocoa_NSPoint_2",
	"objc_1msgSend__IIILorg_eclipse_swt_internal_cocoa_NSPoint_2IDIISII",
	"objc_1msgSend__IIILorg_eclipse_swt_internal_cocoa_NSRange_2",
	"objc_1msgSend__IIIZ",
	"objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSAffineTransformStruct_2",
	"objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSPoint_2",
	"objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSPoint_2FFF",
	"objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSPoint_2FFFZ",
	"objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSPoint_2I_3F",
	"objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSPoint_2Lorg_eclipse_swt_internal_cocoa_NSPoint_2I",
	"objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSPoint_2Lorg_eclipse_swt_internal_cocoa_NSPoint_2Lorg_eclipse_swt_internal_cocoa_NSPoint_2",
	"objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSPoint_2Lorg_eclipse_swt_internal_cocoa_NSRect_2IF",
	"objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSRange_2",
	"objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSRange_2I",
	"objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSRange_2Lorg_eclipse_swt_internal_cocoa_NSPoint_2",
	"objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSRect_2",
	"objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSRect_2F",
	"objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSRect_2FF",
	"objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSRect_2I",
	"objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSRect_2II",
	"objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSRect_2IIZ",
	"objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSRect_2IIZI",
	"objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSRect_2IZI",
	"objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSRect_2Lorg_eclipse_swt_internal_cocoa_NSPoint_2",
	"objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSRect_2Lorg_eclipse_swt_internal_cocoa_NSRange_2Lorg_eclipse_swt_internal_cocoa_NSRect_2",
	"objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSRect_2Lorg_eclipse_swt_internal_cocoa_NSRect_2IF",
	"objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSRect_2Z",
	"objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSSize_2",
	"objc_1msgSend__IIZ",
	"objc_1msgSend__IIZI",
	"objc_1msgSend__II_3B",
	"objc_1msgSend__II_3BI",
	"objc_1msgSend__II_3C",
	"objc_1msgSend__II_3CI",
	"objc_1msgSend__II_3CLorg_eclipse_swt_internal_cocoa_NSRange_2",
	"objc_1msgSend__II_3F",
	"objc_1msgSend__II_3FIF",
	"objc_1msgSend__II_3I",
	"objc_1msgSend__II_3III",
	"objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2I",
	"objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2II",
	"objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2IIIII",
	"objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2ILorg_eclipse_swt_internal_cocoa_NSPoint_2",
	"objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2ILorg_eclipse_swt_internal_cocoa_NSRect_2",
	"objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2ILorg_eclipse_swt_internal_cocoa_NSSize_2",
	"objc_1msgSend_1fpret__II",
	"objc_1msgSend_1fpret__III",
	"objc_1msgSend_1fpret__IIII",
	"objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSAffineTransformStruct_2II",
	"objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSPoint_2II",
	"objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSPoint_2III",
	"objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSPoint_2IILorg_eclipse_swt_internal_cocoa_NSPoint_2",
	"objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSPoint_2IILorg_eclipse_swt_internal_cocoa_NSPoint_2I",
	"objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRange_2II",
	"objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRange_2III",
	"objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRect_2II",
	"objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRect_2III",
	"objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRect_2IIII",
	"objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRect_2IIIIZ",
	"objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRect_2IILorg_eclipse_swt_internal_cocoa_NSRange_2I",
	"objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRect_2IILorg_eclipse_swt_internal_cocoa_NSRect_2",
	"objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRect_2IILorg_eclipse_swt_internal_cocoa_NSRect_2I",
	"objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSSize_2II",
	"objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSSize_2IILorg_eclipse_swt_internal_cocoa_NSSize_2",
	"objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSSize_2IILorg_eclipse_swt_internal_cocoa_NSSize_2I",
	"objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSSize_2IILorg_eclipse_swt_internal_cocoa_NSSize_2ZZI",
	"objc_1registerClassPair",
	"object_1getClassName",
	"object_1getInstanceVariable",
	"object_1setClass",
	"object_1setInstanceVariable",
	"sel_1registerName",
	"selectedRange_1CALLBACK",
	"setFrameOrigin_1CALLBACK",
	"setFrameSize_1CALLBACK",
	"setFrame_1CALLBACK",
	"setMarkedText_1selectedRange_1CALLBACK",
	"textView_1willChangeSelectionFromCharacterRange_1toCharacterRange_1CALLBACK",
	"webView_1setFrame_1CALLBACK",
};

#define STATS_NATIVE(func) Java_org_eclipse_swt_tools_internal_NativeStats_##func

JNIEXPORT jint JNICALL STATS_NATIVE(OS_1GetFunctionCount)
	(JNIEnv *env, jclass that)
{
	return OS_nativeFunctionCount;
}

JNIEXPORT jstring JNICALL STATS_NATIVE(OS_1GetFunctionName)
	(JNIEnv *env, jclass that, jint index)
{
	return (*env)->NewStringUTF(env, OS_nativeFunctionNames[index]);
}

JNIEXPORT jint JNICALL STATS_NATIVE(OS_1GetFunctionCallCount)
	(JNIEnv *env, jclass that, jint index)
{
	return OS_nativeFunctionCallCount[index];
}

#endif
