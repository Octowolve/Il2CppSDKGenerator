#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NGUIMath
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NGUIMath"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_Lerp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClampIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClampIndex2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RepeatIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WrapAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Wrap01() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HexToDecimal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DecimalToHexChar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DecimalToHex8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DecimalToHex24() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DecimalToHex32() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ColorToInt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IntToColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IntToBinary() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HexToColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertToTexCoords() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertToPixels() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MakePixelPerfect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_MakePixelPerfect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConstrainRect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateAbsoluteWidgetBounds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateRelativeWidgetBounds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CalculateRelativeWidgetBounds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_CalculateRelativeWidgetBounds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_CalculateRelativeWidgetBounds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix4_CalculateRelativeWidgetBounds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpringDampen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SpringDampen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpringLerp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SpringLerp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_SpringLerp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_SpringLerp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix4_SpringLerp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RotateTowards() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DistancePointToLineSegment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DistanceToRectangle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_DistanceToRectangle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPivotOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPivot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MoveWidget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MoveRect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResizeWidget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ResizeWidget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustWidget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_AdjustWidget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_AdjustWidget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustByDPI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ScreenToPixels() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ScreenToParentPixels() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WorldToLocalPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OverlayPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_OverlayPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_OverlayPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}

	template <typename T = float> static T Lerp(float from, float to, float factor) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x43BAE80))(0, from, to, factor);
	}
	template <typename T = int32_t> static T ClampIndex(int32_t val, int32_t max) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x43BAF60))(0, val, max);
	}
	template <typename T = int32_t> static T ClampIndex2(int32_t val, int32_t max) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x43BB020))(0, val, max);
	}
	template <typename T = int32_t> static T RepeatIndex(int32_t val, int32_t max) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x43BB0E0))(0, val, max);
	}
	template <typename T = float> static T WrapAngle(float angle) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x43BB1B4))(0, angle);
	}
	template <typename T = float> static T Wrap01(float val) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x43BB2B0))(0, val);
	}
	template <typename T = int32_t> static T HexToDecimal(char ch) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x43BB3B4))(0, ch);
	}
	template <typename T = char> static T DecimalToHexChar(int32_t num) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x43BB4A8))(0, num);
	}
	template <typename T = Il2CppString*> static T DecimalToHex8(int32_t num) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x43BB560))(0, num);
	}
	template <typename T = Il2CppString*> static T DecimalToHex24(int32_t num) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x43BB63C))(0, num);
	}
	template <typename T = Il2CppString*> static T DecimalToHex32(int32_t num) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x43BB718))(0, num);
	}
	template <typename T = int32_t> static T ColorToInt(uintptr_t c) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43BB7EC))(0, c);
	}
	template <typename T = uintptr_t> static T IntToColor(int32_t val) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x43BB970))(0, val);
	}
	template <typename T = Il2CppString*> static T IntToBinary(int32_t val, int32_t bits) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x43BBA78))(0, val, bits);
	}
	template <typename T = uintptr_t> static T HexToColor(uint32_t val) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x43BBC9C))(0, val);
	}
	template <typename T = Il2CppRect> static T ConvertToTexCoords(Il2CppRect rect, int32_t width, int32_t height) {
		return ((T (*)(void *, Il2CppRect, int32_t, int32_t))(Il2CppBase() + 0x43BBD44))(0, rect, width, height);
	}
	template <typename T = Il2CppRect> static T ConvertToPixels(Il2CppRect rect, int32_t width, int32_t height, bool round) {
		return ((T (*)(void *, Il2CppRect, int32_t, int32_t, bool))(Il2CppBase() + 0x43BBF14))(0, rect, width, height, round);
	}
	template <typename T = Il2CppRect> static T MakePixelPerfect(Il2CppRect rect) {
		return ((T (*)(void *, Il2CppRect))(Il2CppBase() + 0x43BC224))(0, rect);
	}
	template <typename T = Il2CppRect> static T MakePixelPerfect_1(Il2CppRect rect, int32_t width, int32_t height) {
		return ((T (*)(void *, Il2CppRect, int32_t, int32_t))(Il2CppBase() + 0x43BC418))(0, rect, width, height);
	}
	template <typename T = Il2CppVector2> static T ConstrainRect(Il2CppVector2 minRect, Il2CppVector2 maxRect, Il2CppVector2 minArea, Il2CppVector2 maxArea) {
		return ((T (*)(void *, Il2CppVector2, Il2CppVector2, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x43BC668))(0, minRect, maxRect, minArea, maxArea);
	}
	template <typename T = uintptr_t> static T CalculateAbsoluteWidgetBounds(uintptr_t trans) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43BC864))(0, trans);
	}
	template <typename T = uintptr_t> static T CalculateRelativeWidgetBounds(uintptr_t trans) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43BCC90))(0, trans);
	}
	template <typename T = uintptr_t> static T CalculateRelativeWidgetBounds_1(uintptr_t trans, bool considerInactive) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x43BD0F0))(0, trans, considerInactive);
	}
	template <typename T = uintptr_t> static T CalculateRelativeWidgetBounds_2(uintptr_t relativeTo, uintptr_t content) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x43BD1C8))(0, relativeTo, content);
	}
	template <typename T = uintptr_t> static T CalculateRelativeWidgetBounds_3(uintptr_t relativeTo, uintptr_t content, bool considerInactive, bool considerChildren) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool, bool))(Il2CppBase() + 0x43BCD8C))(0, relativeTo, content, considerInactive, considerChildren);
	}
	template <typename T = void> static T CalculateRelativeWidgetBounds_4(uintptr_t content, bool considerInactive, bool isRoot, uintptr_t toLocal, uintptr_t vMin, uintptr_t vMax, uintptr_t isSet, bool considerChildren) {
		return ((T (*)(void *, uintptr_t, bool, bool, uintptr_t, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x43BD2D0))(0, content, considerInactive, isRoot, toLocal, vMin, vMax, isSet, considerChildren);
	}
	template <typename T = Il2CppVector3> static T SpringDampen(uintptr_t velocity, float strength, float deltaTime) {
		return ((T (*)(void *, uintptr_t, float, float))(Il2CppBase() + 0x43BD870))(0, velocity, strength, deltaTime);
	}
	template <typename T = Il2CppVector2> static T SpringDampen_1(uintptr_t velocity, float strength, float deltaTime) {
		return ((T (*)(void *, uintptr_t, float, float))(Il2CppBase() + 0x43BDA6C))(0, velocity, strength, deltaTime);
	}
	template <typename T = float> static T SpringLerp(float strength, float deltaTime) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x43BDC48))(0, strength, deltaTime);
	}
	template <typename T = float> static T SpringLerp_1(float from, float to, float strength, float deltaTime) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x43BDDF0))(0, from, to, strength, deltaTime);
	}
	template <typename T = Il2CppVector2> static T SpringLerp_2(Il2CppVector2 from, Il2CppVector2 to, float strength, float deltaTime) {
		return ((T (*)(void *, Il2CppVector2, Il2CppVector2, float, float))(Il2CppBase() + 0x43BDF9C))(0, from, to, strength, deltaTime);
	}
	template <typename T = Il2CppVector3> static T SpringLerp_3(Il2CppVector3 from, Il2CppVector3 to, float strength, float deltaTime) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float, float))(Il2CppBase() + 0x43BE0A4))(0, from, to, strength, deltaTime);
	}
	template <typename T = Il2CppQuaternion> static T SpringLerp_4(Il2CppQuaternion from, Il2CppQuaternion to, float strength, float deltaTime) {
		return ((T (*)(void *, Il2CppQuaternion, Il2CppQuaternion, float, float))(Il2CppBase() + 0x43BE1C4))(0, from, to, strength, deltaTime);
	}
	template <typename T = float> static T RotateTowards(float from, float to, float maxAngle) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x43BE304))(0, from, to, maxAngle);
	}
	template <typename T = float> static T DistancePointToLineSegment(Il2CppVector2 point, Il2CppVector2 a, Il2CppVector2 b) {
		return ((T (*)(void *, Il2CppVector2, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x43BE47C))(0, point, a, b);
	}
	template <typename T = float> static T DistanceToRectangle(Il2CppArray<uintptr_t>* screenPoints, Il2CppVector2 mousePos) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppVector2))(Il2CppBase() + 0x43BE704))(0, screenPoints, mousePos);
	}
	template <typename T = float> static T DistanceToRectangle_1(Il2CppArray<uintptr_t>* worldPoints, Il2CppVector2 mousePos, uintptr_t cam) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppVector2, uintptr_t))(Il2CppBase() + 0x43BEA38))(0, worldPoints, mousePos, cam);
	}
	template <typename T = Il2CppVector2> static T GetPivotOffset(uintptr_t pv) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43BEBF0))(0, pv);
	}
	template <typename T = uintptr_t> static T GetPivot(Il2CppVector2 offset) {
		return ((T (*)(void *, Il2CppVector2))(Il2CppBase() + 0x43BED08))(0, offset);
	}
	template <typename T = void> static T MoveWidget(uintptr_t w, float x, float y) {
		return ((T (*)(void *, uintptr_t, float, float))(Il2CppBase() + 0x43BEE40))(0, w, x, y);
	}
	template <typename T = void> static T MoveRect(uintptr_t rect, float x, float y) {
		return ((T (*)(void *, uintptr_t, float, float))(Il2CppBase() + 0x43BEF0C))(0, rect, x, y);
	}
	template <typename T = void> static T ResizeWidget(uintptr_t w, uintptr_t pivot, float x, float y, int32_t minWidth, int32_t minHeight) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float, float, int32_t, int32_t))(Il2CppBase() + 0x43BF2E4))(0, w, pivot, x, y, minWidth, minHeight);
	}
	template <typename T = void> static T ResizeWidget_1(uintptr_t w, uintptr_t pivot, float x, float y, int32_t minWidth, int32_t minHeight, int32_t maxWidth, int32_t maxHeight) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float, float, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x43BF3E8))(0, w, pivot, x, y, minWidth, minHeight, maxWidth, maxHeight);
	}
	template <typename T = void> static T AdjustWidget(uintptr_t w, float left, float bottom, float right, float top) {
		return ((T (*)(void *, uintptr_t, float, float, float, float))(Il2CppBase() + 0x43C069C))(0, w, left, bottom, right, top);
	}
	template <typename T = void> static T AdjustWidget_1(uintptr_t w, float left, float bottom, float right, float top, int32_t minWidth, int32_t minHeight) {
		return ((T (*)(void *, uintptr_t, float, float, float, float, int32_t, int32_t))(Il2CppBase() + 0x43BF830))(0, w, left, bottom, right, top, minWidth, minHeight);
	}
	template <typename T = void> static T AdjustWidget_2(uintptr_t w, float left, float bottom, float right, float top, int32_t minWidth, int32_t minHeight, int32_t maxWidth, int32_t maxHeight) {
		return ((T (*)(void *, uintptr_t, float, float, float, float, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x43BF93C))(0, w, left, bottom, right, top, minWidth, minHeight, maxWidth, maxHeight);
	}
	template <typename T = int32_t> static T AdjustByDPI(float height) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x43C079C))(0, height);
	}
	template <typename T = Il2CppVector2> static T ScreenToPixels(Il2CppVector2 pos, uintptr_t relativeTo) {
		return ((T (*)(void *, Il2CppVector2, uintptr_t))(Il2CppBase() + 0x43C08E8))(0, pos, relativeTo);
	}
	template <typename T = Il2CppVector2> static T ScreenToParentPixels(Il2CppVector2 pos, uintptr_t relativeTo) {
		return ((T (*)(void *, Il2CppVector2, uintptr_t))(Il2CppBase() + 0x43C0BC8))(0, pos, relativeTo);
	}
	template <typename T = Il2CppVector3> static T WorldToLocalPoint(Il2CppVector3 worldPos, uintptr_t worldCam, uintptr_t uiCam, uintptr_t relativeTo) {
		return ((T (*)(void *, Il2CppVector3, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x43C0F8C))(0, worldPos, worldCam, uiCam, relativeTo);
	}
	template <typename T = void> static T OverlayPosition(uintptr_t trans, Il2CppVector3 worldPos, uintptr_t worldCam, uintptr_t myCam) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, uintptr_t, uintptr_t))(Il2CppBase() + 0x43C119C))(0, trans, worldPos, worldCam, myCam);
	}
	template <typename T = void> static T OverlayPosition_1(uintptr_t trans, Il2CppVector3 worldPos, uintptr_t worldCam) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x43C1384))(0, trans, worldPos, worldCam);
	}
	template <typename T = void> static T OverlayPosition_2(uintptr_t trans, uintptr_t target) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x43C153C))(0, trans, target);
	}

};

}
