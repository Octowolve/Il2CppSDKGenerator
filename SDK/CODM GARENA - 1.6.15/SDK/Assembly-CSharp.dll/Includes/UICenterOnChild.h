#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UICenterOnChild
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UICenterOnChild"));
	}

	template <typename T = float> T& springStrength() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& nextPageThreshold() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& RecenterAwake() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& onFinished() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& onCenter() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& mScrollView() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& mCenteredObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnValidate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Recenter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CenterOn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CenterOn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T get_centeredObject() {
		return ((T (*)(UICenterOnChild*))(Il2CppBase() + 0x39C4A54))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UICenterOnChild*))(Il2CppBase() + 0x39C4A5C))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UICenterOnChild*))(Il2CppBase() + 0x39C60EC))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UICenterOnChild*))(Il2CppBase() + 0x39C6210))(this);
	}
	template <typename T = void> T OnDragFinished() {
		return ((T (*)(UICenterOnChild*))(Il2CppBase() + 0x39C6320))(this);
	}
	template <typename T = void> T OnValidate() {
		return ((T (*)(UICenterOnChild*))(Il2CppBase() + 0x39C63D8))(this);
	}
	template <typename T = void> T Recenter() {
		return ((T (*)(UICenterOnChild*))(Il2CppBase() + 0x39C4B00))(this);
	}
	template <typename T = void> T CenterOn(uintptr_t target, Il2CppVector3 panelCenter) {
		return ((T (*)(UICenterOnChild*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x39C6A84))(this, target, panelCenter);
	}
	template <typename T = void> T CenterOn_1(uintptr_t target) {
		return ((T (*)(UICenterOnChild*, uintptr_t))(Il2CppBase() + 0x39C6ED0))(this, target);
	}

};

}
