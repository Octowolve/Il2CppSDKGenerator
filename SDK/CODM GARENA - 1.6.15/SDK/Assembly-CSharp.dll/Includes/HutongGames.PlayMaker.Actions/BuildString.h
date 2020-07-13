#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class BuildString
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "BuildString"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& stringParts() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& separator() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& addToEnd() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& result() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(BuildString*))(Il2CppBase() + 0x4F35F98))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(BuildString*))(Il2CppBase() + 0x4F36050))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(BuildString*))(Il2CppBase() + 0x4F36328))(this);
	}
	template <typename T = void> T DoBuildString() {
		return ((T (*)(BuildString*))(Il2CppBase() + 0x4F3607C))(this);
	}

};

}
