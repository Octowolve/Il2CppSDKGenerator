#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameCommon {

class UISideAdaptor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameCommon", "UISideAdaptor"));
	}

	template <typename T = bool> T& Horizontally() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& HorizontalSide() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& Vertically() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& VerticalSide() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& mWidth() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& mHeight() {
		return *(T*)((uintptr_t)this + 0x20);
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
	template <typename T = uintptr_t> static T& __Hotfix0_Reposition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UISideAdaptor*))(Il2CppBase() + 0x49FDA90))(this);
	}
	template <typename T = void> T Excute() {
		return ((T (*)(UISideAdaptor*))(Il2CppBase() + 0x49FE174))(this);
	}
	template <typename T = void> T Reposition(bool playing) {
		return ((T (*)(UISideAdaptor*, bool))(Il2CppBase() + 0x49FDB38))(this, playing);
	}

};

}
