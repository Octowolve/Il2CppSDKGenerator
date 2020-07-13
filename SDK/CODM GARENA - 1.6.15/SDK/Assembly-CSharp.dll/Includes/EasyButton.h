#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EasyButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EasyButton"));
	}

	template <typename T = uintptr_t> static T& On_ButtonDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& On_ButtonPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& On_ButtonUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = bool> T& enable() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& isActivated() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = bool> T& showDebugArea() {
		return *(T*)((uintptr_t)this + 0xE);
	}
	template <typename T = bool> T& isUseGuiLayout() {
		return *(T*)((uintptr_t)this + 0xF);
	}
	template <typename T = uintptr_t> T& buttonState() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& anchor() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector2> T& offset() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector2> T& scale() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& isSwipeIn() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& isSwipeOut() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = uintptr_t> T& interaction() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& useBroadcast() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& receiverGameObject() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& messageMode() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& useSpecificalMethod() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& downMethodName() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& pressMethodName() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& upMethodName() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& guiDepth() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& normalTexture() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& buttonNormalColor() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& activeTexture() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& buttonActiveColor() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& showInspectorProperties() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& showInspectorPosition() {
		return *(T*)((uintptr_t)this + 0x79);
	}
	template <typename T = bool> T& showInspectorEvent() {
		return *(T*)((uintptr_t)this + 0x7A);
	}
	template <typename T = bool> T& showInspectorTexture() {
		return *(T*)((uintptr_t)this + 0x7B);
	}
	template <typename T = Il2CppRect> T& buttonRect() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& buttonFingerIndex() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& currentTexture() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& currentColor() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& frame() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_On_ButtonDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_On_ButtonDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_On_ButtonPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_On_ButtonPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_On_ButtonUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_On_ButtonUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrawGizmos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ComputeButtonAnchor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RaiseEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On_TouchStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On_TouchDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On_TouchUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}

	template <typename T = void> static T add_On_ButtonDown(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BA102C))(0, value);
	}
	template <typename T = void> static T remove_On_ButtonDown(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BA122C))(0, value);
	}
	template <typename T = void> static T add_On_ButtonPress(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BA142C))(0, value);
	}
	template <typename T = void> static T remove_On_ButtonPress(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BA1624))(0, value);
	}
	template <typename T = void> static T add_On_ButtonUp(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BA181C))(0, value);
	}
	template <typename T = void> static T remove_On_ButtonUp(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BA1A14))(0, value);
	}
	template <typename T = uintptr_t> T get_Anchor() {
		return ((T (*)(EasyButton*))(Il2CppBase() + 0x4BA1C0C))(this);
	}
	template <typename T = void> T set_Anchor(uintptr_t value) {
		return ((T (*)(EasyButton*, uintptr_t))(Il2CppBase() + 0x4BA1C14))(this, value);
	}
	template <typename T = Il2CppVector2> T get_Offset() {
		return ((T (*)(EasyButton*))(Il2CppBase() + 0x4BA21F8))(this);
	}
	template <typename T = void> T set_Offset(Il2CppVector2 value) {
		return ((T (*)(EasyButton*, Il2CppVector2))(Il2CppBase() + 0x4BA220C))(this, value);
	}
	template <typename T = Il2CppVector2> T get_Scale() {
		return ((T (*)(EasyButton*))(Il2CppBase() + 0x4BA221C))(this);
	}
	template <typename T = void> T set_Scale(Il2CppVector2 value) {
		return ((T (*)(EasyButton*, Il2CppVector2))(Il2CppBase() + 0x4BA2230))(this, value);
	}
	template <typename T = uintptr_t> T get_NormalTexture() {
		return ((T (*)(EasyButton*))(Il2CppBase() + 0x4BA2240))(this);
	}
	template <typename T = void> T set_NormalTexture(uintptr_t value) {
		return ((T (*)(EasyButton*, uintptr_t))(Il2CppBase() + 0x4BA2248))(this, value);
	}
	template <typename T = uintptr_t> T get_ActiveTexture() {
		return ((T (*)(EasyButton*))(Il2CppBase() + 0x4BA2318))(this);
	}
	template <typename T = void> T set_ActiveTexture(uintptr_t value) {
		return ((T (*)(EasyButton*, uintptr_t))(Il2CppBase() + 0x4BA2320))(this, value);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(EasyButton*))(Il2CppBase() + 0x4BA2328))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(EasyButton*))(Il2CppBase() + 0x4BA2AA8))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(EasyButton*))(Il2CppBase() + 0x4BA33A0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(EasyButton*))(Il2CppBase() + 0x4BA3530))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(EasyButton*))(Il2CppBase() + 0x4BA363C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(EasyButton*))(Il2CppBase() + 0x4BA3D68))(this);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(EasyButton*))(Il2CppBase() + 0x4BA3E14))(this);
	}
	template <typename T = void> T ComputeButtonAnchor(uintptr_t anchor) {
		return ((T (*)(EasyButton*, uintptr_t))(Il2CppBase() + 0x4BA1C1C))(this, anchor);
	}
	template <typename T = void> T RaiseEvent(uintptr_t msg) {
		return ((T (*)(EasyButton*, uintptr_t))(Il2CppBase() + 0x4BA3EAC))(this, msg);
	}
	template <typename T = void> T On_TouchStart(uintptr_t gesture) {
		return ((T (*)(EasyButton*, uintptr_t))(Il2CppBase() + 0x4BA4640))(this, gesture);
	}
	template <typename T = void> T On_TouchDown(uintptr_t gesture) {
		return ((T (*)(EasyButton*, uintptr_t))(Il2CppBase() + 0x4BA47D8))(this, gesture);
	}
	template <typename T = void> T On_TouchUp(uintptr_t gesture) {
		return ((T (*)(EasyButton*, uintptr_t))(Il2CppBase() + 0x4BA4A28))(this, gesture);
	}

};

}
