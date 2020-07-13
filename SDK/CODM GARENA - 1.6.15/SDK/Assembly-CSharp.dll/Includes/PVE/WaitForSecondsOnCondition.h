#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class WaitForSecondsOnCondition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "WaitForSecondsOnCondition"));
	}

	template <typename T = void*> T& m_Predicate() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& endTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T get_keepWaiting() {
		return ((T (*)(WaitForSecondsOnCondition*))(Il2CppBase() + 0x40575B8))(this);
	}

};

}
