#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameCommon {

class UICameraFieldAdaptor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameCommon", "UICameraFieldAdaptor"));
	}

	template <typename T = int32_t> T& mDesignedWidth() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& mDesignedHeight() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& mDesignedFOV() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& mSide() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& mIgnoreOver() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Excute() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Adapt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UICameraFieldAdaptor*))(Il2CppBase() + 0x49F4510))(this);
	}
	template <typename T = void> T Excute() {
		return ((T (*)(UICameraFieldAdaptor*))(Il2CppBase() + 0x49F4954))(this);
	}
	template <typename T = void> T Adapt(bool playing) {
		return ((T (*)(UICameraFieldAdaptor*, bool))(Il2CppBase() + 0x49F45B8))(this, playing);
	}

};

}
