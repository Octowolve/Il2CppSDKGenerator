#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class MatineeCamera
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "MatineeCamera"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MatineeProcessing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(MatineeCamera*))(Il2CppBase() + 0x19C3C88))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(MatineeCamera*))(Il2CppBase() + 0x19C3E34))(this);
	}
	template <typename T = void> T MatineeProcessing(bool active) {
		return ((T (*)(MatineeCamera*, bool))(Il2CppBase() + 0x19C3D94))(this, active);
	}

};

}
