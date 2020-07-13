#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WorkShop {

class WorkShopMainView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WorkShop", "WorkShopMainView"));
	}

	template <typename T = uintptr_t> T& flowGrid() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
