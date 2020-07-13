#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class RollNoticeDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "RollNoticeDataStore"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeDataStore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T InitializeDataStore() {
		return ((T (*)(RollNoticeDataStore*))(Il2CppBase() + 0x38557B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitializeDataStore() {
		return ((T (*)(RollNoticeDataStore*))(Il2CppBase() + 0x3855860))(this);
	}

};

}
