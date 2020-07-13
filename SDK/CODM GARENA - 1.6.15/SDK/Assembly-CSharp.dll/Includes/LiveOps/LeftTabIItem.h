#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LeftTabIItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LeftTabIItem"));
	}

	template <typename T = int32_t> T& selectIndex() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& tabName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& badgeNum() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& type() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
