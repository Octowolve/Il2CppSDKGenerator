#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ReuseItemActionData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ReuseItemActionData"));
	}

	template <typename T = uintptr_t> static T& Empty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& Index() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& Action() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Data() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& HasRecycle() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T get_HasRecycle() {
		return ((T (*)(ReuseItemActionData*))(Il2CppBase() + 0x3AC3B18))(this);
	}
	template <typename T = void> T set_HasRecycle(bool value) {
		return ((T (*)(ReuseItemActionData*, bool))(Il2CppBase() + 0x3AC3B20))(this, value);
	}
	template <typename T = void> T OnRecycle() {
		return ((T (*)(ReuseItemActionData*))(Il2CppBase() + 0x3AC3B28))(this);
	}

};

}
