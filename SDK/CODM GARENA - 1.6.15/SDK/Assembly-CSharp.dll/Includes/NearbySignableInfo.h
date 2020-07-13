#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NearbySignableInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NearbySignableInfo"));
	}

	template <typename T = uintptr_t> T& Signable() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& SqrtDist() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& Position() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& SignableID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& SignableIndicatorType() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
