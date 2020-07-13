#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetSubstring
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetSubstring"));
	}

	template <typename T = uintptr_t> T& stringVariable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& startIndex() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& length() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetSubstring*))(Il2CppBase() + 0x4EFF5AC))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetSubstring*))(Il2CppBase() + 0x4EFF5F4))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetSubstring*))(Il2CppBase() + 0x4EFF6B8))(this);
	}
	template <typename T = void> T DoGetSubstring() {
		return ((T (*)(GetSubstring*))(Il2CppBase() + 0x4EFF620))(this);
	}

};

}
