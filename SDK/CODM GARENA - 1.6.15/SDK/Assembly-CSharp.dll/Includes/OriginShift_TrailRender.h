#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OriginShiftTrailRender
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OriginShift_TrailRender"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Trails() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T ApplyShift(Il2CppVector3 shift) {
		return ((T (*)(OriginShiftTrailRender*, Il2CppVector3))(Il2CppBase() + 0x3EF5E10))(this, shift);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(OriginShiftTrailRender*))(Il2CppBase() + 0x3EF5FA8))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(OriginShiftTrailRender*))(Il2CppBase() + 0x3EF6178))(this);
	}

};

}
