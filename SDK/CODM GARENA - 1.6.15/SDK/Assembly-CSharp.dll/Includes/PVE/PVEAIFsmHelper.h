#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class PVEAIFsmHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "PVEAIFsmHelper"));
	}

	template <typename T = uintptr_t> static T& sInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& mMBehaviour() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& mGameObj() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Release() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnerController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T get_MBehaviour() {
		return ((T (*)(PVEAIFsmHelper*))(Il2CppBase() + 0x436E448))(this);
	}
	template <typename T = uintptr_t> static T Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x436E348))(0);
	}
	template <typename T = void> static T InitInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x4378EAC))(0);
	}
	template <typename T = void> static T Release() {
		return ((T (*)(void *))(Il2CppBase() + 0x4378FCC))(0);
	}
	template <typename T = uintptr_t> static T GetOwnerController(uintptr_t fsm) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x436D608))(0, fsm);
	}

};

}
