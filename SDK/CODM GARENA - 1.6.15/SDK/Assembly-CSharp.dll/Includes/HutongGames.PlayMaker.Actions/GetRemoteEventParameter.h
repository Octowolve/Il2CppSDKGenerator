#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetRemoteEventParameter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetRemoteEventParameter"));
	}

	template <typename T = Il2CppString*> T& parameterName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& storeValue() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetRemoteEventParameter*))(Il2CppBase() + 0x509159C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetRemoteEventParameter*))(Il2CppBase() + 0x5091684))(this);
	}

};

}
