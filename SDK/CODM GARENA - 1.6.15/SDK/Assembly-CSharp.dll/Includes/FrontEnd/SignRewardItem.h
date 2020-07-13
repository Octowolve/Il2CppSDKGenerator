#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class SignRewardItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "SignRewardItem"));
	}

	template <typename T = uint32_t> T& itemId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& duration() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}


};

}
