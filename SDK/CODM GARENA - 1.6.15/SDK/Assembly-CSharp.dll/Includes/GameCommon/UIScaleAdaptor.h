#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameCommon {

class UIScaleAdaptor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameCommon", "UIScaleAdaptor"));
	}

	template <typename T = float> T& DefaultWidth() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& DefaultHeight() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& InverseXY() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_AdjustSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Start() {
		return ((T (*)(UIScaleAdaptor*))(Il2CppBase() + 0x49FD69C))(this);
	}
	template <typename T = void> T AdjustSize() {
		return ((T (*)(UIScaleAdaptor*))(Il2CppBase() + 0x49FD740))(this);
	}
	template <typename T = void> T AdjustSize_1(float DefaultWidth, float DefaultHeight) {
		return ((T (*)(UIScaleAdaptor*, float, float))(Il2CppBase() + 0x49FD7EC))(this, DefaultWidth, DefaultHeight);
	}

};

}
