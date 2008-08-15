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

#ifdef NATIVE_STATS
extern int OS_nativeFunctionCount;
extern int OS_nativeFunctionCallCount[];
extern char* OS_nativeFunctionNames[];
#define OS_NATIVE_ENTER(env, that, func) OS_nativeFunctionCallCount[func]++;
#define OS_NATIVE_EXIT(env, that, func) 
#else
#ifndef OS_NATIVE_ENTER
#define OS_NATIVE_ENTER(env, that, func) 
#endif
#ifndef OS_NATIVE_EXIT
#define OS_NATIVE_EXIT(env, that, func) 
#endif
#endif

typedef enum {
	CGPoint_1sizeof_FUNC,
	CGRect_1sizeof_FUNC,
	CGSize_1sizeof_FUNC,
	CGWarpMouseCursorPosition_FUNC,
	CloseRgn_FUNC,
	CopyRgn_FUNC,
	DeleteGlobalRef_FUNC,
	DiffRgn_FUNC,
	DisposeRgn_FUNC,
	EmptyRgn_FUNC,
	Gestalt_FUNC,
	GetCurrentProcess_FUNC,
	GetRegionBounds_FUNC,
	JNIGetObject_FUNC,
	LineTo_FUNC,
	MoveTo_FUNC,
	NSAccessibilityPositionAttribute_FUNC,
	NSAccessibilitySizeAttribute_FUNC,
	NSAffineTransformStruct_1sizeof_FUNC,
	NSBackgroundColorAttributeName_FUNC,
	NSBaselineOffsetAttributeName_FUNC,
	NSBitsPerPixelFromDepth_FUNC,
	NSCalibratedRGBColorSpace_FUNC,
	NSDefaultRunLoopMode_FUNC,
	NSDeviceRGBColorSpace_FUNC,
	NSDeviceResolution_FUNC,
	NSErrorFailingURLStringKey_FUNC,
	NSFileTypeForHFSTypeCode_FUNC,
	NSFilenamesPboardType_FUNC,
	NSFontAttributeName_FUNC,
	NSForegroundColorAttributeName_FUNC,
	NSIntersectionRect_FUNC,
	NSLinkAttributeName_FUNC,
	NSParagraphStyleAttributeName_FUNC,
	NSPoint_1sizeof_FUNC,
	NSPrintAllPages_FUNC,
	NSPrintCopies_FUNC,
	NSPrintFirstPage_FUNC,
	NSPrintJobDisposition_FUNC,
	NSPrintLastPage_FUNC,
	NSPrintMustCollate_FUNC,
	NSPrintPreviewJob_FUNC,
	NSPrintSaveJob_FUNC,
	NSPrintSavePath_FUNC,
	NSPrintSpoolJob_FUNC,
	NSRTFPboardType_FUNC,
	NSRange_1sizeof_FUNC,
	NSRect_1sizeof_FUNC,
	NSSearchPathForDirectoriesInDomains_FUNC,
	NSSize_1sizeof_FUNC,
	NSStrikethroughColorAttributeName_FUNC,
	NSStrikethroughStyleAttributeName_FUNC,
	NSStringPboardType_FUNC,
	NSTIFFPboardType_FUNC,
	NSTemporaryDirectory_FUNC,
	NSURLPboardType_FUNC,
	NSUnderlineColorAttributeName_FUNC,
	NSUnderlineStyleAttributeName_FUNC,
	NewGlobalRef_FUNC,
	NewRgn_FUNC,
	OffsetRgn_FUNC,
	OpenRgn_FUNC,
	PtInRgn_FUNC,
	QDRegionToRects_FUNC,
	RectInRgn_FUNC,
	RectRgn_FUNC,
	SectRgn_FUNC,
	SetFrontProcess_FUNC,
	SetRect_FUNC,
	TransformProcessType_FUNC,
	UnionRgn_FUNC,
	attributedSubstringFromRange_1CALLBACK_FUNC,
	characterIndexForPoint_1CALLBACK_FUNC,
	class_1addIvar_FUNC,
	class_1addMethod_FUNC,
	class_1addProtocol_FUNC,
	drawInteriorWithFrame_1inView_1CALLBACK_FUNC,
	drawRect_1CALLBACK_FUNC,
	firstRectForCharacterRange_1CALLBACK_FUNC,
	hitTest_1CALLBACK_FUNC,
	instrumentObjcMessageSends_FUNC,
	markedRange_1CALLBACK_FUNC,
	memmove__ILorg_eclipse_swt_internal_cocoa_CGPoint_2I_FUNC,
	memmove__ILorg_eclipse_swt_internal_cocoa_CGRect_2I_FUNC,
	memmove__ILorg_eclipse_swt_internal_cocoa_CGSize_2I_FUNC,
	memmove__ILorg_eclipse_swt_internal_cocoa_NSAffineTransformStruct_2I_FUNC,
	memmove__ILorg_eclipse_swt_internal_cocoa_NSPoint_2I_FUNC,
	memmove__ILorg_eclipse_swt_internal_cocoa_NSRange_2I_FUNC,
	memmove__ILorg_eclipse_swt_internal_cocoa_NSRect_2I_FUNC,
	memmove__ILorg_eclipse_swt_internal_cocoa_NSSize_2I_FUNC,
	memmove__Lorg_eclipse_swt_internal_cocoa_CGPoint_2II_FUNC,
	memmove__Lorg_eclipse_swt_internal_cocoa_CGRect_2II_FUNC,
	memmove__Lorg_eclipse_swt_internal_cocoa_CGSize_2II_FUNC,
	memmove__Lorg_eclipse_swt_internal_cocoa_NSAffineTransformStruct_2II_FUNC,
	memmove__Lorg_eclipse_swt_internal_cocoa_NSPoint_2II_FUNC,
	memmove__Lorg_eclipse_swt_internal_cocoa_NSRange_2II_FUNC,
	memmove__Lorg_eclipse_swt_internal_cocoa_NSRect_2II_FUNC,
	memmove__Lorg_eclipse_swt_internal_cocoa_NSSize_2II_FUNC,
	objc_1allocateClassPair_FUNC,
	objc_1getClass_FUNC,
	objc_1getProtocol_FUNC,
	objc_1lookUpClass_FUNC,
	objc_1msgSend__II_FUNC,
	objc_1msgSend__IID_FUNC,
	objc_1msgSend__IIDIIIZ_FUNC,
	objc_1msgSend__IIF_FUNC,
	objc_1msgSend__IIFF_FUNC,
	objc_1msgSend__IIFFFF_FUNC,
	objc_1msgSend__III_FUNC,
	objc_1msgSend__IIIF_FUNC,
	objc_1msgSend__IIII_FUNC,
	objc_1msgSend__IIIII_FUNC,
	objc_1msgSend__IIIIII_FUNC,
	objc_1msgSend__IIIIIII_FUNC,
	objc_1msgSend__IIIIIIIII_FUNC,
	objc_1msgSend__IIIIIIIZZIII_FUNC,
	objc_1msgSend__IIIIIIIZZIIII_FUNC,
	objc_1msgSend__IIIIIZ_FUNC,
	objc_1msgSend__IIIILorg_eclipse_swt_internal_cocoa_NSRange_2_FUNC,
	objc_1msgSend__IIIIZ_FUNC,
	objc_1msgSend__IIILorg_eclipse_swt_internal_cocoa_NSPoint_2_FUNC,
	objc_1msgSend__IIILorg_eclipse_swt_internal_cocoa_NSPoint_2IDIISII_FUNC,
	objc_1msgSend__IIILorg_eclipse_swt_internal_cocoa_NSRange_2_FUNC,
	objc_1msgSend__IIIZ_FUNC,
	objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSAffineTransformStruct_2_FUNC,
	objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSPoint_2_FUNC,
	objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSPoint_2FFF_FUNC,
	objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSPoint_2FFFZ_FUNC,
	objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSPoint_2I_3F_FUNC,
	objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSPoint_2Lorg_eclipse_swt_internal_cocoa_NSPoint_2I_FUNC,
	objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSPoint_2Lorg_eclipse_swt_internal_cocoa_NSPoint_2Lorg_eclipse_swt_internal_cocoa_NSPoint_2_FUNC,
	objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSPoint_2Lorg_eclipse_swt_internal_cocoa_NSRect_2IF_FUNC,
	objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSRange_2_FUNC,
	objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSRange_2I_FUNC,
	objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSRange_2Lorg_eclipse_swt_internal_cocoa_NSPoint_2_FUNC,
	objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSRect_2_FUNC,
	objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSRect_2F_FUNC,
	objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSRect_2FF_FUNC,
	objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSRect_2I_FUNC,
	objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSRect_2II_FUNC,
	objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSRect_2IIZ_FUNC,
	objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSRect_2IIZI_FUNC,
	objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSRect_2IZI_FUNC,
	objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSRect_2Lorg_eclipse_swt_internal_cocoa_NSPoint_2_FUNC,
	objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSRect_2Lorg_eclipse_swt_internal_cocoa_NSRange_2Lorg_eclipse_swt_internal_cocoa_NSRect_2_FUNC,
	objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSRect_2Lorg_eclipse_swt_internal_cocoa_NSRect_2IF_FUNC,
	objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSRect_2Z_FUNC,
	objc_1msgSend__IILorg_eclipse_swt_internal_cocoa_NSSize_2_FUNC,
	objc_1msgSend__IIZ_FUNC,
	objc_1msgSend__IIZI_FUNC,
	objc_1msgSend__II_3B_FUNC,
	objc_1msgSend__II_3BI_FUNC,
	objc_1msgSend__II_3C_FUNC,
	objc_1msgSend__II_3CI_FUNC,
	objc_1msgSend__II_3CLorg_eclipse_swt_internal_cocoa_NSRange_2_FUNC,
	objc_1msgSend__II_3F_FUNC,
	objc_1msgSend__II_3FIF_FUNC,
	objc_1msgSend__II_3I_FUNC,
	objc_1msgSend__II_3III_FUNC,
	objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2I_FUNC,
	objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2II_FUNC,
	objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2IIIII_FUNC,
	objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2ILorg_eclipse_swt_internal_cocoa_NSPoint_2_FUNC,
	objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2ILorg_eclipse_swt_internal_cocoa_NSRect_2_FUNC,
	objc_1msgSendSuper__Lorg_eclipse_swt_internal_cocoa_objc_1super_2ILorg_eclipse_swt_internal_cocoa_NSSize_2_FUNC,
	objc_1msgSend_1fpret__II_FUNC,
	objc_1msgSend_1fpret__III_FUNC,
	objc_1msgSend_1fpret__IIII_FUNC,
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSAffineTransformStruct_2II_FUNC,
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSPoint_2II_FUNC,
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSPoint_2III_FUNC,
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSPoint_2IILorg_eclipse_swt_internal_cocoa_NSPoint_2_FUNC,
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSPoint_2IILorg_eclipse_swt_internal_cocoa_NSPoint_2I_FUNC,
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRange_2II_FUNC,
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRange_2III_FUNC,
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRect_2II_FUNC,
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRect_2III_FUNC,
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRect_2IIII_FUNC,
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRect_2IIIIZ_FUNC,
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRect_2IILorg_eclipse_swt_internal_cocoa_NSRange_2I_FUNC,
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRect_2IILorg_eclipse_swt_internal_cocoa_NSRect_2_FUNC,
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSRect_2IILorg_eclipse_swt_internal_cocoa_NSRect_2I_FUNC,
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSSize_2II_FUNC,
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSSize_2IILorg_eclipse_swt_internal_cocoa_NSSize_2_FUNC,
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSSize_2IILorg_eclipse_swt_internal_cocoa_NSSize_2I_FUNC,
	objc_1msgSend_1stret__Lorg_eclipse_swt_internal_cocoa_NSSize_2IILorg_eclipse_swt_internal_cocoa_NSSize_2ZZI_FUNC,
	objc_1registerClassPair_FUNC,
	object_1getClassName_FUNC,
	object_1getInstanceVariable_FUNC,
	object_1setClass_FUNC,
	object_1setInstanceVariable_FUNC,
	sel_1registerName_FUNC,
	selectedRange_1CALLBACK_FUNC,
	setFrameOrigin_1CALLBACK_FUNC,
	setFrameSize_1CALLBACK_FUNC,
	setFrame_1CALLBACK_FUNC,
	setMarkedText_1selectedRange_1CALLBACK_FUNC,
	textView_1willChangeSelectionFromCharacterRange_1toCharacterRange_1CALLBACK_FUNC,
	webView_1setFrame_1CALLBACK_FUNC,
} OS_FUNCS;
