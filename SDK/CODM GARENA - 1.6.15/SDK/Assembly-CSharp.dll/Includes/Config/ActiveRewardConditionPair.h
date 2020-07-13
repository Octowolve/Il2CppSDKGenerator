#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ActiveRewardConditionPair
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ActiveRewardConditionPair"));
	}

	template <typename T = int32_t> T& type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& value() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
