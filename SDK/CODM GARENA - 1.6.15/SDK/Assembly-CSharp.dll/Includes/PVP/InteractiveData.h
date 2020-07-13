#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class InteractiveData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "InteractiveData"));
	}

	template <typename T = uintptr_t> T& iType() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& iValue() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& iSortCacheValue() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetValue(int32_t v) {
		return ((T (*)(InteractiveData*, int32_t))(Il2CppBase() + 0x34821D4))(this, v);
	}

};

}
