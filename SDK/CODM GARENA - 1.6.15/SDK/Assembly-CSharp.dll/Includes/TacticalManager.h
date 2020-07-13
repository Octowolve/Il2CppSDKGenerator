#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TacticalManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TacticalManager"));
	}

	template <typename T = uintptr_t> T& TacticalInstance() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindTacticalInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRelativePosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T BindTacticalInstance(uintptr_t tacticalInstance) {
		return ((T (*)(TacticalManager*, uintptr_t))(Il2CppBase() + 0x3F42438))(this, tacticalInstance);
	}
	template <typename T = void> T Init() {
		return ((T (*)(TacticalManager*))(Il2CppBase() + 0x3F3EB84))(this);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(TacticalManager*))(Il2CppBase() + 0x3F40378))(this);
	}
	template <typename T = void> T UpdateRelativePosition() {
		return ((T (*)(TacticalManager*))(Il2CppBase() + 0x3F424F4))(this);
	}

};

}
