#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ArrowGuidePoint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArrowGuidePoint"));
	}

	template <typename T = bool> T& IsDirectional() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& WalkableWidthPercent() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& DistanceTarget() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& TriggerOnce() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateArrowGuide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T OnTriggerEnter(uintptr_t other) {
		return ((T (*)(ArrowGuidePoint*, uintptr_t))(Il2CppBase() + 0x22D12A4))(this, other);
	}
	template <typename T = void> T OnTriggerExit(uintptr_t other) {
		return ((T (*)(ArrowGuidePoint*, uintptr_t))(Il2CppBase() + 0x22D1604))(this, other);
	}
	template <typename T = void> T UpdateArrowGuide(bool isNextPoint) {
		return ((T (*)(ArrowGuidePoint*, bool))(Il2CppBase() + 0x22D1424))(this, isNextPoint);
	}

};

}
