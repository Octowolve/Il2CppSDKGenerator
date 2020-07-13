#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EasyJoystick
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EasyJoystick"));
	}

	template <typename T = uintptr_t> static T& On_JoystickMoveStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& On_JoystickMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& On_JoystickMoveEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& On_JoystickTouchStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& On_JoystickTap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& On_JoystickDoubleTap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& On_JoystickTouchUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppVector2> T& joystickAxis() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector2> T& joystickTouch() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector2> T& joystickValue() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& enable() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& isActivated() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = bool> T& showDebugRadius() {
		return *(T*)((uintptr_t)this + 0x26);
	}
	template <typename T = bool> T& useFixedUpdate() {
		return *(T*)((uintptr_t)this + 0x27);
	}
	template <typename T = bool> T& isUseGuiLayout() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& dynamicJoystick() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = uintptr_t> T& area() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& joyAnchor() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector2> T& joystickPositionOffset() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& zoneRadius() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& touchSize() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& deadZone() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& restrictArea() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& resetFingerExit() {
		return *(T*)((uintptr_t)this + 0x49);
	}
	template <typename T = uintptr_t> T& interaction() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& useBroadcast() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& messageMode() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& receiverGameObject() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppVector2> T& speed() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& enableXaxis() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& xAxisTransform() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& xAxisCharacterController() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& xAxisGravity() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& xTI() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& xAI() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& inverseXAxis() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = bool> T& enableXClamp() {
		return *(T*)((uintptr_t)this + 0x7D);
	}
	template <typename T = float> T& clampXMax() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& clampXMin() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> T& enableXAutoStab() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& thresholdX() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> T& stabSpeedX() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& enableYaxis() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& yAxisTransform() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& yAxisCharacterController() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = float> T& yAxisGravity() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& yTI() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& yAI() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& inverseYAxis() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = bool> T& enableYClamp() {
		return *(T*)((uintptr_t)this + 0xAD);
	}
	template <typename T = float> T& clampYMax() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& clampYMin() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = bool> T& enableYAutoStab() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> T& thresholdY() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = float> T& stabSpeedY() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = bool> T& enableSmoothing() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppVector2> T& smoothing() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = bool> T& enableInertia() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppVector2> T& inertia() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = int32_t> T& guiDepth() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = bool> T& showZone() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = bool> T& showTouch() {
		return *(T*)((uintptr_t)this + 0xE1);
	}
	template <typename T = bool> T& showDeadZone() {
		return *(T*)((uintptr_t)this + 0xE2);
	}
	template <typename T = uintptr_t> T& areaTexture() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& areaColor() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& touchTexture() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& touchColor() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& deadTexture() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = bool> T& showProperties() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = bool> T& showInteraction() {
		return *(T*)((uintptr_t)this + 0x111);
	}
	template <typename T = bool> T& showAppearance() {
		return *(T*)((uintptr_t)this + 0x112);
	}
	template <typename T = bool> T& showPosition() {
		return *(T*)((uintptr_t)this + 0x113);
	}
	template <typename T = Il2CppVector2> T& joystickCenter() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = Il2CppRect> T& areaRect() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = Il2CppRect> T& deadRect() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = Il2CppVector2> T& anchorPosition() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = bool> T& virtualJoystick() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = int32_t> T& joystickIndex() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = float> T& touchSizeCoef() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = bool> T& sendEnd() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = float> T& startXLocalAngle() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = float> T& startYLocalAngle() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_On_JoystickMoveStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_On_JoystickMoveStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_On_JoystickMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_On_JoystickMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_On_JoystickMoveEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_On_JoystickMoveEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_On_JoystickTouchStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_On_JoystickTouchStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_On_JoystickTap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_On_JoystickTap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_On_JoystickDoubleTap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_On_JoystickDoubleTap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_On_JoystickTouchUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_On_JoystickTouchUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FixedUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateJoystick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrawGizmos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateDirect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGravity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInfluencedAxis() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoActionDirect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoAngleLimitation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoAutoStabilisation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStartAutoStabAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ComputeDeadZone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ComputeJoystickAnchor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On_TouchStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On_SimpleTap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On_DoubleTap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On_TouchDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On_TouchUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}

	template <typename T = void> static T add_On_JoystickMoveStart(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BA4F58))(0, value);
	}
	template <typename T = void> static T remove_On_JoystickMoveStart(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BA5158))(0, value);
	}
	template <typename T = void> static T add_On_JoystickMove(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BA5358))(0, value);
	}
	template <typename T = void> static T remove_On_JoystickMove(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BA5550))(0, value);
	}
	template <typename T = void> static T add_On_JoystickMoveEnd(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BA5748))(0, value);
	}
	template <typename T = void> static T remove_On_JoystickMoveEnd(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BA5940))(0, value);
	}
	template <typename T = void> static T add_On_JoystickTouchStart(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BA5B38))(0, value);
	}
	template <typename T = void> static T remove_On_JoystickTouchStart(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BA5D30))(0, value);
	}
	template <typename T = void> static T add_On_JoystickTap(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BA5F28))(0, value);
	}
	template <typename T = void> static T remove_On_JoystickTap(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BA6120))(0, value);
	}
	template <typename T = void> static T add_On_JoystickDoubleTap(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BA6318))(0, value);
	}
	template <typename T = void> static T remove_On_JoystickDoubleTap(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BA6510))(0, value);
	}
	template <typename T = void> static T add_On_JoystickTouchUp(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BA6708))(0, value);
	}
	template <typename T = void> static T remove_On_JoystickTouchUp(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BA6900))(0, value);
	}
	template <typename T = Il2CppVector2> T get_JoystickAxis() {
		return ((T (*)(EasyJoystick*))(Il2CppBase() + 0x4BA6AF8))(this);
	}
	template <typename T = Il2CppVector2> T get_JoystickTouch() {
		return ((T (*)(EasyJoystick*))(Il2CppBase() + 0x4BA6B0C))(this);
	}
	template <typename T = void> T set_JoystickTouch(Il2CppVector2 value) {
		return ((T (*)(EasyJoystick*, Il2CppVector2))(Il2CppBase() + 0x4BA6B48))(this, value);
	}
	template <typename T = Il2CppVector2> T get_JoystickValue() {
		return ((T (*)(EasyJoystick*))(Il2CppBase() + 0x4BA6C78))(this);
	}
	template <typename T = bool> T get_DynamicJoystick() {
		return ((T (*)(EasyJoystick*))(Il2CppBase() + 0x4BA6C8C))(this);
	}
	template <typename T = void> T set_DynamicJoystick(bool value) {
		return ((T (*)(EasyJoystick*, bool))(Il2CppBase() + 0x4BA6C94))(this, value);
	}
	template <typename T = uintptr_t> T get_JoyAnchor() {
		return ((T (*)(EasyJoystick*))(Il2CppBase() + 0x4BA6CF0))(this);
	}
	template <typename T = void> T set_JoyAnchor(uintptr_t value) {
		return ((T (*)(EasyJoystick*, uintptr_t))(Il2CppBase() + 0x4BA6CF8))(this, value);
	}
	template <typename T = Il2CppVector2> T get_JoystickPositionOffset() {
		return ((T (*)(EasyJoystick*))(Il2CppBase() + 0x4BA73B4))(this);
	}
	template <typename T = void> T set_JoystickPositionOffset(Il2CppVector2 value) {
		return ((T (*)(EasyJoystick*, Il2CppVector2))(Il2CppBase() + 0x4BA73C8))(this, value);
	}
	template <typename T = float> T get_ZoneRadius() {
		return ((T (*)(EasyJoystick*))(Il2CppBase() + 0x4BA73E4))(this);
	}
	template <typename T = void> T set_ZoneRadius(float value) {
		return ((T (*)(EasyJoystick*, float))(Il2CppBase() + 0x4BA73EC))(this, value);
	}
	template <typename T = float> T get_TouchSize() {
		return ((T (*)(EasyJoystick*))(Il2CppBase() + 0x4BA73F8))(this);
	}
	template <typename T = void> T set_TouchSize(float value) {
		return ((T (*)(EasyJoystick*, float))(Il2CppBase() + 0x4BA7400))(this, value);
	}
	template <typename T = bool> T get_RestrictArea() {
		return ((T (*)(EasyJoystick*))(Il2CppBase() + 0x4BA7434))(this);
	}
	template <typename T = void> T set_RestrictArea(bool value) {
		return ((T (*)(EasyJoystick*, bool))(Il2CppBase() + 0x4BA743C))(this, value);
	}
	template <typename T = uintptr_t> T get_Interaction() {
		return ((T (*)(EasyJoystick*))(Il2CppBase() + 0x4BA745C))(this);
	}
	template <typename T = void> T set_Interaction(uintptr_t value) {
		return ((T (*)(EasyJoystick*, uintptr_t))(Il2CppBase() + 0x4BA7464))(this, value);
	}
	template <typename T = uintptr_t> T get_XAxisTransform() {
		return ((T (*)(EasyJoystick*))(Il2CppBase() + 0x4BA7478))(this);
	}
	template <typename T = void> T set_XAxisTransform(uintptr_t value) {
		return ((T (*)(EasyJoystick*, uintptr_t))(Il2CppBase() + 0x4BA7480))(this, value);
	}
	template <typename T = uintptr_t> T get_XTI() {
		return ((T (*)(EasyJoystick*))(Il2CppBase() + 0x4BA7584))(this);
	}
	template <typename T = void> T set_XTI(uintptr_t value) {
		return ((T (*)(EasyJoystick*, uintptr_t))(Il2CppBase() + 0x4BA758C))(this, value);
	}
	template <typename T = float> T get_ThresholdX() {
		return ((T (*)(EasyJoystick*))(Il2CppBase() + 0x4BA75A4))(this);
	}
	template <typename T = void> T set_ThresholdX(float value) {
		return ((T (*)(EasyJoystick*, float))(Il2CppBase() + 0x4BA75AC))(this, value);
	}
	template <typename T = float> T get_StabSpeedX() {
		return ((T (*)(EasyJoystick*))(Il2CppBase() + 0x4BA75C4))(this);
	}
	template <typename T = void> T set_StabSpeedX(float value) {
		return ((T (*)(EasyJoystick*, float))(Il2CppBase() + 0x4BA75CC))(this, value);
	}
	template <typename T = uintptr_t> T get_YAxisTransform() {
		return ((T (*)(EasyJoystick*))(Il2CppBase() + 0x4BA75E4))(this);
	}
	template <typename T = void> T set_YAxisTransform(uintptr_t value) {
		return ((T (*)(EasyJoystick*, uintptr_t))(Il2CppBase() + 0x4BA75EC))(this, value);
	}
	template <typename T = uintptr_t> T get_YTI() {
		return ((T (*)(EasyJoystick*))(Il2CppBase() + 0x4BA76F0))(this);
	}
	template <typename T = void> T set_YTI(uintptr_t value) {
		return ((T (*)(EasyJoystick*, uintptr_t))(Il2CppBase() + 0x4BA76F8))(this, value);
	}
	template <typename T = float> T get_ThresholdY() {
		return ((T (*)(EasyJoystick*))(Il2CppBase() + 0x4BA7710))(this);
	}
	template <typename T = void> T set_ThresholdY(float value) {
		return ((T (*)(EasyJoystick*, float))(Il2CppBase() + 0x4BA7718))(this, value);
	}
	template <typename T = float> T get_StabSpeedY() {
		return ((T (*)(EasyJoystick*))(Il2CppBase() + 0x4BA7730))(this);
	}
	template <typename T = void> T set_StabSpeedY(float value) {
		return ((T (*)(EasyJoystick*, float))(Il2CppBase() + 0x4BA7738))(this, value);
	}
	template <typename T = Il2CppVector2> T get_Smoothing() {
		return ((T (*)(EasyJoystick*))(Il2CppBase() + 0x4BA7750))(this);
	}
	template <typename T = void> T set_Smoothing(Il2CppVector2 value) {
		return ((T (*)(EasyJoystick*, Il2CppVector2))(Il2CppBase() + 0x4BA7764))(this, value);
	}
	template <typename T = Il2CppVector2> T get_Inertia() {
		return ((T (*)(EasyJoystick*))(Il2CppBase() + 0x4BA7798))(this);
	}
	template <typename T = void> T set_Inertia(Il2CppVector2 value) {
		return ((T (*)(EasyJoystick*, Il2CppVector2))(Il2CppBase() + 0x4BA77AC))(this, value);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(EasyJoystick*))(Il2CppBase() + 0x4BA77E0))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(EasyJoystick*))(Il2CppBase() + 0x4BA7DCC))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(EasyJoystick*))(Il2CppBase() + 0x4BA83C4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(EasyJoystick*))(Il2CppBase() + 0x4BA85CC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(EasyJoystick*))(Il2CppBase() + 0x4BA8944))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(EasyJoystick*))(Il2CppBase() + 0x4BA8F18))(this);
	}
	template <typename T = void> T UpdateJoystick() {
		return ((T (*)(EasyJoystick*))(Il2CppBase() + 0x4BA8A08))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(EasyJoystick*))(Il2CppBase() + 0x4BAA224))(this);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(EasyJoystick*))(Il2CppBase() + 0x4BAAD38))(this);
	}
	template <typename T = void> T CreateEvent(uintptr_t message) {
		return ((T (*)(EasyJoystick*, uintptr_t))(Il2CppBase() + 0x4BA9774))(this, message);
	}
	template <typename T = void> T UpdateDirect() {
		return ((T (*)(EasyJoystick*))(Il2CppBase() + 0x4BA9FDC))(this);
	}
	template <typename T = void> T UpdateGravity() {
		return ((T (*)(EasyJoystick*))(Il2CppBase() + 0x4BA9D50))(this);
	}
	template <typename T = Il2CppVector3> T GetInfluencedAxis(uintptr_t axisInfluenced) {
		return ((T (*)(EasyJoystick*, uintptr_t))(Il2CppBase() + 0x4BAB1F8))(this, axisInfluenced);
	}
	template <typename T = void> T DoActionDirect(uintptr_t axisTransform, uintptr_t inlfuencedProperty, Il2CppVector3 axis, float sensibility, uintptr_t charact) {
		return ((T (*)(EasyJoystick*, uintptr_t, uintptr_t, Il2CppVector3, float, uintptr_t))(Il2CppBase() + 0x4BAB38C))(this, axisTransform, inlfuencedProperty, axis, sensibility, charact);
	}
	template <typename T = void> T DoAngleLimitation(uintptr_t axisTransform, uintptr_t axisInfluenced, float clampMin, float clampMax, float startAngle) {
		return ((T (*)(EasyJoystick*, uintptr_t, uintptr_t, float, float, float))(Il2CppBase() + 0x4BAB8D4))(this, axisTransform, axisInfluenced, clampMin, clampMax, startAngle);
	}
	template <typename T = void> T DoAutoStabilisation(uintptr_t axisTransform, uintptr_t axisInfluenced, float threshold, float speed, float startAngle) {
		return ((T (*)(EasyJoystick*, uintptr_t, uintptr_t, float, float, float))(Il2CppBase() + 0x4BA8FD4))(this, axisTransform, axisInfluenced, threshold, speed, startAngle);
	}
	template <typename T = float> T GetStartAutoStabAngle(uintptr_t axisTransform, uintptr_t axisInfluenced) {
		return ((T (*)(EasyJoystick*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4BA8708))(this, axisTransform, axisInfluenced);
	}
	template <typename T = float> T ComputeDeadZone() {
		return ((T (*)(EasyJoystick*))(Il2CppBase() + 0x4BA95A0))(this);
	}
	template <typename T = void> T ComputeJoystickAnchor(uintptr_t anchor) {
		return ((T (*)(EasyJoystick*, uintptr_t))(Il2CppBase() + 0x4BA6D00))(this, anchor);
	}
	template <typename T = void> T On_TouchStart(uintptr_t gesture) {
		return ((T (*)(EasyJoystick*, uintptr_t))(Il2CppBase() + 0x4BABC78))(this, gesture);
	}
	template <typename T = void> T On_SimpleTap(uintptr_t gesture) {
		return ((T (*)(EasyJoystick*, uintptr_t))(Il2CppBase() + 0x4BAC0F8))(this, gesture);
	}
	template <typename T = void> T On_DoubleTap(uintptr_t gesture) {
		return ((T (*)(EasyJoystick*, uintptr_t))(Il2CppBase() + 0x4BAC1F0))(this, gesture);
	}
	template <typename T = void> T On_TouchDown(uintptr_t gesture) {
		return ((T (*)(EasyJoystick*, uintptr_t))(Il2CppBase() + 0x4BAC2E8))(this, gesture);
	}
	template <typename T = void> T On_TouchUp(uintptr_t gesture) {
		return ((T (*)(EasyJoystick*, uintptr_t))(Il2CppBase() + 0x4BAC6EC))(this, gesture);
	}

};

}
