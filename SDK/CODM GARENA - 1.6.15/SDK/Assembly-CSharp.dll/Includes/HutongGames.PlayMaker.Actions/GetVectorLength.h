#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetVectorLength
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetVectorLength"));
	}

	template <typename T = uintptr_t> T& vector3() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& storeLength() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetVectorLength*))(Il2CppBase() + 0x4F00C78))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetVectorLength*))(Il2CppBase() + 0x4F00C84))(this);
	}
	template <typename T = void> T DoVectorLength() {
		return ((T (*)(GetVectorLength*))(Il2CppBase() + 0x4F00CA4))(this);
	}

};

}
