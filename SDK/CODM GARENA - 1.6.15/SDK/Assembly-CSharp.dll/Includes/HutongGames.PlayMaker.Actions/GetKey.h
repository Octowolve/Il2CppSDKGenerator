#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetKey
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetKey"));
	}

	template <typename T = uintptr_t> T& key() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetKey*))(Il2CppBase() + 0x508D9E8))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetKey*))(Il2CppBase() + 0x508D9FC))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetKey*))(Il2CppBase() + 0x508DAFC))(this);
	}
	template <typename T = void> T DoGetKey() {
		return ((T (*)(GetKey*))(Il2CppBase() + 0x508DA28))(this);
	}

};

}
