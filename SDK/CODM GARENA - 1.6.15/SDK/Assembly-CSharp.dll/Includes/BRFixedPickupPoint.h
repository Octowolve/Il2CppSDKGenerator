#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BRFixedPickupPoint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BRFixedPickupPoint"));
	}

	template <typename T = int32_t> T& m_ItemID() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& m_ItemNum() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m_RecoverTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
