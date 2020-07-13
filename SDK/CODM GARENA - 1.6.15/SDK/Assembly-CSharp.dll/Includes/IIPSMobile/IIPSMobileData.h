#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace IIPSMobile {

class IIPSMobileData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "IIPSMobile", "IIPSMobileData"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateDataMgr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T CreateDataMgr(Il2CppString* config) {
		return ((T (*)(IIPSMobileData*, Il2CppString*))(Il2CppBase() + 0x4988158))(this, config);
	}

};

}
