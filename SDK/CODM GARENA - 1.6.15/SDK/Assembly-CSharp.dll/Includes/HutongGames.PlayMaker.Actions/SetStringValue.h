#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetStringValue
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetStringValue"));
	}

	template <typename T = uintptr_t> T& stringVariable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& stringValue() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetStringValue*))(Il2CppBase() + 0x502C1B0))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetStringValue*))(Il2CppBase() + 0x502C1C4))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetStringValue*))(Il2CppBase() + 0x502C22C))(this);
	}
	template <typename T = void> T DoSetStringValue() {
		return ((T (*)(SetStringValue*))(Il2CppBase() + 0x502C1F0))(this);
	}

};

}
