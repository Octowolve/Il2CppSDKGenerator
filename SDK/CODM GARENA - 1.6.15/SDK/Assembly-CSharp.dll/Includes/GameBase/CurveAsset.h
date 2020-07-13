#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class CurveAsset
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "CurveAsset"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Curves() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
