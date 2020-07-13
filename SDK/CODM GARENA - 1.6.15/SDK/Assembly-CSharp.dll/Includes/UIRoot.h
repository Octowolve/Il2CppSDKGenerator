#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIRoot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIRoot"));
	}

	template <typename T = Il2CppList<uintptr_t>*> static T& list() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& projection() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& scalingStyle() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& manualWidth() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& manualHeight() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& minimumHeight() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& maximumHeight() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& fitWidth() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& fitHeight() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = bool> T& adjustByDPI() {
		return *(T*)((uintptr_t)this + 0x26);
	}
	template <typename T = bool> T& shrinkPortraitUI() {
		return *(T*)((uintptr_t)this + 0x27);
	}
	template <typename T = uintptr_t> T& mTrans() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& mCamera() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& mPerspHeight() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPixelSizeAdjustment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetPixelSizeAdjustment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CorrentPerpectiveCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Broadcast() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Broadcast() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = uintptr_t> T get_constraint() {
		return ((T (*)(UIRoot*))(Il2CppBase() + 0x2F98A04))(this);
	}
	template <typename T = uintptr_t> T get_activeScaling() {
		return ((T (*)(UIRoot*))(Il2CppBase() + 0x2F98A34))(this);
	}
	template <typename T = int32_t> T get_activeHeight() {
		return ((T (*)(UIRoot*))(Il2CppBase() + 0x2F98A44))(this);
	}
	template <typename T = float> T get_pixelSizeAdjustment() {
		return ((T (*)(UIRoot*))(Il2CppBase() + 0x2F5AF98))(this);
	}
	template <typename T = float> static T GetPixelSizeAdjustment(uintptr_t go) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F98D20))(0, go);
	}
	template <typename T = float> T GetPixelSizeAdjustment_1(int32_t height) {
		return ((T (*)(UIRoot*, int32_t))(Il2CppBase() + 0x2F7A88C))(this, height);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(UIRoot*))(Il2CppBase() + 0x2F98EBC))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIRoot*))(Il2CppBase() + 0x2F98F98))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIRoot*))(Il2CppBase() + 0x2F990D8))(this);
	}
	template <typename T = uintptr_t> T get_RootCamera() {
		return ((T (*)(UIRoot*))(Il2CppBase() + 0x2F99218))(this);
	}
	template <typename T = void> T CorrentPerpectiveCamera(float height, bool force) {
		return ((T (*)(UIRoot*, float, bool))(Il2CppBase() + 0x2F99300))(this, height, force);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UIRoot*))(Il2CppBase() + 0x2F995BC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIRoot*))(Il2CppBase() + 0x2F99B54))(this);
	}
	template <typename T = void> T UpdateScale(bool updateAnchors) {
		return ((T (*)(UIRoot*, bool))(Il2CppBase() + 0x2F9984C))(this, updateAnchors);
	}
	template <typename T = void> static T Broadcast(Il2CppString* funcName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2F99C70))(0, funcName);
	}
	template <typename T = void> static T Broadcast_1(Il2CppString* funcName, uintptr_t param) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x2F99EBC))(0, funcName, param);
	}

};

}
