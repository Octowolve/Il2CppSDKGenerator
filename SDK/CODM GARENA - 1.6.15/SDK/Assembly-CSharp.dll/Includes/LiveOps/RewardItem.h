#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class RewardItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "RewardItem"));
	}

	template <typename T = uint64_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& Num() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Durable() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Point() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
