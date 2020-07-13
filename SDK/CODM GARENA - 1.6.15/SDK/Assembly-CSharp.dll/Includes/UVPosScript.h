#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UVPosScript
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UVPosScript"));
	}

	template <typename T = Il2CppVector3> T& pos() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector2> T& uv() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
