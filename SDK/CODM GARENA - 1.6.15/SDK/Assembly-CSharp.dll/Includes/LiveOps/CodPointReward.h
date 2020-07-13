#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class CodPointReward
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "CodPointReward"));
	}

	template <typename T = int32_t> T& LastPoint() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& Point() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint64_t> T& ActivityId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& ProgressNum() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint64_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& status() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& rewards() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
