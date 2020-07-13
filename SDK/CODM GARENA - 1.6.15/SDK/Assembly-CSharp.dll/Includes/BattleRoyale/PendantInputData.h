#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class PendantInputData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "PendantInputData"));
	}

	template <typename T = Il2CppVector2> T& Input() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& UseTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
