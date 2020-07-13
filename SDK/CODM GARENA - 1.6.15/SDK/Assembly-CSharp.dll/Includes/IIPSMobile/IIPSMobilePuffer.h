#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace IIPSMobile {

class IIPSMobilePuffer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "IIPSMobile", "IIPSMobilePuffer"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateIIPSMobilePufferMgr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyIIPSMobilePufferMgr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> static T CreateIIPSMobilePufferMgr() {
		return ((T (*)(void *))(Il2CppBase() + 0x498A058))(0);
	}
	template <typename T = void> static T DestroyIIPSMobilePufferMgr(uintptr_t mgr) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x498A298))(0, mgr);
	}

};

}
