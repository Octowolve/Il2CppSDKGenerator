#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetTagCount
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetTagCount"));
	}

	template <typename T = uintptr_t> T& tag() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetTagCount*))(Il2CppBase() + 0x4EFFB04))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetTagCount*))(Il2CppBase() + 0x4EFFB98))(this);
	}

};

}
